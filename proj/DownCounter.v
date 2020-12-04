`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// this module for down counting starting from [3:0] data down to zero 
//each number will be output into [3:0]count, 
// once it equals zero the zero output will be HIGH 

module DownCounter(input clk, reset, load, CE, [3:0] data, input stop, output CEO, reg [3:0]count);
	
	//assign zero = ~count[3] & ~count[2] & ~count[1] & ~count[0];
	assign CEO = (count == 0) && CE;
	
	always @(posedge clk)
		begin
			if(reset || stop)
			count <= 4'b0000;
			else if (load)
				count <= data;
			else if (CEO)
				count <= 9;
			else if (CE)
				count <= count - 1;
		end
endmodule
