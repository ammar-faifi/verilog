`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Here we want to integrate the previous modules 
// to be working and uploaded into FPGA board
//////////////////////////////////////////////////////////////////////////////////

module timerFPGA(input clk, reset, load, CE, [3:0] I1, I0, output LED, ErrorLED, [7:0]seg, [3:0]an);

	wire [3:0] D3, D2, D1, D0, S2, S3;
	wire [26:0] counter;
	wire STOP, CEO1, CEO2, CEO3;
	wire zero3, zero2;
	wire clk_1hz;
	
	assign S2 = (&(~I0))? ( |I1? 4'b1001 : 0) : (I0-1);
	assign S3 = (&(~I0))? (I1-1) : I1;
	assign ErrorLED = Error1 | Error2;
	assign STOP = LED | ErrorLED;
	
	//seconds, with no inputs
	mod10 s0 (clk_1hz, reset, CE, STOP, D0, CEO1);
	mod06 s1 (clk_1hz, reset, CEO1, STOP, D1, CEO2);
	
	//minuites, it can take an inputs 
	DownCounter m0 (clk_1hz, reset, load, CEO2, S2, STOP, CEO3, Error1, D2);
	DownCounter m1 (clk_1hz, reset, load, CEO3, S3  ,STOP, LED, Error2, D3);


	DISP7SEG ssd (clk_1hz, D0, D1, D2, D3, text_mode, slow, med, fast, error, wrong, seg, an);

	//this is only for FPGA Board
	onehz mHz(clk, reset, CE, counter, clk_1hz);
	
endmodule 
