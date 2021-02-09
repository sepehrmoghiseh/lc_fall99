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
---  Description: Module5:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module DFlop (
	input  arst  , // async reset
	input  clk   , // clock posedge
	input  din   , // data  in
	output  dout    // data  out
);
reg dout1;
	/* write your code here */
	always @ (posedge clk or posedge arst)begin
		if (arst)	dout1 = 1'b0;
		else
			dout1 = din;
	end
	assign dout=dout1;
endmodule