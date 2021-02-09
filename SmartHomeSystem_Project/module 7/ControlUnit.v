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
---  Module Name: Control Unit
---  Description: Module7:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

`define AAA 3'b001 // IDLE
`define BBB 3'b010 // ACTIVE
`define CCC 3'b011 // REQUEST
`define DDD 3'b100 // STORE
`define EEE 3'b101 // TRAP
`define FFF 3'b111 // FFF

`define STATE_IDLE    3'b001
`define STATE_ACTIVE  3'b010
`define STATE_REQUEST 3'b011
`define STATE_STORE   3'b100
`define STATE_TRAP    3'b101
`define STATE_OTHERS  3'b111


module ControlUnit (
	input         arst      , // async  reset
	input         clk       , // clock  posedge
	input         request   , // request input (asynch) 
	input         confirm   , // confirm input 
	input  [ 1:0] password  , // password from user
	input  [ 1:0] syskey    , // key  from memoty unit
	input  [34:0] configin  , // conf from user
	output [34:0] configout , // conf to memory unit
	output        write_en  , // conf mem write enable
	output [ 2:0] dbg_state   // current state (debug)
	);
	reg write_en1;
	reg [2:0] state;
	wire passc;
	PassCheckUnit f1(password,syskey,passc);
	reg [34:0] configout1;

	always @(posedge clk or posedge arst)begin
		if(arst | ~request)begin
				write_en1<=1'b0;
				configout1<=0;
				state <= `STATE_IDLE;
				end
		else 
			case(state)
				`STATE_IDLE: begin 
									if(request) 
										state<=`STATE_ACTIVE;
									end
		
				`STATE_ACTIVE: begin
									if(confirm)
										if(passc)begin
											state<=`STATE_REQUEST;
											end
										else begin
											state<=`STATE_TRAP;
											end
										else
											state<=`STATE_ACTIVE;
									end
				`STATE_REQUEST: if(confirm)begin
										state<=`STATE_STORE;
										end
										else 
											state<=`STATE_REQUEST;
				`STATE_STORE: begin configout1<=configin;
									write_en1<=1'b1;
									end
				`STATE_TRAP: begin
								state<=`STATE_TRAP;
								write_en1<=1'b0;
								end
				endcase
		end
										
											
assign write_en = write_en1;
assign dbg_state=state;
assign configout=configout1;
endmodule
