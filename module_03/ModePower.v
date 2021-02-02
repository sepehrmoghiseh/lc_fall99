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
---  Module Name: Power Mode (Conting Ones)
---  Description: Module3: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module ModePower (
	input  [7:0] chs_conf  , // degree [temprature] 
	output [3:0] chs_power , // power  [cooler/heater] 
	output       chs_mode    // model  [heat=1/cool=0]
);
	reg [3:0] chs_power1 ;
	reg chs_mode1;
	integer i;

always@(chs_conf)
begin
    chs_power1 = 0;  //initialize count variable.
    for(i=0;i<8;i=i+1)   //check for all the bits.
        for(i=0;i<8;i=i+1)   //for all the bits.
			chs_power1 = chs_power1 + chs_conf[i];
	if( chs_conf % 2 ==0)
			 chs_mode1=1'b0;
		else
		chs_mode1=1'b1;
end
	assign chs_power=chs_power1;
	assign chs_mode=chs_mode1;
	
endmodule
