// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+5529,"clk_i", false,-1);
        vcdp->declBit(c+5537,"rstn_i", false,-1);
        vcdp->declBit(c+5545,"irq_i", false,-1);
        vcdp->declBus(c+5553,"irq_id_i", false,-1, 4,0);
        vcdp->declBit(c+5561,"irq_ack_o", false,-1);
        vcdp->declBus(c+5569,"irq_id_o", false,-1, 4,0);
        vcdp->declBit(c+5577,"irq_sec_i", false,-1);
        vcdp->declBit(c+5585,"sec_lvl_o", false,-1);
        vcdp->declBit(c+5593,"debug_req_i", false,-1);
        vcdp->declBit(c+5601,"debug_gnt_o", false,-1);
        vcdp->declBit(c+5609,"debug_rvalid_o", false,-1);
        vcdp->declBus(c+5617,"debug_addr_i", false,-1, 14,0);
        vcdp->declBit(c+5625,"debug_we_i", false,-1);
        vcdp->declBus(c+5633,"debug_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+5641,"debug_rdata_o", false,-1, 31,0);
        vcdp->declBit(c+5649,"debug_halted_o", false,-1);
        vcdp->declBit(c+5657,"fetch_enable_i", false,-1);
        vcdp->declBit(c+5665,"core_busy_o", false,-1);
        vcdp->declBus(c+5697,"top INSTR_RDATA_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5705,"top ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5713,"top BOOT_ADDR", false,-1, 31,0);
        vcdp->declBit(c+5529,"top clk_i", false,-1);
        vcdp->declBit(c+5537,"top rstn_i", false,-1);
        vcdp->declBit(c+5545,"top irq_i", false,-1);
        vcdp->declBus(c+5553,"top irq_id_i", false,-1, 4,0);
        vcdp->declBit(c+1625,"top irq_ack_o", false,-1);
        vcdp->declBus(c+3777,"top irq_id_o", false,-1, 4,0);
        vcdp->declBit(c+5577,"top irq_sec_i", false,-1);
        vcdp->declBit(c+3785,"top sec_lvl_o", false,-1);
        vcdp->declBit(c+5593,"top debug_req_i", false,-1);
        vcdp->declBit(c+113,"top debug_gnt_o", false,-1);
        vcdp->declBit(c+3793,"top debug_rvalid_o", false,-1);
        vcdp->declBus(c+5617,"top debug_addr_i", false,-1, 14,0);
        vcdp->declBit(c+5625,"top debug_we_i", false,-1);
        vcdp->declBus(c+5633,"top debug_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+121,"top debug_rdata_o", false,-1, 31,0);
        vcdp->declBit(c+1633,"top debug_halted_o", false,-1);
        vcdp->declBit(c+5657,"top fetch_enable_i", false,-1);
        vcdp->declBit(c+1641,"top core_busy_o", false,-1);
        vcdp->declBit(c+129,"top instr_req", false,-1);
        vcdp->declBit(c+129,"top instr_gnt", false,-1);
        vcdp->declBit(c+5409,"top instr_rvalid", false,-1);
        vcdp->declBus(c+137,"top instr_addr", false,-1, 21,0);
        vcdp->declArray(c+5417,"top instr_rdata", false,-1, 127,0);
        vcdp->declBit(c+145,"top data_req", false,-1);
        vcdp->declBit(c+145,"top data_gnt", false,-1);
        vcdp->declBit(c+5449,"top data_rvalid", false,-1);
        vcdp->declBus(c+3153,"top data_addr", false,-1, 21,0);
        vcdp->declBit(c+5465,"top data_we", false,-1);
        vcdp->declBus(c+3161,"top data_be", false,-1, 3,0);
        vcdp->declBus(c+5457,"top data_rdata", false,-1, 31,0);
        vcdp->declBus(c+3169,"top data_wdata", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i N_EXT_PERF_COUNTERS", false,-1, 31,0);
        vcdp->declBus(c+5697,"top riscv_core_i INSTR_RDATA_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i PULP_SECURE", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i FPU", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i SHARED_FP", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i SHARED_DSP_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i SHARED_INT_DIV", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i SHARED_FP_DIVSQRT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i WAPUTYPE", false,-1, 31,0);
        vcdp->declBus(c+5729,"top riscv_core_i APU_NARGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5737,"top riscv_core_i APU_WOP_CPU", false,-1, 31,0);
        vcdp->declBus(c+5745,"top riscv_core_i APU_NDSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5753,"top riscv_core_i APU_NUSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i clk_i", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i rst_ni", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i clock_en_i", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i test_en_i", false,-1);
        vcdp->declBus(c+5713,"top riscv_core_i boot_addr_i", false,-1, 31,0);
        vcdp->declBus(c+5769,"top riscv_core_i core_id_i", false,-1, 3,0);
        vcdp->declBus(c+5777,"top riscv_core_i cluster_id_i", false,-1, 5,0);
        vcdp->declBit(c+129,"top riscv_core_i instr_req_o", false,-1);
        vcdp->declBit(c+129,"top riscv_core_i instr_gnt_i", false,-1);
        vcdp->declBit(c+5409,"top riscv_core_i instr_rvalid_i", false,-1);
        vcdp->declBus(c+153,"top riscv_core_i instr_addr_o", false,-1, 31,0);
        vcdp->declArray(c+5417,"top riscv_core_i instr_rdata_i", false,-1, 127,0);
        vcdp->declBit(c+145,"top riscv_core_i data_req_o", false,-1);
        vcdp->declBit(c+145,"top riscv_core_i data_gnt_i", false,-1);
        vcdp->declBit(c+5449,"top riscv_core_i data_rvalid_i", false,-1);
        vcdp->declBit(c+5465,"top riscv_core_i data_we_o", false,-1);
        vcdp->declBus(c+3161,"top riscv_core_i data_be_o", false,-1, 3,0);
        vcdp->declBus(c+3177,"top riscv_core_i data_addr_o", false,-1, 31,0);
        vcdp->declBus(c+3169,"top riscv_core_i data_wdata_o", false,-1, 31,0);
        vcdp->declBus(c+5457,"top riscv_core_i data_rdata_i", false,-1, 31,0);
        vcdp->declBit(c+5785,"top riscv_core_i data_err_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i apu_master_req_o", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i apu_master_ready_o", false,-1);
        vcdp->declBit(c+5793,"top riscv_core_i apu_master_gnt_i", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1+i*1,"top riscv_core_i apu_master_operands_o", true,(i+0), 31,0);}}
        vcdp->declBus(c+5777,"top riscv_core_i apu_master_op_o", false,-1, 5,0);
        vcdp->declBus(c+5801,"top riscv_core_i apu_master_type_o", false,-1, -1,0);
        vcdp->declBus(c+5809,"top riscv_core_i apu_master_flags_o", false,-1, 14,0);
        vcdp->declBit(c+5817,"top riscv_core_i apu_master_valid_i", false,-1);
        vcdp->declBus(c+5825,"top riscv_core_i apu_master_result_i", false,-1, 31,0);
        vcdp->declBus(c+5833,"top riscv_core_i apu_master_flags_i", false,-1, 4,0);
        vcdp->declBit(c+5545,"top riscv_core_i irq_i", false,-1);
        vcdp->declBus(c+5553,"top riscv_core_i irq_id_i", false,-1, 4,0);
        vcdp->declBit(c+1625,"top riscv_core_i irq_ack_o", false,-1);
        vcdp->declBus(c+3777,"top riscv_core_i irq_id_o", false,-1, 4,0);
        vcdp->declBit(c+5577,"top riscv_core_i irq_sec_i", false,-1);
        vcdp->declBit(c+3785,"top riscv_core_i sec_lvl_o", false,-1);
        vcdp->declBit(c+5593,"top riscv_core_i debug_req_i", false,-1);
        vcdp->declBit(c+113,"top riscv_core_i debug_gnt_o", false,-1);
        vcdp->declBit(c+3793,"top riscv_core_i debug_rvalid_o", false,-1);
        vcdp->declBus(c+5617,"top riscv_core_i debug_addr_i", false,-1, 14,0);
        vcdp->declBit(c+5625,"top riscv_core_i debug_we_i", false,-1);
        vcdp->declBus(c+5633,"top riscv_core_i debug_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+121,"top riscv_core_i debug_rdata_o", false,-1, 31,0);
        vcdp->declBit(c+1633,"top riscv_core_i debug_halted_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i debug_halt_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i debug_resume_i", false,-1);
        vcdp->declBit(c+5657,"top riscv_core_i fetch_enable_i", false,-1);
        vcdp->declBit(c+1641,"top riscv_core_i core_busy_o", false,-1);
        vcdp->declBus(c+5841,"top riscv_core_i ext_perf_counters_i", false,-1, -1,0);
        vcdp->declBus(c+5849,"top riscv_core_i N_HWLP", false,-1, 31,0);
        vcdp->declBus(c+5857,"top riscv_core_i N_HWLP_BITS", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i APU", false,-1, 31,0);
        vcdp->declBit(c+1649,"top riscv_core_i is_hwlp_id", false,-1);
        vcdp->declBus(c+3801,"top riscv_core_i hwlp_dec_cnt_id", false,-1, 1,0);
        vcdp->declBit(c+3809,"top riscv_core_i instr_valid_id", false,-1);
        vcdp->declBus(c+3817,"top riscv_core_i instr_rdata_id", false,-1, 31,0);
        vcdp->declBit(c+3825,"top riscv_core_i is_compressed_id", false,-1);
        vcdp->declBit(c+3833,"top riscv_core_i illegal_c_insn_id", false,-1);
        vcdp->declBus(c+5473,"top riscv_core_i pc_if", false,-1, 31,0);
        vcdp->declBus(c+5481,"top riscv_core_i pc_id", false,-1, 31,0);
        vcdp->declBit(c+161,"top riscv_core_i clear_instr_valid", false,-1);
        vcdp->declBit(c+169,"top riscv_core_i pc_set", false,-1);
        vcdp->declBus(c+177,"top riscv_core_i pc_mux_id", false,-1, 2,0);
        vcdp->declBus(c+3185,"top riscv_core_i exc_pc_mux_id", false,-1, 1,0);
        vcdp->declBus(c+3193,"top riscv_core_i exc_cause", false,-1, 5,0);
        vcdp->declBit(c+3201,"top riscv_core_i trap_addr_mux", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i lsu_load_err", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i lsu_store_err", false,-1);
        vcdp->declBit(c+3209,"top riscv_core_i is_decoding", false,-1);
        vcdp->declBit(c+3841,"top riscv_core_i useincr_addr_ex", false,-1);
        vcdp->declBit(c+3217,"top riscv_core_i data_misaligned", false,-1);
        vcdp->declBit(c+3225,"top riscv_core_i mult_multicycle", false,-1);
        vcdp->declBus(c+3233,"top riscv_core_i jump_target_id", false,-1, 31,0);
        vcdp->declBus(c+5489,"top riscv_core_i jump_target_ex", false,-1, 31,0);
        vcdp->declBit(c+3849,"top riscv_core_i branch_in_ex", false,-1);
        vcdp->declBit(c+1657,"top riscv_core_i branch_decision", false,-1);
        vcdp->declBit(c+1665,"top riscv_core_i ctrl_busy", false,-1);
        vcdp->declBit(c+185,"top riscv_core_i if_busy", false,-1);
        vcdp->declBit(c+1297,"top riscv_core_i lsu_busy", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i apu_busy", false,-1);
        vcdp->declBus(c+3857,"top riscv_core_i pc_ex", false,-1, 31,0);
        vcdp->declBit(c+3865,"top riscv_core_i alu_en_ex", false,-1);
        vcdp->declBus(c+3873,"top riscv_core_i alu_operator_ex", false,-1, 6,0);
        vcdp->declBus(c+3881,"top riscv_core_i alu_operand_a_ex", false,-1, 31,0);
        vcdp->declBus(c+3889,"top riscv_core_i alu_operand_b_ex", false,-1, 31,0);
        vcdp->declBus(c+5489,"top riscv_core_i alu_operand_c_ex", false,-1, 31,0);
        vcdp->declBus(c+3897,"top riscv_core_i bmask_a_ex", false,-1, 4,0);
        vcdp->declBus(c+3905,"top riscv_core_i bmask_b_ex", false,-1, 4,0);
        vcdp->declBus(c+3913,"top riscv_core_i imm_vec_ext_ex", false,-1, 1,0);
        vcdp->declBus(c+3921,"top riscv_core_i alu_vec_mode_ex", false,-1, 1,0);
        vcdp->declBus(c+3929,"top riscv_core_i mult_operator_ex", false,-1, 2,0);
        vcdp->declBus(c+3937,"top riscv_core_i mult_operand_a_ex", false,-1, 31,0);
        vcdp->declBus(c+3945,"top riscv_core_i mult_operand_b_ex", false,-1, 31,0);
        vcdp->declBus(c+3953,"top riscv_core_i mult_operand_c_ex", false,-1, 31,0);
        vcdp->declBit(c+3961,"top riscv_core_i mult_en_ex", false,-1);
        vcdp->declBit(c+3969,"top riscv_core_i mult_sel_subword_ex", false,-1);
        vcdp->declBus(c+3977,"top riscv_core_i mult_signed_mode_ex", false,-1, 1,0);
        vcdp->declBus(c+3985,"top riscv_core_i mult_imm_ex", false,-1, 4,0);
        vcdp->declBus(c+3993,"top riscv_core_i mult_dot_op_a_ex", false,-1, 31,0);
        vcdp->declBus(c+4001,"top riscv_core_i mult_dot_op_b_ex", false,-1, 31,0);
        vcdp->declBus(c+4009,"top riscv_core_i mult_dot_op_c_ex", false,-1, 31,0);
        vcdp->declBus(c+4017,"top riscv_core_i mult_dot_signed_ex", false,-1, 1,0);
        vcdp->declBus(c+4025,"top riscv_core_i fpu_op_ex", false,-1, 3,0);
        vcdp->declBus(c+5865,"top riscv_core_i fprec_csr", false,-1, 4,0);
        vcdp->declBus(c+5873,"top riscv_core_i frm_csr", false,-1, 2,0);
        vcdp->declBus(c+5865,"top riscv_core_i fflags", false,-1, 4,0);
        vcdp->declBus(c+5865,"top riscv_core_i fflags_csr", false,-1, 4,0);
        vcdp->declBit(c+5785,"top riscv_core_i fflags_we", false,-1);
        vcdp->declBit(c+4033,"top riscv_core_i apu_en_ex", false,-1);
        vcdp->declBus(c+4041,"top riscv_core_i apu_type_ex", false,-1, -1,0);
        vcdp->declBus(c+4049,"top riscv_core_i apu_flags_ex", false,-1, 14,0);
        vcdp->declBus(c+4057,"top riscv_core_i apu_op_ex", false,-1, 5,0);
        vcdp->declBus(c+4065,"top riscv_core_i apu_lat_ex", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+1673+i*1,"top riscv_core_i apu_operands_ex", true,(i+0), 31,0);}}
        vcdp->declBus(c+4073,"top riscv_core_i apu_waddr_ex", false,-1, 5,0);
        vcdp->declBus(c+5881,"top riscv_core_i apu_read_regs", false,-1, 17,0);
        vcdp->declBus(c+5873,"top riscv_core_i apu_read_regs_valid", false,-1, 2,0);
        vcdp->declBit(c+5785,"top riscv_core_i apu_read_dep", false,-1);
        vcdp->declBus(c+5889,"top riscv_core_i apu_write_regs", false,-1, 11,0);
        vcdp->declBus(c+5801,"top riscv_core_i apu_write_regs_valid", false,-1, 1,0);
        vcdp->declBit(c+5785,"top riscv_core_i apu_write_dep", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i perf_apu_type", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i perf_apu_cont", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i perf_apu_dep", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i perf_apu_wb", false,-1);
        vcdp->declBus(c+4081,"top riscv_core_i regfile_waddr_ex", false,-1, 5,0);
        vcdp->declBit(c+4089,"top riscv_core_i regfile_we_ex", false,-1);
        vcdp->declBus(c+4097,"top riscv_core_i regfile_waddr_fw_wb_o", false,-1, 5,0);
        vcdp->declBit(c+1697,"top riscv_core_i regfile_we_wb", false,-1);
        vcdp->declBus(c+3241,"top riscv_core_i regfile_wdata", false,-1, 31,0);
        vcdp->declBus(c+4105,"top riscv_core_i regfile_alu_waddr_ex", false,-1, 5,0);
        vcdp->declBit(c+4113,"top riscv_core_i regfile_alu_we_ex", false,-1);
        vcdp->declBus(c+4105,"top riscv_core_i regfile_alu_waddr_fw", false,-1, 5,0);
        vcdp->declBit(c+1705,"top riscv_core_i regfile_alu_we_fw", false,-1);
        vcdp->declBus(c+193,"top riscv_core_i regfile_alu_wdata_fw", false,-1, 31,0);
        vcdp->declBit(c+4121,"top riscv_core_i csr_access_ex", false,-1);
        vcdp->declBus(c+4129,"top riscv_core_i csr_op_ex", false,-1, 1,0);
        vcdp->declBus(c+5897,"top riscv_core_i mtvec", false,-1, 23,0);
        vcdp->declBus(c+5905,"top riscv_core_i utvec", false,-1, 23,0);
        vcdp->declBit(c+1713,"top riscv_core_i csr_access", false,-1);
        vcdp->declBus(c+201,"top riscv_core_i csr_op", false,-1, 1,0);
        vcdp->declBus(c+1721,"top riscv_core_i csr_addr", false,-1, 11,0);
        vcdp->declBus(c+4137,"top riscv_core_i csr_addr_int", false,-1, 11,0);
        vcdp->declBus(c+1729,"top riscv_core_i csr_rdata", false,-1, 31,0);
        vcdp->declBus(c+1737,"top riscv_core_i csr_wdata", false,-1, 31,0);
        vcdp->declBus(c+4145,"top riscv_core_i current_priv_lvl", false,-1, 1,0);
        vcdp->declBit(c+5465,"top riscv_core_i data_we_ex", false,-1);
        vcdp->declBus(c+5497,"top riscv_core_i data_type_ex", false,-1, 1,0);
        vcdp->declBit(c+4153,"top riscv_core_i data_sign_ext_ex", false,-1);
        vcdp->declBus(c+4161,"top riscv_core_i data_reg_offset_ex", false,-1, 1,0);
        vcdp->declBit(c+4169,"top riscv_core_i data_req_ex", false,-1);
        vcdp->declBit(c+4177,"top riscv_core_i data_load_event_ex", false,-1);
        vcdp->declBit(c+5505,"top riscv_core_i data_misaligned_ex", false,-1);
        vcdp->declBus(c+3241,"top riscv_core_i lsu_rdata", false,-1, 31,0);
        vcdp->declBit(c+209,"top riscv_core_i halt_if", false,-1);
        vcdp->declBit(c+217,"top riscv_core_i id_ready", false,-1);
        vcdp->declBit(c+225,"top riscv_core_i ex_ready", false,-1);
        vcdp->declBit(c+233,"top riscv_core_i id_valid", false,-1);
        vcdp->declBit(c+241,"top riscv_core_i ex_valid", false,-1);
        vcdp->declBit(c+249,"top riscv_core_i wb_valid", false,-1);
        vcdp->declBit(c+257,"top riscv_core_i lsu_ready_ex", false,-1);
        vcdp->declBit(c+249,"top riscv_core_i lsu_ready_wb", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i apu_ready_wb", false,-1);
        vcdp->declBit(c+1745,"top riscv_core_i instr_req_int", false,-1);
        vcdp->declBit(c+1753,"top riscv_core_i m_irq_enable", false,-1);
        vcdp->declBit(c+4185,"top riscv_core_i u_irq_enable", false,-1);
        vcdp->declBit(c+1761,"top riscv_core_i csr_irq_sec", false,-1);
        vcdp->declBus(c+3249,"top riscv_core_i epc", false,-1, 31,0);
        vcdp->declBit(c+3257,"top riscv_core_i csr_save_cause", false,-1);
        vcdp->declBit(c+1769,"top riscv_core_i csr_save_if", false,-1);
        vcdp->declBit(c+3265,"top riscv_core_i csr_save_id", false,-1);
        vcdp->declBus(c+3273,"top riscv_core_i csr_cause", false,-1, 5,0);
        vcdp->declBit(c+3281,"top riscv_core_i csr_restore_mret_id", false,-1);
        vcdp->declBit(c+3289,"top riscv_core_i csr_restore_uret_id", false,-1);
        vcdp->declQuad(c+4193,"top riscv_core_i hwlp_start", false,-1, 63,0);
        vcdp->declQuad(c+4209,"top riscv_core_i hwlp_end", false,-1, 63,0);
        vcdp->declQuad(c+4225,"top riscv_core_i hwlp_cnt", false,-1, 63,0);
        vcdp->declBus(c+265,"top riscv_core_i csr_hwlp_regid", false,-1, 0,0);
        vcdp->declBus(c+273,"top riscv_core_i csr_hwlp_we", false,-1, 2,0);
        vcdp->declBus(c+281,"top riscv_core_i csr_hwlp_data", false,-1, 31,0);
        vcdp->declBus(c+4241,"top riscv_core_i dbg_settings", false,-1, 5,0);
        vcdp->declBit(c+289,"top riscv_core_i dbg_req", false,-1);
        vcdp->declBit(c+1777,"top riscv_core_i dbg_ack", false,-1);
        vcdp->declBit(c+297,"top riscv_core_i dbg_stall", false,-1);
        vcdp->declBit(c+305,"top riscv_core_i dbg_trap", false,-1);
        vcdp->declBit(c+4249,"top riscv_core_i dbg_reg_rreq", false,-1);
        vcdp->declBus(c+4257,"top riscv_core_i dbg_reg_raddr", false,-1, 5,0);
        vcdp->declBus(c+1785,"top riscv_core_i dbg_reg_rdata", false,-1, 31,0);
        vcdp->declBit(c+313,"top riscv_core_i dbg_reg_wreq", false,-1);
        vcdp->declBus(c+5673,"top riscv_core_i dbg_reg_waddr", false,-1, 5,0);
        vcdp->declBus(c+5633,"top riscv_core_i dbg_reg_wdata", false,-1, 31,0);
        vcdp->declBit(c+4265,"top riscv_core_i dbg_csr_req", false,-1);
        vcdp->declBus(c+4273,"top riscv_core_i dbg_csr_addr", false,-1, 11,0);
        vcdp->declBit(c+321,"top riscv_core_i dbg_csr_we", false,-1);
        vcdp->declBus(c+4281,"top riscv_core_i dbg_csr_wdata", false,-1, 31,0);
        vcdp->declBus(c+4281,"top riscv_core_i dbg_jump_addr", false,-1, 31,0);
        vcdp->declBit(c+4289,"top riscv_core_i dbg_jump_req", false,-1);
        vcdp->declBit(c+329,"top riscv_core_i perf_imiss", false,-1);
        vcdp->declBit(c+337,"top riscv_core_i perf_jump", false,-1);
        vcdp->declBit(c+1793,"top riscv_core_i perf_jr_stall", false,-1);
        vcdp->declBit(c+345,"top riscv_core_i perf_ld_stall", false,-1);
        vcdp->declBit(c+1801,"top riscv_core_i core_ctrl_firstfetch", false,-1);
        vcdp->declBit(c+1305,"top riscv_core_i core_busy_int", false,-1);
        vcdp->declBit(c+4297,"top riscv_core_i core_busy_q", false,-1);
        vcdp->declBit(c+1577,"top riscv_core_i is_interrupt", false,-1);
        vcdp->declBit(c+5529,"top riscv_core_i clk", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i clock_en", false,-1);
        vcdp->declBit(c+5681,"top riscv_core_i dbg_busy", false,-1);
        vcdp->declBit(c+5689,"top riscv_core_i sleeping", false,-1);
        vcdp->declBit(c+5529,"top riscv_core_i core_clock_gate_i clk_i", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i core_clock_gate_i en_i", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i core_clock_gate_i test_en_i", false,-1);
        vcdp->declBit(c+5529,"top riscv_core_i core_clock_gate_i clk_o", false,-1);
        vcdp->declBus(c+5849,"top riscv_core_i if_stage_i N_HWLP", false,-1, 31,0);
        vcdp->declBus(c+5697,"top riscv_core_i if_stage_i RDATA_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i if_stage_i FPU", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i if_stage_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i if_stage_i rst_n", false,-1);
        vcdp->declBus(c+5897,"top riscv_core_i if_stage_i m_trap_base_addr_i", false,-1, 23,0);
        vcdp->declBus(c+5905,"top riscv_core_i if_stage_i u_trap_base_addr_i", false,-1, 23,0);
        vcdp->declBit(c+3201,"top riscv_core_i if_stage_i trap_addr_mux_i", false,-1);
        vcdp->declBus(c+5897,"top riscv_core_i if_stage_i boot_addr_i", false,-1, 23,0);
        vcdp->declBit(c+1745,"top riscv_core_i if_stage_i req_i", false,-1);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i instr_req_o", false,-1);
        vcdp->declBus(c+153,"top riscv_core_i if_stage_i instr_addr_o", false,-1, 31,0);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i instr_gnt_i", false,-1);
        vcdp->declBit(c+5409,"top riscv_core_i if_stage_i instr_rvalid_i", false,-1);
        vcdp->declArray(c+5417,"top riscv_core_i if_stage_i instr_rdata_i", false,-1, 127,0);
        vcdp->declBus(c+3801,"top riscv_core_i if_stage_i hwlp_dec_cnt_id_o", false,-1, 1,0);
        vcdp->declBit(c+1649,"top riscv_core_i if_stage_i is_hwlp_id_o", false,-1);
        vcdp->declBit(c+3809,"top riscv_core_i if_stage_i instr_valid_id_o", false,-1);
        vcdp->declBus(c+3817,"top riscv_core_i if_stage_i instr_rdata_id_o", false,-1, 31,0);
        vcdp->declBit(c+3825,"top riscv_core_i if_stage_i is_compressed_id_o", false,-1);
        vcdp->declBit(c+3833,"top riscv_core_i if_stage_i illegal_c_insn_id_o", false,-1);
        vcdp->declBus(c+5473,"top riscv_core_i if_stage_i pc_if_o", false,-1, 31,0);
        vcdp->declBus(c+5481,"top riscv_core_i if_stage_i pc_id_o", false,-1, 31,0);
        vcdp->declBit(c+161,"top riscv_core_i if_stage_i clear_instr_valid_i", false,-1);
        vcdp->declBit(c+169,"top riscv_core_i if_stage_i pc_set_i", false,-1);
        vcdp->declBus(c+3249,"top riscv_core_i if_stage_i exception_pc_reg_i", false,-1, 31,0);
        vcdp->declBus(c+177,"top riscv_core_i if_stage_i pc_mux_i", false,-1, 2,0);
        vcdp->declBus(c+3185,"top riscv_core_i if_stage_i exc_pc_mux_i", false,-1, 1,0);
        vcdp->declBus(c+3297,"top riscv_core_i if_stage_i exc_vec_pc_mux_i", false,-1, 4,0);
        vcdp->declBus(c+3233,"top riscv_core_i if_stage_i jump_target_id_i", false,-1, 31,0);
        vcdp->declBus(c+5489,"top riscv_core_i if_stage_i jump_target_ex_i", false,-1, 31,0);
        vcdp->declQuad(c+4193,"top riscv_core_i if_stage_i hwlp_start_i", false,-1, 63,0);
        vcdp->declQuad(c+4209,"top riscv_core_i if_stage_i hwlp_end_i", false,-1, 63,0);
        vcdp->declQuad(c+4225,"top riscv_core_i if_stage_i hwlp_cnt_i", false,-1, 63,0);
        vcdp->declBus(c+4281,"top riscv_core_i if_stage_i dbg_jump_addr_i", false,-1, 31,0);
        vcdp->declBit(c+4289,"top riscv_core_i if_stage_i dbg_jump_req_i", false,-1);
        vcdp->declBit(c+209,"top riscv_core_i if_stage_i halt_if_i", false,-1);
        vcdp->declBit(c+217,"top riscv_core_i if_stage_i id_ready_i", false,-1);
        vcdp->declBit(c+185,"top riscv_core_i if_stage_i if_busy_o", false,-1);
        vcdp->declBit(c+329,"top riscv_core_i if_stage_i perf_imiss_o", false,-1);
        vcdp->declBus(c+4305,"top riscv_core_i if_stage_i offset_fsm_cs", false,-1, 0,0);
        vcdp->declBus(c+353,"top riscv_core_i if_stage_i offset_fsm_ns", false,-1, 0,0);
        vcdp->declBit(c+361,"top riscv_core_i if_stage_i if_valid", false,-1);
        vcdp->declBit(c+369,"top riscv_core_i if_stage_i if_ready", false,-1);
        vcdp->declBit(c+377,"top riscv_core_i if_stage_i valid", false,-1);
        vcdp->declBit(c+185,"top riscv_core_i if_stage_i prefetch_busy", false,-1);
        vcdp->declBit(c+385,"top riscv_core_i if_stage_i branch_req", false,-1);
        vcdp->declBus(c+393,"top riscv_core_i if_stage_i fetch_addr_n", false,-1, 31,0);
        vcdp->declBit(c+401,"top riscv_core_i if_stage_i fetch_valid", false,-1);
        vcdp->declBit(c+409,"top riscv_core_i if_stage_i fetch_ready", false,-1);
        vcdp->declBus(c+3305,"top riscv_core_i if_stage_i fetch_rdata", false,-1, 31,0);
        vcdp->declBus(c+5473,"top riscv_core_i if_stage_i fetch_addr", false,-1, 31,0);
        vcdp->declBit(c+4313,"top riscv_core_i if_stage_i is_hwlp_id_q", false,-1);
        vcdp->declBit(c+417,"top riscv_core_i if_stage_i fetch_is_hwlp", false,-1);
        vcdp->declBus(c+3313,"top riscv_core_i if_stage_i exc_pc", false,-1, 31,0);
        vcdp->declBit(c+3321,"top riscv_core_i if_stage_i hwlp_jump", false,-1);
        vcdp->declBit(c+5913,"top riscv_core_i if_stage_i hwlp_branch", false,-1);
        vcdp->declBus(c+3329,"top riscv_core_i if_stage_i hwlp_target", false,-1, 31,0);
        vcdp->declBus(c+3337,"top riscv_core_i if_stage_i hwlp_dec_cnt", false,-1, 1,0);
        vcdp->declBus(c+4321,"top riscv_core_i if_stage_i hwlp_dec_cnt_if", false,-1, 1,0);
        vcdp->declBus(c+3345,"top riscv_core_i if_stage_i trap_base_addr", false,-1, 23,0);
        vcdp->declBus(c+3353,"top riscv_core_i if_stage_i instr_decompressed", false,-1, 31,0);
        vcdp->declBit(c+3361,"top riscv_core_i if_stage_i illegal_c_insn", false,-1);
        vcdp->declBit(c+3369,"top riscv_core_i if_stage_i instr_compressed_int", false,-1);
        vcdp->declBus(c+5849,"top riscv_core_i if_stage_i hwloop_controller_i N_REGS", false,-1, 31,0);
        vcdp->declBus(c+5473,"top riscv_core_i if_stage_i hwloop_controller_i current_pc_i", false,-1, 31,0);
        vcdp->declQuad(c+4193,"top riscv_core_i if_stage_i hwloop_controller_i hwlp_start_addr_i", false,-1, 63,0);
        vcdp->declQuad(c+4209,"top riscv_core_i if_stage_i hwloop_controller_i hwlp_end_addr_i", false,-1, 63,0);
        vcdp->declQuad(c+4225,"top riscv_core_i if_stage_i hwloop_controller_i hwlp_counter_i", false,-1, 63,0);
        vcdp->declBus(c+3337,"top riscv_core_i if_stage_i hwloop_controller_i hwlp_dec_cnt_o", false,-1, 1,0);
        vcdp->declBus(c+1809,"top riscv_core_i if_stage_i hwloop_controller_i hwlp_dec_cnt_id_i", false,-1, 1,0);
        vcdp->declBit(c+3321,"top riscv_core_i if_stage_i hwloop_controller_i hwlp_jump_o", false,-1);
        vcdp->declBus(c+3329,"top riscv_core_i if_stage_i hwloop_controller_i hwlp_targ_addr_o", false,-1, 31,0);
        vcdp->declBus(c+3377,"top riscv_core_i if_stage_i hwloop_controller_i pc_is_end_addr", false,-1, 1,0);
        vcdp->declBus(c+3385,"top riscv_core_i if_stage_i hwloop_controller_i j", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i if_stage_i compressed_decoder_i FPU", false,-1, 31,0);
        vcdp->declBus(c+3305,"top riscv_core_i if_stage_i compressed_decoder_i instr_i", false,-1, 31,0);
        vcdp->declBus(c+3353,"top riscv_core_i if_stage_i compressed_decoder_i instr_o", false,-1, 31,0);
        vcdp->declBit(c+3369,"top riscv_core_i if_stage_i compressed_decoder_i is_compressed_o", false,-1);
        vcdp->declBit(c+3361,"top riscv_core_i if_stage_i compressed_decoder_i illegal_instr_o", false,-1);
        vcdp->declBus(c+5697,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i RDATA_IN_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i rst_n", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i req_i", false,-1);
        vcdp->declBit(c+385,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i branch_i", false,-1);
        vcdp->declBus(c+425,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_i", false,-1, 31,0);
        vcdp->declBit(c+3321,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i hwloop_i", false,-1);
        vcdp->declBus(c+3329,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i hwloop_target_i", false,-1, 31,0);
        vcdp->declBit(c+409,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i ready_i", false,-1);
        vcdp->declBit(c+401,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i valid_o", false,-1);
        vcdp->declBus(c+3305,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i rdata_o", false,-1, 31,0);
        vcdp->declBus(c+5473,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_o", false,-1, 31,0);
        vcdp->declBit(c+417,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i is_hwlp_o", false,-1);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i instr_req_o", false,-1);
        vcdp->declBus(c+153,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i instr_addr_o", false,-1, 31,0);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i instr_gnt_i", false,-1);
        vcdp->declBit(c+5409,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i instr_rvalid_i", false,-1);
        vcdp->declArray(c+5417,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i instr_rdata_i", false,-1, 127,0);
        vcdp->declBit(c+185,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i busy_o", false,-1);
        vcdp->declBit(c+185,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i busy_L0", false,-1);
        vcdp->declBus(c+4329,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i CS", false,-1, 3,0);
        vcdp->declBus(c+433,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i NS", false,-1, 3,0);
        vcdp->declBit(c+441,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i do_fetch", false,-1);
        vcdp->declBit(c+449,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i do_hwlp", false,-1);
        vcdp->declBit(c+1817,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i do_hwlp_int", false,-1);
        vcdp->declBit(c+1825,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i use_last", false,-1);
        vcdp->declBit(c+457,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i save_rdata_last", false,-1);
        vcdp->declBit(c+1833,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i use_hwlp", false,-1);
        vcdp->declBit(c+465,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i save_rdata_hwlp", false,-1);
        vcdp->declBit(c+473,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i valid", false,-1);
        vcdp->declBit(c+3393,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i hwlp_is_crossword", false,-1);
        vcdp->declBit(c+3401,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i is_crossword", false,-1);
        vcdp->declBit(c+3409,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i next_is_crossword", false,-1);
        vcdp->declBit(c+481,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i next_valid", false,-1);
        vcdp->declBit(c+3417,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i next_upper_compressed", false,-1);
        vcdp->declBit(c+5513,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i fetch_possible", false,-1);
        vcdp->declBit(c+3425,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i upper_is_compressed", false,-1);
        vcdp->declBus(c+5473,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_q", false,-1, 31,0);
        vcdp->declBus(c+489,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_n", false,-1, 31,0);
        vcdp->declBus(c+497,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_int", false,-1, 31,0);
        vcdp->declBus(c+5521,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_aligned_next", false,-1, 31,0);
        vcdp->declBus(c+3433,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_real_next", false,-1, 31,0);
        vcdp->declBit(c+4337,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i is_hwlp_q", false,-1);
        vcdp->declBit(c+505,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i is_hwlp_n", false,-1);
        vcdp->declBus(c+4345,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i rdata_last_q", false,-1, 31,0);
        vcdp->declBit(c+1585,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i valid_L0", false,-1);
        vcdp->declArray(c+3441,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i rdata_L0", false,-1, 127,0);
        vcdp->declBus(c+4353,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i addr_L0", false,-1, 31,0);
        vcdp->declBit(c+513,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i fetch_valid", false,-1);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i fetch_gnt", false,-1);
        vcdp->declBus(c+3473,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i rdata", false,-1, 31,0);
        vcdp->declBus(c+3481,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i rdata_unaligned", false,-1, 31,0);
        vcdp->declBit(c+3489,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i aligned_is_compressed", false,-1);
        vcdp->declBit(c+3497,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i unaligned_is_compressed", false,-1);
        vcdp->declBit(c+3505,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i hwlp_aligned_is_compressed", false,-1);
        vcdp->declBit(c+3513,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i hwlp_unaligned_is_compressed", false,-1);
        vcdp->declBus(c+5697,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i RDATA_IN_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i rst_n", false,-1);
        vcdp->declBit(c+441,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i prefetch_i", false,-1);
        vcdp->declBus(c+3433,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i prefetch_addr_i", false,-1, 31,0);
        vcdp->declBit(c+385,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i branch_i", false,-1);
        vcdp->declBus(c+425,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i branch_addr_i", false,-1, 31,0);
        vcdp->declBit(c+521,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i hwlp_i", false,-1);
        vcdp->declBus(c+3329,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i hwlp_addr_i", false,-1, 31,0);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i fetch_gnt_o", false,-1);
        vcdp->declBit(c+513,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i fetch_valid_o", false,-1);
        vcdp->declBit(c+1585,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i valid_o", false,-1);
        vcdp->declArray(c+3441,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i rdata_o", false,-1, 127,0);
        vcdp->declBus(c+4353,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i addr_o", false,-1, 31,0);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i instr_req_o", false,-1);
        vcdp->declBus(c+153,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i instr_addr_o", false,-1, 31,0);
        vcdp->declBit(c+129,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i instr_gnt_i", false,-1);
        vcdp->declBit(c+5409,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i instr_rvalid_i", false,-1);
        vcdp->declArray(c+5417,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i instr_rdata_i", false,-1, 127,0);
        vcdp->declBit(c+185,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i busy_o", false,-1);
        vcdp->declBus(c+4361,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i CS", false,-1, 2,0);
        vcdp->declBus(c+529,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i NS", false,-1, 2,0);
        vcdp->declArray(c+4369,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i L0_buffer", false,-1, 127,0);
        vcdp->declBus(c+4353,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i addr_q", false,-1, 31,0);
        vcdp->declBus(c+537,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i instr_addr_int", false,-1, 31,0);
        vcdp->declBit(c+3521,"top riscv_core_i if_stage_i genblk1 prefetch_128 prefetch_buffer_i L0_buffer_i valid", false,-1);
        vcdp->declBus(c+5849,"top riscv_core_i id_stage_i N_HWLP", false,-1, 31,0);
        vcdp->declBus(c+5857,"top riscv_core_i id_stage_i N_HWLP_BITS", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i PULP_SECURE", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i FPU", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i APU", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i SHARED_FP", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i SHARED_DSP_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i SHARED_INT_DIV", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i SHARED_FP_DIVSQRT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i WAPUTYPE", false,-1, 31,0);
        vcdp->declBus(c+5729,"top riscv_core_i id_stage_i APU_NARGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5737,"top riscv_core_i id_stage_i APU_WOP_CPU", false,-1, 31,0);
        vcdp->declBus(c+5745,"top riscv_core_i id_stage_i APU_NDSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5753,"top riscv_core_i id_stage_i APU_NUSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i id_stage_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i id_stage_i rst_n", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i id_stage_i test_en_i", false,-1);
        vcdp->declBit(c+5657,"top riscv_core_i id_stage_i fetch_enable_i", false,-1);
        vcdp->declBit(c+1665,"top riscv_core_i id_stage_i ctrl_busy_o", false,-1);
        vcdp->declBit(c+1801,"top riscv_core_i id_stage_i core_ctrl_firstfetch_o", false,-1);
        vcdp->declBit(c+3209,"top riscv_core_i id_stage_i is_decoding_o", false,-1);
        vcdp->declBus(c+3801,"top riscv_core_i id_stage_i hwlp_dec_cnt_i", false,-1, 1,0);
        vcdp->declBit(c+1649,"top riscv_core_i id_stage_i is_hwlp_i", false,-1);
        vcdp->declBit(c+3809,"top riscv_core_i id_stage_i instr_valid_i", false,-1);
        vcdp->declBus(c+3817,"top riscv_core_i id_stage_i instr_rdata_i", false,-1, 31,0);
        vcdp->declBit(c+1745,"top riscv_core_i id_stage_i instr_req_o", false,-1);
        vcdp->declBit(c+3849,"top riscv_core_i id_stage_i branch_in_ex_o", false,-1);
        vcdp->declBit(c+1657,"top riscv_core_i id_stage_i branch_decision_i", false,-1);
        vcdp->declBus(c+3233,"top riscv_core_i id_stage_i jump_target_o", false,-1, 31,0);
        vcdp->declBit(c+161,"top riscv_core_i id_stage_i clear_instr_valid_o", false,-1);
        vcdp->declBit(c+169,"top riscv_core_i id_stage_i pc_set_o", false,-1);
        vcdp->declBus(c+177,"top riscv_core_i id_stage_i pc_mux_o", false,-1, 2,0);
        vcdp->declBus(c+3185,"top riscv_core_i id_stage_i exc_pc_mux_o", false,-1, 1,0);
        vcdp->declBit(c+3201,"top riscv_core_i id_stage_i trap_addr_mux_o", false,-1);
        vcdp->declBit(c+3833,"top riscv_core_i id_stage_i illegal_c_insn_i", false,-1);
        vcdp->declBit(c+3825,"top riscv_core_i id_stage_i is_compressed_i", false,-1);
        vcdp->declBus(c+5473,"top riscv_core_i id_stage_i pc_if_i", false,-1, 31,0);
        vcdp->declBus(c+5481,"top riscv_core_i id_stage_i pc_id_i", false,-1, 31,0);
        vcdp->declBit(c+209,"top riscv_core_i id_stage_i halt_if_o", false,-1);
        vcdp->declBit(c+217,"top riscv_core_i id_stage_i id_ready_o", false,-1);
        vcdp->declBit(c+225,"top riscv_core_i id_stage_i ex_ready_i", false,-1);
        vcdp->declBit(c+249,"top riscv_core_i id_stage_i wb_ready_i", false,-1);
        vcdp->declBit(c+233,"top riscv_core_i id_stage_i id_valid_o", false,-1);
        vcdp->declBit(c+241,"top riscv_core_i id_stage_i ex_valid_i", false,-1);
        vcdp->declBus(c+3857,"top riscv_core_i id_stage_i pc_ex_o", false,-1, 31,0);
        vcdp->declBus(c+3881,"top riscv_core_i id_stage_i alu_operand_a_ex_o", false,-1, 31,0);
        vcdp->declBus(c+3889,"top riscv_core_i id_stage_i alu_operand_b_ex_o", false,-1, 31,0);
        vcdp->declBus(c+5489,"top riscv_core_i id_stage_i alu_operand_c_ex_o", false,-1, 31,0);
        vcdp->declBus(c+3897,"top riscv_core_i id_stage_i bmask_a_ex_o", false,-1, 4,0);
        vcdp->declBus(c+3905,"top riscv_core_i id_stage_i bmask_b_ex_o", false,-1, 4,0);
        vcdp->declBus(c+3913,"top riscv_core_i id_stage_i imm_vec_ext_ex_o", false,-1, 1,0);
        vcdp->declBus(c+3921,"top riscv_core_i id_stage_i alu_vec_mode_ex_o", false,-1, 1,0);
        vcdp->declBus(c+4081,"top riscv_core_i id_stage_i regfile_waddr_ex_o", false,-1, 5,0);
        vcdp->declBit(c+4089,"top riscv_core_i id_stage_i regfile_we_ex_o", false,-1);
        vcdp->declBus(c+4105,"top riscv_core_i id_stage_i regfile_alu_waddr_ex_o", false,-1, 5,0);
        vcdp->declBit(c+4113,"top riscv_core_i id_stage_i regfile_alu_we_ex_o", false,-1);
        vcdp->declBit(c+3865,"top riscv_core_i id_stage_i alu_en_ex_o", false,-1);
        vcdp->declBus(c+3873,"top riscv_core_i id_stage_i alu_operator_ex_o", false,-1, 6,0);
        vcdp->declBus(c+3929,"top riscv_core_i id_stage_i mult_operator_ex_o", false,-1, 2,0);
        vcdp->declBus(c+3937,"top riscv_core_i id_stage_i mult_operand_a_ex_o", false,-1, 31,0);
        vcdp->declBus(c+3945,"top riscv_core_i id_stage_i mult_operand_b_ex_o", false,-1, 31,0);
        vcdp->declBus(c+3953,"top riscv_core_i id_stage_i mult_operand_c_ex_o", false,-1, 31,0);
        vcdp->declBit(c+3961,"top riscv_core_i id_stage_i mult_en_ex_o", false,-1);
        vcdp->declBit(c+3969,"top riscv_core_i id_stage_i mult_sel_subword_ex_o", false,-1);
        vcdp->declBus(c+3977,"top riscv_core_i id_stage_i mult_signed_mode_ex_o", false,-1, 1,0);
        vcdp->declBus(c+3985,"top riscv_core_i id_stage_i mult_imm_ex_o", false,-1, 4,0);
        vcdp->declBus(c+3993,"top riscv_core_i id_stage_i mult_dot_op_a_ex_o", false,-1, 31,0);
        vcdp->declBus(c+4001,"top riscv_core_i id_stage_i mult_dot_op_b_ex_o", false,-1, 31,0);
        vcdp->declBus(c+4009,"top riscv_core_i id_stage_i mult_dot_op_c_ex_o", false,-1, 31,0);
        vcdp->declBus(c+4017,"top riscv_core_i id_stage_i mult_dot_signed_ex_o", false,-1, 1,0);
        vcdp->declBus(c+4025,"top riscv_core_i id_stage_i fpu_op_ex_o", false,-1, 3,0);
        vcdp->declBit(c+4033,"top riscv_core_i id_stage_i apu_en_ex_o", false,-1);
        vcdp->declBus(c+4041,"top riscv_core_i id_stage_i apu_type_ex_o", false,-1, -1,0);
        vcdp->declBus(c+4057,"top riscv_core_i id_stage_i apu_op_ex_o", false,-1, 5,0);
        vcdp->declBus(c+4065,"top riscv_core_i id_stage_i apu_lat_ex_o", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+4401+i*1,"top riscv_core_i id_stage_i apu_operands_ex_o", true,(i+0), 31,0);}}
        vcdp->declBus(c+4049,"top riscv_core_i id_stage_i apu_flags_ex_o", false,-1, 14,0);
        vcdp->declBus(c+4073,"top riscv_core_i id_stage_i apu_waddr_ex_o", false,-1, 5,0);
        vcdp->declBus(c+5881,"top riscv_core_i id_stage_i apu_read_regs_o", false,-1, 17,0);
        vcdp->declBus(c+5873,"top riscv_core_i id_stage_i apu_read_regs_valid_o", false,-1, 2,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i apu_read_dep_i", false,-1);
        vcdp->declBus(c+5889,"top riscv_core_i id_stage_i apu_write_regs_o", false,-1, 11,0);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i apu_write_regs_valid_o", false,-1, 1,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i apu_write_dep_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i apu_perf_dep_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i apu_busy_i", false,-1);
        vcdp->declBus(c+5873,"top riscv_core_i id_stage_i frm_i", false,-1, 2,0);
        vcdp->declBit(c+4121,"top riscv_core_i id_stage_i csr_access_ex_o", false,-1);
        vcdp->declBus(c+4129,"top riscv_core_i id_stage_i csr_op_ex_o", false,-1, 1,0);
        vcdp->declBus(c+4145,"top riscv_core_i id_stage_i current_priv_lvl_i", false,-1, 1,0);
        vcdp->declBit(c+1761,"top riscv_core_i id_stage_i csr_irq_sec_o", false,-1);
        vcdp->declBus(c+3273,"top riscv_core_i id_stage_i csr_cause_o", false,-1, 5,0);
        vcdp->declBit(c+1769,"top riscv_core_i id_stage_i csr_save_if_o", false,-1);
        vcdp->declBit(c+3265,"top riscv_core_i id_stage_i csr_save_id_o", false,-1);
        vcdp->declBit(c+3281,"top riscv_core_i id_stage_i csr_restore_mret_id_o", false,-1);
        vcdp->declBit(c+3289,"top riscv_core_i id_stage_i csr_restore_uret_id_o", false,-1);
        vcdp->declBit(c+3257,"top riscv_core_i id_stage_i csr_save_cause_o", false,-1);
        vcdp->declQuad(c+4193,"top riscv_core_i id_stage_i hwlp_start_o", false,-1, 63,0);
        vcdp->declQuad(c+4209,"top riscv_core_i id_stage_i hwlp_end_o", false,-1, 63,0);
        vcdp->declQuad(c+4225,"top riscv_core_i id_stage_i hwlp_cnt_o", false,-1, 63,0);
        vcdp->declBus(c+265,"top riscv_core_i id_stage_i csr_hwlp_regid_i", false,-1, 0,0);
        vcdp->declBus(c+273,"top riscv_core_i id_stage_i csr_hwlp_we_i", false,-1, 2,0);
        vcdp->declBus(c+281,"top riscv_core_i id_stage_i csr_hwlp_data_i", false,-1, 31,0);
        vcdp->declBit(c+4169,"top riscv_core_i id_stage_i data_req_ex_o", false,-1);
        vcdp->declBit(c+5465,"top riscv_core_i id_stage_i data_we_ex_o", false,-1);
        vcdp->declBus(c+5497,"top riscv_core_i id_stage_i data_type_ex_o", false,-1, 1,0);
        vcdp->declBit(c+4153,"top riscv_core_i id_stage_i data_sign_ext_ex_o", false,-1);
        vcdp->declBus(c+4161,"top riscv_core_i id_stage_i data_reg_offset_ex_o", false,-1, 1,0);
        vcdp->declBit(c+4177,"top riscv_core_i id_stage_i data_load_event_ex_o", false,-1);
        vcdp->declBit(c+5505,"top riscv_core_i id_stage_i data_misaligned_ex_o", false,-1);
        vcdp->declBit(c+3841,"top riscv_core_i id_stage_i prepost_useincr_ex_o", false,-1);
        vcdp->declBit(c+3217,"top riscv_core_i id_stage_i data_misaligned_i", false,-1);
        vcdp->declBit(c+5545,"top riscv_core_i id_stage_i irq_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i irq_sec_i", false,-1);
        vcdp->declBus(c+5553,"top riscv_core_i id_stage_i irq_id_i", false,-1, 4,0);
        vcdp->declBit(c+1753,"top riscv_core_i id_stage_i m_irq_enable_i", false,-1);
        vcdp->declBit(c+4185,"top riscv_core_i id_stage_i u_irq_enable_i", false,-1);
        vcdp->declBit(c+1625,"top riscv_core_i id_stage_i irq_ack_o", false,-1);
        vcdp->declBus(c+3777,"top riscv_core_i id_stage_i irq_id_o", false,-1, 4,0);
        vcdp->declBus(c+3193,"top riscv_core_i id_stage_i exc_cause_o", false,-1, 5,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i lsu_load_err_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i lsu_store_err_i", false,-1);
        vcdp->declBus(c+4241,"top riscv_core_i id_stage_i dbg_settings_i", false,-1, 5,0);
        vcdp->declBit(c+289,"top riscv_core_i id_stage_i dbg_req_i", false,-1);
        vcdp->declBit(c+1777,"top riscv_core_i id_stage_i dbg_ack_o", false,-1);
        vcdp->declBit(c+297,"top riscv_core_i id_stage_i dbg_stall_i", false,-1);
        vcdp->declBit(c+305,"top riscv_core_i id_stage_i dbg_trap_o", false,-1);
        vcdp->declBit(c+4249,"top riscv_core_i id_stage_i dbg_reg_rreq_i", false,-1);
        vcdp->declBus(c+4257,"top riscv_core_i id_stage_i dbg_reg_raddr_i", false,-1, 5,0);
        vcdp->declBus(c+1785,"top riscv_core_i id_stage_i dbg_reg_rdata_o", false,-1, 31,0);
        vcdp->declBit(c+313,"top riscv_core_i id_stage_i dbg_reg_wreq_i", false,-1);
        vcdp->declBus(c+5673,"top riscv_core_i id_stage_i dbg_reg_waddr_i", false,-1, 5,0);
        vcdp->declBus(c+5633,"top riscv_core_i id_stage_i dbg_reg_wdata_i", false,-1, 31,0);
        vcdp->declBit(c+4289,"top riscv_core_i id_stage_i dbg_jump_req_i", false,-1);
        vcdp->declBus(c+4097,"top riscv_core_i id_stage_i regfile_waddr_wb_i", false,-1, 5,0);
        vcdp->declBit(c+1697,"top riscv_core_i id_stage_i regfile_we_wb_i", false,-1);
        vcdp->declBus(c+3241,"top riscv_core_i id_stage_i regfile_wdata_wb_i", false,-1, 31,0);
        vcdp->declBus(c+4105,"top riscv_core_i id_stage_i regfile_alu_waddr_fw_i", false,-1, 5,0);
        vcdp->declBit(c+1705,"top riscv_core_i id_stage_i regfile_alu_we_fw_i", false,-1);
        vcdp->declBus(c+193,"top riscv_core_i id_stage_i regfile_alu_wdata_fw_i", false,-1, 31,0);
        vcdp->declBit(c+3225,"top riscv_core_i id_stage_i mult_multicycle_i", false,-1);
        vcdp->declBit(c+337,"top riscv_core_i id_stage_i perf_jump_o", false,-1);
        vcdp->declBit(c+1793,"top riscv_core_i id_stage_i perf_jr_stall_o", false,-1);
        vcdp->declBit(c+345,"top riscv_core_i id_stage_i perf_ld_stall_o", false,-1);
        vcdp->declBus(c+3817,"top riscv_core_i id_stage_i instr", false,-1, 31,0);
        vcdp->declBit(c+545,"top riscv_core_i id_stage_i deassert_we", false,-1);
        vcdp->declBit(c+3529,"top riscv_core_i id_stage_i illegal_insn_dec", false,-1);
        vcdp->declBit(c+1841,"top riscv_core_i id_stage_i ebrk_insn", false,-1);
        vcdp->declBit(c+1849,"top riscv_core_i id_stage_i mret_insn_dec", false,-1);
        vcdp->declBit(c+1857,"top riscv_core_i id_stage_i uret_insn_dec", false,-1);
        vcdp->declBit(c+1865,"top riscv_core_i id_stage_i ecall_insn_dec", false,-1);
        vcdp->declBit(c+1873,"top riscv_core_i id_stage_i pipe_flush_dec", false,-1);
        vcdp->declBit(c+1881,"top riscv_core_i id_stage_i rega_used_dec", false,-1);
        vcdp->declBit(c+1889,"top riscv_core_i id_stage_i regb_used_dec", false,-1);
        vcdp->declBit(c+1897,"top riscv_core_i id_stage_i regc_used_dec", false,-1);
        vcdp->declBit(c+1905,"top riscv_core_i id_stage_i branch_taken_ex", false,-1);
        vcdp->declBus(c+553,"top riscv_core_i id_stage_i jump_in_id", false,-1, 1,0);
        vcdp->declBus(c+1913,"top riscv_core_i id_stage_i jump_in_dec", false,-1, 1,0);
        vcdp->declBit(c+3217,"top riscv_core_i id_stage_i misaligned_stall", false,-1);
        vcdp->declBit(c+1793,"top riscv_core_i id_stage_i jr_stall", false,-1);
        vcdp->declBit(c+345,"top riscv_core_i id_stage_i load_stall", false,-1);
        vcdp->declBit(c+1921,"top riscv_core_i id_stage_i csr_apu_stall", false,-1);
        vcdp->declBit(c+1929,"top riscv_core_i id_stage_i instr_multicycle", false,-1);
        vcdp->declBit(c+561,"top riscv_core_i id_stage_i halt_id", false,-1);
        vcdp->declBus(c+1937,"top riscv_core_i id_stage_i imm_i_type", false,-1, 31,0);
        vcdp->declBus(c+4425,"top riscv_core_i id_stage_i imm_iz_type", false,-1, 31,0);
        vcdp->declBus(c+4433,"top riscv_core_i id_stage_i imm_s_type", false,-1, 31,0);
        vcdp->declBus(c+4441,"top riscv_core_i id_stage_i imm_sb_type", false,-1, 31,0);
        vcdp->declBus(c+4449,"top riscv_core_i id_stage_i imm_u_type", false,-1, 31,0);
        vcdp->declBus(c+4457,"top riscv_core_i id_stage_i imm_uj_type", false,-1, 31,0);
        vcdp->declBus(c+4465,"top riscv_core_i id_stage_i imm_z_type", false,-1, 31,0);
        vcdp->declBus(c+4473,"top riscv_core_i id_stage_i imm_s2_type", false,-1, 31,0);
        vcdp->declBus(c+4481,"top riscv_core_i id_stage_i imm_bi_type", false,-1, 31,0);
        vcdp->declBus(c+4489,"top riscv_core_i id_stage_i imm_s3_type", false,-1, 31,0);
        vcdp->declBus(c+4497,"top riscv_core_i id_stage_i imm_vs_type", false,-1, 31,0);
        vcdp->declBus(c+1945,"top riscv_core_i id_stage_i imm_vu_type", false,-1, 31,0);
        vcdp->declBus(c+4505,"top riscv_core_i id_stage_i imm_shuffleb_type", false,-1, 31,0);
        vcdp->declBus(c+4513,"top riscv_core_i id_stage_i imm_shuffleh_type", false,-1, 31,0);
        vcdp->declBus(c+1953,"top riscv_core_i id_stage_i imm_shuffle_type", false,-1, 31,0);
        vcdp->declBus(c+4521,"top riscv_core_i id_stage_i imm_clip_type", false,-1, 31,0);
        vcdp->declBus(c+1961,"top riscv_core_i id_stage_i imm_a", false,-1, 31,0);
        vcdp->declBus(c+3537,"top riscv_core_i id_stage_i imm_b", false,-1, 31,0);
        vcdp->declBus(c+3233,"top riscv_core_i id_stage_i jump_target", false,-1, 31,0);
        vcdp->declBit(c+4529,"top riscv_core_i id_stage_i irq_req_ctrl", false,-1);
        vcdp->declBit(c+4537,"top riscv_core_i id_stage_i irq_sec_ctrl", false,-1);
        vcdp->declBus(c+3777,"top riscv_core_i id_stage_i irq_id_ctrl", false,-1, 4,0);
        vcdp->declBit(c+1969,"top riscv_core_i id_stage_i exc_ack", false,-1);
        vcdp->declBit(c+569,"top riscv_core_i id_stage_i exc_kill", false,-1);
        vcdp->declBus(c+4545,"top riscv_core_i id_stage_i regfile_addr_ra_id", false,-1, 5,0);
        vcdp->declBus(c+4553,"top riscv_core_i id_stage_i regfile_addr_rb_id", false,-1, 5,0);
        vcdp->declBus(c+1977,"top riscv_core_i id_stage_i regfile_addr_rc_id", false,-1, 5,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i regfile_fp_a", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i regfile_fp_b", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i regfile_fp_c", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i regfile_fp_d", false,-1);
        vcdp->declBus(c+4561,"top riscv_core_i id_stage_i regfile_waddr_id", false,-1, 5,0);
        vcdp->declBus(c+1985,"top riscv_core_i id_stage_i regfile_alu_waddr_id", false,-1, 5,0);
        vcdp->declBit(c+577,"top riscv_core_i id_stage_i regfile_alu_we_id", false,-1);
        vcdp->declBus(c+1993,"top riscv_core_i id_stage_i regfile_data_ra_id", false,-1, 31,0);
        vcdp->declBus(c+4569,"top riscv_core_i id_stage_i regfile_data_rb_id", false,-1, 31,0);
        vcdp->declBus(c+1785,"top riscv_core_i id_stage_i regfile_data_rc_id", false,-1, 31,0);
        vcdp->declBit(c+3545,"top riscv_core_i id_stage_i alu_en", false,-1);
        vcdp->declBus(c+2001,"top riscv_core_i id_stage_i alu_operator", false,-1, 6,0);
        vcdp->declBus(c+3553,"top riscv_core_i id_stage_i alu_op_a_mux_sel", false,-1, 2,0);
        vcdp->declBus(c+3561,"top riscv_core_i id_stage_i alu_op_b_mux_sel", false,-1, 2,0);
        vcdp->declBus(c+3569,"top riscv_core_i id_stage_i alu_op_c_mux_sel", false,-1, 1,0);
        vcdp->declBus(c+2009,"top riscv_core_i id_stage_i regc_mux", false,-1, 1,0);
        vcdp->declBus(c+2017,"top riscv_core_i id_stage_i imm_a_mux_sel", false,-1, 0,0);
        vcdp->declBus(c+3577,"top riscv_core_i id_stage_i imm_b_mux_sel", false,-1, 3,0);
        vcdp->declBus(c+2025,"top riscv_core_i id_stage_i jump_target_mux_sel", false,-1, 1,0);
        vcdp->declBus(c+2033,"top riscv_core_i id_stage_i mult_operator", false,-1, 2,0);
        vcdp->declBit(c+2041,"top riscv_core_i id_stage_i mult_en", false,-1);
        vcdp->declBit(c+2049,"top riscv_core_i id_stage_i mult_int_en", false,-1);
        vcdp->declBit(c+2057,"top riscv_core_i id_stage_i mult_sel_subword", false,-1);
        vcdp->declBus(c+2065,"top riscv_core_i id_stage_i mult_signed_mode", false,-1, 1,0);
        vcdp->declBit(c+2073,"top riscv_core_i id_stage_i mult_dot_en", false,-1);
        vcdp->declBus(c+2081,"top riscv_core_i id_stage_i mult_dot_signed", false,-1, 1,0);
        vcdp->declBus(c+5769,"top riscv_core_i id_stage_i fpu_op", false,-1, 3,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i apu_en", false,-1);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i apu_type", false,-1, -1,0);
        vcdp->declBus(c+5777,"top riscv_core_i id_stage_i apu_op", false,-1, 5,0);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i apu_lat", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+25+i*1,"top riscv_core_i id_stage_i apu_operands", true,(i+0), 31,0);}}
        vcdp->declBus(c+5809,"top riscv_core_i id_stage_i apu_flags", false,-1, 14,0);
        vcdp->declBus(c+5777,"top riscv_core_i id_stage_i apu_waddr", false,-1, 5,0);
        vcdp->declBus(c+5921,"top riscv_core_i id_stage_i apu_read_regs", false,-1, 17,0);
        vcdp->declBus(c+5929,"top riscv_core_i id_stage_i apu_read_regs_valid", false,-1, 2,0);
        vcdp->declBus(c+5937,"top riscv_core_i id_stage_i apu_write_regs", false,-1, 11,0);
        vcdp->declBus(c+5945,"top riscv_core_i id_stage_i apu_write_regs_valid", false,-1, 1,0);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i apu_flags_src", false,-1, -1,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i apu_stall", false,-1);
        vcdp->declBus(c+5873,"top riscv_core_i id_stage_i fp_rnd_mode", false,-1, 2,0);
        vcdp->declBit(c+585,"top riscv_core_i id_stage_i regfile_we_id", false,-1);
        vcdp->declBit(c+2089,"top riscv_core_i id_stage_i regfile_alu_waddr_mux_sel", false,-1);
        vcdp->declBit(c+3585,"top riscv_core_i id_stage_i data_we_id", false,-1);
        vcdp->declBus(c+3593,"top riscv_core_i id_stage_i data_type_id", false,-1, 1,0);
        vcdp->declBit(c+2097,"top riscv_core_i id_stage_i data_sign_ext_id", false,-1);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i data_reg_offset_id", false,-1, 1,0);
        vcdp->declBit(c+593,"top riscv_core_i id_stage_i data_req_id", false,-1);
        vcdp->declBit(c+2105,"top riscv_core_i id_stage_i data_load_event_id", false,-1);
        vcdp->declBus(c+601,"top riscv_core_i id_stage_i hwloop_regid", false,-1, 0,0);
        vcdp->declBus(c+4577,"top riscv_core_i id_stage_i hwloop_regid_int", false,-1, 0,0);
        vcdp->declBus(c+609,"top riscv_core_i id_stage_i hwloop_we", false,-1, 2,0);
        vcdp->declBus(c+617,"top riscv_core_i id_stage_i hwloop_we_int", false,-1, 2,0);
        vcdp->declBit(c+2113,"top riscv_core_i id_stage_i hwloop_target_mux_sel", false,-1);
        vcdp->declBit(c+2121,"top riscv_core_i id_stage_i hwloop_start_mux_sel", false,-1);
        vcdp->declBit(c+2129,"top riscv_core_i id_stage_i hwloop_cnt_mux_sel", false,-1);
        vcdp->declBus(c+3601,"top riscv_core_i id_stage_i hwloop_target", false,-1, 31,0);
        vcdp->declBus(c+1593,"top riscv_core_i id_stage_i hwloop_start", false,-1, 31,0);
        vcdp->declBus(c+3609,"top riscv_core_i id_stage_i hwloop_start_int", false,-1, 31,0);
        vcdp->declBus(c+1601,"top riscv_core_i id_stage_i hwloop_end", false,-1, 31,0);
        vcdp->declBus(c+625,"top riscv_core_i id_stage_i hwloop_cnt", false,-1, 31,0);
        vcdp->declBus(c+633,"top riscv_core_i id_stage_i hwloop_cnt_int", false,-1, 31,0);
        vcdp->declBit(c+641,"top riscv_core_i id_stage_i hwloop_valid", false,-1);
        vcdp->declBit(c+2137,"top riscv_core_i id_stage_i csr_access", false,-1);
        vcdp->declBus(c+1313,"top riscv_core_i id_stage_i csr_op", false,-1, 1,0);
        vcdp->declBit(c+3617,"top riscv_core_i id_stage_i csr_status", false,-1);
        vcdp->declBit(c+3625,"top riscv_core_i id_stage_i prepost_useincr", false,-1);
        vcdp->declBus(c+3633,"top riscv_core_i id_stage_i operand_a_fw_mux_sel", false,-1, 1,0);
        vcdp->declBus(c+3641,"top riscv_core_i id_stage_i operand_b_fw_mux_sel", false,-1, 1,0);
        vcdp->declBus(c+3649,"top riscv_core_i id_stage_i operand_c_fw_mux_sel", false,-1, 1,0);
        vcdp->declBus(c+649,"top riscv_core_i id_stage_i operand_a_fw_id", false,-1, 31,0);
        vcdp->declBus(c+657,"top riscv_core_i id_stage_i operand_b_fw_id", false,-1, 31,0);
        vcdp->declBus(c+665,"top riscv_core_i id_stage_i operand_c_fw_id", false,-1, 31,0);
        vcdp->declBus(c+673,"top riscv_core_i id_stage_i operand_b", false,-1, 31,0);
        vcdp->declBus(c+681,"top riscv_core_i id_stage_i operand_b_vec", false,-1, 31,0);
        vcdp->declBus(c+689,"top riscv_core_i id_stage_i alu_operand_a", false,-1, 31,0);
        vcdp->declBus(c+697,"top riscv_core_i id_stage_i alu_operand_b", false,-1, 31,0);
        vcdp->declBus(c+705,"top riscv_core_i id_stage_i alu_operand_c", false,-1, 31,0);
        vcdp->declBus(c+2145,"top riscv_core_i id_stage_i bmask_a_mux", false,-1, 0,0);
        vcdp->declBus(c+2153,"top riscv_core_i id_stage_i bmask_b_mux", false,-1, 1,0);
        vcdp->declBit(c+2161,"top riscv_core_i id_stage_i alu_bmask_a_mux_sel", false,-1);
        vcdp->declBit(c+2169,"top riscv_core_i id_stage_i alu_bmask_b_mux_sel", false,-1);
        vcdp->declBus(c+2177,"top riscv_core_i id_stage_i mult_imm_mux", false,-1, 0,0);
        vcdp->declBus(c+2185,"top riscv_core_i id_stage_i bmask_a_id_imm", false,-1, 4,0);
        vcdp->declBus(c+2193,"top riscv_core_i id_stage_i bmask_b_id_imm", false,-1, 4,0);
        vcdp->declBus(c+1321,"top riscv_core_i id_stage_i bmask_a_id", false,-1, 4,0);
        vcdp->declBus(c+1329,"top riscv_core_i id_stage_i bmask_b_id", false,-1, 4,0);
        vcdp->declBus(c+2201,"top riscv_core_i id_stage_i imm_vec_ext_id", false,-1, 1,0);
        vcdp->declBus(c+2209,"top riscv_core_i id_stage_i mult_imm_id", false,-1, 4,0);
        vcdp->declBus(c+2217,"top riscv_core_i id_stage_i alu_vec_mode", false,-1, 1,0);
        vcdp->declBit(c+3657,"top riscv_core_i id_stage_i scalar_replication", false,-1);
        vcdp->declBit(c+2225,"top riscv_core_i id_stage_i reg_d_ex_is_reg_a_id", false,-1);
        vcdp->declBit(c+2233,"top riscv_core_i id_stage_i reg_d_ex_is_reg_b_id", false,-1);
        vcdp->declBit(c+2241,"top riscv_core_i id_stage_i reg_d_ex_is_reg_c_id", false,-1);
        vcdp->declBit(c+2249,"top riscv_core_i id_stage_i reg_d_wb_is_reg_a_id", false,-1);
        vcdp->declBit(c+2257,"top riscv_core_i id_stage_i reg_d_wb_is_reg_b_id", false,-1);
        vcdp->declBit(c+2265,"top riscv_core_i id_stage_i reg_d_wb_is_reg_c_id", false,-1);
        vcdp->declBit(c+2273,"top riscv_core_i id_stage_i reg_d_alu_is_reg_a_id", false,-1);
        vcdp->declBit(c+2281,"top riscv_core_i id_stage_i reg_d_alu_is_reg_b_id", false,-1);
        vcdp->declBit(c+2289,"top riscv_core_i id_stage_i reg_d_alu_is_reg_c_id", false,-1);
        vcdp->declBus(c+5737,"top riscv_core_i id_stage_i registers_i ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5953,"top riscv_core_i id_stage_i registers_i DATA_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i registers_i FPU", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i id_stage_i registers_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i id_stage_i registers_i rst_n", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i id_stage_i registers_i test_en_i", false,-1);
        vcdp->declBus(c+4545,"top riscv_core_i id_stage_i registers_i raddr_a_i", false,-1, 5,0);
        vcdp->declBus(c+1993,"top riscv_core_i id_stage_i registers_i rdata_a_o", false,-1, 31,0);
        vcdp->declBus(c+4553,"top riscv_core_i id_stage_i registers_i raddr_b_i", false,-1, 5,0);
        vcdp->declBus(c+4569,"top riscv_core_i id_stage_i registers_i rdata_b_o", false,-1, 31,0);
        vcdp->declBus(c+2297,"top riscv_core_i id_stage_i registers_i raddr_c_i", false,-1, 5,0);
        vcdp->declBus(c+1785,"top riscv_core_i id_stage_i registers_i rdata_c_o", false,-1, 31,0);
        vcdp->declBus(c+4097,"top riscv_core_i id_stage_i registers_i waddr_a_i", false,-1, 5,0);
        vcdp->declBus(c+3241,"top riscv_core_i id_stage_i registers_i wdata_a_i", false,-1, 31,0);
        vcdp->declBit(c+1697,"top riscv_core_i id_stage_i registers_i we_a_i", false,-1);
        vcdp->declBus(c+713,"top riscv_core_i id_stage_i registers_i waddr_b_i", false,-1, 5,0);
        vcdp->declBus(c+721,"top riscv_core_i id_stage_i registers_i wdata_b_i", false,-1, 31,0);
        vcdp->declBit(c+729,"top riscv_core_i id_stage_i registers_i we_b_i", false,-1);
        vcdp->declBus(c+5953,"top riscv_core_i id_stage_i registers_i NUM_WORDS", false,-1, 31,0);
        vcdp->declBus(c+5953,"top riscv_core_i id_stage_i registers_i NUM_FP_WORDS", false,-1, 31,0);
        vcdp->declBus(c+5953,"top riscv_core_i id_stage_i registers_i NUM_TOT_WORDS", false,-1, 31,0);
        vcdp->declArray(c+4585,"top riscv_core_i id_stage_i registers_i mem", false,-1, 1023,0);
        vcdp->declArray(c+5961,"top riscv_core_i id_stage_i registers_i mem_fp", false,-1, 1023,0);
        vcdp->declBus(c+2305,"top riscv_core_i id_stage_i registers_i we_a_dec", false,-1, 31,0);
        vcdp->declBus(c+737,"top riscv_core_i id_stage_i registers_i we_b_dec", false,-1, 31,0);
        vcdp->declBus(c+6217,"top riscv_core_i id_stage_i registers_i we_a_decoder unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+6217,"top riscv_core_i id_stage_i registers_i we_b_decoder unnamedblk2 i", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i FPU", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i PULP_SECURE", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i SHARED_FP", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i SHARED_DSP_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i SHARED_INT_DIV", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i SHARED_FP_DIVSQRT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i WAPUTYPE", false,-1, 31,0);
        vcdp->declBus(c+5737,"top riscv_core_i id_stage_i decoder_i APU_WOP_CPU", false,-1, 31,0);
        vcdp->declBit(c+545,"top riscv_core_i id_stage_i decoder_i deassert_we_i", false,-1);
        vcdp->declBit(c+3217,"top riscv_core_i id_stage_i decoder_i data_misaligned_i", false,-1);
        vcdp->declBit(c+3225,"top riscv_core_i id_stage_i decoder_i mult_multicycle_i", false,-1);
        vcdp->declBit(c+1929,"top riscv_core_i id_stage_i decoder_i instr_multicycle_o", false,-1);
        vcdp->declBit(c+3529,"top riscv_core_i id_stage_i decoder_i illegal_insn_o", false,-1);
        vcdp->declBit(c+1841,"top riscv_core_i id_stage_i decoder_i ebrk_insn_o", false,-1);
        vcdp->declBit(c+1849,"top riscv_core_i id_stage_i decoder_i mret_insn_o", false,-1);
        vcdp->declBit(c+1857,"top riscv_core_i id_stage_i decoder_i uret_insn_o", false,-1);
        vcdp->declBit(c+1865,"top riscv_core_i id_stage_i decoder_i ecall_insn_o", false,-1);
        vcdp->declBit(c+1873,"top riscv_core_i id_stage_i decoder_i pipe_flush_o", false,-1);
        vcdp->declBit(c+1881,"top riscv_core_i id_stage_i decoder_i rega_used_o", false,-1);
        vcdp->declBit(c+1889,"top riscv_core_i id_stage_i decoder_i regb_used_o", false,-1);
        vcdp->declBit(c+1897,"top riscv_core_i id_stage_i decoder_i regc_used_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i decoder_i reg_fp_a_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i decoder_i reg_fp_b_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i decoder_i reg_fp_c_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i decoder_i reg_fp_d_o", false,-1);
        vcdp->declBus(c+2145,"top riscv_core_i id_stage_i decoder_i bmask_a_mux_o", false,-1, 0,0);
        vcdp->declBus(c+2153,"top riscv_core_i id_stage_i decoder_i bmask_b_mux_o", false,-1, 1,0);
        vcdp->declBit(c+2161,"top riscv_core_i id_stage_i decoder_i alu_bmask_a_mux_sel_o", false,-1);
        vcdp->declBit(c+2169,"top riscv_core_i id_stage_i decoder_i alu_bmask_b_mux_sel_o", false,-1);
        vcdp->declBus(c+3817,"top riscv_core_i id_stage_i decoder_i instr_rdata_i", false,-1, 31,0);
        vcdp->declBit(c+3833,"top riscv_core_i id_stage_i decoder_i illegal_c_insn_i", false,-1);
        vcdp->declBit(c+3545,"top riscv_core_i id_stage_i decoder_i alu_en_o", false,-1);
        vcdp->declBus(c+2001,"top riscv_core_i id_stage_i decoder_i alu_operator_o", false,-1, 6,0);
        vcdp->declBus(c+3553,"top riscv_core_i id_stage_i decoder_i alu_op_a_mux_sel_o", false,-1, 2,0);
        vcdp->declBus(c+3561,"top riscv_core_i id_stage_i decoder_i alu_op_b_mux_sel_o", false,-1, 2,0);
        vcdp->declBus(c+3569,"top riscv_core_i id_stage_i decoder_i alu_op_c_mux_sel_o", false,-1, 1,0);
        vcdp->declBus(c+2217,"top riscv_core_i id_stage_i decoder_i alu_vec_mode_o", false,-1, 1,0);
        vcdp->declBit(c+3657,"top riscv_core_i id_stage_i decoder_i scalar_replication_o", false,-1);
        vcdp->declBus(c+2017,"top riscv_core_i id_stage_i decoder_i imm_a_mux_sel_o", false,-1, 0,0);
        vcdp->declBus(c+3577,"top riscv_core_i id_stage_i decoder_i imm_b_mux_sel_o", false,-1, 3,0);
        vcdp->declBus(c+2009,"top riscv_core_i id_stage_i decoder_i regc_mux_o", false,-1, 1,0);
        vcdp->declBus(c+2033,"top riscv_core_i id_stage_i decoder_i mult_operator_o", false,-1, 2,0);
        vcdp->declBit(c+2049,"top riscv_core_i id_stage_i decoder_i mult_int_en_o", false,-1);
        vcdp->declBit(c+2073,"top riscv_core_i id_stage_i decoder_i mult_dot_en_o", false,-1);
        vcdp->declBus(c+2177,"top riscv_core_i id_stage_i decoder_i mult_imm_mux_o", false,-1, 0,0);
        vcdp->declBit(c+2057,"top riscv_core_i id_stage_i decoder_i mult_sel_subword_o", false,-1);
        vcdp->declBus(c+2065,"top riscv_core_i id_stage_i decoder_i mult_signed_mode_o", false,-1, 1,0);
        vcdp->declBus(c+2081,"top riscv_core_i id_stage_i decoder_i mult_dot_signed_o", false,-1, 1,0);
        vcdp->declBus(c+5769,"top riscv_core_i id_stage_i decoder_i fpu_op_o", false,-1, 3,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i decoder_i apu_en_o", false,-1);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i decoder_i apu_type_o", false,-1, -1,0);
        vcdp->declBus(c+5777,"top riscv_core_i id_stage_i decoder_i apu_op_o", false,-1, 5,0);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i decoder_i apu_lat_o", false,-1, 1,0);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i decoder_i apu_flags_src_o", false,-1, -1,0);
        vcdp->declBus(c+5873,"top riscv_core_i id_stage_i decoder_i fp_rnd_mode_o", false,-1, 2,0);
        vcdp->declBit(c+585,"top riscv_core_i id_stage_i decoder_i regfile_mem_we_o", false,-1);
        vcdp->declBit(c+577,"top riscv_core_i id_stage_i decoder_i regfile_alu_we_o", false,-1);
        vcdp->declBit(c+2089,"top riscv_core_i id_stage_i decoder_i regfile_alu_waddr_sel_o", false,-1);
        vcdp->declBit(c+2137,"top riscv_core_i id_stage_i decoder_i csr_access_o", false,-1);
        vcdp->declBit(c+3617,"top riscv_core_i id_stage_i decoder_i csr_status_o", false,-1);
        vcdp->declBus(c+1313,"top riscv_core_i id_stage_i decoder_i csr_op_o", false,-1, 1,0);
        vcdp->declBus(c+4145,"top riscv_core_i id_stage_i decoder_i current_priv_lvl_i", false,-1, 1,0);
        vcdp->declBit(c+593,"top riscv_core_i id_stage_i decoder_i data_req_o", false,-1);
        vcdp->declBit(c+3585,"top riscv_core_i id_stage_i decoder_i data_we_o", false,-1);
        vcdp->declBit(c+3625,"top riscv_core_i id_stage_i decoder_i prepost_useincr_o", false,-1);
        vcdp->declBus(c+3593,"top riscv_core_i id_stage_i decoder_i data_type_o", false,-1, 1,0);
        vcdp->declBit(c+2097,"top riscv_core_i id_stage_i decoder_i data_sign_extension_o", false,-1);
        vcdp->declBus(c+5801,"top riscv_core_i id_stage_i decoder_i data_reg_offset_o", false,-1, 1,0);
        vcdp->declBit(c+2105,"top riscv_core_i id_stage_i decoder_i data_load_event_o", false,-1);
        vcdp->declBus(c+617,"top riscv_core_i id_stage_i decoder_i hwloop_we_o", false,-1, 2,0);
        vcdp->declBit(c+2113,"top riscv_core_i id_stage_i decoder_i hwloop_target_mux_sel_o", false,-1);
        vcdp->declBit(c+2121,"top riscv_core_i id_stage_i decoder_i hwloop_start_mux_sel_o", false,-1);
        vcdp->declBit(c+2129,"top riscv_core_i id_stage_i decoder_i hwloop_cnt_mux_sel_o", false,-1);
        vcdp->declBus(c+1913,"top riscv_core_i id_stage_i decoder_i jump_in_dec_o", false,-1, 1,0);
        vcdp->declBus(c+553,"top riscv_core_i id_stage_i decoder_i jump_in_id_o", false,-1, 1,0);
        vcdp->declBus(c+2025,"top riscv_core_i id_stage_i decoder_i jump_target_mux_sel_o", false,-1, 1,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_FP", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_DSP_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_INT_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_INT_DIV", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_ADDSUB", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_CAST", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_MAC", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_DIV", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_SQRT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i decoder_i APUTYPE_DIVSQRT", false,-1, 31,0);
        vcdp->declBit(c+2313,"top riscv_core_i id_stage_i decoder_i regfile_mem_we", false,-1);
        vcdp->declBit(c+3665,"top riscv_core_i id_stage_i decoder_i regfile_alu_we", false,-1);
        vcdp->declBit(c+2321,"top riscv_core_i id_stage_i decoder_i data_req", false,-1);
        vcdp->declBus(c+2329,"top riscv_core_i id_stage_i decoder_i hwloop_we", false,-1, 2,0);
        vcdp->declBit(c+3673,"top riscv_core_i id_stage_i decoder_i csr_illegal", false,-1);
        vcdp->declBus(c+1913,"top riscv_core_i id_stage_i decoder_i jump_in_id", false,-1, 1,0);
        vcdp->declBus(c+2337,"top riscv_core_i id_stage_i decoder_i csr_op", false,-1, 1,0);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i decoder_i apu_en", false,-1);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i controller_i FPU", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i id_stage_i controller_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i id_stage_i controller_i rst_n", false,-1);
        vcdp->declBit(c+5657,"top riscv_core_i id_stage_i controller_i fetch_enable_i", false,-1);
        vcdp->declBit(c+1665,"top riscv_core_i id_stage_i controller_i ctrl_busy_o", false,-1);
        vcdp->declBit(c+1801,"top riscv_core_i id_stage_i controller_i first_fetch_o", false,-1);
        vcdp->declBit(c+3209,"top riscv_core_i id_stage_i controller_i is_decoding_o", false,-1);
        vcdp->declBit(c+545,"top riscv_core_i id_stage_i controller_i deassert_we_o", false,-1);
        vcdp->declBit(c+3529,"top riscv_core_i id_stage_i controller_i illegal_insn_i", false,-1);
        vcdp->declBit(c+1865,"top riscv_core_i id_stage_i controller_i ecall_insn_i", false,-1);
        vcdp->declBit(c+1849,"top riscv_core_i id_stage_i controller_i mret_insn_i", false,-1);
        vcdp->declBit(c+1857,"top riscv_core_i id_stage_i controller_i uret_insn_i", false,-1);
        vcdp->declBit(c+1873,"top riscv_core_i id_stage_i controller_i pipe_flush_i", false,-1);
        vcdp->declBit(c+1841,"top riscv_core_i id_stage_i controller_i ebrk_insn_i", false,-1);
        vcdp->declBit(c+3617,"top riscv_core_i id_stage_i controller_i csr_status_i", false,-1);
        vcdp->declBit(c+1929,"top riscv_core_i id_stage_i controller_i instr_multicycle_i", false,-1);
        vcdp->declBit(c+3809,"top riscv_core_i id_stage_i controller_i instr_valid_i", false,-1);
        vcdp->declBit(c+1745,"top riscv_core_i id_stage_i controller_i instr_req_o", false,-1);
        vcdp->declBit(c+169,"top riscv_core_i id_stage_i controller_i pc_set_o", false,-1);
        vcdp->declBus(c+177,"top riscv_core_i id_stage_i controller_i pc_mux_o", false,-1, 2,0);
        vcdp->declBus(c+3185,"top riscv_core_i id_stage_i controller_i exc_pc_mux_o", false,-1, 1,0);
        vcdp->declBit(c+3201,"top riscv_core_i id_stage_i controller_i trap_addr_mux_o", false,-1);
        vcdp->declBit(c+4169,"top riscv_core_i id_stage_i controller_i data_req_ex_i", false,-1);
        vcdp->declBit(c+3217,"top riscv_core_i id_stage_i controller_i data_misaligned_i", false,-1);
        vcdp->declBit(c+2105,"top riscv_core_i id_stage_i controller_i data_load_event_i", false,-1);
        vcdp->declBit(c+3225,"top riscv_core_i id_stage_i controller_i mult_multicycle_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i controller_i apu_en_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i controller_i apu_read_dep_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i controller_i apu_write_dep_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i controller_i apu_stall_o", false,-1);
        vcdp->declBit(c+1905,"top riscv_core_i id_stage_i controller_i branch_taken_ex_i", false,-1);
        vcdp->declBus(c+553,"top riscv_core_i id_stage_i controller_i jump_in_id_i", false,-1, 1,0);
        vcdp->declBus(c+1913,"top riscv_core_i id_stage_i controller_i jump_in_dec_i", false,-1, 1,0);
        vcdp->declBit(c+4529,"top riscv_core_i id_stage_i controller_i irq_req_ctrl_i", false,-1);
        vcdp->declBit(c+4537,"top riscv_core_i id_stage_i controller_i irq_sec_ctrl_i", false,-1);
        vcdp->declBus(c+3777,"top riscv_core_i id_stage_i controller_i irq_id_ctrl_i", false,-1, 4,0);
        vcdp->declBit(c+1753,"top riscv_core_i id_stage_i controller_i m_IE_i", false,-1);
        vcdp->declBit(c+4185,"top riscv_core_i id_stage_i controller_i u_IE_i", false,-1);
        vcdp->declBus(c+4145,"top riscv_core_i id_stage_i controller_i current_priv_lvl_i", false,-1, 1,0);
        vcdp->declBit(c+1625,"top riscv_core_i id_stage_i controller_i irq_ack_o", false,-1);
        vcdp->declBus(c+3777,"top riscv_core_i id_stage_i controller_i irq_id_o", false,-1, 4,0);
        vcdp->declBus(c+3193,"top riscv_core_i id_stage_i controller_i exc_cause_o", false,-1, 5,0);
        vcdp->declBit(c+1969,"top riscv_core_i id_stage_i controller_i exc_ack_o", false,-1);
        vcdp->declBit(c+569,"top riscv_core_i id_stage_i controller_i exc_kill_o", false,-1);
        vcdp->declBit(c+1769,"top riscv_core_i id_stage_i controller_i csr_save_if_o", false,-1);
        vcdp->declBit(c+3265,"top riscv_core_i id_stage_i controller_i csr_save_id_o", false,-1);
        vcdp->declBus(c+3273,"top riscv_core_i id_stage_i controller_i csr_cause_o", false,-1, 5,0);
        vcdp->declBit(c+1761,"top riscv_core_i id_stage_i controller_i csr_irq_sec_o", false,-1);
        vcdp->declBit(c+3281,"top riscv_core_i id_stage_i controller_i csr_restore_mret_id_o", false,-1);
        vcdp->declBit(c+3289,"top riscv_core_i id_stage_i controller_i csr_restore_uret_id_o", false,-1);
        vcdp->declBit(c+3257,"top riscv_core_i id_stage_i controller_i csr_save_cause_o", false,-1);
        vcdp->declBit(c+289,"top riscv_core_i id_stage_i controller_i dbg_req_i", false,-1);
        vcdp->declBit(c+1777,"top riscv_core_i id_stage_i controller_i dbg_ack_o", false,-1);
        vcdp->declBit(c+297,"top riscv_core_i id_stage_i controller_i dbg_stall_i", false,-1);
        vcdp->declBit(c+4289,"top riscv_core_i id_stage_i controller_i dbg_jump_req_i", false,-1);
        vcdp->declBus(c+4241,"top riscv_core_i id_stage_i controller_i dbg_settings_i", false,-1, 5,0);
        vcdp->declBit(c+305,"top riscv_core_i id_stage_i controller_i dbg_trap_o", false,-1);
        vcdp->declBus(c+1985,"top riscv_core_i id_stage_i controller_i regfile_alu_waddr_id_i", false,-1, 5,0);
        vcdp->declBit(c+4089,"top riscv_core_i id_stage_i controller_i regfile_we_ex_i", false,-1);
        vcdp->declBus(c+4081,"top riscv_core_i id_stage_i controller_i regfile_waddr_ex_i", false,-1, 5,0);
        vcdp->declBit(c+1697,"top riscv_core_i id_stage_i controller_i regfile_we_wb_i", false,-1);
        vcdp->declBit(c+1705,"top riscv_core_i id_stage_i controller_i regfile_alu_we_fw_i", false,-1);
        vcdp->declBus(c+3633,"top riscv_core_i id_stage_i controller_i operand_a_fw_mux_sel_o", false,-1, 1,0);
        vcdp->declBus(c+3641,"top riscv_core_i id_stage_i controller_i operand_b_fw_mux_sel_o", false,-1, 1,0);
        vcdp->declBus(c+3649,"top riscv_core_i id_stage_i controller_i operand_c_fw_mux_sel_o", false,-1, 1,0);
        vcdp->declBit(c+2225,"top riscv_core_i id_stage_i controller_i reg_d_ex_is_reg_a_i", false,-1);
        vcdp->declBit(c+2233,"top riscv_core_i id_stage_i controller_i reg_d_ex_is_reg_b_i", false,-1);
        vcdp->declBit(c+2241,"top riscv_core_i id_stage_i controller_i reg_d_ex_is_reg_c_i", false,-1);
        vcdp->declBit(c+2249,"top riscv_core_i id_stage_i controller_i reg_d_wb_is_reg_a_i", false,-1);
        vcdp->declBit(c+2257,"top riscv_core_i id_stage_i controller_i reg_d_wb_is_reg_b_i", false,-1);
        vcdp->declBit(c+2265,"top riscv_core_i id_stage_i controller_i reg_d_wb_is_reg_c_i", false,-1);
        vcdp->declBit(c+2273,"top riscv_core_i id_stage_i controller_i reg_d_alu_is_reg_a_i", false,-1);
        vcdp->declBit(c+2281,"top riscv_core_i id_stage_i controller_i reg_d_alu_is_reg_b_i", false,-1);
        vcdp->declBit(c+2289,"top riscv_core_i id_stage_i controller_i reg_d_alu_is_reg_c_i", false,-1);
        vcdp->declBit(c+209,"top riscv_core_i id_stage_i controller_i halt_if_o", false,-1);
        vcdp->declBit(c+561,"top riscv_core_i id_stage_i controller_i halt_id_o", false,-1);
        vcdp->declBit(c+3217,"top riscv_core_i id_stage_i controller_i misaligned_stall_o", false,-1);
        vcdp->declBit(c+1793,"top riscv_core_i id_stage_i controller_i jr_stall_o", false,-1);
        vcdp->declBit(c+345,"top riscv_core_i id_stage_i controller_i load_stall_o", false,-1);
        vcdp->declBit(c+217,"top riscv_core_i id_stage_i controller_i id_ready_i", false,-1);
        vcdp->declBit(c+241,"top riscv_core_i id_stage_i controller_i ex_valid_i", false,-1);
        vcdp->declBit(c+249,"top riscv_core_i id_stage_i controller_i wb_ready_i", false,-1);
        vcdp->declBit(c+337,"top riscv_core_i id_stage_i controller_i perf_jump_o", false,-1);
        vcdp->declBit(c+1793,"top riscv_core_i id_stage_i controller_i perf_jr_stall_o", false,-1);
        vcdp->declBit(c+345,"top riscv_core_i id_stage_i controller_i perf_ld_stall_o", false,-1);
        vcdp->declBus(c+4841,"top riscv_core_i id_stage_i controller_i ctrl_fsm_cs", false,-1, 4,0);
        vcdp->declBus(c+745,"top riscv_core_i id_stage_i controller_i ctrl_fsm_ns", false,-1, 4,0);
        vcdp->declBit(c+753,"top riscv_core_i id_stage_i controller_i jump_done", false,-1);
        vcdp->declBit(c+4849,"top riscv_core_i id_stage_i controller_i jump_done_q", false,-1);
        vcdp->declBit(c+761,"top riscv_core_i id_stage_i controller_i jump_in_dec", false,-1);
        vcdp->declBit(c+769,"top riscv_core_i id_stage_i controller_i branch_in_id", false,-1);
        vcdp->declBit(c+2345,"top riscv_core_i id_stage_i controller_i boot_done", false,-1);
        vcdp->declBit(c+4857,"top riscv_core_i id_stage_i controller_i boot_done_q", false,-1);
        vcdp->declBit(c+777,"top riscv_core_i id_stage_i controller_i irq_enable_int", false,-1);
        vcdp->declBus(c+5721,"top riscv_core_i id_stage_i int_controller_i PULP_SECURE", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i id_stage_i int_controller_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i id_stage_i int_controller_i rst_n", false,-1);
        vcdp->declBit(c+4529,"top riscv_core_i id_stage_i int_controller_i irq_req_ctrl_o", false,-1);
        vcdp->declBit(c+4537,"top riscv_core_i id_stage_i int_controller_i irq_sec_ctrl_o", false,-1);
        vcdp->declBus(c+3777,"top riscv_core_i id_stage_i int_controller_i irq_id_ctrl_o", false,-1, 4,0);
        vcdp->declBit(c+1969,"top riscv_core_i id_stage_i int_controller_i ctrl_ack_i", false,-1);
        vcdp->declBit(c+569,"top riscv_core_i id_stage_i int_controller_i ctrl_kill_i", false,-1);
        vcdp->declBit(c+5545,"top riscv_core_i id_stage_i int_controller_i irq_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i id_stage_i int_controller_i irq_sec_i", false,-1);
        vcdp->declBus(c+5553,"top riscv_core_i id_stage_i int_controller_i irq_id_i", false,-1, 4,0);
        vcdp->declBit(c+1753,"top riscv_core_i id_stage_i int_controller_i m_IE_i", false,-1);
        vcdp->declBit(c+4185,"top riscv_core_i id_stage_i int_controller_i u_IE_i", false,-1);
        vcdp->declBus(c+4145,"top riscv_core_i id_stage_i int_controller_i current_priv_lvl_i", false,-1, 1,0);
        vcdp->declBus(c+4865,"top riscv_core_i id_stage_i int_controller_i exc_ctrl_cs", false,-1, 1,0);
        vcdp->declBus(c+6225,"top riscv_core_i id_stage_i int_controller_i exc_ctrl_ns", false,-1, 1,0);
        vcdp->declBit(c+1753,"top riscv_core_i id_stage_i int_controller_i irq_enable_ext", false,-1);
        vcdp->declBus(c+3777,"top riscv_core_i id_stage_i int_controller_i irq_id_q", false,-1, 4,0);
        vcdp->declBit(c+4537,"top riscv_core_i id_stage_i int_controller_i irq_sec_q", false,-1);
        vcdp->declBus(c+5849,"top riscv_core_i id_stage_i hwloop_regs_i N_REGS", false,-1, 31,0);
        vcdp->declBus(c+5857,"top riscv_core_i id_stage_i hwloop_regs_i N_REG_BITS", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i id_stage_i hwloop_regs_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i id_stage_i hwloop_regs_i rst_n", false,-1);
        vcdp->declBus(c+1593,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_start_data_i", false,-1, 31,0);
        vcdp->declBus(c+1601,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_end_data_i", false,-1, 31,0);
        vcdp->declBus(c+625,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_cnt_data_i", false,-1, 31,0);
        vcdp->declBus(c+609,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_we_i", false,-1, 2,0);
        vcdp->declBus(c+601,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_regid_i", false,-1, 0,0);
        vcdp->declBit(c+641,"top riscv_core_i id_stage_i hwloop_regs_i valid_i", false,-1);
        vcdp->declBus(c+3801,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_dec_cnt_i", false,-1, 1,0);
        vcdp->declQuad(c+4193,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_start_addr_o", false,-1, 63,0);
        vcdp->declQuad(c+4209,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_end_addr_o", false,-1, 63,0);
        vcdp->declQuad(c+4225,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_counter_o", false,-1, 63,0);
        vcdp->declQuad(c+4193,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_start_q", false,-1, 63,0);
        vcdp->declQuad(c+4209,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_end_q", false,-1, 63,0);
        vcdp->declQuad(c+4225,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_counter_q", false,-1, 63,0);
        vcdp->declQuad(c+2353,"top riscv_core_i id_stage_i hwloop_regs_i hwlp_counter_n", false,-1, 63,0);
        vcdp->declBus(c+4873,"top riscv_core_i id_stage_i hwloop_regs_i i", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i ex_stage_i FPU", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i ex_stage_i SHARED_FP", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i ex_stage_i SHARED_DSP_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i ex_stage_i SHARED_INT_DIV", false,-1, 31,0);
        vcdp->declBus(c+5729,"top riscv_core_i ex_stage_i APU_NARGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5737,"top riscv_core_i ex_stage_i APU_WOP_CPU", false,-1, 31,0);
        vcdp->declBus(c+5745,"top riscv_core_i ex_stage_i APU_NDSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5753,"top riscv_core_i ex_stage_i APU_NUSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i ex_stage_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i ex_stage_i rst_n", false,-1);
        vcdp->declBus(c+3873,"top riscv_core_i ex_stage_i alu_operator_i", false,-1, 6,0);
        vcdp->declBus(c+3881,"top riscv_core_i ex_stage_i alu_operand_a_i", false,-1, 31,0);
        vcdp->declBus(c+3889,"top riscv_core_i ex_stage_i alu_operand_b_i", false,-1, 31,0);
        vcdp->declBus(c+5489,"top riscv_core_i ex_stage_i alu_operand_c_i", false,-1, 31,0);
        vcdp->declBit(c+3865,"top riscv_core_i ex_stage_i alu_en_i", false,-1);
        vcdp->declBus(c+3897,"top riscv_core_i ex_stage_i bmask_a_i", false,-1, 4,0);
        vcdp->declBus(c+3905,"top riscv_core_i ex_stage_i bmask_b_i", false,-1, 4,0);
        vcdp->declBus(c+3913,"top riscv_core_i ex_stage_i imm_vec_ext_i", false,-1, 1,0);
        vcdp->declBus(c+3921,"top riscv_core_i ex_stage_i alu_vec_mode_i", false,-1, 1,0);
        vcdp->declBus(c+3929,"top riscv_core_i ex_stage_i mult_operator_i", false,-1, 2,0);
        vcdp->declBus(c+3937,"top riscv_core_i ex_stage_i mult_operand_a_i", false,-1, 31,0);
        vcdp->declBus(c+3945,"top riscv_core_i ex_stage_i mult_operand_b_i", false,-1, 31,0);
        vcdp->declBus(c+3953,"top riscv_core_i ex_stage_i mult_operand_c_i", false,-1, 31,0);
        vcdp->declBit(c+3961,"top riscv_core_i ex_stage_i mult_en_i", false,-1);
        vcdp->declBit(c+3969,"top riscv_core_i ex_stage_i mult_sel_subword_i", false,-1);
        vcdp->declBus(c+3977,"top riscv_core_i ex_stage_i mult_signed_mode_i", false,-1, 1,0);
        vcdp->declBus(c+3985,"top riscv_core_i ex_stage_i mult_imm_i", false,-1, 4,0);
        vcdp->declBus(c+3993,"top riscv_core_i ex_stage_i mult_dot_op_a_i", false,-1, 31,0);
        vcdp->declBus(c+4001,"top riscv_core_i ex_stage_i mult_dot_op_b_i", false,-1, 31,0);
        vcdp->declBus(c+4009,"top riscv_core_i ex_stage_i mult_dot_op_c_i", false,-1, 31,0);
        vcdp->declBus(c+4017,"top riscv_core_i ex_stage_i mult_dot_signed_i", false,-1, 1,0);
        vcdp->declBit(c+3225,"top riscv_core_i ex_stage_i mult_multicycle_o", false,-1);
        vcdp->declBus(c+4025,"top riscv_core_i ex_stage_i fpu_op_i", false,-1, 3,0);
        vcdp->declBus(c+5865,"top riscv_core_i ex_stage_i fpu_prec_i", false,-1, 4,0);
        vcdp->declBus(c+5865,"top riscv_core_i ex_stage_i fpu_fflags_o", false,-1, 4,0);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i fpu_fflags_we_o", false,-1);
        vcdp->declBit(c+4033,"top riscv_core_i ex_stage_i apu_en_i", false,-1);
        vcdp->declBus(c+4057,"top riscv_core_i ex_stage_i apu_op_i", false,-1, 5,0);
        vcdp->declBus(c+4065,"top riscv_core_i ex_stage_i apu_lat_i", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+2369+i*1,"top riscv_core_i ex_stage_i apu_operands_i", true,(i+0), 31,0);}}
        vcdp->declBus(c+4073,"top riscv_core_i ex_stage_i apu_waddr_i", false,-1, 5,0);
        vcdp->declBus(c+4049,"top riscv_core_i ex_stage_i apu_flags_i", false,-1, 14,0);
        vcdp->declBus(c+5881,"top riscv_core_i ex_stage_i apu_read_regs_i", false,-1, 17,0);
        vcdp->declBus(c+5873,"top riscv_core_i ex_stage_i apu_read_regs_valid_i", false,-1, 2,0);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_read_dep_o", false,-1);
        vcdp->declBus(c+5889,"top riscv_core_i ex_stage_i apu_write_regs_i", false,-1, 11,0);
        vcdp->declBus(c+5801,"top riscv_core_i ex_stage_i apu_write_regs_valid_i", false,-1, 1,0);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_write_dep_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_perf_type_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_perf_cont_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_perf_wb_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_busy_o", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i ex_stage_i apu_ready_wb_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_master_req_o", false,-1);
        vcdp->declBit(c+5761,"top riscv_core_i ex_stage_i apu_master_ready_o", false,-1);
        vcdp->declBit(c+5793,"top riscv_core_i ex_stage_i apu_master_gnt_i", false,-1);
        {int i; for (i=0; i<3; i++) {
                vcdp->declBus(c+49+i*1,"top riscv_core_i ex_stage_i apu_master_operands_o", true,(i+0), 31,0);}}
        vcdp->declBus(c+5777,"top riscv_core_i ex_stage_i apu_master_op_o", false,-1, 5,0);
        vcdp->declBit(c+5817,"top riscv_core_i ex_stage_i apu_master_valid_i", false,-1);
        vcdp->declBus(c+5825,"top riscv_core_i ex_stage_i apu_master_result_i", false,-1, 31,0);
        vcdp->declBit(c+4169,"top riscv_core_i ex_stage_i lsu_en_i", false,-1);
        vcdp->declBus(c+3241,"top riscv_core_i ex_stage_i lsu_rdata_i", false,-1, 31,0);
        vcdp->declBit(c+3849,"top riscv_core_i ex_stage_i branch_in_ex_i", false,-1);
        vcdp->declBus(c+4105,"top riscv_core_i ex_stage_i regfile_alu_waddr_i", false,-1, 5,0);
        vcdp->declBit(c+4113,"top riscv_core_i ex_stage_i regfile_alu_we_i", false,-1);
        vcdp->declBit(c+4089,"top riscv_core_i ex_stage_i regfile_we_i", false,-1);
        vcdp->declBus(c+4081,"top riscv_core_i ex_stage_i regfile_waddr_i", false,-1, 5,0);
        vcdp->declBit(c+4121,"top riscv_core_i ex_stage_i csr_access_i", false,-1);
        vcdp->declBus(c+1729,"top riscv_core_i ex_stage_i csr_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+4097,"top riscv_core_i ex_stage_i regfile_waddr_wb_o", false,-1, 5,0);
        vcdp->declBit(c+1697,"top riscv_core_i ex_stage_i regfile_we_wb_o", false,-1);
        vcdp->declBus(c+3241,"top riscv_core_i ex_stage_i regfile_wdata_wb_o", false,-1, 31,0);
        vcdp->declBus(c+4105,"top riscv_core_i ex_stage_i regfile_alu_waddr_fw_o", false,-1, 5,0);
        vcdp->declBit(c+1705,"top riscv_core_i ex_stage_i regfile_alu_we_fw_o", false,-1);
        vcdp->declBus(c+193,"top riscv_core_i ex_stage_i regfile_alu_wdata_fw_o", false,-1, 31,0);
        vcdp->declBus(c+5489,"top riscv_core_i ex_stage_i jump_target_o", false,-1, 31,0);
        vcdp->declBit(c+1657,"top riscv_core_i ex_stage_i branch_decision_o", false,-1);
        vcdp->declBit(c+257,"top riscv_core_i ex_stage_i lsu_ready_ex_i", false,-1);
        vcdp->declBit(c+225,"top riscv_core_i ex_stage_i ex_ready_o", false,-1);
        vcdp->declBit(c+241,"top riscv_core_i ex_stage_i ex_valid_o", false,-1);
        vcdp->declBit(c+249,"top riscv_core_i ex_stage_i wb_ready_i", false,-1);
        vcdp->declBus(c+785,"top riscv_core_i ex_stage_i alu_result", false,-1, 31,0);
        vcdp->declBus(c+793,"top riscv_core_i ex_stage_i mult_result", false,-1, 31,0);
        vcdp->declBit(c+1657,"top riscv_core_i ex_stage_i alu_cmp_result", false,-1);
        vcdp->declBit(c+4881,"top riscv_core_i ex_stage_i regfile_we_lsu", false,-1);
        vcdp->declBus(c+4097,"top riscv_core_i ex_stage_i regfile_waddr_lsu", false,-1, 5,0);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i wb_contention", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i wb_contention_lsu", false,-1);
        vcdp->declBit(c+801,"top riscv_core_i ex_stage_i alu_ready", false,-1);
        vcdp->declBit(c+2393,"top riscv_core_i ex_stage_i mult_ready", false,-1);
        vcdp->declBit(c+6233,"top riscv_core_i ex_stage_i fpu_busy", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_valid", false,-1);
        vcdp->declBus(c+5777,"top riscv_core_i ex_stage_i apu_waddr", false,-1, 5,0);
        vcdp->declBus(c+6241,"top riscv_core_i ex_stage_i apu_result", false,-1, 31,0);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_stall", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_active", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_singlecycle", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i apu_multicycle", false,-1);
        vcdp->declBit(c+6249,"top riscv_core_i ex_stage_i apu_req", false,-1);
        vcdp->declBit(c+6257,"top riscv_core_i ex_stage_i apu_ready", false,-1);
        vcdp->declBit(c+6265,"top riscv_core_i ex_stage_i apu_gnt", false,-1);
        vcdp->declBus(c+5721,"top riscv_core_i ex_stage_i alu_i SHARED_INT_DIV", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i ex_stage_i alu_i FPU", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i ex_stage_i alu_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i ex_stage_i alu_i rst_n", false,-1);
        vcdp->declBit(c+3865,"top riscv_core_i ex_stage_i alu_i enable_i", false,-1);
        vcdp->declBus(c+3873,"top riscv_core_i ex_stage_i alu_i operator_i", false,-1, 6,0);
        vcdp->declBus(c+3881,"top riscv_core_i ex_stage_i alu_i operand_a_i", false,-1, 31,0);
        vcdp->declBus(c+3889,"top riscv_core_i ex_stage_i alu_i operand_b_i", false,-1, 31,0);
        vcdp->declBus(c+5489,"top riscv_core_i ex_stage_i alu_i operand_c_i", false,-1, 31,0);
        vcdp->declBus(c+3921,"top riscv_core_i ex_stage_i alu_i vector_mode_i", false,-1, 1,0);
        vcdp->declBus(c+3897,"top riscv_core_i ex_stage_i alu_i bmask_a_i", false,-1, 4,0);
        vcdp->declBus(c+3905,"top riscv_core_i ex_stage_i alu_i bmask_b_i", false,-1, 4,0);
        vcdp->declBus(c+3913,"top riscv_core_i ex_stage_i alu_i imm_vec_ext_i", false,-1, 1,0);
        vcdp->declBus(c+785,"top riscv_core_i ex_stage_i alu_i result_o", false,-1, 31,0);
        vcdp->declBit(c+1657,"top riscv_core_i ex_stage_i alu_i comparison_result_o", false,-1);
        vcdp->declBit(c+801,"top riscv_core_i ex_stage_i alu_i ready_o", false,-1);
        vcdp->declBit(c+225,"top riscv_core_i ex_stage_i alu_i ex_ready_i", false,-1);
        vcdp->declBus(c+2401,"top riscv_core_i ex_stage_i alu_i operand_a_rev", false,-1, 31,0);
        vcdp->declBus(c+4889,"top riscv_core_i ex_stage_i alu_i operand_a_neg", false,-1, 31,0);
        vcdp->declBus(c+2409,"top riscv_core_i ex_stage_i alu_i operand_a_neg_rev", false,-1, 31,0);
        vcdp->declBus(c+4897,"top riscv_core_i ex_stage_i alu_i operand_b_neg", false,-1, 31,0);
        vcdp->declBus(c+809,"top riscv_core_i ex_stage_i alu_i div_shift", false,-1, 5,0);
        vcdp->declBit(c+2417,"top riscv_core_i ex_stage_i alu_i div_valid", false,-1);
        vcdp->declBus(c+2425,"top riscv_core_i ex_stage_i alu_i bmask", false,-1, 31,0);
        vcdp->declBit(c+2433,"top riscv_core_i ex_stage_i alu_i adder_op_b_negate", false,-1);
        vcdp->declBus(c+2441,"top riscv_core_i ex_stage_i alu_i adder_op_a", false,-1, 31,0);
        vcdp->declBus(c+2449,"top riscv_core_i ex_stage_i alu_i adder_op_b", false,-1, 31,0);
        vcdp->declQuad(c+2457,"top riscv_core_i ex_stage_i alu_i adder_in_a", false,-1, 35,0);
        vcdp->declQuad(c+2473,"top riscv_core_i ex_stage_i alu_i adder_in_b", false,-1, 35,0);
        vcdp->declBus(c+2489,"top riscv_core_i ex_stage_i alu_i adder_result", false,-1, 31,0);
        vcdp->declQuad(c+2497,"top riscv_core_i ex_stage_i alu_i adder_result_expanded", false,-1, 36,0);
        vcdp->declBus(c+2513,"top riscv_core_i ex_stage_i alu_i adder_round_value", false,-1, 31,0);
        vcdp->declBus(c+2521,"top riscv_core_i ex_stage_i alu_i adder_round_result", false,-1, 31,0);
        vcdp->declBit(c+2529,"top riscv_core_i ex_stage_i alu_i shift_left", false,-1);
        vcdp->declBit(c+2537,"top riscv_core_i ex_stage_i alu_i shift_use_round", false,-1);
        vcdp->declBit(c+2545,"top riscv_core_i ex_stage_i alu_i shift_arithmetic", false,-1);
        vcdp->declBus(c+817,"top riscv_core_i ex_stage_i alu_i shift_amt_left", false,-1, 31,0);
        vcdp->declBus(c+825,"top riscv_core_i ex_stage_i alu_i shift_amt", false,-1, 31,0);
        vcdp->declBus(c+833,"top riscv_core_i ex_stage_i alu_i shift_amt_int", false,-1, 31,0);
        vcdp->declBus(c+4905,"top riscv_core_i ex_stage_i alu_i shift_amt_norm", false,-1, 31,0);
        vcdp->declBus(c+2553,"top riscv_core_i ex_stage_i alu_i shift_op_a", false,-1, 31,0);
        vcdp->declBus(c+841,"top riscv_core_i ex_stage_i alu_i shift_result", false,-1, 31,0);
        vcdp->declBus(c+849,"top riscv_core_i ex_stage_i alu_i shift_right_result", false,-1, 31,0);
        vcdp->declBus(c+857,"top riscv_core_i ex_stage_i alu_i shift_left_result", false,-1, 31,0);
        vcdp->declQuad(c+2561,"top riscv_core_i ex_stage_i alu_i shift_op_a_32", false,-1, 63,0);
        vcdp->declBus(c+2577,"top riscv_core_i ex_stage_i alu_i is_equal", false,-1, 3,0);
        vcdp->declBus(c+2585,"top riscv_core_i ex_stage_i alu_i is_greater", false,-1, 3,0);
        vcdp->declBus(c+2593,"top riscv_core_i ex_stage_i alu_i f_is_greater", false,-1, 3,0);
        vcdp->declBus(c+2601,"top riscv_core_i ex_stage_i alu_i cmp_signed", false,-1, 3,0);
        vcdp->declBus(c+2609,"top riscv_core_i ex_stage_i alu_i is_equal_vec", false,-1, 3,0);
        vcdp->declBus(c+2617,"top riscv_core_i ex_stage_i alu_i is_greater_vec", false,-1, 3,0);
        vcdp->declBus(c+2625,"top riscv_core_i ex_stage_i alu_i cmp_result", false,-1, 3,0);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i alu_i f_is_qnan", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i alu_i f_is_snan", false,-1);
        vcdp->declBus(c+2633,"top riscv_core_i ex_stage_i alu_i f_is_nan", false,-1, 3,0);
        vcdp->declBus(c+2641,"top riscv_core_i ex_stage_i alu_i result_minmax", false,-1, 31,0);
        vcdp->declBus(c+6273,"top riscv_core_i ex_stage_i alu_i fp_canonical_nan", false,-1, 31,0);
        vcdp->declBus(c+2649,"top riscv_core_i ex_stage_i alu_i sel_minmax", false,-1, 3,0);
        vcdp->declBit(c+4913,"top riscv_core_i ex_stage_i alu_i do_min", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i ex_stage_i alu_i minmax_is_fp_special", false,-1);
        vcdp->declBus(c+2657,"top riscv_core_i ex_stage_i alu_i minmax_b", false,-1, 31,0);
        vcdp->declBus(c+6273,"top riscv_core_i ex_stage_i alu_i fclass_result", false,-1, 31,0);
        vcdp->declBus(c+6273,"top riscv_core_i ex_stage_i alu_i f_sign_inject_result", false,-1, 31,0);
        vcdp->declBus(c+2665,"top riscv_core_i ex_stage_i alu_i clip_result", false,-1, 31,0);
        vcdp->declBit(c+2673,"top riscv_core_i ex_stage_i alu_i clip_is_lower_neg", false,-1);
        vcdp->declBit(c+4921,"top riscv_core_i ex_stage_i alu_i clip_is_lower_u", false,-1);
        vcdp->declBus(c+2681,"top riscv_core_i ex_stage_i alu_i shuffle_byte_sel", false,-1, 7,0);
        vcdp->declBus(c+2689,"top riscv_core_i ex_stage_i alu_i shuffle_reg_sel", false,-1, 3,0);
        vcdp->declBus(c+2697,"top riscv_core_i ex_stage_i alu_i shuffle_reg1_sel", false,-1, 1,0);
        vcdp->declBus(c+2705,"top riscv_core_i ex_stage_i alu_i shuffle_reg0_sel", false,-1, 1,0);
        vcdp->declBus(c+2713,"top riscv_core_i ex_stage_i alu_i shuffle_through", false,-1, 3,0);
        vcdp->declBus(c+3681,"top riscv_core_i ex_stage_i alu_i shuffle_r1", false,-1, 31,0);
        vcdp->declBus(c+2721,"top riscv_core_i ex_stage_i alu_i shuffle_r0", false,-1, 31,0);
        vcdp->declBus(c+3689,"top riscv_core_i ex_stage_i alu_i shuffle_r1_in", false,-1, 31,0);
        vcdp->declBus(c+2729,"top riscv_core_i ex_stage_i alu_i shuffle_r0_in", false,-1, 31,0);
        vcdp->declBus(c+3697,"top riscv_core_i ex_stage_i alu_i shuffle_result", false,-1, 31,0);
        vcdp->declBus(c+3705,"top riscv_core_i ex_stage_i alu_i pack_result", false,-1, 31,0);
        vcdp->declBus(c+2737,"top riscv_core_i ex_stage_i alu_i ff_input", false,-1, 31,0);
        vcdp->declBus(c+2745,"top riscv_core_i ex_stage_i alu_i cnt_result", false,-1, 5,0);
        vcdp->declBus(c+1337,"top riscv_core_i ex_stage_i alu_i clb_result", false,-1, 5,0);
        vcdp->declBus(c+1345,"top riscv_core_i ex_stage_i alu_i ff1_result", false,-1, 4,0);
        vcdp->declBit(c+1353,"top riscv_core_i ex_stage_i alu_i ff_no_one", false,-1);
        vcdp->declBus(c+1361,"top riscv_core_i ex_stage_i alu_i fl1_result", false,-1, 4,0);
        vcdp->declBus(c+865,"top riscv_core_i ex_stage_i alu_i bitop_result", false,-1, 5,0);
        vcdp->declBit(c+4929,"top riscv_core_i ex_stage_i alu_i extract_is_signed", false,-1);
        vcdp->declBit(c+1369,"top riscv_core_i ex_stage_i alu_i extract_sign", false,-1);
        vcdp->declBus(c+4937,"top riscv_core_i ex_stage_i alu_i bmask_first", false,-1, 31,0);
        vcdp->declBus(c+2753,"top riscv_core_i ex_stage_i alu_i bmask_inv", false,-1, 31,0);
        vcdp->declBus(c+1569,"top riscv_core_i ex_stage_i alu_i bextins_and", false,-1, 31,0);
        vcdp->declBus(c+873,"top riscv_core_i ex_stage_i alu_i bextins_result", false,-1, 31,0);
        vcdp->declBus(c+2761,"top riscv_core_i ex_stage_i alu_i bclr_result", false,-1, 31,0);
        vcdp->declBus(c+2769,"top riscv_core_i ex_stage_i alu_i bset_result", false,-1, 31,0);
        vcdp->declBus(c+2777,"top riscv_core_i ex_stage_i alu_i result_div", false,-1, 31,0);
        vcdp->declBit(c+801,"top riscv_core_i ex_stage_i alu_i div_ready", false,-1);
        vcdp->declBit(c+4945,"top riscv_core_i ex_stage_i alu_i int_div div_signed", false,-1);
        vcdp->declBit(c+2785,"top riscv_core_i ex_stage_i alu_i int_div div_op_a_signed", false,-1);
        vcdp->declBit(c+4953,"top riscv_core_i ex_stage_i alu_i int_div div_op_b_signed", false,-1);
        vcdp->declBus(c+1377,"top riscv_core_i ex_stage_i alu_i int_div div_shift_int", false,-1, 5,0);
        vcdp->declBus(c+3881,"top riscv_core_i ex_stage_i alu_i alu_popcnt_i in_i", false,-1, 31,0);
        vcdp->declBus(c+2745,"top riscv_core_i ex_stage_i alu_i alu_popcnt_i result_o", false,-1, 5,0);
        vcdp->declBus(c+2793,"top riscv_core_i ex_stage_i alu_i alu_popcnt_i cnt_l1", false,-1, 31,0);
        vcdp->declBus(c+2801,"top riscv_core_i ex_stage_i alu_i alu_popcnt_i cnt_l2", false,-1, 23,0);
        vcdp->declBus(c+2809,"top riscv_core_i ex_stage_i alu_i alu_popcnt_i cnt_l3", false,-1, 15,0);
        vcdp->declBus(c+2817,"top riscv_core_i ex_stage_i alu_i alu_popcnt_i cnt_l4", false,-1, 9,0);
        vcdp->declBus(c+5953,"top riscv_core_i ex_stage_i alu_i alu_ff_i LEN", false,-1, 31,0);
        vcdp->declBus(c+2737,"top riscv_core_i ex_stage_i alu_i alu_ff_i in_i", false,-1, 31,0);
        vcdp->declBus(c+1345,"top riscv_core_i ex_stage_i alu_i alu_ff_i first_one_o", false,-1, 4,0);
        vcdp->declBit(c+1353,"top riscv_core_i ex_stage_i alu_i alu_ff_i no_ones_o", false,-1);
        vcdp->declBus(c+5753,"top riscv_core_i ex_stage_i alu_i alu_ff_i NUM_LEVELS", false,-1, 31,0);
        vcdp->declArray(c+73,"top riscv_core_i ex_stage_i alu_i alu_ff_i index_lut", false,-1, 159,0);
        vcdp->declBus(c+1385,"top riscv_core_i ex_stage_i alu_i alu_ff_i sel_nodes", false,-1, 31,0);
        vcdp->declArray(c+1393,"top riscv_core_i ex_stage_i alu_i alu_ff_i index_nodes", false,-1, 159,0);
        vcdp->declBus(c+5953,"top riscv_core_i ex_stage_i alu_i int_div div_i C_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+5737,"top riscv_core_i ex_stage_i alu_i int_div div_i C_LOG_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i ex_stage_i alu_i int_div div_i Clk_CI", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i ex_stage_i alu_i int_div div_i Rst_RBI", false,-1);
        vcdp->declBus(c+3889,"top riscv_core_i ex_stage_i alu_i int_div div_i OpA_DI", false,-1, 31,0);
        vcdp->declBus(c+857,"top riscv_core_i ex_stage_i alu_i int_div div_i OpB_DI", false,-1, 31,0);
        vcdp->declBus(c+809,"top riscv_core_i ex_stage_i alu_i int_div div_i OpBShift_DI", false,-1, 5,0);
        vcdp->declBit(c+2825,"top riscv_core_i ex_stage_i alu_i int_div div_i OpBIsZero_SI", false,-1);
        vcdp->declBit(c+2785,"top riscv_core_i ex_stage_i alu_i int_div div_i OpBSign_SI", false,-1);
        vcdp->declBus(c+4961,"top riscv_core_i ex_stage_i alu_i int_div div_i OpCode_SI", false,-1, 1,0);
        vcdp->declBit(c+2417,"top riscv_core_i ex_stage_i alu_i int_div div_i InVld_SI", false,-1);
        vcdp->declBit(c+225,"top riscv_core_i ex_stage_i alu_i int_div div_i OutRdy_SI", false,-1);
        vcdp->declBit(c+801,"top riscv_core_i ex_stage_i alu_i int_div div_i OutVld_SO", false,-1);
        vcdp->declBus(c+2777,"top riscv_core_i ex_stage_i alu_i int_div div_i Res_DO", false,-1, 31,0);
        vcdp->declBus(c+4969,"top riscv_core_i ex_stage_i alu_i int_div div_i ResReg_DP", false,-1, 31,0);
        vcdp->declBus(c+1433,"top riscv_core_i ex_stage_i alu_i int_div div_i ResReg_DN", false,-1, 31,0);
        vcdp->declBus(c+2833,"top riscv_core_i ex_stage_i alu_i int_div div_i ResReg_DP_rev", false,-1, 31,0);
        vcdp->declBus(c+4977,"top riscv_core_i ex_stage_i alu_i int_div div_i AReg_DP", false,-1, 31,0);
        vcdp->declBus(c+1441,"top riscv_core_i ex_stage_i alu_i int_div div_i AReg_DN", false,-1, 31,0);
        vcdp->declBus(c+4985,"top riscv_core_i ex_stage_i alu_i int_div div_i BReg_DP", false,-1, 31,0);
        vcdp->declBus(c+1449,"top riscv_core_i ex_stage_i alu_i int_div div_i BReg_DN", false,-1, 31,0);
        vcdp->declBit(c+1457,"top riscv_core_i ex_stage_i alu_i int_div div_i RemSel_SN", false,-1);
        vcdp->declBit(c+4993,"top riscv_core_i ex_stage_i alu_i int_div div_i RemSel_SP", false,-1);
        vcdp->declBit(c+1465,"top riscv_core_i ex_stage_i alu_i int_div div_i CompInv_SN", false,-1);
        vcdp->declBit(c+5001,"top riscv_core_i ex_stage_i alu_i int_div div_i CompInv_SP", false,-1);
        vcdp->declBit(c+1473,"top riscv_core_i ex_stage_i alu_i int_div div_i ResInv_SN", false,-1);
        vcdp->declBit(c+5009,"top riscv_core_i ex_stage_i alu_i int_div div_i ResInv_SP", false,-1);
        vcdp->declBus(c+881,"top riscv_core_i ex_stage_i alu_i int_div div_i AddMux_D", false,-1, 31,0);
        vcdp->declBus(c+1481,"top riscv_core_i ex_stage_i alu_i int_div div_i AddOut_D", false,-1, 31,0);
        vcdp->declBus(c+889,"top riscv_core_i ex_stage_i alu_i int_div div_i AddTmp_D", false,-1, 31,0);
        vcdp->declBus(c+1489,"top riscv_core_i ex_stage_i alu_i int_div div_i BMux_D", false,-1, 31,0);
        vcdp->declBus(c+2841,"top riscv_core_i ex_stage_i alu_i int_div div_i OutMux_D", false,-1, 31,0);
        vcdp->declBus(c+5017,"top riscv_core_i ex_stage_i alu_i int_div div_i Cnt_DP", false,-1, 5,0);
        vcdp->declBus(c+1497,"top riscv_core_i ex_stage_i alu_i int_div div_i Cnt_DN", false,-1, 5,0);
        vcdp->declBit(c+5025,"top riscv_core_i ex_stage_i alu_i int_div div_i CntZero_S", false,-1);
        vcdp->declBit(c+897,"top riscv_core_i ex_stage_i alu_i int_div div_i ARegEn_S", false,-1);
        vcdp->declBit(c+905,"top riscv_core_i ex_stage_i alu_i int_div div_i BRegEn_S", false,-1);
        vcdp->declBit(c+913,"top riscv_core_i ex_stage_i alu_i int_div div_i ResRegEn_S", false,-1);
        vcdp->declBit(c+2849,"top riscv_core_i ex_stage_i alu_i int_div div_i ABComp_S", false,-1);
        vcdp->declBit(c+1505,"top riscv_core_i ex_stage_i alu_i int_div div_i PmSel_S", false,-1);
        vcdp->declBit(c+921,"top riscv_core_i ex_stage_i alu_i int_div div_i LoadEn_S", false,-1);
        vcdp->declBus(c+929,"top riscv_core_i ex_stage_i alu_i int_div div_i State_SN", false,-1, 1,0);
        vcdp->declBus(c+5033,"top riscv_core_i ex_stage_i alu_i int_div div_i State_SP", false,-1, 1,0);
        vcdp->declBus(c+5721,"top riscv_core_i ex_stage_i mult_i SHARED_DSP_MULT", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i ex_stage_i mult_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i ex_stage_i mult_i rst_n", false,-1);
        vcdp->declBit(c+3961,"top riscv_core_i ex_stage_i mult_i enable_i", false,-1);
        vcdp->declBus(c+3929,"top riscv_core_i ex_stage_i mult_i operator_i", false,-1, 2,0);
        vcdp->declBit(c+3969,"top riscv_core_i ex_stage_i mult_i short_subword_i", false,-1);
        vcdp->declBus(c+3977,"top riscv_core_i ex_stage_i mult_i short_signed_i", false,-1, 1,0);
        vcdp->declBus(c+3937,"top riscv_core_i ex_stage_i mult_i op_a_i", false,-1, 31,0);
        vcdp->declBus(c+3945,"top riscv_core_i ex_stage_i mult_i op_b_i", false,-1, 31,0);
        vcdp->declBus(c+3953,"top riscv_core_i ex_stage_i mult_i op_c_i", false,-1, 31,0);
        vcdp->declBus(c+3985,"top riscv_core_i ex_stage_i mult_i imm_i", false,-1, 4,0);
        vcdp->declBus(c+4017,"top riscv_core_i ex_stage_i mult_i dot_signed_i", false,-1, 1,0);
        vcdp->declBus(c+3993,"top riscv_core_i ex_stage_i mult_i dot_op_a_i", false,-1, 31,0);
        vcdp->declBus(c+4001,"top riscv_core_i ex_stage_i mult_i dot_op_b_i", false,-1, 31,0);
        vcdp->declBus(c+4009,"top riscv_core_i ex_stage_i mult_i dot_op_c_i", false,-1, 31,0);
        vcdp->declBus(c+793,"top riscv_core_i ex_stage_i mult_i result_o", false,-1, 31,0);
        vcdp->declBit(c+3225,"top riscv_core_i ex_stage_i mult_i multicycle_o", false,-1);
        vcdp->declBit(c+2393,"top riscv_core_i ex_stage_i mult_i ready_o", false,-1);
        vcdp->declBit(c+225,"top riscv_core_i ex_stage_i mult_i ex_ready_i", false,-1);
        vcdp->declBus(c+1513,"top riscv_core_i ex_stage_i mult_i short_op_a", false,-1, 16,0);
        vcdp->declBus(c+1521,"top riscv_core_i ex_stage_i mult_i short_op_b", false,-1, 16,0);
        vcdp->declQuad(c+2857,"top riscv_core_i ex_stage_i mult_i short_op_c", false,-1, 32,0);
        vcdp->declQuad(c+1529,"top riscv_core_i ex_stage_i mult_i short_mul", false,-1, 33,0);
        vcdp->declQuad(c+937,"top riscv_core_i ex_stage_i mult_i short_mac", false,-1, 33,0);
        vcdp->declBus(c+5041,"top riscv_core_i ex_stage_i mult_i short_round", false,-1, 31,0);
        vcdp->declBus(c+5049,"top riscv_core_i ex_stage_i mult_i short_round_tmp", false,-1, 31,0);
        vcdp->declQuad(c+953,"top riscv_core_i ex_stage_i mult_i short_result", false,-1, 33,0);
        vcdp->declBit(c+1545,"top riscv_core_i ex_stage_i mult_i short_mac_msb1", false,-1);
        vcdp->declBit(c+1553,"top riscv_core_i ex_stage_i mult_i short_mac_msb0", false,-1);
        vcdp->declBus(c+2873,"top riscv_core_i ex_stage_i mult_i short_imm", false,-1, 4,0);
        vcdp->declBus(c+2881,"top riscv_core_i ex_stage_i mult_i short_subword", false,-1, 1,0);
        vcdp->declBus(c+2889,"top riscv_core_i ex_stage_i mult_i short_signed", false,-1, 1,0);
        vcdp->declBit(c+2897,"top riscv_core_i ex_stage_i mult_i short_shift_arith", false,-1);
        vcdp->declBus(c+2905,"top riscv_core_i ex_stage_i mult_i mulh_imm", false,-1, 4,0);
        vcdp->declBus(c+2913,"top riscv_core_i ex_stage_i mult_i mulh_subword", false,-1, 1,0);
        vcdp->declBus(c+2921,"top riscv_core_i ex_stage_i mult_i mulh_signed", false,-1, 1,0);
        vcdp->declBit(c+2929,"top riscv_core_i ex_stage_i mult_i mulh_shift_arith", false,-1);
        vcdp->declBit(c+5057,"top riscv_core_i ex_stage_i mult_i mulh_carry_q", false,-1);
        vcdp->declBit(c+2937,"top riscv_core_i ex_stage_i mult_i mulh_active", false,-1);
        vcdp->declBit(c+2945,"top riscv_core_i ex_stage_i mult_i mulh_save", false,-1);
        vcdp->declBit(c+2953,"top riscv_core_i ex_stage_i mult_i mulh_clearcarry", false,-1);
        vcdp->declBit(c+2393,"top riscv_core_i ex_stage_i mult_i mulh_ready", false,-1);
        vcdp->declBus(c+5065,"top riscv_core_i ex_stage_i mult_i mulh_CS", false,-1, 2,0);
        vcdp->declBus(c+969,"top riscv_core_i ex_stage_i mult_i mulh_NS", false,-1, 2,0);
        vcdp->declBus(c+5073,"top riscv_core_i ex_stage_i mult_i int_op_a_msu", false,-1, 31,0);
        vcdp->declBus(c+5081,"top riscv_core_i ex_stage_i mult_i int_op_b_msu", false,-1, 31,0);
        vcdp->declBus(c+5089,"top riscv_core_i ex_stage_i mult_i int_result", false,-1, 31,0);
        vcdp->declBit(c+5097,"top riscv_core_i ex_stage_i mult_i int_is_msu", false,-1);
        vcdp->declBus(c+2961,"top riscv_core_i ex_stage_i mult_i dot_char_result", false,-1, 31,0);
        vcdp->declBus(c+2969,"top riscv_core_i ex_stage_i mult_i dot_short_result", false,-1, 31,0);
        vcdp->declQuad(c+2977,"top riscv_core_i ex_stage_i mult_i genblk1 dot_char_op_a", false,-1, 35,0);
        vcdp->declQuad(c+2993,"top riscv_core_i ex_stage_i mult_i genblk1 dot_char_op_b", false,-1, 35,0);
        vcdp->declArray(c+3009,"top riscv_core_i ex_stage_i mult_i genblk1 dot_char_mul", false,-1, 71,0);
        vcdp->declQuad(c+3033,"top riscv_core_i ex_stage_i mult_i genblk1 dot_short_op_a", false,-1, 33,0);
        vcdp->declQuad(c+3049,"top riscv_core_i ex_stage_i mult_i genblk1 dot_short_op_b", false,-1, 33,0);
        vcdp->declArray(c+3065,"top riscv_core_i ex_stage_i mult_i genblk1 dot_short_mul", false,-1, 67,0);
        vcdp->declBit(c+5529,"top riscv_core_i load_store_unit_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i load_store_unit_i rst_n", false,-1);
        vcdp->declBit(c+145,"top riscv_core_i load_store_unit_i data_req_o", false,-1);
        vcdp->declBit(c+145,"top riscv_core_i load_store_unit_i data_gnt_i", false,-1);
        vcdp->declBit(c+5449,"top riscv_core_i load_store_unit_i data_rvalid_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i load_store_unit_i data_err_i", false,-1);
        vcdp->declBus(c+3177,"top riscv_core_i load_store_unit_i data_addr_o", false,-1, 31,0);
        vcdp->declBit(c+5465,"top riscv_core_i load_store_unit_i data_we_o", false,-1);
        vcdp->declBus(c+3161,"top riscv_core_i load_store_unit_i data_be_o", false,-1, 3,0);
        vcdp->declBus(c+3169,"top riscv_core_i load_store_unit_i data_wdata_o", false,-1, 31,0);
        vcdp->declBus(c+5457,"top riscv_core_i load_store_unit_i data_rdata_i", false,-1, 31,0);
        vcdp->declBit(c+5465,"top riscv_core_i load_store_unit_i data_we_ex_i", false,-1);
        vcdp->declBus(c+5497,"top riscv_core_i load_store_unit_i data_type_ex_i", false,-1, 1,0);
        vcdp->declBus(c+5489,"top riscv_core_i load_store_unit_i data_wdata_ex_i", false,-1, 31,0);
        vcdp->declBus(c+4161,"top riscv_core_i load_store_unit_i data_reg_offset_ex_i", false,-1, 1,0);
        vcdp->declBit(c+4153,"top riscv_core_i load_store_unit_i data_sign_ext_ex_i", false,-1);
        vcdp->declBus(c+3241,"top riscv_core_i load_store_unit_i data_rdata_ex_o", false,-1, 31,0);
        vcdp->declBit(c+4169,"top riscv_core_i load_store_unit_i data_req_ex_i", false,-1);
        vcdp->declBus(c+3881,"top riscv_core_i load_store_unit_i operand_a_ex_i", false,-1, 31,0);
        vcdp->declBus(c+3889,"top riscv_core_i load_store_unit_i operand_b_ex_i", false,-1, 31,0);
        vcdp->declBit(c+3841,"top riscv_core_i load_store_unit_i addr_useincr_ex_i", false,-1);
        vcdp->declBit(c+5505,"top riscv_core_i load_store_unit_i data_misaligned_ex_i", false,-1);
        vcdp->declBit(c+3217,"top riscv_core_i load_store_unit_i data_misaligned_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i load_store_unit_i load_err_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i load_store_unit_i store_err_o", false,-1);
        vcdp->declBit(c+257,"top riscv_core_i load_store_unit_i lsu_ready_ex_o", false,-1);
        vcdp->declBit(c+249,"top riscv_core_i load_store_unit_i lsu_ready_wb_o", false,-1);
        vcdp->declBit(c+241,"top riscv_core_i load_store_unit_i ex_valid_i", false,-1);
        vcdp->declBit(c+1297,"top riscv_core_i load_store_unit_i busy_o", false,-1);
        vcdp->declBus(c+3177,"top riscv_core_i load_store_unit_i data_addr_int", false,-1, 31,0);
        vcdp->declBus(c+5105,"top riscv_core_i load_store_unit_i data_type_q", false,-1, 1,0);
        vcdp->declBus(c+5113,"top riscv_core_i load_store_unit_i rdata_offset_q", false,-1, 1,0);
        vcdp->declBit(c+5121,"top riscv_core_i load_store_unit_i data_sign_ext_q", false,-1);
        vcdp->declBit(c+5129,"top riscv_core_i load_store_unit_i data_we_q", false,-1);
        vcdp->declBus(c+3713,"top riscv_core_i load_store_unit_i wdata_offset", false,-1, 1,0);
        vcdp->declBus(c+3161,"top riscv_core_i load_store_unit_i data_be", false,-1, 3,0);
        vcdp->declBus(c+3169,"top riscv_core_i load_store_unit_i data_wdata", false,-1, 31,0);
        vcdp->declBit(c+5505,"top riscv_core_i load_store_unit_i misaligned_st", false,-1);
        vcdp->declBus(c+5137,"top riscv_core_i load_store_unit_i CS", false,-1, 1,0);
        vcdp->declBus(c+977,"top riscv_core_i load_store_unit_i NS", false,-1, 1,0);
        vcdp->declBus(c+5145,"top riscv_core_i load_store_unit_i rdata_q", false,-1, 31,0);
        vcdp->declBus(c+3721,"top riscv_core_i load_store_unit_i data_rdata_ext", false,-1, 31,0);
        vcdp->declBus(c+5385,"top riscv_core_i load_store_unit_i rdata_w_ext", false,-1, 31,0);
        vcdp->declBus(c+5393,"top riscv_core_i load_store_unit_i rdata_h_ext", false,-1, 31,0);
        vcdp->declBus(c+5401,"top riscv_core_i load_store_unit_i rdata_b_ext", false,-1, 31,0);
        vcdp->declBus(c+5849,"top riscv_core_i cs_registers_i N_HWLP", false,-1, 31,0);
        vcdp->declBus(c+5857,"top riscv_core_i cs_registers_i N_HWLP_BITS", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i cs_registers_i N_EXT_CNT", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i cs_registers_i APU", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i cs_registers_i FPU", false,-1, 31,0);
        vcdp->declBus(c+5721,"top riscv_core_i cs_registers_i PULP_SECURE", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i cs_registers_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i cs_registers_i rst_n", false,-1);
        vcdp->declBus(c+5769,"top riscv_core_i cs_registers_i core_id_i", false,-1, 3,0);
        vcdp->declBus(c+5777,"top riscv_core_i cs_registers_i cluster_id_i", false,-1, 5,0);
        vcdp->declBus(c+5897,"top riscv_core_i cs_registers_i mtvec_o", false,-1, 23,0);
        vcdp->declBus(c+5905,"top riscv_core_i cs_registers_i utvec_o", false,-1, 23,0);
        vcdp->declBus(c+5897,"top riscv_core_i cs_registers_i boot_addr_i", false,-1, 23,0);
        vcdp->declBit(c+1713,"top riscv_core_i cs_registers_i csr_access_i", false,-1);
        vcdp->declBus(c+1721,"top riscv_core_i cs_registers_i csr_addr_i", false,-1, 11,0);
        vcdp->declBus(c+1737,"top riscv_core_i cs_registers_i csr_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+201,"top riscv_core_i cs_registers_i csr_op_i", false,-1, 1,0);
        vcdp->declBus(c+1729,"top riscv_core_i cs_registers_i csr_rdata_o", false,-1, 31,0);
        vcdp->declBus(c+5873,"top riscv_core_i cs_registers_i frm_o", false,-1, 2,0);
        vcdp->declBus(c+5865,"top riscv_core_i cs_registers_i fprec_o", false,-1, 4,0);
        vcdp->declBus(c+5865,"top riscv_core_i cs_registers_i fflags_i", false,-1, 4,0);
        vcdp->declBit(c+5785,"top riscv_core_i cs_registers_i fflags_we_i", false,-1);
        vcdp->declBit(c+1753,"top riscv_core_i cs_registers_i m_irq_enable_o", false,-1);
        vcdp->declBit(c+4185,"top riscv_core_i cs_registers_i u_irq_enable_o", false,-1);
        vcdp->declBit(c+1761,"top riscv_core_i cs_registers_i csr_irq_sec_i", false,-1);
        vcdp->declBit(c+3785,"top riscv_core_i cs_registers_i sec_lvl_o", false,-1);
        vcdp->declBus(c+3249,"top riscv_core_i cs_registers_i epc_o", false,-1, 31,0);
        vcdp->declBus(c+4145,"top riscv_core_i cs_registers_i priv_lvl_o", false,-1, 1,0);
        vcdp->declBus(c+5473,"top riscv_core_i cs_registers_i pc_if_i", false,-1, 31,0);
        vcdp->declBus(c+5481,"top riscv_core_i cs_registers_i pc_id_i", false,-1, 31,0);
        vcdp->declBit(c+1769,"top riscv_core_i cs_registers_i csr_save_if_i", false,-1);
        vcdp->declBit(c+3265,"top riscv_core_i cs_registers_i csr_save_id_i", false,-1);
        vcdp->declBit(c+3281,"top riscv_core_i cs_registers_i csr_restore_mret_i", false,-1);
        vcdp->declBit(c+3289,"top riscv_core_i cs_registers_i csr_restore_uret_i", false,-1);
        vcdp->declBus(c+3273,"top riscv_core_i cs_registers_i csr_cause_i", false,-1, 5,0);
        vcdp->declBit(c+3257,"top riscv_core_i cs_registers_i csr_save_cause_i", false,-1);
        vcdp->declQuad(c+4193,"top riscv_core_i cs_registers_i hwlp_start_i", false,-1, 63,0);
        vcdp->declQuad(c+4209,"top riscv_core_i cs_registers_i hwlp_end_i", false,-1, 63,0);
        vcdp->declQuad(c+4225,"top riscv_core_i cs_registers_i hwlp_cnt_i", false,-1, 63,0);
        vcdp->declBus(c+281,"top riscv_core_i cs_registers_i hwlp_data_o", false,-1, 31,0);
        vcdp->declBus(c+265,"top riscv_core_i cs_registers_i hwlp_regid_o", false,-1, 0,0);
        vcdp->declBus(c+273,"top riscv_core_i cs_registers_i hwlp_we_o", false,-1, 2,0);
        vcdp->declBit(c+233,"top riscv_core_i cs_registers_i id_valid_i", false,-1);
        vcdp->declBit(c+3825,"top riscv_core_i cs_registers_i is_compressed_i", false,-1);
        vcdp->declBit(c+3209,"top riscv_core_i cs_registers_i is_decoding_i", false,-1);
        vcdp->declBit(c+329,"top riscv_core_i cs_registers_i imiss_i", false,-1);
        vcdp->declBit(c+169,"top riscv_core_i cs_registers_i pc_set_i", false,-1);
        vcdp->declBit(c+337,"top riscv_core_i cs_registers_i jump_i", false,-1);
        vcdp->declBit(c+3849,"top riscv_core_i cs_registers_i branch_i", false,-1);
        vcdp->declBit(c+1657,"top riscv_core_i cs_registers_i branch_taken_i", false,-1);
        vcdp->declBit(c+345,"top riscv_core_i cs_registers_i ld_stall_i", false,-1);
        vcdp->declBit(c+1793,"top riscv_core_i cs_registers_i jr_stall_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i cs_registers_i apu_typeconflict_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i cs_registers_i apu_contention_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i cs_registers_i apu_dep_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i cs_registers_i apu_wb_i", false,-1);
        vcdp->declBit(c+1609,"top riscv_core_i cs_registers_i mem_load_i", false,-1);
        vcdp->declBit(c+1617,"top riscv_core_i cs_registers_i mem_store_i", false,-1);
        vcdp->declBus(c+5841,"top riscv_core_i cs_registers_i ext_counters_i", false,-1, -1,0);
        vcdp->declBus(c+5721,"top riscv_core_i cs_registers_i N_APU_CNT", false,-1, 31,0);
        vcdp->declBus(c+6281,"top riscv_core_i cs_registers_i N_PERF_COUNTERS", false,-1, 31,0);
        vcdp->declBus(c+6289,"top riscv_core_i cs_registers_i PERF_EXT_ID", false,-1, 31,0);
        vcdp->declBus(c+6281,"top riscv_core_i cs_registers_i PERF_APU_ID", false,-1, 31,0);
        vcdp->declBus(c+6281,"top riscv_core_i cs_registers_i N_PERF_REGS", false,-1, 31,0);
        vcdp->declBus(c+281,"top riscv_core_i cs_registers_i csr_wdata_int", false,-1, 31,0);
        vcdp->declBus(c+3089,"top riscv_core_i cs_registers_i csr_rdata_int", false,-1, 31,0);
        vcdp->declBit(c+985,"top riscv_core_i cs_registers_i csr_we_int", false,-1);
        vcdp->declBus(c+6297,"top riscv_core_i cs_registers_i frm_q", false,-1, 2,0);
        vcdp->declBus(c+993,"top riscv_core_i cs_registers_i frm_n", false,-1, 2,0);
        vcdp->declBus(c+6305,"top riscv_core_i cs_registers_i fflags_q", false,-1, 4,0);
        vcdp->declBus(c+1001,"top riscv_core_i cs_registers_i fflags_n", false,-1, 4,0);
        vcdp->declBus(c+6313,"top riscv_core_i cs_registers_i fprec_q", false,-1, 4,0);
        vcdp->declBus(c+1009,"top riscv_core_i cs_registers_i fprec_n", false,-1, 4,0);
        vcdp->declBus(c+5153,"top riscv_core_i cs_registers_i mepc_q", false,-1, 31,0);
        vcdp->declBus(c+1017,"top riscv_core_i cs_registers_i mepc_n", false,-1, 31,0);
        vcdp->declBus(c+6321,"top riscv_core_i cs_registers_i uepc_q", false,-1, 31,0);
        vcdp->declBus(c+6329,"top riscv_core_i cs_registers_i uepc_n", false,-1, 31,0);
        vcdp->declBus(c+1025,"top riscv_core_i cs_registers_i exception_pc", false,-1, 31,0);
        vcdp->declBus(c+5161,"top riscv_core_i cs_registers_i mstatus_q", false,-1, 5,0);
        vcdp->declBus(c+1033,"top riscv_core_i cs_registers_i mstatus_n", false,-1, 5,0);
        vcdp->declBus(c+5169,"top riscv_core_i cs_registers_i mcause_q", false,-1, 5,0);
        vcdp->declBus(c+1041,"top riscv_core_i cs_registers_i mcause_n", false,-1, 5,0);
        vcdp->declBus(c+6337,"top riscv_core_i cs_registers_i ucause_q", false,-1, 5,0);
        vcdp->declBus(c+6345,"top riscv_core_i cs_registers_i ucause_n", false,-1, 5,0);
        vcdp->declBus(c+5897,"top riscv_core_i cs_registers_i mtvec_n", false,-1, 23,0);
        vcdp->declBus(c+5897,"top riscv_core_i cs_registers_i mtvec_q", false,-1, 23,0);
        vcdp->declBus(c+6353,"top riscv_core_i cs_registers_i mtvec_reg_q", false,-1, 23,0);
        vcdp->declBus(c+6361,"top riscv_core_i cs_registers_i utvec_n", false,-1, 23,0);
        vcdp->declBus(c+5905,"top riscv_core_i cs_registers_i utvec_q", false,-1, 23,0);
        vcdp->declBit(c+3729,"top riscv_core_i cs_registers_i is_irq", false,-1);
        vcdp->declBus(c+3737,"top riscv_core_i cs_registers_i priv_lvl_n", false,-1, 1,0);
        vcdp->declBus(c+4145,"top riscv_core_i cs_registers_i priv_lvl_q", false,-1, 1,0);
        vcdp->declBus(c+6369,"top riscv_core_i cs_registers_i priv_lvl_reg_q", false,-1, 1,0);
        vcdp->declBit(c+5177,"top riscv_core_i cs_registers_i id_valid_q", false,-1);
        vcdp->declBus(c+1561,"top riscv_core_i cs_registers_i PCCR_in", false,-1, 11,0);
        vcdp->declBus(c+1049,"top riscv_core_i cs_registers_i PCCR_inc", false,-1, 11,0);
        vcdp->declBus(c+5185,"top riscv_core_i cs_registers_i PCCR_inc_q", false,-1, 11,0);
        vcdp->declArray(c+5193,"top riscv_core_i cs_registers_i PCCR_q", false,-1, 383,0);
        vcdp->declArray(c+1057,"top riscv_core_i cs_registers_i PCCR_n", false,-1, 383,0);
        vcdp->declBus(c+1153,"top riscv_core_i cs_registers_i PCMR_n", false,-1, 1,0);
        vcdp->declBus(c+5289,"top riscv_core_i cs_registers_i PCMR_q", false,-1, 1,0);
        vcdp->declBus(c+1161,"top riscv_core_i cs_registers_i PCER_n", false,-1, 11,0);
        vcdp->declBus(c+5297,"top riscv_core_i cs_registers_i PCER_q", false,-1, 11,0);
        vcdp->declBus(c+3097,"top riscv_core_i cs_registers_i perf_rdata", false,-1, 31,0);
        vcdp->declBus(c+3105,"top riscv_core_i cs_registers_i pccr_index", false,-1, 4,0);
        vcdp->declBit(c+3113,"top riscv_core_i cs_registers_i pccr_all_sel", false,-1);
        vcdp->declBit(c+3121,"top riscv_core_i cs_registers_i is_pccr", false,-1);
        vcdp->declBit(c+3129,"top riscv_core_i cs_registers_i is_pcer", false,-1);
        vcdp->declBit(c+3137,"top riscv_core_i cs_registers_i is_pcmr", false,-1);
        vcdp->declBus(c+6377,"top riscv_core_i cs_registers_i unnamedblk1 i", false,-1, 31,0);
        vcdp->declBus(c+5305,"top riscv_core_i cs_registers_i unnamedblk3 i", false,-1, 31,0);
        vcdp->declBus(c+5313,"top riscv_core_i cs_registers_i unnamedblk2 i", false,-1, 31,0);
        vcdp->declBit(c+5529,"top riscv_core_i debug_unit_i clk", false,-1);
        vcdp->declBit(c+5537,"top riscv_core_i debug_unit_i rst_n", false,-1);
        vcdp->declBit(c+5593,"top riscv_core_i debug_unit_i debug_req_i", false,-1);
        vcdp->declBit(c+113,"top riscv_core_i debug_unit_i debug_gnt_o", false,-1);
        vcdp->declBit(c+3793,"top riscv_core_i debug_unit_i debug_rvalid_o", false,-1);
        vcdp->declBus(c+5617,"top riscv_core_i debug_unit_i debug_addr_i", false,-1, 14,0);
        vcdp->declBit(c+5625,"top riscv_core_i debug_unit_i debug_we_i", false,-1);
        vcdp->declBus(c+5633,"top riscv_core_i debug_unit_i debug_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+121,"top riscv_core_i debug_unit_i debug_rdata_o", false,-1, 31,0);
        vcdp->declBit(c+1633,"top riscv_core_i debug_unit_i debug_halted_o", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i debug_unit_i debug_halt_i", false,-1);
        vcdp->declBit(c+5785,"top riscv_core_i debug_unit_i debug_resume_i", false,-1);
        vcdp->declBus(c+4241,"top riscv_core_i debug_unit_i settings_o", false,-1, 5,0);
        vcdp->declBit(c+305,"top riscv_core_i debug_unit_i trap_i", false,-1);
        vcdp->declBus(c+3193,"top riscv_core_i debug_unit_i exc_cause_i", false,-1, 5,0);
        vcdp->declBit(c+297,"top riscv_core_i debug_unit_i stall_o", false,-1);
        vcdp->declBit(c+289,"top riscv_core_i debug_unit_i dbg_req_o", false,-1);
        vcdp->declBit(c+1777,"top riscv_core_i debug_unit_i dbg_ack_i", false,-1);
        vcdp->declBit(c+4249,"top riscv_core_i debug_unit_i regfile_rreq_o", false,-1);
        vcdp->declBus(c+4257,"top riscv_core_i debug_unit_i regfile_raddr_o", false,-1, 5,0);
        vcdp->declBus(c+1785,"top riscv_core_i debug_unit_i regfile_rdata_i", false,-1, 31,0);
        vcdp->declBit(c+313,"top riscv_core_i debug_unit_i regfile_wreq_o", false,-1);
        vcdp->declBus(c+5673,"top riscv_core_i debug_unit_i regfile_waddr_o", false,-1, 5,0);
        vcdp->declBus(c+5633,"top riscv_core_i debug_unit_i regfile_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+4265,"top riscv_core_i debug_unit_i csr_req_o", false,-1);
        vcdp->declBus(c+4273,"top riscv_core_i debug_unit_i csr_addr_o", false,-1, 11,0);
        vcdp->declBit(c+321,"top riscv_core_i debug_unit_i csr_we_o", false,-1);
        vcdp->declBus(c+4281,"top riscv_core_i debug_unit_i csr_wdata_o", false,-1, 31,0);
        vcdp->declBus(c+1729,"top riscv_core_i debug_unit_i csr_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+5473,"top riscv_core_i debug_unit_i pc_if_i", false,-1, 31,0);
        vcdp->declBus(c+5481,"top riscv_core_i debug_unit_i pc_id_i", false,-1, 31,0);
        vcdp->declBus(c+3857,"top riscv_core_i debug_unit_i pc_ex_i", false,-1, 31,0);
        vcdp->declBit(c+4177,"top riscv_core_i debug_unit_i data_load_event_i", false,-1);
        vcdp->declBit(c+3809,"top riscv_core_i debug_unit_i instr_valid_id_i", false,-1);
        vcdp->declBit(c+5689,"top riscv_core_i debug_unit_i sleeping_i", false,-1);
        vcdp->declBit(c+3849,"top riscv_core_i debug_unit_i branch_in_ex_i", false,-1);
        vcdp->declBit(c+1657,"top riscv_core_i debug_unit_i branch_taken_i", false,-1);
        vcdp->declBit(c+4289,"top riscv_core_i debug_unit_i jump_req_o", false,-1);
        vcdp->declBus(c+4281,"top riscv_core_i debug_unit_i jump_addr_o", false,-1, 31,0);
        vcdp->declBus(c+5321,"top riscv_core_i debug_unit_i rdata_sel_q", false,-1, 2,0);
        vcdp->declBus(c+1169,"top riscv_core_i debug_unit_i rdata_sel_n", false,-1, 2,0);
        vcdp->declBus(c+5329,"top riscv_core_i debug_unit_i state_q", false,-1, 0,0);
        vcdp->declBus(c+1177,"top riscv_core_i debug_unit_i state_n", false,-1, 0,0);
        vcdp->declBus(c+4241,"top riscv_core_i debug_unit_i settings_q", false,-1, 5,0);
        vcdp->declBus(c+1185,"top riscv_core_i debug_unit_i settings_n", false,-1, 5,0);
        vcdp->declBus(c+5337,"top riscv_core_i debug_unit_i addr_q", false,-1, 14,0);
        vcdp->declBus(c+4281,"top riscv_core_i debug_unit_i wdata_q", false,-1, 31,0);
        vcdp->declBit(c+4249,"top riscv_core_i debug_unit_i regfile_rreq_q", false,-1);
        vcdp->declBit(c+1193,"top riscv_core_i debug_unit_i regfile_rreq_n", false,-1);
        vcdp->declBit(c+5345,"top riscv_core_i debug_unit_i regfile_fp_sel_q", false,-1);
        vcdp->declBit(c+1201,"top riscv_core_i debug_unit_i regfile_fp_sel_n", false,-1);
        vcdp->declBit(c+4289,"top riscv_core_i debug_unit_i jump_req_q", false,-1);
        vcdp->declBit(c+1209,"top riscv_core_i debug_unit_i jump_req_n", false,-1);
        vcdp->declBit(c+4265,"top riscv_core_i debug_unit_i csr_req_q", false,-1);
        vcdp->declBit(c+1217,"top riscv_core_i debug_unit_i csr_req_n", false,-1);
        vcdp->declBit(c+313,"top riscv_core_i debug_unit_i regfile_wreq", false,-1);
        vcdp->declBit(c+1225,"top riscv_core_i debug_unit_i regfile_fp_wr", false,-1);
        vcdp->declBus(c+5353,"top riscv_core_i debug_unit_i stall_cs", false,-1, 1,0);
        vcdp->declBus(c+1233,"top riscv_core_i debug_unit_i stall_ns", false,-1, 1,0);
        vcdp->declBus(c+1241,"top riscv_core_i debug_unit_i dbg_rdata", false,-1, 31,0);
        vcdp->declBit(c+1249,"top riscv_core_i debug_unit_i dbg_resume", false,-1);
        vcdp->declBit(c+1257,"top riscv_core_i debug_unit_i dbg_halt", false,-1);
        vcdp->declBus(c+5361,"top riscv_core_i debug_unit_i dbg_cause_q", false,-1, 5,0);
        vcdp->declBus(c+1265,"top riscv_core_i debug_unit_i dbg_cause_n", false,-1, 5,0);
        vcdp->declBit(c+5369,"top riscv_core_i debug_unit_i dbg_ssth_q", false,-1);
        vcdp->declBit(c+1273,"top riscv_core_i debug_unit_i dbg_ssth_n", false,-1);
        vcdp->declBit(c+1281,"top riscv_core_i debug_unit_i ssth_clear", false,-1);
        vcdp->declBus(c+5377,"top riscv_core_i debug_unit_i pc_tracking_fsm_cs", false,-1, 1,0);
        vcdp->declBus(c+3145,"top riscv_core_i debug_unit_i pc_tracking_fsm_ns", false,-1, 1,0);
        vcdp->declBus(c+3745,"top riscv_core_i debug_unit_i ppc_int", false,-1, 31,0);
        vcdp->declBus(c+3753,"top riscv_core_i debug_unit_i npc_int", false,-1, 31,0);
        vcdp->declBus(c+6385,"top ram_i ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+5529,"top ram_i clk", false,-1);
        vcdp->declBit(c+129,"top ram_i instr_req_i", false,-1);
        vcdp->declBus(c+1289,"top ram_i instr_addr_i", false,-1, 19,0);
        vcdp->declArray(c+5417,"top ram_i instr_rdata_o", false,-1, 127,0);
        vcdp->declBit(c+5409,"top ram_i instr_rvalid_o", false,-1);
        vcdp->declBit(c+129,"top ram_i instr_gnt_o", false,-1);
        vcdp->declBit(c+145,"top ram_i data_req_i", false,-1);
        vcdp->declBus(c+3761,"top ram_i data_addr_i", false,-1, 19,0);
        vcdp->declBit(c+5465,"top ram_i data_we_i", false,-1);
        vcdp->declBus(c+3161,"top ram_i data_be_i", false,-1, 3,0);
        vcdp->declBus(c+3169,"top ram_i data_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+5457,"top ram_i data_rdata_o", false,-1, 31,0);
        vcdp->declBit(c+5449,"top ram_i data_rvalid_o", false,-1);
        vcdp->declBit(c+145,"top ram_i data_gnt_o", false,-1);
        vcdp->declBus(c+6385,"top ram_i dp_ram_i ADDR_WIDTH", false,-1, 31,0);
        vcdp->declBit(c+5529,"top ram_i dp_ram_i clk", false,-1);
        vcdp->declBit(c+129,"top ram_i dp_ram_i en_a_i", false,-1);
        vcdp->declBus(c+1289,"top ram_i dp_ram_i addr_a_i", false,-1, 19,0);
        vcdp->declBus(c+6273,"top ram_i dp_ram_i wdata_a_i", false,-1, 31,0);
        vcdp->declArray(c+5417,"top ram_i dp_ram_i rdata_a_o", false,-1, 127,0);
        vcdp->declBit(c+5785,"top ram_i dp_ram_i we_a_i", false,-1);
        vcdp->declBus(c+6393,"top ram_i dp_ram_i be_a_i", false,-1, 3,0);
        vcdp->declBit(c+145,"top ram_i dp_ram_i en_b_i", false,-1);
        vcdp->declBus(c+3761,"top ram_i dp_ram_i addr_b_i", false,-1, 19,0);
        vcdp->declBus(c+3169,"top ram_i dp_ram_i wdata_b_i", false,-1, 31,0);
        vcdp->declBus(c+5457,"top ram_i dp_ram_i rdata_b_o", false,-1, 31,0);
        vcdp->declBit(c+5465,"top ram_i dp_ram_i we_b_i", false,-1);
        vcdp->declBus(c+3161,"top ram_i dp_ram_i be_b_i", false,-1, 3,0);
        vcdp->declBus(c+6401,"top ram_i dp_ram_i bytes", false,-1, 31,0);
        vcdp->declBus(c+3769,"top ram_i dp_ram_i addr_b_int", false,-1, 19,0);
        vcdp->declBus(c+5721,"apu_core_package SHARED_INT_MULT", false,-1, 31,0);
        vcdp->declBus(c+5729,"apu_core_package NARGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5737,"apu_core_package WOP_CPU", false,-1, 31,0);
        vcdp->declBus(c+5753,"apu_core_package NUSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5745,"apu_core_package NDSFLAGS_CPU", false,-1, 31,0);
        vcdp->declBus(c+5849,"apu_core_package APU_FLAGS_FP", false,-1, 31,0);
        vcdp->declBus(c+5857,"apu_core_package PIPE_REG_DSP_MULT", false,-1, 31,0);
        vcdp->declBus(c+5721,"apu_core_package APU_FLAGS_DSP_MULT", false,-1, 31,0);
        vcdp->declBus(c+5857,"apu_core_package APU_FLAGS_INT_MULT", false,-1, 31,0);
        vcdp->declBus(c+5857,"apu_core_package PIPE_REG_ADDSUB", false,-1, 31,0);
        vcdp->declBus(c+5857,"apu_core_package PIPE_REG_MULT", false,-1, 31,0);
        vcdp->declBus(c+5857,"apu_core_package PIPE_REG_CAST", false,-1, 31,0);
        vcdp->declBus(c+5849,"apu_core_package PIPE_REG_MAC", false,-1, 31,0);
        vcdp->declBus(c+6409,"apu_core_package PIPE_REG_DIV", false,-1, 31,0);
        vcdp->declBus(c+5753,"apu_core_package PIPE_REG_SQRT", false,-1, 31,0);
        vcdp->declBus(c+6417,"riscv_defines OPCODE_SYSTEM", false,-1, 6,0);
        vcdp->declBus(c+6425,"riscv_defines OPCODE_FENCE", false,-1, 6,0);
        vcdp->declBus(c+6433,"riscv_defines OPCODE_OP", false,-1, 6,0);
        vcdp->declBus(c+6441,"riscv_defines OPCODE_OPIMM", false,-1, 6,0);
        vcdp->declBus(c+6449,"riscv_defines OPCODE_STORE", false,-1, 6,0);
        vcdp->declBus(c+6457,"riscv_defines OPCODE_LOAD", false,-1, 6,0);
        vcdp->declBus(c+6465,"riscv_defines OPCODE_BRANCH", false,-1, 6,0);
        vcdp->declBus(c+6473,"riscv_defines OPCODE_JALR", false,-1, 6,0);
        vcdp->declBus(c+6481,"riscv_defines OPCODE_JAL", false,-1, 6,0);
        vcdp->declBus(c+6489,"riscv_defines OPCODE_AUIPC", false,-1, 6,0);
        vcdp->declBus(c+6497,"riscv_defines OPCODE_LUI", false,-1, 6,0);
        vcdp->declBus(c+6505,"riscv_defines OPCODE_OP_FP", false,-1, 6,0);
        vcdp->declBus(c+6513,"riscv_defines OPCODE_OP_FMADD", false,-1, 6,0);
        vcdp->declBus(c+6521,"riscv_defines OPCODE_OP_FNMADD", false,-1, 6,0);
        vcdp->declBus(c+6529,"riscv_defines OPCODE_OP_FMSUB", false,-1, 6,0);
        vcdp->declBus(c+6537,"riscv_defines OPCODE_OP_FNMSUB", false,-1, 6,0);
        vcdp->declBus(c+6545,"riscv_defines OPCODE_STORE_FP", false,-1, 6,0);
        vcdp->declBus(c+6553,"riscv_defines OPCODE_LOAD_FP", false,-1, 6,0);
        vcdp->declBus(c+6561,"riscv_defines OPCODE_LOAD_POST", false,-1, 6,0);
        vcdp->declBus(c+6569,"riscv_defines OPCODE_STORE_POST", false,-1, 6,0);
        vcdp->declBus(c+6577,"riscv_defines OPCODE_PULP_OP", false,-1, 6,0);
        vcdp->declBus(c+6585,"riscv_defines OPCODE_VECOP", false,-1, 6,0);
        vcdp->declBus(c+6593,"riscv_defines OPCODE_HWLOOP", false,-1, 6,0);
        vcdp->declBus(c+6601,"riscv_defines REGC_S1", false,-1, 1,0);
        vcdp->declBus(c+5801,"riscv_defines REGC_S4", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines REGC_RD", false,-1, 1,0);
        vcdp->declBus(c+6617,"riscv_defines REGC_ZERO", false,-1, 1,0);
        vcdp->declBus(c+6625,"riscv_defines ALU_OP_WIDTH", false,-1, 31,0);
        vcdp->declBus(c+6633,"riscv_defines ALU_ADD", false,-1, 6,0);
        vcdp->declBus(c+6641,"riscv_defines ALU_SUB", false,-1, 6,0);
        vcdp->declBus(c+6649,"riscv_defines ALU_ADDU", false,-1, 6,0);
        vcdp->declBus(c+6657,"riscv_defines ALU_SUBU", false,-1, 6,0);
        vcdp->declBus(c+6665,"riscv_defines ALU_ADDR", false,-1, 6,0);
        vcdp->declBus(c+6673,"riscv_defines ALU_SUBR", false,-1, 6,0);
        vcdp->declBus(c+6681,"riscv_defines ALU_ADDUR", false,-1, 6,0);
        vcdp->declBus(c+6689,"riscv_defines ALU_SUBUR", false,-1, 6,0);
        vcdp->declBus(c+6697,"riscv_defines ALU_XOR", false,-1, 6,0);
        vcdp->declBus(c+6705,"riscv_defines ALU_OR", false,-1, 6,0);
        vcdp->declBus(c+6713,"riscv_defines ALU_AND", false,-1, 6,0);
        vcdp->declBus(c+6721,"riscv_defines ALU_SRA", false,-1, 6,0);
        vcdp->declBus(c+6729,"riscv_defines ALU_SRL", false,-1, 6,0);
        vcdp->declBus(c+6737,"riscv_defines ALU_ROR", false,-1, 6,0);
        vcdp->declBus(c+6545,"riscv_defines ALU_SLL", false,-1, 6,0);
        vcdp->declBus(c+6745,"riscv_defines ALU_BEXT", false,-1, 6,0);
        vcdp->declBus(c+6753,"riscv_defines ALU_BEXTU", false,-1, 6,0);
        vcdp->declBus(c+6761,"riscv_defines ALU_BINS", false,-1, 6,0);
        vcdp->declBus(c+6569,"riscv_defines ALU_BCLR", false,-1, 6,0);
        vcdp->declBus(c+6769,"riscv_defines ALU_BSET", false,-1, 6,0);
        vcdp->declBus(c+6777,"riscv_defines ALU_FF1", false,-1, 6,0);
        vcdp->declBus(c+6497,"riscv_defines ALU_FL1", false,-1, 6,0);
        vcdp->declBus(c+6785,"riscv_defines ALU_CNT", false,-1, 6,0);
        vcdp->declBus(c+6793,"riscv_defines ALU_CLB", false,-1, 6,0);
        vcdp->declBus(c+6801,"riscv_defines ALU_EXTS", false,-1, 6,0);
        vcdp->declBus(c+6809,"riscv_defines ALU_EXT", false,-1, 6,0);
        vcdp->declBus(c+6817,"riscv_defines ALU_LTS", false,-1, 6,0);
        vcdp->declBus(c+6825,"riscv_defines ALU_LTU", false,-1, 6,0);
        vcdp->declBus(c+6833,"riscv_defines ALU_LES", false,-1, 6,0);
        vcdp->declBus(c+6841,"riscv_defines ALU_LEU", false,-1, 6,0);
        vcdp->declBus(c+6849,"riscv_defines ALU_GTS", false,-1, 6,0);
        vcdp->declBus(c+6857,"riscv_defines ALU_GTU", false,-1, 6,0);
        vcdp->declBus(c+6865,"riscv_defines ALU_GES", false,-1, 6,0);
        vcdp->declBus(c+6561,"riscv_defines ALU_GEU", false,-1, 6,0);
        vcdp->declBus(c+6873,"riscv_defines ALU_EQ", false,-1, 6,0);
        vcdp->declBus(c+6881,"riscv_defines ALU_NE", false,-1, 6,0);
        vcdp->declBus(c+6889,"riscv_defines ALU_SLTS", false,-1, 6,0);
        vcdp->declBus(c+6457,"riscv_defines ALU_SLTU", false,-1, 6,0);
        vcdp->declBus(c+6897,"riscv_defines ALU_SLETS", false,-1, 6,0);
        vcdp->declBus(c+6553,"riscv_defines ALU_SLETU", false,-1, 6,0);
        vcdp->declBus(c+6905,"riscv_defines ALU_ABS", false,-1, 6,0);
        vcdp->declBus(c+6913,"riscv_defines ALU_CLIP", false,-1, 6,0);
        vcdp->declBus(c+6489,"riscv_defines ALU_CLIPU", false,-1, 6,0);
        vcdp->declBus(c+6921,"riscv_defines ALU_INS", false,-1, 6,0);
        vcdp->declBus(c+6929,"riscv_defines ALU_MIN", false,-1, 6,0);
        vcdp->declBus(c+6937,"riscv_defines ALU_MINU", false,-1, 6,0);
        vcdp->declBus(c+6945,"riscv_defines ALU_MAX", false,-1, 6,0);
        vcdp->declBus(c+6441,"riscv_defines ALU_MAXU", false,-1, 6,0);
        vcdp->declBus(c+6953,"riscv_defines ALU_DIVU", false,-1, 6,0);
        vcdp->declBus(c+6961,"riscv_defines ALU_DIV", false,-1, 6,0);
        vcdp->declBus(c+6969,"riscv_defines ALU_REMU", false,-1, 6,0);
        vcdp->declBus(c+6433,"riscv_defines ALU_REM", false,-1, 6,0);
        vcdp->declBus(c+6977,"riscv_defines ALU_SHUF", false,-1, 6,0);
        vcdp->declBus(c+6985,"riscv_defines ALU_SHUF2", false,-1, 6,0);
        vcdp->declBus(c+6993,"riscv_defines ALU_PCKLO", false,-1, 6,0);
        vcdp->declBus(c+7001,"riscv_defines ALU_PCKHI", false,-1, 6,0);
        vcdp->declBus(c+7009,"riscv_defines ALU_FKEEP", false,-1, 6,0);
        vcdp->declBus(c+7017,"riscv_defines ALU_FSGNJ", false,-1, 6,0);
        vcdp->declBus(c+7025,"riscv_defines ALU_FSGNJN", false,-1, 6,0);
        vcdp->declBus(c+7033,"riscv_defines ALU_FSGNJX", false,-1, 6,0);
        vcdp->declBus(c+6513,"riscv_defines ALU_FEQ", false,-1, 6,0);
        vcdp->declBus(c+7041,"riscv_defines ALU_FLT", false,-1, 6,0);
        vcdp->declBus(c+7049,"riscv_defines ALU_FLE", false,-1, 6,0);
        vcdp->declBus(c+7057,"riscv_defines ALU_FMAX", false,-1, 6,0);
        vcdp->declBus(c+6529,"riscv_defines ALU_FMIN", false,-1, 6,0);
        vcdp->declBus(c+7065,"riscv_defines ALU_FCLASS", false,-1, 6,0);
        vcdp->declBus(c+5873,"riscv_defines MUL_MAC32", false,-1, 2,0);
        vcdp->declBus(c+7073,"riscv_defines MUL_MSU32", false,-1, 2,0);
        vcdp->declBus(c+7081,"riscv_defines MUL_I", false,-1, 2,0);
        vcdp->declBus(c+7089,"riscv_defines MUL_IR", false,-1, 2,0);
        vcdp->declBus(c+7097,"riscv_defines MUL_DOT8", false,-1, 2,0);
        vcdp->declBus(c+7105,"riscv_defines MUL_DOT16", false,-1, 2,0);
        vcdp->declBus(c+7113,"riscv_defines MUL_H", false,-1, 2,0);
        vcdp->declBus(c+5801,"riscv_defines VEC_MODE32", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines VEC_MODE16", false,-1, 1,0);
        vcdp->declBus(c+6617,"riscv_defines VEC_MODE8", false,-1, 1,0);
        vcdp->declBus(c+5801,"riscv_defines CSR_OP_NONE", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines CSR_OP_WRITE", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines CSR_OP_SET", false,-1, 1,0);
        vcdp->declBus(c+6617,"riscv_defines CSR_OP_CLEAR", false,-1, 1,0);
        vcdp->declBus(c+7121,"riscv_defines SP_DVR0", false,-1, 15,0);
        vcdp->declBus(c+7129,"riscv_defines SP_DCR0", false,-1, 15,0);
        vcdp->declBus(c+7137,"riscv_defines SP_DMR1", false,-1, 15,0);
        vcdp->declBus(c+7145,"riscv_defines SP_DMR2", false,-1, 15,0);
        vcdp->declBus(c+7153,"riscv_defines SP_DVR_MSB", false,-1, 7,0);
        vcdp->declBus(c+7161,"riscv_defines SP_DCR_MSB", false,-1, 7,0);
        vcdp->declBus(c+7169,"riscv_defines SP_DMR_MSB", false,-1, 7,0);
        vcdp->declBus(c+7177,"riscv_defines SP_DSR_MSB", false,-1, 7,0);
        vcdp->declBus(c+5801,"riscv_defines SEL_REGFILE", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines SEL_FW_EX", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines SEL_FW_WB", false,-1, 1,0);
        vcdp->declBus(c+5873,"riscv_defines OP_A_REGA_OR_FWD", false,-1, 2,0);
        vcdp->declBus(c+7073,"riscv_defines OP_A_CURRPC", false,-1, 2,0);
        vcdp->declBus(c+7081,"riscv_defines OP_A_IMM", false,-1, 2,0);
        vcdp->declBus(c+7089,"riscv_defines OP_A_REGB_OR_FWD", false,-1, 2,0);
        vcdp->declBus(c+7097,"riscv_defines OP_A_REGC_OR_FWD", false,-1, 2,0);
        vcdp->declBus(c+7185,"riscv_defines IMMA_Z", false,-1, 0,0);
        vcdp->declBus(c+7193,"riscv_defines IMMA_ZERO", false,-1, 0,0);
        vcdp->declBus(c+5873,"riscv_defines OP_B_REGB_OR_FWD", false,-1, 2,0);
        vcdp->declBus(c+7073,"riscv_defines OP_B_REGC_OR_FWD", false,-1, 2,0);
        vcdp->declBus(c+7081,"riscv_defines OP_B_IMM", false,-1, 2,0);
        vcdp->declBus(c+7089,"riscv_defines OP_B_REGA_OR_FWD", false,-1, 2,0);
        vcdp->declBus(c+7097,"riscv_defines OP_B_BMASK", false,-1, 2,0);
        vcdp->declBus(c+5769,"riscv_defines IMMB_I", false,-1, 3,0);
        vcdp->declBus(c+7201,"riscv_defines IMMB_S", false,-1, 3,0);
        vcdp->declBus(c+7209,"riscv_defines IMMB_U", false,-1, 3,0);
        vcdp->declBus(c+7217,"riscv_defines IMMB_PCINCR", false,-1, 3,0);
        vcdp->declBus(c+7225,"riscv_defines IMMB_S2", false,-1, 3,0);
        vcdp->declBus(c+7233,"riscv_defines IMMB_S3", false,-1, 3,0);
        vcdp->declBus(c+7241,"riscv_defines IMMB_VS", false,-1, 3,0);
        vcdp->declBus(c+7249,"riscv_defines IMMB_VU", false,-1, 3,0);
        vcdp->declBus(c+7257,"riscv_defines IMMB_SHUF", false,-1, 3,0);
        vcdp->declBus(c+7265,"riscv_defines IMMB_CLIP", false,-1, 3,0);
        vcdp->declBus(c+7273,"riscv_defines IMMB_BI", false,-1, 3,0);
        vcdp->declBus(c+7185,"riscv_defines BMASK_A_ZERO", false,-1, 0,0);
        vcdp->declBus(c+7193,"riscv_defines BMASK_A_S3", false,-1, 0,0);
        vcdp->declBus(c+5801,"riscv_defines BMASK_B_S2", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines BMASK_B_S3", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines BMASK_B_ZERO", false,-1, 1,0);
        vcdp->declBus(c+6617,"riscv_defines BMASK_B_ONE", false,-1, 1,0);
        vcdp->declBus(c+7185,"riscv_defines BMASK_A_REG", false,-1, 0,0);
        vcdp->declBus(c+7193,"riscv_defines BMASK_A_IMM", false,-1, 0,0);
        vcdp->declBus(c+7185,"riscv_defines BMASK_B_REG", false,-1, 0,0);
        vcdp->declBus(c+7193,"riscv_defines BMASK_B_IMM", false,-1, 0,0);
        vcdp->declBus(c+7185,"riscv_defines MIMM_ZERO", false,-1, 0,0);
        vcdp->declBus(c+7193,"riscv_defines MIMM_S3", false,-1, 0,0);
        vcdp->declBus(c+5801,"riscv_defines OP_C_REGC_OR_FWD", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines OP_C_REGB_OR_FWD", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines OP_C_JT", false,-1, 1,0);
        vcdp->declBus(c+5801,"riscv_defines BRANCH_NONE", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines BRANCH_JAL", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines BRANCH_JALR", false,-1, 1,0);
        vcdp->declBus(c+6617,"riscv_defines BRANCH_COND", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines JT_JAL", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines JT_JALR", false,-1, 1,0);
        vcdp->declBus(c+6617,"riscv_defines JT_COND", false,-1, 1,0);
        vcdp->declBus(c+5873,"riscv_defines PC_BOOT", false,-1, 2,0);
        vcdp->declBus(c+7081,"riscv_defines PC_JUMP", false,-1, 2,0);
        vcdp->declBus(c+7089,"riscv_defines PC_BRANCH", false,-1, 2,0);
        vcdp->declBus(c+7097,"riscv_defines PC_EXCEPTION", false,-1, 2,0);
        vcdp->declBus(c+7105,"riscv_defines PC_ERET", false,-1, 2,0);
        vcdp->declBus(c+7281,"riscv_defines PC_DBG_NPC", false,-1, 2,0);
        vcdp->declBus(c+5801,"riscv_defines EXC_PC_ILLINSN", false,-1, 1,0);
        vcdp->declBus(c+6609,"riscv_defines EXC_PC_ECALL", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines EXC_PC_LOAD", false,-1, 1,0);
        vcdp->declBus(c+6601,"riscv_defines EXC_PC_STORE", false,-1, 1,0);
        vcdp->declBus(c+6617,"riscv_defines EXC_PC_IRQ", false,-1, 1,0);
        vcdp->declBus(c+7289,"riscv_defines EXC_CAUSE_ILLEGAL_INSN", false,-1, 5,0);
        vcdp->declBus(c+7297,"riscv_defines EXC_CAUSE_BREAKPOINT", false,-1, 5,0);
        vcdp->declBus(c+7305,"riscv_defines EXC_CAUSE_ECALL_UMODE", false,-1, 5,0);
        vcdp->declBus(c+7313,"riscv_defines EXC_CAUSE_ECALL_MMODE", false,-1, 5,0);
        vcdp->declBus(c+7185,"riscv_defines TRAP_MACHINE", false,-1, 0,0);
        vcdp->declBus(c+7193,"riscv_defines TRAP_USER", false,-1, 0,0);
        vcdp->declBus(c+7321,"riscv_defines EXC_OFF_RST", false,-1, 7,0);
        vcdp->declBus(c+7329,"riscv_defines EXC_OFF_ILLINSN", false,-1, 7,0);
        vcdp->declBus(c+7337,"riscv_defines EXC_OFF_ECALL", false,-1, 7,0);
        vcdp->declBus(c+7345,"riscv_defines EXC_OFF_LSUERR", false,-1, 7,0);
        vcdp->declBus(c+5737,"riscv_defines DBG_SETS_W", false,-1, 31,0);
        vcdp->declBus(c+5753,"riscv_defines DBG_SETS_IRQ", false,-1, 31,0);
        vcdp->declBus(c+6409,"riscv_defines DBG_SETS_ECALL", false,-1, 31,0);
        vcdp->declBus(c+5729,"riscv_defines DBG_SETS_EILL", false,-1, 31,0);
        vcdp->declBus(c+5849,"riscv_defines DBG_SETS_ELSU", false,-1, 31,0);
        vcdp->declBus(c+5857,"riscv_defines DBG_SETS_EBRK", false,-1, 31,0);
        vcdp->declBus(c+5721,"riscv_defines DBG_SETS_SSTE", false,-1, 31,0);
        vcdp->declBus(c+7353,"riscv_defines DBG_CAUSE_HALT", false,-1, 5,0);
        vcdp->declBus(c+6409,"riscv_defines C_CMD", false,-1, 31,0);
        vcdp->declBus(c+5769,"riscv_defines C_FPU_ADD_CMD", false,-1, 3,0);
        vcdp->declBus(c+7201,"riscv_defines C_FPU_SUB_CMD", false,-1, 3,0);
        vcdp->declBus(c+7209,"riscv_defines C_FPU_MUL_CMD", false,-1, 3,0);
        vcdp->declBus(c+7217,"riscv_defines C_FPU_DIV_CMD", false,-1, 3,0);
        vcdp->declBus(c+7225,"riscv_defines C_FPU_I2F_CMD", false,-1, 3,0);
        vcdp->declBus(c+7233,"riscv_defines C_FPU_F2I_CMD", false,-1, 3,0);
        vcdp->declBus(c+7241,"riscv_defines C_FPU_SQRT_CMD", false,-1, 3,0);
        vcdp->declBus(c+7249,"riscv_defines C_FPU_NOP_CMD", false,-1, 3,0);
        vcdp->declBus(c+7257,"riscv_defines C_FPU_FMADD_CMD", false,-1, 3,0);
        vcdp->declBus(c+7265,"riscv_defines C_FPU_FMSUB_CMD", false,-1, 3,0);
        vcdp->declBus(c+7361,"riscv_defines C_FPU_FNMADD_CMD", false,-1, 3,0);
        vcdp->declBus(c+7273,"riscv_defines C_FPU_FNMSUB_CMD", false,-1, 3,0);
        vcdp->declBus(c+5753,"riscv_defines C_FFLAG", false,-1, 31,0);
        vcdp->declBus(c+5729,"riscv_defines C_RM", false,-1, 31,0);
        vcdp->declBus(c+5873,"riscv_defines C_RM_NEAREST", false,-1, 2,0);
        vcdp->declBus(c+7073,"riscv_defines C_RM_TRUNC", false,-1, 2,0);
        vcdp->declBus(c+7089,"riscv_defines C_RM_PLUSINF", false,-1, 2,0);
        vcdp->declBus(c+7081,"riscv_defines C_RM_MINUSINF", false,-1, 2,0);
        vcdp->declBus(c+5753,"riscv_defines C_PC", false,-1, 31,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_operands_o[0]),32);
        vcdp->fullBus(c+2,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_operands_o[1]),32);
        vcdp->fullBus(c+3,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_operands_o[2]),32);
        vcdp->fullBus(c+25,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_operands[0]),32);
        vcdp->fullBus(c+26,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_operands[1]),32);
        vcdp->fullBus(c+27,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_operands[2]),32);
        vcdp->fullBus(c+49,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__ex_stage_i__apu_master_operands_o[0]),32);
        vcdp->fullBus(c+50,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__ex_stage_i__apu_master_operands_o[1]),32);
        vcdp->fullBus(c+51,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__ex_stage_i__apu_master_operands_o[2]),32);
        vcdp->fullArray(c+73,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut),160);
        vcdp->fullBit(c+113,(vlSymsp->TOP__top.debug_gnt_o));
        vcdp->fullBus(c+121,(vlSymsp->TOP__top.debug_rdata_o),32);
        vcdp->fullBit(c+129,(vlSymsp->TOP__top.__PVT__instr_req));
        vcdp->fullBus(c+137,((0x3ffff0U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int)),22);
        vcdp->fullBit(c+145,(vlSymsp->TOP__top.__PVT__data_req));
        vcdp->fullBus(c+153,((0xfffffff0U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int)),32);
        vcdp->fullBit(c+161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__clear_instr_valid));
        vcdp->fullBit(c+169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_set));
        vcdp->fullBus(c+177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_mux_id),3);
        vcdp->fullBit(c+185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__busy_L0));
        vcdp->fullBus(c+193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_wdata_fw),32);
        vcdp->fullBus(c+201,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_op),2);
        vcdp->fullBit(c+209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__halt_if));
        vcdp->fullBit(c+217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_ready));
        vcdp->fullBit(c+225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_ready));
        vcdp->fullBit(c+233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_valid));
        vcdp->fullBit(c+241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_valid));
        vcdp->fullBit(c+249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__lsu_ready_wb));
        vcdp->fullBit(c+257,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__lsu_ready_ex));
        vcdp->fullBit(c+265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_hwlp_regid));
        vcdp->fullBus(c+273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_hwlp_we),3);
        vcdp->fullBus(c+281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        vcdp->fullBit(c+289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_req));
        vcdp->fullBit(c+297,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_stall));
        vcdp->fullBit(c+305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_trap));
        vcdp->fullBit(c+313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_wreq));
        vcdp->fullBit(c+321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_csr_we));
        vcdp->fullBit(c+329,((1U & ((~ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                                    | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__branch_req)))));
        vcdp->fullBit(c+337,(((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_in_id)) 
                              | (2U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_in_id)))));
        vcdp->fullBit(c+345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__load_stall));
        vcdp->fullBit(c+353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__offset_fsm_ns));
        vcdp->fullBit(c+361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__if_valid));
        vcdp->fullBit(c+369,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__valid) 
                              & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_ready))));
        vcdp->fullBit(c+377,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__valid));
        vcdp->fullBit(c+385,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__branch_req));
        vcdp->fullBus(c+393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_addr_n),32);
        vcdp->fullBit(c+401,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_valid));
        vcdp->fullBit(c+409,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_ready));
        vcdp->fullBit(c+417,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_is_hwlp));
        vcdp->fullBus(c+425,((0xfffffffeU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        vcdp->fullBus(c+433,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__NS),4);
        vcdp->fullBit(c+441,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__do_fetch));
        vcdp->fullBit(c+449,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__do_hwlp));
        vcdp->fullBit(c+457,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__save_rdata_last));
        vcdp->fullBit(c+465,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__save_rdata_hwlp));
        vcdp->fullBit(c+473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__valid));
        vcdp->fullBit(c+481,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__next_valid));
        vcdp->fullBus(c+489,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_n),32);
        vcdp->fullBus(c+497,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_int),32);
        vcdp->fullBit(c+505,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__is_hwlp_n));
        vcdp->fullBit(c+513,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__fetch_valid));
        vcdp->fullBit(c+521,(vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellinp__L0_buffer_i__hwlp_i));
        vcdp->fullBus(c+529,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__NS),3);
        vcdp->fullBus(c+537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int),32);
        vcdp->fullBit(c+545,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__deassert_we));
        vcdp->fullBus(c+553,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_in_id),2);
        vcdp->fullBit(c+561,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__halt_id));
        vcdp->fullBit(c+569,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__exc_kill));
        vcdp->fullBit(c+577,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_alu_we_id));
        vcdp->fullBit(c+585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_we_id));
        vcdp->fullBit(c+593,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_req_id));
        vcdp->fullBit(c+601,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regid));
        vcdp->fullBus(c+609,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we),3);
        vcdp->fullBus(c+617,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we_int),3);
        vcdp->fullBus(c+625,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_cnt),32);
        vcdp->fullBus(c+633,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_cnt_int),32);
        vcdp->fullBit(c+641,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_valid));
        vcdp->fullBus(c+649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_a_fw_id),32);
        vcdp->fullBus(c+657,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_id),32);
        vcdp->fullBus(c+665,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_c_fw_id),32);
        vcdp->fullBus(c+673,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b),32);
        vcdp->fullBus(c+681,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_vec),32);
        vcdp->fullBus(c+689,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operand_a),32);
        vcdp->fullBus(c+697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operand_b),32);
        vcdp->fullBus(c+705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operand_c),32);
        vcdp->fullBus(c+713,(vlSymsp->TOP__top.riscv_core_i__DOT__id_stage_i__DOT____Vcellinp__registers_i__waddr_b_i),6);
        vcdp->fullBus(c+721,(vlSymsp->TOP__top.riscv_core_i__DOT__id_stage_i__DOT____Vcellinp__registers_i__wdata_b_i),32);
        vcdp->fullBit(c+729,(vlSymsp->TOP__top.riscv_core_i__DOT__id_stage_i__DOT____Vcellinp__registers_i__we_b_i));
        vcdp->fullBus(c+737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_b_dec),32);
        vcdp->fullBus(c+745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),5);
        vcdp->fullBit(c+753,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done));
        vcdp->fullBit(c+761,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec));
        vcdp->fullBit(c+769,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id));
        vcdp->fullBit(c+777,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int));
        vcdp->fullBus(c+785,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_result),32);
        vcdp->fullBus(c+793,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_result),32);
        vcdp->fullBit(c+801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready));
        vcdp->fullBus(c+809,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift),6);
        vcdp->fullBus(c+817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left),32);
        vcdp->fullBus(c+825,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt),32);
        vcdp->fullBus(c+833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int),32);
        vcdp->fullBus(c+841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result),32);
        vcdp->fullBus(c+849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result),32);
        vcdp->fullBus(c+857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result),32);
        vcdp->fullBus(c+865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result),6);
        vcdp->fullBus(c+873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result),32);
        vcdp->fullBus(c+881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D),32);
        vcdp->fullBus(c+889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D),32);
        vcdp->fullBit(c+897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S));
        vcdp->fullBit(c+905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S));
        vcdp->fullBit(c+913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S));
        vcdp->fullBit(c+921,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S));
        vcdp->fullBus(c+929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN),2);
        vcdp->fullQuad(c+937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac),34);
        vcdp->fullQuad(c+953,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result),34);
        vcdp->fullBus(c+969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS),3);
        vcdp->fullBus(c+977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__NS),2);
        vcdp->fullBit(c+985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_we_int));
        vcdp->fullBus(c+993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__frm_n),3);
        vcdp->fullBus(c+1001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__fflags_n),5);
        vcdp->fullBus(c+1009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__fprec_n),5);
        vcdp->fullBus(c+1017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mepc_n),32);
        vcdp->fullBus(c+1025,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__exception_pc),32);
        vcdp->fullBus(c+1033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mstatus_n),6);
        vcdp->fullBus(c+1041,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mcause_n),6);
        vcdp->fullBus(c+1049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_inc),12);
        vcdp->fullArray(c+1057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_n),384);
        vcdp->fullBus(c+1153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCMR_n),2);
        vcdp->fullBus(c+1161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCER_n),12);
        vcdp->fullBus(c+1169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__rdata_sel_n),3);
        vcdp->fullBit(c+1177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__state_n));
        vcdp->fullBus(c+1185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__settings_n),6);
        vcdp->fullBit(c+1193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_rreq_n));
        vcdp->fullBit(c+1201,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_n));
        vcdp->fullBit(c+1209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__jump_req_n));
        vcdp->fullBit(c+1217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__csr_req_n));
        vcdp->fullBit(c+1225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_wr));
        vcdp->fullBus(c+1233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__stall_ns),2);
        vcdp->fullBus(c+1241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_rdata),32);
        vcdp->fullBit(c+1249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_resume));
        vcdp->fullBit(c+1257,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_halt));
        vcdp->fullBus(c+1265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_cause_n),6);
        vcdp->fullBit(c+1273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_ssth_n));
        vcdp->fullBit(c+1281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__ssth_clear));
        vcdp->fullBus(c+1289,((0xffff0U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int)),20);
        vcdp->fullBit(c+1297,(((((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                 | (2U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                                | (3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                               | (IData)(vlSymsp->TOP__top.__PVT__data_req))));
        vcdp->fullBit(c+1305,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_load_event_ex) 
                                & (IData)(vlSymsp->TOP__top.__PVT__data_req))
                                ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__busy_L0)
                                : (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__busy_L0) 
                                    | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ctrl_busy)) 
                                   | ((((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                        | (2U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                                       | (3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                                      | (IData)(vlSymsp->TOP__top.__PVT__data_req))))));
        vcdp->fullBus(c+1313,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__deassert_we)
                                ? 0U : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))),2);
        vcdp->fullBus(c+1321,((0x1fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)
                                         ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_id_imm)
                                         : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)
                                             ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_id_imm)
                                             : (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                                                >> 5U))))),5);
        vcdp->fullBus(c+1329,((0x1fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)
                                         ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_id_imm)
                                         : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)
                                             ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_id_imm)
                                             : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))),5);
        vcdp->fullBus(c+1337,((0x3fU & ((0x1fU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
                                        - (IData)(1U)))),6);
        vcdp->fullBus(c+1345,((0x1fU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U])),5);
        vcdp->fullBit(c+1353,((1U & (~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes))));
        vcdp->fullBus(c+1361,((0x1fU & ((IData)(0x1fU) 
                                        - vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]))),5);
        vcdp->fullBit(c+1369,(((0x28U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                               & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex)))));
        vcdp->fullBus(c+1377,(((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                                ? (0x3fU & ((0x1fU 
                                             & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
                                            - (IData)(1U)))
                                : 0x1fU)),6);
        vcdp->fullBus(c+1385,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes),32);
        vcdp->fullArray(c+1393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes),160);
        vcdp->fullBus(c+1433,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                ? 0U : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S)
                                         ? (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S) 
                                             << 0x1fU) 
                                            | (0x7fffffffU 
                                               & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                                                  >> 1U)))
                                         : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP))),32);
        vcdp->fullBus(c+1441,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S)
                                ? (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S) 
                                    & (~ ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                          & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                              >> 0x1fU) 
                                             ^ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))))
                                    ? (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                                       + vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D)
                                    : (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                                       - vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D))
                                : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP)),32);
        vcdp->fullBus(c+1449,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S)
                                ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                    ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                                    : (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP) 
                                        << 0x1fU) | 
                                       (0x7fffffffU 
                                        & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP 
                                           >> 1U))))
                                : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP)),32);
        vcdp->fullBit(c+1457,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                      ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                         >> 1U) : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP)))));
        vcdp->fullBit(c+1465,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)
                                : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP))));
        vcdp->fullBit(c+1473,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                      ? ((((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                                           | ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                              >> 1U)) 
                                          & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                         & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                             >> 0x1fU) 
                                            ^ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))
                                      : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP)))));
        vcdp->fullBus(c+1481,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S) 
                                & (~ ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                      & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                          >> 0x1fU) 
                                         ^ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))))
                                ? (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                                   + vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D)
                                : (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                                   - vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D))),32);
        vcdp->fullBus(c+1489,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                                : (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP) 
                                    << 0x1fU) | (0x7fffffffU 
                                                 & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP 
                                                    >> 1U))))),32);
        vcdp->fullBus(c+1497,((0x3fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                         ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
                                         : ((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP))
                                             ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP) 
                                                - (IData)(1U))
                                             : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP))))),6);
        vcdp->fullBit(c+1505,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S) 
                               & (~ ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                     & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                         >> 0x1fU) 
                                        ^ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))))));
        vcdp->fullBus(c+1513,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a),17);
        vcdp->fullBus(c+1521,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b),17);
        vcdp->fullQuad(c+1529,((VL_ULL(0x3ffffffff) 
                                & VL_MULS_QQQ(34,34,34, 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a)), 
                                              (VL_ULL(0x3ffffffff) 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b))))),34);
        vcdp->fullBit(c+1545,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                      ? (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                 >> 0x21U))
                                      : (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                 >> 0x1fU))))));
        vcdp->fullBit(c+1553,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                      ? (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                 >> 0x20U))
                                      : (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                 >> 0x1fU))))));
        vcdp->fullBus(c+1561,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_in),12);
        vcdp->fullBus(c+1569,(((0x2aU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))
                                ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex
                                : VL_NEGATE_I((IData)(
                                                      ((0x28U 
                                                        == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                                       & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex))))))),32);
        vcdp->fullBit(c+1577,(((4U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_mux_id)) 
                               & (3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_pc_mux_id)))));
        vcdp->fullBit(c+1585,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__valid) 
                               & (~ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__branch_req)))));
        vcdp->fullBus(c+1593,(((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we_int))
                                ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_start_int
                                : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_wdata_int)),32);
        vcdp->fullBus(c+1601,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we_int))
                                ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_target
                                : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_wdata_int)),32);
        vcdp->fullBit(c+1609,(((IData)(vlSymsp->TOP__top.__PVT__data_req) 
                               & (~ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_we_ex)))));
        vcdp->fullBit(c+1617,(((IData)(vlSymsp->TOP__top.__PVT__data_req) 
                               & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_we_ex))));
        vcdp->fullBit(c+1625,(vlSymsp->TOP__top.irq_ack_o));
        vcdp->fullBit(c+1633,(vlSymsp->TOP__top.debug_halted_o));
        vcdp->fullBit(c+1641,(vlSymsp->TOP__top.core_busy_o));
        vcdp->fullBit(c+1649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__is_hwlp_id));
        vcdp->fullBit(c+1657,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                     >> 3U))));
        vcdp->fullBit(c+1665,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ctrl_busy));
        vcdp->fullBus(c+1673,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_operands_ex[0]),32);
        vcdp->fullBus(c+1674,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_operands_ex[1]),32);
        vcdp->fullBus(c+1675,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_operands_ex[2]),32);
        vcdp->fullBit(c+1697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_we_wb));
        vcdp->fullBit(c+1705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_we_fw));
        vcdp->fullBit(c+1713,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_access));
        vcdp->fullBus(c+1721,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_addr),12);
        vcdp->fullBus(c+1729,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_rdata),32);
        vcdp->fullBus(c+1737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_wdata),32);
        vcdp->fullBit(c+1745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_req_int));
        vcdp->fullBit(c+1753,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__m_irq_enable));
        vcdp->fullBit(c+1761,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_irq_sec));
        vcdp->fullBit(c+1769,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_save_if));
        vcdp->fullBit(c+1777,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_ack));
        vcdp->fullBus(c+1785,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_data_rc_id),32);
        vcdp->fullBit(c+1793,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jr_stall));
        vcdp->fullBit(c+1801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__core_ctrl_firstfetch));
        vcdp->fullBus(c+1809,(vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT____Vcellinp__hwloop_controller_i__hwlp_dec_cnt_id_i),2);
        vcdp->fullBit(c+1817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__do_hwlp_int));
        vcdp->fullBit(c+1825,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__use_last));
        vcdp->fullBit(c+1833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__use_hwlp));
        vcdp->fullBit(c+1841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__ebrk_insn));
        vcdp->fullBit(c+1849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mret_insn_dec));
        vcdp->fullBit(c+1857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__uret_insn_dec));
        vcdp->fullBit(c+1865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__ecall_insn_dec));
        vcdp->fullBit(c+1873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__pipe_flush_dec));
        vcdp->fullBit(c+1881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__rega_used_dec));
        vcdp->fullBit(c+1889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regb_used_dec));
        vcdp->fullBit(c+1897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_used_dec));
        vcdp->fullBit(c+1905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__branch_taken_ex));
        vcdp->fullBus(c+1913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id),2);
        vcdp->fullBit(c+1921,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__csr_access) 
                               & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_en_ex) 
                                  & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_lat_ex) 
                                     >> 1U)))));
        vcdp->fullBit(c+1929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__instr_multicycle));
        vcdp->fullBus(c+1937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_i_type),32);
        vcdp->fullBus(c+1945,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_vu_type),32);
        vcdp->fullBus(c+1953,(((3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_vec_mode))
                                ? ((0x3000000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                  >> 3U)) 
                                   | ((0x30000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                   >> 7U)) 
                                      | ((0x300U & 
                                          (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                           >> 0xdU)) 
                                         | ((2U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                   >> 0x13U)) 
                                            | (1U & 
                                               (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                >> 0x19U))))))
                                : ((0x10000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                >> 4U)) 
                                   | (1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                            >> 0x19U))))),32);
        vcdp->fullBus(c+1961,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                ? 0U : (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        vcdp->fullBit(c+1969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__exc_ack));
        vcdp->fullBus(c+1977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id),6);
        vcdp->fullBus(c+1985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id),6);
        vcdp->fullBus(c+1993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id),32);
        vcdp->fullBus(c+2001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operator),7);
        vcdp->fullBus(c+2009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_mux),2);
        vcdp->fullBit(c+2017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
        vcdp->fullBus(c+2025,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_target_mux_sel),2);
        vcdp->fullBus(c+2033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_operator),3);
        vcdp->fullBit(c+2041,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_int_en) 
                               | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_dot_en))));
        vcdp->fullBit(c+2049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_int_en));
        vcdp->fullBit(c+2057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_sel_subword));
        vcdp->fullBus(c+2065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_signed_mode),2);
        vcdp->fullBit(c+2073,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_dot_en));
        vcdp->fullBus(c+2081,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_dot_signed),2);
        vcdp->fullBit(c+2089,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel));
        vcdp->fullBit(c+2097,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_sign_ext_id));
        vcdp->fullBit(c+2105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_load_event_id));
        vcdp->fullBit(c+2113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_target_mux_sel));
        vcdp->fullBit(c+2121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_start_mux_sel));
        vcdp->fullBit(c+2129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel));
        vcdp->fullBit(c+2137,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__csr_access));
        vcdp->fullBit(c+2145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_mux));
        vcdp->fullBus(c+2153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_mux),2);
        vcdp->fullBit(c+2161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel));
        vcdp->fullBit(c+2169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel));
        vcdp->fullBit(c+2177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_imm_mux));
        vcdp->fullBus(c+2185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_id_imm),5);
        vcdp->fullBus(c+2193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_id_imm),5);
        vcdp->fullBus(c+2201,((3U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_vu_type)),2);
        vcdp->fullBus(c+2209,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_imm_mux)
                                ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_imm_mux)
                                    ? (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                >> 0x19U))
                                    : 0U) : 0U)),5);
        vcdp->fullBus(c+2217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_vec_mode),2);
        vcdp->fullBit(c+2225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id));
        vcdp->fullBit(c+2233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id));
        vcdp->fullBit(c+2241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id));
        vcdp->fullBit(c+2249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id));
        vcdp->fullBit(c+2257,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                 == (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                              >> 0x14U))) 
                                & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regb_used_dec)) 
                               & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                  >> 0x14U))))));
        vcdp->fullBit(c+2265,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                 == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_used_dec)) 
                               & (0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)))));
        vcdp->fullBit(c+2273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id));
        vcdp->fullBit(c+2281,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_waddr_ex) 
                                 == (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                              >> 0x14U))) 
                                & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regb_used_dec)) 
                               & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                  >> 0x14U))))));
        vcdp->fullBit(c+2289,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_waddr_ex) 
                                 == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                                & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_used_dec)) 
                               & (0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)))));
        vcdp->fullBus(c+2297,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_rreq_q)
                                ? (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_q) 
                                    << 5U) | (0x1fU 
                                              & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q) 
                                                 >> 2U)))
                                : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))),6);
        vcdp->fullBus(c+2305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec),32);
        vcdp->fullBit(c+2313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
        vcdp->fullBit(c+2321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
        vcdp->fullBus(c+2329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we),3);
        vcdp->fullBus(c+2337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        vcdp->fullBit(c+2345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__boot_done));
        vcdp->fullQuad(c+2353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n),64);
        vcdp->fullBus(c+2369,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellinp__ex_stage_i__apu_operands_i[0]),32);
        vcdp->fullBus(c+2370,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellinp__ex_stage_i__apu_operands_i[1]),32);
        vcdp->fullBus(c+2371,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellinp__ex_stage_i__apu_operands_i[2]),32);
        vcdp->fullBit(c+2393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready));
        vcdp->fullBus(c+2401,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev),32);
        vcdp->fullBus(c+2409,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev),32);
        vcdp->fullBit(c+2417,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid));
        vcdp->fullBus(c+2425,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask),32);
        vcdp->fullBit(c+2433,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate));
        vcdp->fullBus(c+2441,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a),32);
        vcdp->fullBus(c+2449,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b),32);
        vcdp->fullQuad(c+2457,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a),36);
        vcdp->fullQuad(c+2473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b),36);
        vcdp->fullBus(c+2489,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result),32);
        vcdp->fullQuad(c+2497,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded),37);
        vcdp->fullBus(c+2513,((((((0x1cU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                  | (0x1dU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                 | (0x1eU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                | (0x1fU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))
                                ? (0x7fffffffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
                                                  >> 1U))
                                : 0U)),32);
        vcdp->fullBus(c+2521,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                               + (((((0x1cU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                     | (0x1dU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                    | (0x1eU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                   | (0x1fU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))
                                   ? (0x7fffffffU & 
                                      (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
                                       >> 1U)) : 0U))),32);
        vcdp->fullBit(c+2529,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left));
        vcdp->fullBit(c+2537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round));
        vcdp->fullBit(c+2545,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic));
        vcdp->fullBus(c+2553,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a),32);
        vcdp->fullQuad(c+2561,(((0x26U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))
                                 ? (((QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                                 : (((QData)((IData)(
                                                     VL_NEGATE_I((IData)(
                                                                         ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                                          & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                             >> 0x1fU)))))) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a))))),64);
        vcdp->fullBus(c+2577,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal),4);
        vcdp->fullBus(c+2585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater),4);
        vcdp->fullBus(c+2593,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater),4);
        vcdp->fullBus(c+2601,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed),4);
        vcdp->fullBus(c+2609,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec),4);
        vcdp->fullBus(c+2617,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec),4);
        vcdp->fullBus(c+2625,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result),4);
        vcdp->fullBus(c+2633,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan),4);
        vcdp->fullBus(c+2641,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax),32);
        vcdp->fullBus(c+2649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax),4);
        vcdp->fullBus(c+2657,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b),32);
        vcdp->fullBus(c+2665,(((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax
                                : (((0x17U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                    & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                                       >> 0x1fU)) ? 0U
                                    : ((1U & (IData)(
                                                     (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                      >> 0x24U)))
                                        ? (~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex)
                                        : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))),32);
        vcdp->fullBit(c+2673,((1U & (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                             >> 0x24U)))));
        vcdp->fullBus(c+2681,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel),8);
        vcdp->fullBus(c+2689,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel),4);
        vcdp->fullBus(c+2697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel),2);
        vcdp->fullBus(c+2705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel),2);
        vcdp->fullBus(c+2713,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through),4);
        vcdp->fullBus(c+2721,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0),32);
        vcdp->fullBus(c+2729,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in),32);
        vcdp->fullBus(c+2737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input),32);
        vcdp->fullBus(c+2745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result),6);
        vcdp->fullBus(c+2753,((~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
        vcdp->fullBus(c+2761,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                               & (~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask))),32);
        vcdp->fullBus(c+2769,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                               | vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
        vcdp->fullBus(c+2777,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP)
                                ? VL_NEGATE_I(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D)
                                : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D)),32);
        vcdp->fullBit(c+2785,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed));
        vcdp->fullBus(c+2793,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1),32);
        vcdp->fullBus(c+2801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2),24);
        vcdp->fullBus(c+2809,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3),16);
        vcdp->fullBus(c+2817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4),10);
        vcdp->fullBit(c+2825,((0U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
        vcdp->fullBus(c+2833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev),32);
        vcdp->fullBus(c+2841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D),32);
        vcdp->fullBit(c+2849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S));
        vcdp->fullQuad(c+2857,((VL_ULL(0x1ffffffff) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                    ? (((QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex)))
                                    : VL_EXTENDS_QI(33,32, vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex)))),33);
        vcdp->fullBus(c+2873,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex))),5);
        vcdp->fullBus(c+2881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword),2);
        vcdp->fullBus(c+2889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed),2);
        vcdp->fullBit(c+2897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith));
        vcdp->fullBus(c+2905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm),5);
        vcdp->fullBus(c+2913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword),2);
        vcdp->fullBus(c+2921,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed),2);
        vcdp->fullBit(c+2929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        vcdp->fullBit(c+2937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active));
        vcdp->fullBit(c+2945,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save));
        vcdp->fullBit(c+2953,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry));
        vcdp->fullBus(c+2961,(((((VL_EXTENDS_II(32,18, 
                                                (0x3ffffU 
                                                 & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U])) 
                                  + VL_EXTENDS_II(32,18, 
                                                  (0x3ffffU 
                                                   & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
                                                       << 0xeU) 
                                                      | (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[0U] 
                                                         >> 0x12U))))) 
                                 + VL_EXTENDS_II(32,18, 
                                                 (0x3ffffU 
                                                  & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[2U] 
                                                      << 0x1cU) 
                                                     | (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
                                                        >> 4U))))) 
                                + VL_EXTENDS_II(32,18, 
                                                (0x3ffffU 
                                                 & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[2U] 
                                                     << 0xaU) 
                                                    | (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul[1U] 
                                                       >> 0x16U))))) 
                               + vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_c_ex)),32);
        vcdp->fullBus(c+2969,(((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[0U] 
                                + ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[2U] 
                                    << 0x1eU) | (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[1U] 
                                                 >> 2U))) 
                               + vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_c_ex)),32);
        vcdp->fullQuad(c+2977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a),36);
        vcdp->fullQuad(c+2993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b),36);
        vcdp->fullArray(c+3009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul),72);
        vcdp->fullQuad(c+3033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a),34);
        vcdp->fullQuad(c+3049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b),34);
        vcdp->fullArray(c+3065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul),68);
        vcdp->fullBus(c+3089,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        vcdp->fullBus(c+3097,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__perf_rdata),32);
        vcdp->fullBus(c+3105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__pccr_index),5);
        vcdp->fullBit(c+3113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__pccr_all_sel));
        vcdp->fullBit(c+3121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__is_pccr));
        vcdp->fullBit(c+3129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__is_pcer));
        vcdp->fullBit(c+3137,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__is_pcmr));
        vcdp->fullBus(c+3145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__pc_tracking_fsm_ns),2);
        vcdp->fullBus(c+3153,((0x3fffffU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)),22);
        vcdp->fullBus(c+3161,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_type_ex))
                                ? ((2U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                    ? ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                        ? 8U : 4U) : 
                                   ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                     ? 2U : 1U)) : 
                               ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_type_ex))
                                 ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned_ex)
                                     ? 1U : ((2U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                              ? ((1U 
                                                  & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                  ? 8U
                                                  : 0xcU)
                                              : ((1U 
                                                  & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                  ? 6U
                                                  : 3U)))
                                 : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned_ex)
                                     ? ((2U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                         ? ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                             ? 7U : 3U)
                                         : ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                             ? 1U : 0U))
                                     : ((2U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                         ? ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                             ? 8U : 0xcU)
                                         : ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                             ? 0xeU
                                             : 0xfU)))))),4);
        vcdp->fullBus(c+3169,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                ? ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                    ? ((0xff000000U 
                                        & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex 
                                           << 0x18U)) 
                                       | (0xffffffU 
                                          & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex 
                                             >> 8U)))
                                    : ((0xffff0000U 
                                        & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex 
                                           << 0x10U)) 
                                       | (0xffffU & 
                                          (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex 
                                           >> 0x10U))))
                                : ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                    ? ((0xffffff00U 
                                        & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex 
                                           << 8U)) 
                                       | (0xffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex 
                                                   >> 0x18U)))
                                    : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex))),32);
        vcdp->fullBus(c+3177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int),32);
        vcdp->fullBus(c+3185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_pc_mux_id),2);
        vcdp->fullBus(c+3193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_cause),6);
        vcdp->fullBit(c+3201,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__trap_addr_mux));
        vcdp->fullBit(c+3209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__is_decoding));
        vcdp->fullBit(c+3217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned));
        vcdp->fullBit(c+3225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_multicycle));
        vcdp->fullBus(c+3233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_target),32);
        vcdp->fullBus(c+3241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__lsu_rdata),32);
        vcdp->fullBus(c+3249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__epc),32);
        vcdp->fullBit(c+3257,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_save_cause));
        vcdp->fullBit(c+3265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_save_id));
        vcdp->fullBus(c+3273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_cause),6);
        vcdp->fullBit(c+3281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_restore_mret_id));
        vcdp->fullBit(c+3289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_restore_uret_id));
        vcdp->fullBus(c+3297,((0x1fU & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_cause))),5);
        vcdp->fullBus(c+3305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_rdata),32);
        vcdp->fullBus(c+3313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__exc_pc),32);
        vcdp->fullBit(c+3321,((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr))));
        vcdp->fullBus(c+3329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwlp_target),32);
        vcdp->fullBus(c+3337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwlp_dec_cnt),2);
        vcdp->fullBus(c+3345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__trap_base_addr),24);
        vcdp->fullBus(c+3353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__instr_decompressed),32);
        vcdp->fullBit(c+3361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__illegal_c_insn));
        vcdp->fullBit(c+3369,((3U != (3U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_rdata))));
        vcdp->fullBus(c+3377,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr),2);
        vcdp->fullBus(c+3385,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j),32);
        vcdp->fullBit(c+3393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__hwlp_is_crossword));
        vcdp->fullBit(c+3401,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__is_crossword));
        vcdp->fullBit(c+3409,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__next_is_crossword));
        vcdp->fullBit(c+3417,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__next_upper_compressed));
        vcdp->fullBit(c+3425,((3U != (3U & (vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[3U] 
                                            >> 0x10U)))));
        vcdp->fullBus(c+3433,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_real_next),32);
        vcdp->fullArray(c+3441,(vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o),128);
        vcdp->fullBus(c+3473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata),32);
        vcdp->fullBus(c+3481,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata_unaligned),32);
        vcdp->fullBit(c+3489,((3U != (3U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata))));
        vcdp->fullBit(c+3497,((3U != (3U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata 
                                            >> 0x10U)))));
        vcdp->fullBit(c+3505,((3U != (3U & vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[3U]))));
        vcdp->fullBit(c+3513,((3U != (3U & ((vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[3U] 
                                             << 0x10U) 
                                            | (vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[2U] 
                                               >> 0x10U))))));
        vcdp->fullBit(c+3521,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__valid));
        vcdp->fullBit(c+3529,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__illegal_insn_dec));
        vcdp->fullBus(c+3537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_b),32);
        vcdp->fullBit(c+3545,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_en));
        vcdp->fullBus(c+3553,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel),3);
        vcdp->fullBus(c+3561,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel),3);
        vcdp->fullBus(c+3569,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel),2);
        vcdp->fullBus(c+3577,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel),4);
        vcdp->fullBit(c+3585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_we_id));
        vcdp->fullBus(c+3593,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_type_id),2);
        vcdp->fullBus(c+3601,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_target),32);
        vcdp->fullBus(c+3609,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_start_int),32);
        vcdp->fullBit(c+3617,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__csr_status));
        vcdp->fullBit(c+3625,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__prepost_useincr));
        vcdp->fullBus(c+3633,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel),2);
        vcdp->fullBus(c+3641,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel),2);
        vcdp->fullBus(c+3649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel),2);
        vcdp->fullBit(c+3657,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__scalar_replication));
        vcdp->fullBit(c+3665,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
        vcdp->fullBit(c+3673,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        vcdp->fullBus(c+3681,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1),32);
        vcdp->fullBus(c+3689,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in),32);
        vcdp->fullBus(c+3697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result),32);
        vcdp->fullBus(c+3705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result),32);
        vcdp->fullBus(c+3713,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__wdata_offset),2);
        vcdp->fullBus(c+3721,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        vcdp->fullBit(c+3729,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_cause) 
                                     >> 5U))));
        vcdp->fullBus(c+3737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_n),2);
        vcdp->fullBus(c+3745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__ppc_int),32);
        vcdp->fullBus(c+3753,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__npc_int),32);
        vcdp->fullBus(c+3761,((0xfffffU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)),20);
        vcdp->fullBus(c+3769,((0xffffcU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)),20);
        vcdp->fullBus(c+3777,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q),5);
        vcdp->fullBit(c+3785,((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_q))));
        vcdp->fullBit(c+3793,(vlSymsp->TOP__top.debug_rvalid_o));
        vcdp->fullBus(c+3801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__hwlp_dec_cnt_id),2);
        vcdp->fullBit(c+3809,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_valid_id));
        vcdp->fullBus(c+3817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id),32);
        vcdp->fullBit(c+3825,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__is_compressed_id));
        vcdp->fullBit(c+3833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__illegal_c_insn_id));
        vcdp->fullBit(c+3841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__useincr_addr_ex));
        vcdp->fullBit(c+3849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__branch_in_ex));
        vcdp->fullBus(c+3857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_ex),32);
        vcdp->fullBit(c+3865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_en_ex));
        vcdp->fullBus(c+3873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex),7);
        vcdp->fullBus(c+3881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex),32);
        vcdp->fullBus(c+3889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex),32);
        vcdp->fullBus(c+3897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex),5);
        vcdp->fullBus(c+3905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex),5);
        vcdp->fullBus(c+3913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__imm_vec_ext_ex),2);
        vcdp->fullBus(c+3921,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_vec_mode_ex),2);
        vcdp->fullBus(c+3929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex),3);
        vcdp->fullBus(c+3937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_a_ex),32);
        vcdp->fullBus(c+3945,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex),32);
        vcdp->fullBus(c+3953,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex),32);
        vcdp->fullBit(c+3961,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_en_ex));
        vcdp->fullBit(c+3969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_sel_subword_ex));
        vcdp->fullBus(c+3977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_signed_mode_ex),2);
        vcdp->fullBus(c+3985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex),5);
        vcdp->fullBus(c+3993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_a_ex),32);
        vcdp->fullBus(c+4001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_b_ex),32);
        vcdp->fullBus(c+4009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_c_ex),32);
        vcdp->fullBus(c+4017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_signed_ex),2);
        vcdp->fullBus(c+4025,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__fpu_op_ex),4);
        vcdp->fullBit(c+4033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_en_ex));
        vcdp->fullBus(c+4041,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_type_ex),2);
        vcdp->fullBus(c+4049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_flags_ex),15);
        vcdp->fullBus(c+4057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_op_ex),6);
        vcdp->fullBus(c+4065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_lat_ex),2);
        vcdp->fullBus(c+4073,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_waddr_ex),6);
        vcdp->fullBus(c+4081,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_waddr_ex),6);
        vcdp->fullBit(c+4089,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_we_ex));
        vcdp->fullBus(c+4097,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu),6);
        vcdp->fullBus(c+4105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_waddr_ex),6);
        vcdp->fullBit(c+4113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_we_ex));
        vcdp->fullBit(c+4121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_access_ex));
        vcdp->fullBus(c+4129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_op_ex),2);
        vcdp->fullBus(c+4137,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_access_ex)
                                ? (0xfffU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex)
                                : 0U)),12);
        vcdp->fullBus(c+4145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        vcdp->fullBit(c+4153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_sign_ext_ex));
        vcdp->fullBus(c+4161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_reg_offset_ex),2);
        vcdp->fullBit(c+4169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_req_ex));
        vcdp->fullBit(c+4177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_load_event_ex));
        vcdp->fullBit(c+4185,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                >> 5U) & (0U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_q)))));
        vcdp->fullQuad(c+4193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q),64);
        vcdp->fullQuad(c+4209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q),64);
        vcdp->fullQuad(c+4225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q),64);
        vcdp->fullBus(c+4241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__settings_q),6);
        vcdp->fullBit(c+4249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_rreq_q));
        vcdp->fullBus(c+4257,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_q) 
                                << 5U) | (0x1fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q) 
                                                   >> 2U)))),6);
        vcdp->fullBit(c+4265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__csr_req_q));
        vcdp->fullBus(c+4273,((0xfffU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q) 
                                         >> 2U))),12);
        vcdp->fullBus(c+4281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__wdata_q),32);
        vcdp->fullBit(c+4289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__jump_req_q));
        vcdp->fullBit(c+4297,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__core_busy_q));
        vcdp->fullBit(c+4305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__offset_fsm_cs));
        vcdp->fullBit(c+4313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__is_hwlp_id_q));
        vcdp->fullBus(c+4321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwlp_dec_cnt_if),2);
        vcdp->fullBus(c+4329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__CS),4);
        vcdp->fullBit(c+4337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__is_hwlp_q));
        vcdp->fullBus(c+4345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata_last_q),32);
        vcdp->fullBus(c+4353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__addr_q),32);
        vcdp->fullBus(c+4361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__CS),3);
        vcdp->fullArray(c+4369,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__L0_buffer),128);
        vcdp->fullBus(c+4401,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__id_stage_i__apu_operands_ex_o[0]),32);
        vcdp->fullBus(c+4402,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__id_stage_i__apu_operands_ex_o[1]),32);
        vcdp->fullBus(c+4403,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__id_stage_i__apu_operands_ex_o[2]),32);
        vcdp->fullBus(c+4425,((0xfffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                         >> 0x14U))),32);
        vcdp->fullBus(c+4433,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                       >> 0x1fU)))) 
                                               << 0xcU)) 
                               | ((0xfe0U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                              >> 7U))))),32);
        vcdp->fullBus(c+4441,(((0xffffe000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                       >> 0x1fU)))) 
                                               << 0xdU)) 
                               | ((0x1000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                            >> 7U))))))),32);
        vcdp->fullBus(c+4449,((0xfffff000U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id)),32);
        vcdp->fullBus(c+4457,(((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                       >> 0x1fU)))) 
                                               << 0x14U)) 
                               | ((0xff000U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id) 
                                  | ((0x800U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                >> 9U)) 
                                     | (0x7feU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                  >> 0x14U)))))),32);
        vcdp->fullBus(c+4465,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0xfU))),32);
        vcdp->fullBus(c+4473,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0x14U))),32);
        vcdp->fullBus(c+4481,(((0xffffffe0U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                       >> 0x18U)))) 
                                               << 5U)) 
                               | (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                           >> 0x14U)))),32);
        vcdp->fullBus(c+4489,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0x19U))),32);
        vcdp->fullBus(c+4497,(((0xffffffc0U & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                       >> 0x18U)))) 
                                               << 6U)) 
                               | ((0x3eU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                            >> 0x13U)) 
                                  | (1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                           >> 0x19U))))),32);
        vcdp->fullBus(c+4505,(((0x3000000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                              >> 3U)) 
                               | ((0x30000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                               >> 7U)) 
                                  | ((0x300U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                >> 0xdU)) 
                                     | ((2U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                               >> 0x13U)) 
                                        | (1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                 >> 0x19U))))))),32);
        vcdp->fullBus(c+4513,(((0x10000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                            >> 4U)) 
                               | (1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0x19U)))),32);
        vcdp->fullBus(c+4521,((((IData)(1U) << (0x1fU 
                                                & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                   >> 0x14U))) 
                               - (IData)(1U))),32);
        vcdp->fullBit(c+4529,((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))));
        vcdp->fullBit(c+4537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q));
        vcdp->fullBus(c+4545,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0xfU))),6);
        vcdp->fullBus(c+4553,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0x14U))),6);
        vcdp->fullBus(c+4561,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 7U))),6);
        vcdp->fullBus(c+4569,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__mem[
                              (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0x14U))]),32);
        vcdp->fullBit(c+4577,((1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                     >> 7U))));
        vcdp->fullArray(c+4585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__mem),1024);
        vcdp->fullBus(c+4841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),5);
        vcdp->fullBit(c+4849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q));
        vcdp->fullBit(c+4857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__boot_done_q));
        vcdp->fullBus(c+4865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs),2);
        vcdp->fullBus(c+4873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__i),32);
        vcdp->fullBit(c+4881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_we_lsu));
        vcdp->fullBus(c+4889,((~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex)),32);
        vcdp->fullBus(c+4897,((~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex)),32);
        vcdp->fullBus(c+4905,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex) 
                                << 0x18U) | (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex) 
                                              << 0x10U) 
                                             | (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex) 
                                                 << 8U) 
                                                | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex))))),32);
        vcdp->fullBit(c+4913,((((((0x10U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                  | (0x11U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                 | (0x16U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                | (0x17U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                               | (0x47U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))));
        vcdp->fullBit(c+4921,(((0x17U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                               & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                                  >> 0x1fU))));
        vcdp->fullBit(c+4929,((0x28U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))));
        vcdp->fullBus(c+4937,(((IData)(0xfffffffeU) 
                               << (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex))),32);
        vcdp->fullBit(c+4945,((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))));
        vcdp->fullBit(c+4953,((1U & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                      >> 0x1fU) & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))));
        vcdp->fullBus(c+4961,((3U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))),2);
        vcdp->fullBus(c+4969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP),32);
        vcdp->fullBus(c+4977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP),32);
        vcdp->fullBus(c+4985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP),32);
        vcdp->fullBit(c+4993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP));
        vcdp->fullBit(c+5001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP));
        vcdp->fullBit(c+5009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP));
        vcdp->fullBus(c+5017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP),6);
        vcdp->fullBit(c+5025,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP)))))));
        vcdp->fullBus(c+5033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SP),2);
        vcdp->fullBus(c+5041,(((3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex))
                                ? (0x7fffffffU & (((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex)) 
                                                  >> 1U))
                                : 0U)),32);
        vcdp->fullBus(c+5049,(((IData)(1U) << (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex))),32);
        vcdp->fullBit(c+5057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q));
        vcdp->fullBus(c+5065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS),3);
        vcdp->fullBus(c+5073,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_a_ex 
                               ^ VL_NEGATE_I((IData)(
                                                     (1U 
                                                      == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex)))))),32);
        vcdp->fullBus(c+5081,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex 
                               & VL_NEGATE_I((IData)(
                                                     (1U 
                                                      == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex)))))),32);
        vcdp->fullBus(c+5089,(((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex 
                                + (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex 
                                   & VL_NEGATE_I((IData)(
                                                         (1U 
                                                          == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex)))))) 
                               + VL_MULS_III(32,32,32, 
                                             (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_a_ex 
                                              ^ VL_NEGATE_I((IData)(
                                                                    (1U 
                                                                     == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex))))), vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex))),32);
        vcdp->fullBit(c+5097,((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex))));
        vcdp->fullBus(c+5105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_type_q),2);
        vcdp->fullBus(c+5113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        vcdp->fullBit(c+5121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        vcdp->fullBit(c+5129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_we_q));
        vcdp->fullBus(c+5137,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS),2);
        vcdp->fullBus(c+5145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q),32);
        vcdp->fullBus(c+5153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mepc_q),32);
        vcdp->fullBus(c+5161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mstatus_q),6);
        vcdp->fullBus(c+5169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mcause_q),6);
        vcdp->fullBit(c+5177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__id_valid_q));
        vcdp->fullBus(c+5185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q),12);
        vcdp->fullArray(c+5193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_q),384);
        vcdp->fullBus(c+5289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCMR_q),2);
        vcdp->fullBus(c+5297,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCER_q),12);
        vcdp->fullBus(c+5305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__unnamedblk3__DOT__i),32);
        vcdp->fullBus(c+5313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__unnamedblk2__DOT__i),32);
        vcdp->fullBus(c+5321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__rdata_sel_q),3);
        vcdp->fullBit(c+5329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__state_q));
        vcdp->fullBus(c+5337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q),15);
        vcdp->fullBit(c+5345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_q));
        vcdp->fullBus(c+5353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__stall_cs),2);
        vcdp->fullBus(c+5361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_cause_q),6);
        vcdp->fullBit(c+5369,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_ssth_q));
        vcdp->fullBus(c+5377,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__pc_tracking_fsm_cs),2);
        vcdp->fullBus(c+5385,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((0xffffff00U 
                                        & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                           << 8U)) 
                                       | (0xffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x18U)))
                                    : ((0xffff0000U 
                                        & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                           << 0x10U)) 
                                       | (0xffffU & 
                                          (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x10U))))
                                : ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((0xff000000U 
                                        & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                           << 0x18U)) 
                                       | (0xffffffU 
                                          & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                             >> 8U)))
                                    : vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o))),32);
        vcdp->fullBus(c+5393,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffff0000U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 7U)))) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 0x18U))))
                                        : ((0xff00U 
                                            & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 0x18U))))
                                    : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffff0000U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 0x1fU)))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                 >> 0x10U)))
                                        : (0xffffU 
                                           & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                              >> 0x10U))))
                                : ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffff0000U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 0x17U)))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                 >> 8U)))
                                        : (0xffffU 
                                           & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                              >> 8U)))
                                    : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffff0000U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 0xfU)))) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o))
                                        : (0xffffU 
                                           & vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o))))),32);
        vcdp->fullBus(c+5401,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffffff00U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 0x1fU)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                 >> 0x18U)))
                                        : (0xffU & 
                                           (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                            >> 0x18U)))
                                    : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffffff00U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 0x17U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                 >> 0x10U)))
                                        : (0xffU & 
                                           (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                            >> 0x10U))))
                                : ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffffff00U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 0xfU)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                 >> 8U)))
                                        : (0xffU & 
                                           (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                            >> 8U)))
                                    : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                        ? ((0xffffff00U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                                                       >> 7U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o))
                                        : (0xffU & vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o))))),32);
        vcdp->fullBit(c+5409,(vlSymsp->TOP__top__ram_i.__PVT__instr_rvalid_o));
        vcdp->fullArray(c+5417,(vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_a_o),128);
        vcdp->fullBit(c+5449,(vlSymsp->TOP__top__ram_i.__PVT__data_rvalid_o));
        vcdp->fullBus(c+5457,(vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o),32);
        vcdp->fullBit(c+5465,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_we_ex));
        vcdp->fullBus(c+5473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_q),32);
        vcdp->fullBus(c+5481,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_id),32);
        vcdp->fullBus(c+5489,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex),32);
        vcdp->fullBus(c+5497,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_type_ex),2);
        vcdp->fullBit(c+5505,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned_ex));
        vcdp->fullBit(c+5513,((3U == (3U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_q 
                                            >> 2U)))));
        vcdp->fullBus(c+5521,(((IData)(4U) + (0xfffffffcU 
                                              & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_q))),32);
        vcdp->fullBit(c+5529,(vlTOPp->clk_i));
        vcdp->fullBit(c+5537,(vlTOPp->rstn_i));
        vcdp->fullBit(c+5545,(vlTOPp->irq_i));
        vcdp->fullBus(c+5553,(vlTOPp->irq_id_i),5);
        vcdp->fullBit(c+5561,(vlTOPp->irq_ack_o));
        vcdp->fullBus(c+5569,(vlTOPp->irq_id_o),5);
        vcdp->fullBit(c+5577,(vlTOPp->irq_sec_i));
        vcdp->fullBit(c+5585,(vlTOPp->sec_lvl_o));
        vcdp->fullBit(c+5593,(vlTOPp->debug_req_i));
        vcdp->fullBit(c+5601,(vlTOPp->debug_gnt_o));
        vcdp->fullBit(c+5609,(vlTOPp->debug_rvalid_o));
        vcdp->fullBus(c+5617,(vlTOPp->debug_addr_i),15);
        vcdp->fullBit(c+5625,(vlTOPp->debug_we_i));
        vcdp->fullBus(c+5633,(vlTOPp->debug_wdata_i),32);
        vcdp->fullBus(c+5641,(vlTOPp->debug_rdata_o),32);
        vcdp->fullBit(c+5649,(vlTOPp->debug_halted_o));
        vcdp->fullBit(c+5657,(vlTOPp->fetch_enable_i));
        vcdp->fullBit(c+5665,(vlTOPp->core_busy_o));
        vcdp->fullBus(c+5673,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_wr) 
                                << 5U) | (0x1fU & ((IData)(vlTOPp->debug_addr_i) 
                                                   >> 2U)))),6);
        vcdp->fullBit(c+5681,((((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_req) 
                                  | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__csr_req_q)) 
                                 | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__jump_req_q)) 
                                | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_wreq)) 
                               | (IData)(vlTOPp->debug_req_i))));
        vcdp->fullBit(c+5689,((1U & ((~ (IData)(vlTOPp->fetch_enable_i)) 
                                     & (~ (IData)(vlSymsp->TOP__top.core_busy_o))))));
        vcdp->fullBus(c+5697,(0x80U),32);
        vcdp->fullBus(c+5705,(0x16U),32);
        vcdp->fullBus(c+5713,(0x80U),32);
        vcdp->fullBus(c+5721,(0U),32);
        vcdp->fullBus(c+5729,(3U),32);
        vcdp->fullBus(c+5737,(6U),32);
        vcdp->fullBus(c+5745,(0xfU),32);
        vcdp->fullBus(c+5753,(5U),32);
        vcdp->fullBit(c+5761,(1U));
        vcdp->fullBus(c+5769,(0U),4);
        vcdp->fullBus(c+5777,(0U),6);
        vcdp->fullBit(c+5785,(0U));
        vcdp->fullBit(c+5793,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_gnt_i));
        vcdp->fullBus(c+5801,(0U),2);
        vcdp->fullBus(c+5809,(0U),15);
        vcdp->fullBit(c+5817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_valid_i));
        vcdp->fullBus(c+5825,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_result_i),32);
        vcdp->fullBus(c+5833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_flags_i),5);
        vcdp->fullBus(c+5841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ext_perf_counters_i),2);
        vcdp->fullBus(c+5849,(2U),32);
        vcdp->fullBus(c+5857,(1U),32);
        vcdp->fullBus(c+5865,(0U),5);
        vcdp->fullBus(c+5873,(0U),3);
        vcdp->fullBus(c+5881,(0U),18);
        vcdp->fullBus(c+5889,(0U),12);
        vcdp->fullBus(c+5897,(0U),24);
        vcdp->fullBus(c+5905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__utvec_q),24);
        vcdp->fullBit(c+5913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwlp_branch));
        vcdp->fullBus(c+5921,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_read_regs),18);
        vcdp->fullBus(c+5929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_read_regs_valid),3);
        vcdp->fullBus(c+5937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_write_regs),12);
        vcdp->fullBus(c+5945,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_write_regs_valid),2);
        vcdp->fullBus(c+5953,(0x20U),32);
        vcdp->fullArray(c+5961,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__mem_fp),1024);
        vcdp->fullBus(c+6217,(0x20U),32);
        vcdp->fullBus(c+6225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns),2);
        vcdp->fullBit(c+6233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__fpu_busy));
        vcdp->fullBus(c+6241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__apu_result),32);
        vcdp->fullBit(c+6249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__apu_req));
        vcdp->fullBit(c+6257,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__apu_ready));
        vcdp->fullBit(c+6265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__apu_gnt));
        vcdp->fullBus(c+6273,(0U),32);
        vcdp->fullBus(c+6281,(0xcU),32);
        vcdp->fullBus(c+6289,(0xbU),32);
        vcdp->fullBus(c+6297,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__frm_q),3);
        vcdp->fullBus(c+6305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__fflags_q),5);
        vcdp->fullBus(c+6313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__fprec_q),5);
        vcdp->fullBus(c+6321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__uepc_q),32);
        vcdp->fullBus(c+6329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__uepc_n),32);
        vcdp->fullBus(c+6337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__ucause_q),6);
        vcdp->fullBus(c+6345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__ucause_n),6);
        vcdp->fullBus(c+6353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mtvec_reg_q),24);
        vcdp->fullBus(c+6361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__utvec_n),24);
        vcdp->fullBus(c+6369,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_reg_q),2);
        vcdp->fullBus(c+6377,(0xcU),32);
        vcdp->fullBus(c+6385,(0x14U),32);
        vcdp->fullBus(c+6393,(0xfU),4);
        vcdp->fullBus(c+6401,(0x100000U),32);
        vcdp->fullBus(c+6409,(4U),32);
        vcdp->fullBus(c+6417,(0x73U),7);
        vcdp->fullBus(c+6425,(0xfU),7);
        vcdp->fullBus(c+6433,(0x33U),7);
        vcdp->fullBus(c+6441,(0x13U),7);
        vcdp->fullBus(c+6449,(0x23U),7);
        vcdp->fullBus(c+6457,(3U),7);
        vcdp->fullBus(c+6465,(0x63U),7);
        vcdp->fullBus(c+6473,(0x67U),7);
        vcdp->fullBus(c+6481,(0x6fU),7);
        vcdp->fullBus(c+6489,(0x17U),7);
        vcdp->fullBus(c+6497,(0x37U),7);
        vcdp->fullBus(c+6505,(0x53U),7);
        vcdp->fullBus(c+6513,(0x43U),7);
        vcdp->fullBus(c+6521,(0x4fU),7);
        vcdp->fullBus(c+6529,(0x47U),7);
        vcdp->fullBus(c+6537,(0x4bU),7);
        vcdp->fullBus(c+6545,(0x27U),7);
        vcdp->fullBus(c+6553,(7U),7);
        vcdp->fullBus(c+6561,(0xbU),7);
        vcdp->fullBus(c+6569,(0x2bU),7);
        vcdp->fullBus(c+6577,(0x5bU),7);
        vcdp->fullBus(c+6585,(0x57U),7);
        vcdp->fullBus(c+6593,(0x7bU),7);
        vcdp->fullBus(c+6601,(2U),2);
        vcdp->fullBus(c+6609,(1U),2);
        vcdp->fullBus(c+6617,(3U),2);
        vcdp->fullBus(c+6625,(7U),32);
        vcdp->fullBus(c+6633,(0x18U),7);
        vcdp->fullBus(c+6641,(0x19U),7);
        vcdp->fullBus(c+6649,(0x1aU),7);
        vcdp->fullBus(c+6657,(0x1bU),7);
        vcdp->fullBus(c+6665,(0x1cU),7);
        vcdp->fullBus(c+6673,(0x1dU),7);
        vcdp->fullBus(c+6681,(0x1eU),7);
        vcdp->fullBus(c+6689,(0x1fU),7);
        vcdp->fullBus(c+6697,(0x2fU),7);
        vcdp->fullBus(c+6705,(0x2eU),7);
        vcdp->fullBus(c+6713,(0x15U),7);
        vcdp->fullBus(c+6721,(0x24U),7);
        vcdp->fullBus(c+6729,(0x25U),7);
        vcdp->fullBus(c+6737,(0x26U),7);
        vcdp->fullBus(c+6745,(0x28U),7);
        vcdp->fullBus(c+6753,(0x29U),7);
        vcdp->fullBus(c+6761,(0x2aU),7);
        vcdp->fullBus(c+6769,(0x2cU),7);
        vcdp->fullBus(c+6777,(0x36U),7);
        vcdp->fullBus(c+6785,(0x34U),7);
        vcdp->fullBus(c+6793,(0x35U),7);
        vcdp->fullBus(c+6801,(0x3eU),7);
        vcdp->fullBus(c+6809,(0x3fU),7);
        vcdp->fullBus(c+6817,(0U),7);
        vcdp->fullBus(c+6825,(1U),7);
        vcdp->fullBus(c+6833,(4U),7);
        vcdp->fullBus(c+6841,(5U),7);
        vcdp->fullBus(c+6849,(8U),7);
        vcdp->fullBus(c+6857,(9U),7);
        vcdp->fullBus(c+6865,(0xaU),7);
        vcdp->fullBus(c+6873,(0xcU),7);
        vcdp->fullBus(c+6881,(0xdU),7);
        vcdp->fullBus(c+6889,(2U),7);
        vcdp->fullBus(c+6897,(6U),7);
        vcdp->fullBus(c+6905,(0x14U),7);
        vcdp->fullBus(c+6913,(0x16U),7);
        vcdp->fullBus(c+6921,(0x2dU),7);
        vcdp->fullBus(c+6929,(0x10U),7);
        vcdp->fullBus(c+6937,(0x11U),7);
        vcdp->fullBus(c+6945,(0x12U),7);
        vcdp->fullBus(c+6953,(0x30U),7);
        vcdp->fullBus(c+6961,(0x31U),7);
        vcdp->fullBus(c+6969,(0x32U),7);
        vcdp->fullBus(c+6977,(0x3aU),7);
        vcdp->fullBus(c+6985,(0x3bU),7);
        vcdp->fullBus(c+6993,(0x38U),7);
        vcdp->fullBus(c+7001,(0x39U),7);
        vcdp->fullBus(c+7009,(0x7fU),7);
        vcdp->fullBus(c+7017,(0x40U),7);
        vcdp->fullBus(c+7025,(0x41U),7);
        vcdp->fullBus(c+7033,(0x42U),7);
        vcdp->fullBus(c+7041,(0x44U),7);
        vcdp->fullBus(c+7049,(0x45U),7);
        vcdp->fullBus(c+7057,(0x46U),7);
        vcdp->fullBus(c+7065,(0x48U),7);
        vcdp->fullBus(c+7073,(1U),3);
        vcdp->fullBus(c+7081,(2U),3);
        vcdp->fullBus(c+7089,(3U),3);
        vcdp->fullBus(c+7097,(4U),3);
        vcdp->fullBus(c+7105,(5U),3);
        vcdp->fullBus(c+7113,(6U),3);
        vcdp->fullBus(c+7121,(0x3000U),16);
        vcdp->fullBus(c+7129,(0x3008U),16);
        vcdp->fullBus(c+7137,(0x3010U),16);
        vcdp->fullBus(c+7145,(0x3011U),16);
        vcdp->fullBus(c+7153,(0U),8);
        vcdp->fullBus(c+7161,(1U),8);
        vcdp->fullBus(c+7169,(2U),8);
        vcdp->fullBus(c+7177,(4U),8);
        vcdp->fullBit(c+7185,(0U));
        vcdp->fullBit(c+7193,(1U));
        vcdp->fullBus(c+7201,(1U),4);
        vcdp->fullBus(c+7209,(2U),4);
        vcdp->fullBus(c+7217,(3U),4);
        vcdp->fullBus(c+7225,(4U),4);
        vcdp->fullBus(c+7233,(5U),4);
        vcdp->fullBus(c+7241,(6U),4);
        vcdp->fullBus(c+7249,(7U),4);
        vcdp->fullBus(c+7257,(8U),4);
        vcdp->fullBus(c+7265,(9U),4);
        vcdp->fullBus(c+7273,(0xbU),4);
        vcdp->fullBus(c+7281,(7U),3);
        vcdp->fullBus(c+7289,(2U),6);
        vcdp->fullBus(c+7297,(3U),6);
        vcdp->fullBus(c+7305,(8U),6);
        vcdp->fullBus(c+7313,(0xbU),6);
        vcdp->fullBus(c+7321,(0x80U),8);
        vcdp->fullBus(c+7329,(0x84U),8);
        vcdp->fullBus(c+7337,(0x88U),8);
        vcdp->fullBus(c+7345,(0x8cU),8);
        vcdp->fullBus(c+7353,(0x1fU),6);
        vcdp->fullBus(c+7361,(0xaU),4);
    }
}
