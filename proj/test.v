`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:01:02 11/28/2020 
// Design Name: 
// Module Name:    test 
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
module test (input clk, reset, CE, [3:0] I3, I2, output[3:0] D0, D1, D2, D3,
output CEO1, CEO2, CEO3, CEO4);
	
	assign startTime[7:0] = 8'b01010101;
	
	mod10 m0 (clk, reset, CE, D0, CEO1);
	mod06 m1 (clk, reset, CEO1, D1, CEO2);
	mod m2 (clk, reset, CEO2, startTime[3:0], D2, CEO3);
	mod m3 (clk, reset, CEO3, startTime[7:4], D3, CEO4);

endmodule
