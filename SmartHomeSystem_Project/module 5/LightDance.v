/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Light Dance
---  Description: Module5
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module LightDance (
	input        arst  , // async  reset
	input        clk   , // clock  posedge
	input        din   , // input  data
	input        load  , // load   enable 
	input  [7:0] pdata , // load   data
	output [7:0] qdata   // output data
);

	wire [7:0] decInput;
	wire [7:0] finput;
	
	assign decInput[7] = din ^ qdata[0];
	assign decInput[6] = qdata[7];
	assign decInput[5] = qdata[0] ^ qdata[6];
	assign decInput[4] = qdata[0] ^ qdata[5];
	assign decInput[3] = qdata[4];
	assign decInput[2] = qdata[3];
	assign decInput[1] = qdata[0] ^ qdata[2];
	assign decInput[0] = qdata[0] ^ qdata[1];
	
	mux_16x8 d(pdata, decInput,load,finput);
		
	DFlop f7(arst, clk, finput[7],  qdata[7]);
	DFlop f6(arst, clk, finput[6],  qdata[6]);
	DFlop f5(arst, clk, finput[5],  qdata[5]);
	DFlop f4(arst, clk, finput[4],  qdata[4]);
	DFlop f3(arst, clk, finput[3],  qdata[3]);
	DFlop f2(arst, clk, finput[2],  qdata[2]);
	DFlop f1(arst, clk, finput[1],  qdata[1]);
	DFlop f0(arst, clk, finput[0],  qdata[0]);

endmodule