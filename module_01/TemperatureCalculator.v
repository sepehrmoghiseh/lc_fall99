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
---  Module Name: Temperature Calculator
---  Description: Module1: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns 

module TemperatureCalculator (
	input  [31:0] tc_base  , // base [environment degree ]
	input  [ 7:0] tc_ref   , // ref  [system work voltage]
	input  [15:0] adc_data , // adc  [sensor digital data]
	output [31:0] tempc      // temp [temperature celsius]
);
	wire [15:0] o1;
	wire [31:0] o2;
	wire [31:0] o3;
	wire [7:0] abs_ref;
	assign abs_ref=(tc_ref[7] ? -tc_ref : tc_ref);
	Multiplier8x8 g3(abs_ref,abs_ref,o1);
	Multiplier16x16 g2(o1,{1'b0, adc_data[14:0]},o2);
	assign o3={6'b000000, o2[31:6]};
	AdderSubtractor32x32 g1(tc_base,o3,adc_data[15],tempc);
endmodule
