
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Adham Mohamed Ahmed Abd_Elrahim
// 
// Create Date:    04:01:35 04/29/2021 
// Design Name: 
// Module Name:    TOP_MODUle //Wrapper
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
module TOP(
input TX_EN,
input [2:0] Switches,
input reset, //Reset for reciever
input clk_p,
input clk_N,
//input 
input rx_id,
output  [7:0] rx_out,
output TX,
output [3:0] Leds,
output TX_ACTIVE,
output TX_Done,
output RX_Done);//used to trigger interrupt for recieving data
//------------------------------------------------------
//Internal Wires
wire rx_input;
wire rx_synch_in;
wire baud_rate_en;
wire clk;
wire [7:0] parallel_data ;//TX input
assign TX=rx_id;
//------------------------------------------------------

//Clk_Gen instance
clk_gen instance_clk_gen
   (// Clock in ports
    .CLK_IN1_P(clk_p),    // IN
    .CLK_IN1_N(clk_N),    // IN
    // Clock out ports
    .CLK_OUT1(clk)    // OUT
    // Status and control signals
    );// IN
//-----------------------------------------------------
//INPUT Parallel data from dip switches
//------------------------------------------------------
Paralle_Data TX_IN(
.Clk(clk),
.switches(Switches), 
.data_parallel(parallel_data));
//------------------------------------------------------
//Buad_Rate_Generator 
uart_baud_gen baud_gen (.clk(clk),.rst(reset),.baud_x16_en(baud_rate_en));
//------------------------------------------------------
//TX_Module
TX_Module TX_MOD(
.clk(clk),
.TX_EN(TX_EN),
.Tx_input(parallel_data),
.baud_x16_en(baud_rate_en) ,//Goes high to declare 
.TX_ACTIVE(TX_ACTIVE),
.Serial_out(rx_input),
.data_sent(TX_Done));//Can be used for recieving interrupts
//------------------------------------------------------
//Synchronized 
meta_harden synchronizer (.rst_dst(reset),.clk_dst(clk),.signal_src(rx_input),.signal_dst(rx_synch_in));
//------------------------------------------------------
//Rx_Module for UART
UART_RX rx_module (
.reset(reset),
.clk_rx(clk),
.rx_input(rx_synch_in),
.baud_x16_en(baud_rate_en),
.OUT_BYTE(rx_out),
.data_ready(RX_Done));
//------------------------------------------------------
//Leds Controller to indicate recieved data//Simple testing [Reciveing 1->8 integers]
LED_CTR leds (.UART_OUT(rx_out),.clk(clk),.LEDS_OUT(Leds));
//------------------------------------------------------

endmodule

