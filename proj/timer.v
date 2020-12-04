`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// This module is used to gather the previous modules and instantiate them. 
//////////////////////////////////////////////////////////////////////////////////

module timer(input clk, reset, load, CE, [3:0] min10, min1, output led, ErrorLED, [7:0]seg, [3:0]an);

	wire [3:0] D3, D2, D1, D0, S1, S2;
	wire [26:0] counter;
	wire STOP, CEO1, CEO2, CEO3;
	wire clk_1hz;
	
	assign reset = 0;
	assign ErrorLED = (min10 > 4'b1001) || (min1 > 4'b1001);
	assign led = ~STOP & ~ErrorLED;
	assign STOP = (D3 || D2 || D1 || D0) && ~reset && ~ErrorLED;
	
	//seconds, with no inputs
	mod10 s0 (clk, reset, CE & STOP, D0, CEO1);
	mod06 s1 (clk, reset, CEO1, D1, CEO2);
	
	//minuites, it can take an inputs 
	DownCounter m0 (clk, reset, load, CEO2, min1,  CEO3, D2);
	DownCounter m1 (clk, reset, load, CEO3, min10, CEO, D3);

	DISP7SEG ssd (clk, D0, D1, D2, D3, text_mode, slow, med, fast, error, wrong, seg, an);

	//this is only for FPGA Board
	onehz mHz(clk, reset, CE, counter, clk_1hz);
	
endmodule  