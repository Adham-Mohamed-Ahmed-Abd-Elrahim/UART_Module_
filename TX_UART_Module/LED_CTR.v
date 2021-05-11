`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:52:14 04/28/2021 
// Design Name: 
// Module Name:    LED_CTR 
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
module LED_CTR(
input [7:0] UART_OUT,
input clk,
output reg [3:0] LEDS_OUT );
//test 1
/*always @(posedge clk)
begin
if(UART_OUT==0)begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end 
if(UART_OUT==1)begin
LEDS_OUT[0]<=1;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end 
if(UART_OUT==2)begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=1;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end 
if(UART_OUT==3)begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=1;
LEDS_OUT[3]<=0;
end 
if(UART_OUT>=4)begin
LEDS_OUT[0]<=1;
LEDS_OUT[1]<=1;
LEDS_OUT[2]<=1;
LEDS_OUT[3]<=1;
end 
end*/
//test 2
always @(posedge clk)
begin
case(UART_OUT)
0:begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end
1:begin
LEDS_OUT[0]<=1;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end
2:begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=1;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end
3:begin
LEDS_OUT[0]<=1;
LEDS_OUT[1]<=1;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end
4:begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=1;
LEDS_OUT[3]<=0;
end
5:begin
LEDS_OUT[0]<=1;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=1;
LEDS_OUT[3]<=0;
end
6:begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=1;
LEDS_OUT[2]<=1;
LEDS_OUT[3]<=0;
end
7:begin
LEDS_OUT[0]<=1;
LEDS_OUT[1]<=1;
LEDS_OUT[2]<=1;
LEDS_OUT[3]<=0;
end
8:begin
LEDS_OUT[0]<=1;
LEDS_OUT[1]<=1;
LEDS_OUT[2]<=1;
LEDS_OUT[3]<=1;
end
default:begin
LEDS_OUT[0]<=0;
LEDS_OUT[1]<=0;
LEDS_OUT[2]<=0;
LEDS_OUT[3]<=0;
end 
endcase
end
endmodule
