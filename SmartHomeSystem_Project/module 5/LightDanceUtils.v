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
---  Module Name:  Light Dance Utils
---  Description: Module5:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

/***********************************************************/
/************** Design Your Own Modules Below **************/
module mux_16x8(
	input [7:0] in1,
	input [7:0] in0,
	input sel,
	output [7:0] out
	);
	
	assign out = sel ? in1:in0;
		
endmodule
/************** Design Your Own Modules Above **************/
/***********************************************************/