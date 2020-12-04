`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// this module for down counting starting from [3:0] data down to zero 
//each number will be output into [3:0]count, 
// once it equals zero the zero output will be HIGH 

module DownCounter(input clk, reset, load, CE, [3:0] data, output CEO, reg [3:0]count);
	
	assign CEO = (count == 0) && CE;
	
	always @(posedge clk)
		begin
			if(reset || data > 9)
			count <= 0;
			else if (load)
				count <= data;
			else if (CEO)
				count <= 9;
			else if (CE)
				count <= count - 1;
		end
endmodule
