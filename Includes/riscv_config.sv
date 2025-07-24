

// no traces for synthesis, they are not synthesizable
`ifndef VERILATOR
`ifndef SYNTHESIS
`ifndef PULP_FPGA_EMUL
`define TRACE_EXECUTION
`endif
`endif
`endif

`ifdef PULP_FPGA_SIM
`define TRACE_EXECUTION
`endif

// to store traces of FPU/APU operations
//`define APU_TRACE
