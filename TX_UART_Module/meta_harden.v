//-----------------------------------------------------------------------------
//  Description: 
//    This is a basic meta-stability hardener; it double synchronizes an
//    asynchronous signal onto a new clock domain.
//

`timescale 1ns/1ps


module meta_harden (
  input            clk_dst,      // Destination clock
  input            rst_dst,      // Reset - synchronous to destination clock
  input            signal_src,   // Asynchronous signal to be synchronized
  output reg       signal_dst    // Synchronized signal
);


//***************************************************************************
// Register declarations
//***************************************************************************

  reg           signal_meta;     // After sampling the async signal, this has
                                 // a high probability of being metastable.
                                 // The second sampling (signal_dst) has
                                 // a much lower probability of being
                                 // metastable

//***************************************************************************
// Code
//***************************************************************************

  always @(posedge clk_dst)
  begin
    if (rst_dst)
    begin
      signal_meta <= 1'b0;
      signal_dst  <= 1'b0;
    end
    else // if !rst_dst
    begin
      signal_meta <= signal_src;
      signal_dst  <= signal_meta;
    end // if rst
  end // always

endmodule

