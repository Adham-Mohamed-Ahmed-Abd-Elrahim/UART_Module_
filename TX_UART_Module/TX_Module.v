`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:19 05/04/2021 
// Design Name: 
// Module Name:    TX_Module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module TX_Module(
input clk,   			//input_clk
input TX_EN,			//Enable for TX_Module
input [7:0] Tx_input,//Parallel input Data 
input baud_x16_en ,//Used to sample data [generated 16 times per one bit]
output reg TX_ACTIVE,//Declares that tx module is in transmiting process
output reg  Serial_out,//Output serially data
output reg data_sent);//Can be used for recieving interrupts[Declaring the end of transmission]

//States of the rx_module
localparam IDLE=		2'b00;
localparam START=		2'b01;
localparam SEND=		2'b10;
localparam STOP=		2'b11;

//Container for parallel data 
reg [7:0] Parallel_Data;
//Container for current bit position
reg [2:0] bit_index;
//Clock Counter
reg [3:0] baud_counter;//To Count baud_rate enable pulses [16 pulse per bit ](Essential for checking start bits and end bit)
//Container for current state and next state 
reg [1:0] current_status ;
reg [1:0] next_status;

//Synchrounous reset
always @(posedge clk)
begin
current_status<=next_status;
end


always@(posedge clk)
begin
if(baud_x16_en)
begin
case(current_status) 
//**************IDLE Stat******************
IDLE:begin
//initialization 
 bit_index<=0;
 baud_counter<=0;
 data_sent<=0;
 Serial_out<=1;//Held up
 TX_ACTIVE<=0;//TX isn't active at idle state
 data_sent<=0;
if(TX_EN)
begin
TX_ACTIVE<=1;
Parallel_Data<=Tx_input;
next_status<=START;
end
else 
next_status<=IDLE;
end
//**************************Start_State[Checking vadility for start bit]*****************************
START:begin
Serial_out<=0;//Held down for start bit
if(baud_counter<15)
begin
baud_counter<=baud_counter+1;
next_status<=START;
end
else begin
baud_counter<=0;
next_status<=SEND;
end
end

//------------------------------------------------------------------------------------------------------

//**************************Read_State[Reading Data bits]*********************************************

SEND:begin
Serial_out<=Parallel_Data[bit_index];
if(baud_counter<15)
begin
	baud_counter<=baud_counter+1;
	next_status<=SEND;
end
else
	begin
	baud_counter<=0;
	if(bit_index<7)
		begin
		bit_index<=bit_index+1;
		next_status<=SEND;
	   end
	else
		begin
		bit_index<=0;
		next_status<=STOP;
	end
end

end
//----------------------------------------------------------------------------------------------------
////**************************Stop_State[Checking Vadility of Stop bit]*********************************************
STOP:begin
Serial_out<=1;//Held_high
if(baud_counter<15)
begin
	baud_counter<=baud_counter+1;
	next_status<=STOP;
end
else begin
	baud_counter<=0;
	TX_ACTIVE<=0;//
	data_sent<=1;//Signal Ready is enabled [Can be used to trigger interrupt]
	next_status<=IDLE;
end
end
//---------------------------------------------------------------------------------------------------

default:next_status<=IDLE;
//----------------------------------------------------------------------------------------------------
endcase
end
end
endmodule


