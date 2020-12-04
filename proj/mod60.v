`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:48 11/26/2020 
// Design Name: 
// Module Name:    mod60 
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
module mod60 (input clk, reset, CE, output[3:0] D0, D1,
output CEO1, CEO2);

	mod10 m0(clk, reset, CE, D0, CEO1);
	mod06 m1(clk, reset, CEO1, D1, CEO2);;

endmodule 