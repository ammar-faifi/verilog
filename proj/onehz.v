`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:45 11/26/2020 
// Design Name: 
// Module Name:    onehz 
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
module onehz (input clk, reset, CE, output reg [26:0] counter, output CEO);

	assign CEO = (counter == 99999999) && CE;
		
	always @(posedge clk)begin
		if (reset || CEO)
			counter <= 0;
		else if (CE)
			counter <= counter + 1;
			
		end

endmodule
