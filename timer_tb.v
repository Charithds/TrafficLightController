`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:00:41 07/06/2018
// Design Name:   Timer
// Module Name:   C:/Users/Charith/Documents/TrafficLight/TrafficLight/timer_tb.v
// Project Name:  TrafficLight
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Timer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module timer_tb;

	// Inputs
	reg [3:0] value;
	reg seconds_enabled;
	reg start_timer;
	reg clkin;

	// Outputs
	wire expired;

	// Instantiate the Unit Under Test (UUT)
	Timer uut (
		.value(value), 
		.seconds_enabled(seconds_enabled), 
		.start_timer(start_timer), 
		.clkin(clkin), 
		.expired(expired)
	);

	initial begin
		// Initialize Inputs
		value = 7;
		seconds_enabled = 0;
		start_timer = 0;
		clkin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		start_timer <= 1;
		#10;
		start_timer <= 0;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		#100;
		clkin <= 0;
		#100;
		clkin <= 1;
		

	end
      
endmodule

