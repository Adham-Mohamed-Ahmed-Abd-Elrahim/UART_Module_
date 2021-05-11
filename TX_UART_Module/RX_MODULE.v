`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Adham Mohamed Ahmed Abd_Elrahim
// 
// Create Date:    18:41:09 04/25/2021 
// Design Name: 
// Module Name:    UART_RX 
// Project Name: UART_MOUDLE
// Target Devices: 
// Tool versions: 
// Description: 
//Reciver module for uart [No start ,No end bits ___ 8 bits frame for data ]
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module UART_RX(
input reset,
input clk_rx,
input rx_input ,
input baud_x16_en ,//Goes high to declare 
output reg [7:0] OUT_BYTE,
output reg data_ready);//Can be used for recieving interrupts

//States of the rx_module
localparam IDLE=		2'b00;
localparam START=		2'b01;
localparam READ=		2'b10;
localparam STOP=		2'b11;

//Container bit for serial input[default held up]
reg Serial_Bit=1'b1; 
//Container for current bit position
reg [3:0] bit_position;
//Clock Counter
reg [4:0] clk_counter;//To Count clks per bit [Essential for checking start bits and end bit]
//Container for current state and next state 
reg [1:0] current_status ;
reg [1:0]next_status;
//initialization 
initial bit_position=0;
initial clk_counter=0;
initial data_ready=0;
//Synchrounous reset
always @(posedge clk_rx)
begin
if(reset) 
current_status <=IDLE;
else 
begin
Serial_Bit<=rx_input;
current_status<=next_status;
end
end 

always@(posedge clk_rx)
begin

if(baud_x16_en)
begin
case(current_status) 
IDLE:begin
clk_counter<=0;
data_ready<=0;
next_status<=(Serial_Bit)? IDLE:START;

end
//**************************Start_State[Checking vadility for start bit]*****************************
START:begin
clk_counter<=clk_counter+1;
if(clk_counter==8)//Checking the clk counter is in the middle of the start bit
begin
if(Serial_Bit==1'b0)//Checking if start bit is still valid [low]
begin
$display("START\n");
bit_position<=0;
next_status<=READ;//Getting to next stage [reading data]
end
else begin
clk_counter<=0;  next_status<=IDLE;//If input goes high during start bit [invalid start bit] -> Getting to idle stage
end
end
else
next_status<=START;
end

//------------------------------------------------------------------------------------------------------

//**************************Read_State[Reading Data bits]*********************************************

READ:begin
//checking clk_counter reaches 15 [End of bit clks(16 clk per bit)]

if(clk_counter<15)
begin
clk_counter<=clk_counter+1;
next_status<=READ;
end
else begin
if(bit_position<8)
begin
OUT_BYTE[bit_position]<=Serial_Bit;
$display("READ:%d\n",OUT_BYTE[bit_position]);
bit_position<=bit_position+1;
clk_counter<=0;
end
else begin
next_status<=STOP;
bit_position<=0;
end
end
end
//----------------------------------------------------------------------------------------------------
////**************************Stop_State[Checking Vadility of Stop bit]*********************************************
STOP:begin

if(clk_counter<15)
begin
clk_counter<=clk_counter+1;
next_status<=STOP;
end
else begin
$display("stop\n");
clk_counter<=0;
data_ready<=1;//Signal Ready is enabled [Can be used to trigger interrupt]
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
