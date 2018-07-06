`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:49:22 07/06/2018
// Design Name:   FSM
// Module Name:   C:/Users/Charith/Documents/TrafficLight/TrafficLight/fsm_tb.v
// Project Name:  TrafficLight
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fsm_tb;

	// Inputs
	reg Walking_Register;
	reg Traffic_Sensor;
	reg Expired;
	reg reset;
	reg clock;

	// Outputs
	wire Walking_Register_reset;
	wire Start_Timer;
	wire [6:0] Traffic_Lights;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.Walking_Register(Walking_Register), 
		.Traffic_Sensor(Traffic_Sensor), 
		.Expired(Expired), 
		.reset(reset), 
		.Walking_Register_reset(Walking_Register_reset), 
		.Start_Timer(Start_Timer), 
		.Traffic_Lights(Traffic_Lights), 
		.clock(clock)
	);

	initial begin
		// Initialize Inputs
		Walking_Register = 0;
		Traffic_Sensor = 0;
		Expired = 0;
		reset = 0;
		clock = 0;

		// Wait 100 ns for global reset to finish
		#20;
        
		// Add stimulus here
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20;
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20;

		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20;
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 0;
		clock = 1;
		#20
		clock = 0;
		#20
		
		Expired = 1;
		clock = 1;
		#20
		clock = 0;
		#20;

	end
      
endmodule

