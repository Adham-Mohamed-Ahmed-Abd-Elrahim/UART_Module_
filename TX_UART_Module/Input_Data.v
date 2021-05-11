`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:32 05/04/2021 
// Design Name: 
// Module Name:    Paralle_Data 
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
module Paralle_Data(
input Clk,
input [2:0] switches, 
output reg[7:0] data_parallel);
//test 2
always @(posedge Clk)
begin

case(switches)
//0
4'b000:begin
data_parallel<=0;
end
//----------
//1
4'b001:begin
data_parallel<=1;
end
//----------
//2
4'b010:begin
data_parallel<=2;
end
//----------
//3
4'b011:begin
data_parallel<=3;
end
//----------
//4
4'b100:begin
data_parallel<=4;
end
//----------
//5
4'b101:begin
data_parallel<=5;
end
//----------
//6
4'b110:begin
data_parallel<=6;
end
//----------
//7
4'b111:begin
data_parallel<=7;
end

default:begin
data_parallel<=7;
end

endcase
end
endmodule

