
module ram
    #(
    parameter ADDR_WIDTH = 22
  )(
    // Clock
    input  logic                   clk,

    input  logic                   instr_req_i,
    input  logic [ADDR_WIDTH-1:0]  instr_addr_i,
    output logic [127:0]           instr_rdata_o,
    output logic                   instr_rvalid_o,
    output logic                   instr_gnt_o,

    input  logic                   data_req_i,
    input  logic [ADDR_WIDTH-1:0]  data_addr_i,
    input  logic                   data_we_i,
    input  logic [3:0]             data_be_i,
    input  logic [31:0]            data_wdata_i,
    output logic [31:0]            data_rdata_o,
    output logic                   data_rvalid_o,
    output logic                   data_gnt_o
  );

   // Instantiate the ram

   dp_ram
     #(
       .ADDR_WIDTH (ADDR_WIDTH)
       )
   dp_ram_i
     (
      .clk       ( clk           ),

      .en_a_i    ( instr_req_i   ),
      .addr_a_i  ( instr_addr_i  ),
      .wdata_a_i ( '0            ),	// Not writing so ignored
      .rdata_a_o ( instr_rdata_o ),
      .we_a_i    ( '0            ),
      .be_a_i    ( 4'b1111       ),	// Always want 32-bits

      .en_b_i    ( data_req_i    ),
      .addr_b_i  ( data_addr_i   ),
      .wdata_b_i ( data_wdata_i  ),
      .rdata_b_o ( data_rdata_o  ),
      .we_b_i    ( data_we_i     ),
      .be_b_i    ( data_be_i     )
      );

   assign data_gnt_o  = data_req_i;
   assign instr_gnt_o = instr_req_i;

   always_ff @(posedge clk)
     begin
	data_rvalid_o  <= data_req_i;
	instr_rvalid_o <= instr_req_i;
     end

endmodule	// ram
