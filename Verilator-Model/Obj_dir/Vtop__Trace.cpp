// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 2U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_operands_o[0]),32);
        vcdp->chgBus(c+2,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_operands_o[1]),32);
        vcdp->chgBus(c+3,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_master_operands_o[2]),32);
        vcdp->chgBus(c+25,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_operands[0]),32);
        vcdp->chgBus(c+26,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_operands[1]),32);
        vcdp->chgBus(c+27,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__apu_operands[2]),32);
        vcdp->chgBus(c+49,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__ex_stage_i__apu_master_operands_o[0]),32);
        vcdp->chgBus(c+50,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__ex_stage_i__apu_master_operands_o[1]),32);
        vcdp->chgBus(c+51,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__ex_stage_i__apu_master_operands_o[2]),32);
        vcdp->chgArray(c+73,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_lut),160);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+113,(vlSymsp->TOP__top.debug_gnt_o));
        vcdp->chgBus(c+121,(vlSymsp->TOP__top.debug_rdata_o),32);
        vcdp->chgBit(c+129,(vlSymsp->TOP__top.__PVT__instr_req));
        vcdp->chgBus(c+137,((0x3ffff0U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int)),22);
        vcdp->chgBit(c+145,(vlSymsp->TOP__top.__PVT__data_req));
        vcdp->chgBus(c+153,((0xfffffff0U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int)),32);
        vcdp->chgBit(c+161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__clear_instr_valid));
        vcdp->chgBit(c+169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_set));
        vcdp->chgBus(c+177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_mux_id),3);
        vcdp->chgBit(c+185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__busy_L0));
        vcdp->chgBus(c+193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_wdata_fw),32);
        vcdp->chgBus(c+201,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_op),2);
        vcdp->chgBit(c+209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__halt_if));
        vcdp->chgBit(c+217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_ready));
        vcdp->chgBit(c+225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_ready));
        vcdp->chgBit(c+233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_valid));
        vcdp->chgBit(c+241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_valid));
        vcdp->chgBit(c+249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__lsu_ready_wb));
        vcdp->chgBit(c+257,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__lsu_ready_ex));
        vcdp->chgBit(c+265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_hwlp_regid));
        vcdp->chgBus(c+273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_hwlp_we),3);
        vcdp->chgBus(c+281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        vcdp->chgBit(c+289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_req));
        vcdp->chgBit(c+297,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_stall));
        vcdp->chgBit(c+305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_trap));
        vcdp->chgBit(c+313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_wreq));
        vcdp->chgBit(c+321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_csr_we));
        vcdp->chgBit(c+329,((1U & ((~ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                                   | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__branch_req)))));
        vcdp->chgBit(c+337,(((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_in_id)) 
                             | (2U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_in_id)))));
        vcdp->chgBit(c+345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__load_stall));
        vcdp->chgBit(c+353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__offset_fsm_ns));
        vcdp->chgBit(c+361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__if_valid));
        vcdp->chgBit(c+369,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__valid) 
                             & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_ready))));
        vcdp->chgBit(c+377,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__valid));
        vcdp->chgBit(c+385,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__branch_req));
        vcdp->chgBus(c+393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_addr_n),32);
        vcdp->chgBit(c+401,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_valid));
        vcdp->chgBit(c+409,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_ready));
        vcdp->chgBit(c+417,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_is_hwlp));
        vcdp->chgBus(c+425,((0xfffffffeU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        vcdp->chgBus(c+433,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__NS),4);
        vcdp->chgBit(c+441,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__do_fetch));
        vcdp->chgBit(c+449,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__do_hwlp));
        vcdp->chgBit(c+457,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__save_rdata_last));
        vcdp->chgBit(c+465,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__save_rdata_hwlp));
        vcdp->chgBit(c+473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__valid));
        vcdp->chgBit(c+481,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__next_valid));
        vcdp->chgBus(c+489,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_n),32);
        vcdp->chgBus(c+497,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_int),32);
        vcdp->chgBit(c+505,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__is_hwlp_n));
        vcdp->chgBit(c+513,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__fetch_valid));
        vcdp->chgBit(c+521,(vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellinp__L0_buffer_i__hwlp_i));
        vcdp->chgBus(c+529,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__NS),3);
        vcdp->chgBus(c+537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int),32);
        vcdp->chgBit(c+545,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__deassert_we));
        vcdp->chgBus(c+553,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_in_id),2);
        vcdp->chgBit(c+561,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__halt_id));
        vcdp->chgBit(c+569,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__exc_kill));
        vcdp->chgBit(c+577,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_alu_we_id));
        vcdp->chgBit(c+585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_we_id));
        vcdp->chgBit(c+593,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_req_id));
        vcdp->chgBit(c+601,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regid));
        vcdp->chgBus(c+609,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we),3);
        vcdp->chgBus(c+617,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we_int),3);
        vcdp->chgBus(c+625,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_cnt),32);
        vcdp->chgBus(c+633,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_cnt_int),32);
        vcdp->chgBit(c+641,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_valid));
        vcdp->chgBus(c+649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_a_fw_id),32);
        vcdp->chgBus(c+657,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_id),32);
        vcdp->chgBus(c+665,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_c_fw_id),32);
        vcdp->chgBus(c+673,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b),32);
        vcdp->chgBus(c+681,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_vec),32);
        vcdp->chgBus(c+689,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operand_a),32);
        vcdp->chgBus(c+697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operand_b),32);
        vcdp->chgBus(c+705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operand_c),32);
        vcdp->chgBus(c+713,(vlSymsp->TOP__top.riscv_core_i__DOT__id_stage_i__DOT____Vcellinp__registers_i__waddr_b_i),6);
        vcdp->chgBus(c+721,(vlSymsp->TOP__top.riscv_core_i__DOT__id_stage_i__DOT____Vcellinp__registers_i__wdata_b_i),32);
        vcdp->chgBit(c+729,(vlSymsp->TOP__top.riscv_core_i__DOT__id_stage_i__DOT____Vcellinp__registers_i__we_b_i));
        vcdp->chgBus(c+737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_b_dec),32);
        vcdp->chgBus(c+745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),5);
        vcdp->chgBit(c+753,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done));
        vcdp->chgBit(c+761,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec));
        vcdp->chgBit(c+769,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id));
        vcdp->chgBit(c+777,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int));
        vcdp->chgBus(c+785,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_result),32);
        vcdp->chgBus(c+793,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_result),32);
        vcdp->chgBit(c+801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready));
        vcdp->chgBus(c+809,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift),6);
        vcdp->chgBus(c+817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left),32);
        vcdp->chgBus(c+825,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt),32);
        vcdp->chgBus(c+833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int),32);
        vcdp->chgBus(c+841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result),32);
        vcdp->chgBus(c+849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result),32);
        vcdp->chgBus(c+857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result),32);
        vcdp->chgBus(c+865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result),6);
        vcdp->chgBus(c+873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result),32);
        vcdp->chgBus(c+881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D),32);
        vcdp->chgBus(c+889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D),32);
        vcdp->chgBit(c+897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S));
        vcdp->chgBit(c+905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S));
        vcdp->chgBit(c+913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S));
        vcdp->chgBit(c+921,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S));
        vcdp->chgBus(c+929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SN),2);
        vcdp->chgQuad(c+937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac),34);
        vcdp->chgQuad(c+953,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result),34);
        vcdp->chgBus(c+969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS),3);
        vcdp->chgBus(c+977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__NS),2);
        vcdp->chgBit(c+985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_we_int));
        vcdp->chgBus(c+993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__frm_n),3);
        vcdp->chgBus(c+1001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__fflags_n),5);
        vcdp->chgBus(c+1009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__fprec_n),5);
        vcdp->chgBus(c+1017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mepc_n),32);
        vcdp->chgBus(c+1025,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__exception_pc),32);
        vcdp->chgBus(c+1033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mstatus_n),6);
        vcdp->chgBus(c+1041,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mcause_n),6);
        vcdp->chgBus(c+1049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_inc),12);
        vcdp->chgArray(c+1057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_n),384);
        vcdp->chgBus(c+1153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCMR_n),2);
        vcdp->chgBus(c+1161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCER_n),12);
        vcdp->chgBus(c+1169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__rdata_sel_n),3);
        vcdp->chgBit(c+1177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__state_n));
        vcdp->chgBus(c+1185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__settings_n),6);
        vcdp->chgBit(c+1193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_rreq_n));
        vcdp->chgBit(c+1201,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_n));
        vcdp->chgBit(c+1209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__jump_req_n));
        vcdp->chgBit(c+1217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__csr_req_n));
        vcdp->chgBit(c+1225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_wr));
        vcdp->chgBus(c+1233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__stall_ns),2);
        vcdp->chgBus(c+1241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_rdata),32);
        vcdp->chgBit(c+1249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_resume));
        vcdp->chgBit(c+1257,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_halt));
        vcdp->chgBus(c+1265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_cause_n),6);
        vcdp->chgBit(c+1273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_ssth_n));
        vcdp->chgBit(c+1281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__ssth_clear));
        vcdp->chgBus(c+1289,((0xffff0U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__instr_addr_int)),20);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1297,(((((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                | (2U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                               | (3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                              | (IData)(vlSymsp->TOP__top.__PVT__data_req))));
        vcdp->chgBit(c+1305,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_load_event_ex) 
                               & (IData)(vlSymsp->TOP__top.__PVT__data_req))
                               ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__busy_L0)
                               : (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__busy_L0) 
                                   | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ctrl_busy)) 
                                  | ((((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                       | (2U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                                      | (3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS))) 
                                     | (IData)(vlSymsp->TOP__top.__PVT__data_req))))));
        vcdp->chgBus(c+1313,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__deassert_we)
                               ? 0U : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))),2);
        vcdp->chgBus(c+1321,((0x1fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)
                                        ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_id_imm)
                                        : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)
                                            ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_id_imm)
                                            : (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                                               >> 5U))))),5);
        vcdp->chgBus(c+1329,((0x1fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)
                                        ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_id_imm)
                                        : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)
                                            ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_id_imm)
                                            : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))),5);
        vcdp->chgBus(c+1337,((0x3fU & ((0x1fU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
                                       - (IData)(1U)))),6);
        vcdp->chgBus(c+1345,((0x1fU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U])),5);
        vcdp->chgBit(c+1353,((1U & (~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes))));
        vcdp->chgBus(c+1361,((0x1fU & ((IData)(0x1fU) 
                                       - vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]))),5);
        vcdp->chgBit(c+1369,(((0x28U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                              & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex)))));
        vcdp->chgBus(c+1377,(((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes)
                               ? (0x3fU & ((0x1fU & 
                                            vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes[0U]) 
                                           - (IData)(1U)))
                               : 0x1fU)),6);
        vcdp->chgBus(c+1385,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__sel_nodes),32);
        vcdp->chgArray(c+1393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_ff_i__DOT__index_nodes),160);
        vcdp->chgBus(c+1433,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                               ? 0U : ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResRegEn_S)
                                        ? (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S) 
                                            << 0x1fU) 
                                           | (0x7fffffffU 
                                              & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP 
                                                 >> 1U)))
                                        : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP))),32);
        vcdp->chgBus(c+1441,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ARegEn_S)
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
        vcdp->chgBus(c+1449,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BRegEn_S)
                               ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                   ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                                   : (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP) 
                                       << 0x1fU) | 
                                      (0x7fffffffU 
                                       & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP 
                                          >> 1U))))
                               : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP)),32);
        vcdp->chgBit(c+1457,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                     ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                        >> 1U) : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP)))));
        vcdp->chgBit(c+1465,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                               ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)
                               : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP))));
        vcdp->chgBit(c+1473,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                     ? ((((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                                          | ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                             >> 1U)) 
                                         & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                        & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                            >> 0x1fU) 
                                           ^ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))
                                     : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP)))));
        vcdp->chgBus(c+1481,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S) 
                               & (~ ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                     & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                         >> 0x1fU) 
                                        ^ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))))
                               ? (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                                  + vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D)
                               : (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddTmp_D 
                                  - vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AddMux_D))),32);
        vcdp->chgBus(c+1489,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                               ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                               : (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP) 
                                   << 0x1fU) | (0x7fffffffU 
                                                & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP 
                                                   >> 1U))))),32);
        vcdp->chgBus(c+1497,((0x3fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S)
                                        ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
                                        : ((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP))
                                            ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP) 
                                               - (IData)(1U))
                                            : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP))))),6);
        vcdp->chgBit(c+1505,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__LoadEn_S) 
                              & (~ ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex) 
                                    & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                        >> 0x1fU) ^ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed)))))));
        vcdp->chgBus(c+1513,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a),17);
        vcdp->chgBus(c+1521,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b),17);
        vcdp->chgQuad(c+1529,((VL_ULL(0x3ffffffff) 
                               & VL_MULS_QQQ(34,34,34, 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a)), 
                                             (VL_ULL(0x3ffffffff) 
                                              & VL_EXTENDS_QI(34,17, vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b))))),34);
        vcdp->chgBit(c+1545,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                     ? (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                >> 0x21U))
                                     : (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                >> 0x1fU))))));
        vcdp->chgBit(c+1553,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                     ? (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                >> 0x20U))
                                     : (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                >> 0x1fU))))));
        vcdp->chgBus(c+1561,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_in),12);
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1569,(((0x2aU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))
                               ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex
                               : VL_NEGATE_I((IData)(
                                                     ((0x28U 
                                                       == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                                      & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex))))))),32);
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1577,(((4U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_mux_id)) 
                              & (3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_pc_mux_id)))));
        vcdp->chgBit(c+1585,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__valid) 
                              & (~ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__branch_req)))));
        vcdp->chgBus(c+1593,(((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we_int))
                               ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_start_int
                               : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_wdata_int)),32);
        vcdp->chgBus(c+1601,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_we_int))
                               ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_target
                               : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_wdata_int)),32);
        vcdp->chgBit(c+1609,(((IData)(vlSymsp->TOP__top.__PVT__data_req) 
                              & (~ (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_we_ex)))));
        vcdp->chgBit(c+1617,(((IData)(vlSymsp->TOP__top.__PVT__data_req) 
                              & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_we_ex))));
    }
}

void Vtop::traceChgThis__7(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1625,(vlSymsp->TOP__top.irq_ack_o));
        vcdp->chgBit(c+1633,(vlSymsp->TOP__top.debug_halted_o));
        vcdp->chgBit(c+1641,(vlSymsp->TOP__top.core_busy_o));
        vcdp->chgBit(c+1649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__is_hwlp_id));
        vcdp->chgBit(c+1657,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                    >> 3U))));
        vcdp->chgBit(c+1665,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ctrl_busy));
        vcdp->chgBus(c+1673,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_operands_ex[0]),32);
        vcdp->chgBus(c+1674,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_operands_ex[1]),32);
        vcdp->chgBus(c+1675,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_operands_ex[2]),32);
        vcdp->chgBit(c+1697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_we_wb));
        vcdp->chgBit(c+1705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_we_fw));
        vcdp->chgBit(c+1713,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_access));
        vcdp->chgBus(c+1721,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_addr),12);
        vcdp->chgBus(c+1729,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_rdata),32);
        vcdp->chgBus(c+1737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_wdata),32);
        vcdp->chgBit(c+1745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_req_int));
        vcdp->chgBit(c+1753,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__m_irq_enable));
        vcdp->chgBit(c+1761,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_irq_sec));
        vcdp->chgBit(c+1769,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_save_if));
        vcdp->chgBit(c+1777,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_ack));
        vcdp->chgBus(c+1785,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_data_rc_id),32);
        vcdp->chgBit(c+1793,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jr_stall));
        vcdp->chgBit(c+1801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__core_ctrl_firstfetch));
        vcdp->chgBus(c+1809,(vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT____Vcellinp__hwloop_controller_i__hwlp_dec_cnt_id_i),2);
        vcdp->chgBit(c+1817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__do_hwlp_int));
        vcdp->chgBit(c+1825,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__use_last));
        vcdp->chgBit(c+1833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__use_hwlp));
        vcdp->chgBit(c+1841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__ebrk_insn));
        vcdp->chgBit(c+1849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mret_insn_dec));
        vcdp->chgBit(c+1857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__uret_insn_dec));
        vcdp->chgBit(c+1865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__ecall_insn_dec));
        vcdp->chgBit(c+1873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__pipe_flush_dec));
        vcdp->chgBit(c+1881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__rega_used_dec));
        vcdp->chgBit(c+1889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regb_used_dec));
        vcdp->chgBit(c+1897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_used_dec));
        vcdp->chgBit(c+1905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__branch_taken_ex));
        vcdp->chgBus(c+1913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id),2);
        vcdp->chgBit(c+1921,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__csr_access) 
                              & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_en_ex) 
                                 & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_lat_ex) 
                                    >> 1U)))));
        vcdp->chgBit(c+1929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__instr_multicycle));
        vcdp->chgBus(c+1937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_i_type),32);
        vcdp->chgBus(c+1945,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_vu_type),32);
        vcdp->chgBus(c+1953,(((3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_vec_mode))
                               ? ((0x3000000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                 >> 3U)) 
                                  | ((0x30000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                  >> 7U)) 
                                     | ((0x300U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
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
        vcdp->chgBus(c+1961,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)
                               ? 0U : (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                >> 0xfU)))),32);
        vcdp->chgBit(c+1969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__exc_ack));
        vcdp->chgBus(c+1977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id),6);
        vcdp->chgBus(c+1985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id),6);
        vcdp->chgBus(c+1993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id),32);
        vcdp->chgBus(c+2001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_operator),7);
        vcdp->chgBus(c+2009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_mux),2);
        vcdp->chgBit(c+2017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
        vcdp->chgBus(c+2025,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_target_mux_sel),2);
        vcdp->chgBus(c+2033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_operator),3);
        vcdp->chgBit(c+2041,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_int_en) 
                              | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_dot_en))));
        vcdp->chgBit(c+2049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_int_en));
        vcdp->chgBit(c+2057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_sel_subword));
        vcdp->chgBus(c+2065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_signed_mode),2);
        vcdp->chgBit(c+2073,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_dot_en));
        vcdp->chgBus(c+2081,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_dot_signed),2);
        vcdp->chgBit(c+2089,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel));
        vcdp->chgBit(c+2097,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_sign_ext_id));
        vcdp->chgBit(c+2105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_load_event_id));
        vcdp->chgBit(c+2113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_target_mux_sel));
        vcdp->chgBit(c+2121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_start_mux_sel));
        vcdp->chgBit(c+2129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_cnt_mux_sel));
        vcdp->chgBit(c+2137,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__csr_access));
        vcdp->chgBit(c+2145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_mux));
        vcdp->chgBus(c+2153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_mux),2);
        vcdp->chgBit(c+2161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel));
        vcdp->chgBit(c+2169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel));
        vcdp->chgBit(c+2177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_imm_mux));
        vcdp->chgBus(c+2185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_a_id_imm),5);
        vcdp->chgBus(c+2193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__bmask_b_id_imm),5);
        vcdp->chgBus(c+2201,((3U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_vu_type)),2);
        vcdp->chgBus(c+2209,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_imm_mux)
                               ? ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__mult_imm_mux)
                                   ? (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                               >> 0x19U))
                                   : 0U) : 0U)),5);
        vcdp->chgBus(c+2217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_vec_mode),2);
        vcdp->chgBit(c+2225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id));
        vcdp->chgBit(c+2233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id));
        vcdp->chgBit(c+2241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id));
        vcdp->chgBit(c+2249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id));
        vcdp->chgBit(c+2257,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                == (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                             >> 0x14U))) 
                               & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regb_used_dec)) 
                              & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                 >> 0x14U))))));
        vcdp->chgBit(c+2265,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_used_dec)) 
                              & (0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)))));
        vcdp->chgBit(c+2273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id));
        vcdp->chgBit(c+2281,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_waddr_ex) 
                                == (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                             >> 0x14U))) 
                               & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regb_used_dec)) 
                              & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                 >> 0x14U))))));
        vcdp->chgBit(c+2289,(((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_waddr_ex) 
                                == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                               & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regc_used_dec)) 
                              & (0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)))));
        vcdp->chgBus(c+2297,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_rreq_q)
                               ? (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_q) 
                                   << 5U) | (0x1fU 
                                             & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q) 
                                                >> 2U)))
                               : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))),6);
        vcdp->chgBus(c+2305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec),32);
        vcdp->chgBit(c+2313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
        vcdp->chgBit(c+2321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
        vcdp->chgBus(c+2329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwloop_we),3);
        vcdp->chgBus(c+2337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        vcdp->chgBit(c+2345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__boot_done));
        vcdp->chgQuad(c+2353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_n),64);
        vcdp->chgBus(c+2369,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellinp__ex_stage_i__apu_operands_i[0]),32);
        vcdp->chgBus(c+2370,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellinp__ex_stage_i__apu_operands_i[1]),32);
        vcdp->chgBus(c+2371,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellinp__ex_stage_i__apu_operands_i[2]),32);
        vcdp->chgBit(c+2393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready));
        vcdp->chgBus(c+2401,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev),32);
        vcdp->chgBus(c+2409,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev),32);
        vcdp->chgBit(c+2417,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid));
        vcdp->chgBus(c+2425,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask),32);
        vcdp->chgBit(c+2433,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate));
        vcdp->chgBus(c+2441,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a),32);
        vcdp->chgBus(c+2449,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b),32);
        vcdp->chgQuad(c+2457,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a),36);
        vcdp->chgQuad(c+2473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b),36);
        vcdp->chgBus(c+2489,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result),32);
        vcdp->chgQuad(c+2497,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded),37);
        vcdp->chgBus(c+2513,((((((0x1cU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                 | (0x1dU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                | (0x1eU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                               | (0x1fU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))
                               ? (0x7fffffffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
                                                 >> 1U))
                               : 0U)),32);
        vcdp->chgBus(c+2521,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                              + (((((0x1cU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                    | (0x1dU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                   | (0x1eU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                  | (0x1fU == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))
                                  ? (0x7fffffffU & 
                                     (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
                                      >> 1U)) : 0U))),32);
        vcdp->chgBit(c+2529,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left));
        vcdp->chgBit(c+2537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round));
        vcdp->chgBit(c+2545,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic));
        vcdp->chgBus(c+2553,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a),32);
        vcdp->chgQuad(c+2561,(((0x26U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))
                                ? (((QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                                : (((QData)((IData)(
                                                    VL_NEGATE_I((IData)(
                                                                        ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                                         & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                            >> 0x1fU)))))) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a))))),64);
        vcdp->chgBus(c+2577,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal),4);
        vcdp->chgBus(c+2585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater),4);
        vcdp->chgBus(c+2593,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_greater),4);
        vcdp->chgBus(c+2601,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed),4);
        vcdp->chgBus(c+2609,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec),4);
        vcdp->chgBus(c+2617,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec),4);
        vcdp->chgBus(c+2625,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result),4);
        vcdp->chgBus(c+2633,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__f_is_nan),4);
        vcdp->chgBus(c+2641,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax),32);
        vcdp->chgBus(c+2649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax),4);
        vcdp->chgBus(c+2657,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b),32);
        vcdp->chgBus(c+2665,(((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                               ? vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax
                               : (((0x17U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                   & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                                      >> 0x1fU)) ? 0U
                                   : ((1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                     >> 0x24U)))
                                       ? (~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex)
                                       : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))),32);
        vcdp->chgBit(c+2673,((1U & (IData)((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                            >> 0x24U)))));
        vcdp->chgBus(c+2681,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel),8);
        vcdp->chgBus(c+2689,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel),4);
        vcdp->chgBus(c+2697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel),2);
        vcdp->chgBus(c+2705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel),2);
        vcdp->chgBus(c+2713,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through),4);
        vcdp->chgBus(c+2721,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0),32);
        vcdp->chgBus(c+2729,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in),32);
        vcdp->chgBus(c+2737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input),32);
        vcdp->chgBus(c+2745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result),6);
        vcdp->chgBus(c+2753,((~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
        vcdp->chgBus(c+2761,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                              & (~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask))),32);
        vcdp->chgBus(c+2769,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                              | vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
        vcdp->chgBus(c+2777,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP)
                               ? VL_NEGATE_I(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D)
                               : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D)),32);
        vcdp->chgBit(c+2785,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_op_a_signed));
        vcdp->chgBus(c+2793,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l1),32);
        vcdp->chgBus(c+2801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l2),24);
        vcdp->chgBus(c+2809,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l3),16);
        vcdp->chgBus(c+2817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_popcnt_i__DOT__cnt_l4),10);
        vcdp->chgBit(c+2825,((0U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
        vcdp->chgBus(c+2833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP_rev),32);
        vcdp->chgBus(c+2841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__OutMux_D),32);
        vcdp->chgBit(c+2849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ABComp_S));
        vcdp->chgQuad(c+2857,((VL_ULL(0x1ffffffff) 
                               & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                                   ? (((QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex)))
                                   : VL_EXTENDS_QI(33,32, vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex)))),33);
        vcdp->chgBus(c+2873,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active)
                               ? (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                               : (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex))),5);
        vcdp->chgBus(c+2881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword),2);
        vcdp->chgBus(c+2889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed),2);
        vcdp->chgBit(c+2897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith));
        vcdp->chgBus(c+2905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm),5);
        vcdp->chgBus(c+2913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword),2);
        vcdp->chgBus(c+2921,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed),2);
        vcdp->chgBit(c+2929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        vcdp->chgBit(c+2937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active));
        vcdp->chgBit(c+2945,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save));
        vcdp->chgBit(c+2953,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry));
        vcdp->chgBus(c+2961,(((((VL_EXTENDS_II(32,18, 
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
        vcdp->chgBus(c+2969,(((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[0U] 
                               + ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[2U] 
                                   << 0x1eU) | (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul[1U] 
                                                >> 2U))) 
                              + vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_c_ex)),32);
        vcdp->chgQuad(c+2977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_a),36);
        vcdp->chgQuad(c+2993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_op_b),36);
        vcdp->chgArray(c+3009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_char_mul),72);
        vcdp->chgQuad(c+3033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_a),34);
        vcdp->chgQuad(c+3049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_op_b),34);
        vcdp->chgArray(c+3065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__genblk1__DOT__dot_short_mul),68);
        vcdp->chgBus(c+3089,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        vcdp->chgBus(c+3097,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__perf_rdata),32);
        vcdp->chgBus(c+3105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__pccr_index),5);
        vcdp->chgBit(c+3113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__pccr_all_sel));
        vcdp->chgBit(c+3121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__is_pccr));
        vcdp->chgBit(c+3129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__is_pcer));
        vcdp->chgBit(c+3137,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__is_pcmr));
        vcdp->chgBus(c+3145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__pc_tracking_fsm_ns),2);
    }
}

void Vtop::traceChgThis__8(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3153,((0x3fffffU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)),22);
        vcdp->chgBus(c+3161,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_type_ex))
                               ? ((2U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                   ? ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                       ? 8U : 4U) : 
                                  ((1U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                    ? 2U : 1U)) : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_type_ex))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned_ex)
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                       ? 8U
                                                       : 0xcU)
                                                      : 
                                                     ((1U 
                                                       & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                       ? 6U
                                                       : 3U)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned_ex)
                                                     ? 
                                                    ((2U 
                                                      & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                       ? 7U
                                                       : 3U)
                                                      : 
                                                     ((1U 
                                                       & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                      ? 
                                                     ((1U 
                                                       & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                       ? 8U
                                                       : 0xcU)
                                                      : 
                                                     ((1U 
                                                       & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)
                                                       ? 0xeU
                                                       : 0xfU)))))),4);
        vcdp->chgBus(c+3169,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__wdata_offset))
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
                                          << 8U)) | 
                                      (0xffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex 
                                                >> 0x18U)))
                                   : vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex))),32);
        vcdp->chgBus(c+3177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int),32);
        vcdp->chgBus(c+3185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_pc_mux_id),2);
        vcdp->chgBus(c+3193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_cause),6);
        vcdp->chgBit(c+3201,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__trap_addr_mux));
        vcdp->chgBit(c+3209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__is_decoding));
        vcdp->chgBit(c+3217,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned));
        vcdp->chgBit(c+3225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_multicycle));
        vcdp->chgBus(c+3233,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__jump_target),32);
        vcdp->chgBus(c+3241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__lsu_rdata),32);
        vcdp->chgBus(c+3249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__epc),32);
        vcdp->chgBit(c+3257,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_save_cause));
        vcdp->chgBit(c+3265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_save_id));
        vcdp->chgBus(c+3273,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_cause),6);
        vcdp->chgBit(c+3281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_restore_mret_id));
        vcdp->chgBit(c+3289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_restore_uret_id));
        vcdp->chgBus(c+3297,((0x1fU & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__exc_cause))),5);
        vcdp->chgBus(c+3305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_rdata),32);
        vcdp->chgBus(c+3313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__exc_pc),32);
        vcdp->chgBit(c+3321,((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr))));
        vcdp->chgBus(c+3329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwlp_target),32);
        vcdp->chgBus(c+3337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwlp_dec_cnt),2);
        vcdp->chgBus(c+3345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__trap_base_addr),24);
        vcdp->chgBus(c+3353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__instr_decompressed),32);
        vcdp->chgBit(c+3361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__illegal_c_insn));
        vcdp->chgBit(c+3369,((3U != (3U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__fetch_rdata))));
        vcdp->chgBus(c+3377,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__pc_is_end_addr),2);
        vcdp->chgBus(c+3385,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwloop_controller_i__DOT__j),32);
        vcdp->chgBit(c+3393,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__hwlp_is_crossword));
        vcdp->chgBit(c+3401,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__is_crossword));
        vcdp->chgBit(c+3409,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__next_is_crossword));
        vcdp->chgBit(c+3417,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__next_upper_compressed));
        vcdp->chgBit(c+3425,((3U != (3U & (vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[3U] 
                                           >> 0x10U)))));
        vcdp->chgBus(c+3433,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_real_next),32);
        vcdp->chgArray(c+3441,(vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o),128);
        vcdp->chgBus(c+3473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata),32);
        vcdp->chgBus(c+3481,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata_unaligned),32);
        vcdp->chgBit(c+3489,((3U != (3U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata))));
        vcdp->chgBit(c+3497,((3U != (3U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata 
                                           >> 0x10U)))));
        vcdp->chgBit(c+3505,((3U != (3U & vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[3U]))));
        vcdp->chgBit(c+3513,((3U != (3U & ((vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[3U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__top.riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT____Vcellout__L0_buffer_i__rdata_o[2U] 
                                              >> 0x10U))))));
        vcdp->chgBit(c+3521,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__valid));
        vcdp->chgBit(c+3529,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__illegal_insn_dec));
        vcdp->chgBus(c+3537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_b),32);
        vcdp->chgBit(c+3545,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_en));
        vcdp->chgBus(c+3553,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel),3);
        vcdp->chgBus(c+3561,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel),3);
        vcdp->chgBus(c+3569,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel),2);
        vcdp->chgBus(c+3577,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel),4);
        vcdp->chgBit(c+3585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_we_id));
        vcdp->chgBus(c+3593,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__data_type_id),2);
        vcdp->chgBus(c+3601,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_target),32);
        vcdp->chgBus(c+3609,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_start_int),32);
        vcdp->chgBit(c+3617,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__csr_status));
        vcdp->chgBit(c+3625,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__prepost_useincr));
        vcdp->chgBus(c+3633,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel),2);
        vcdp->chgBus(c+3641,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel),2);
        vcdp->chgBus(c+3649,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel),2);
        vcdp->chgBit(c+3657,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__scalar_replication));
        vcdp->chgBit(c+3665,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
        vcdp->chgBit(c+3673,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        vcdp->chgBus(c+3681,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1),32);
        vcdp->chgBus(c+3689,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in),32);
        vcdp->chgBus(c+3697,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result),32);
        vcdp->chgBus(c+3705,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result),32);
        vcdp->chgBus(c+3713,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__wdata_offset),2);
        vcdp->chgBus(c+3721,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        vcdp->chgBit(c+3729,((1U & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_cause) 
                                    >> 5U))));
        vcdp->chgBus(c+3737,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_n),2);
        vcdp->chgBus(c+3745,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__ppc_int),32);
        vcdp->chgBus(c+3753,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__npc_int),32);
        vcdp->chgBus(c+3761,((0xfffffU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)),20);
        vcdp->chgBus(c+3769,((0xffffcU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_addr_int)),20);
    }
}

void Vtop::traceChgThis__9(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3777,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q),5);
        vcdp->chgBit(c+3785,((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_q))));
        vcdp->chgBit(c+3793,(vlSymsp->TOP__top.debug_rvalid_o));
        vcdp->chgBus(c+3801,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__hwlp_dec_cnt_id),2);
        vcdp->chgBit(c+3809,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_valid_id));
        vcdp->chgBus(c+3817,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id),32);
        vcdp->chgBit(c+3825,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__is_compressed_id));
        vcdp->chgBit(c+3833,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__illegal_c_insn_id));
        vcdp->chgBit(c+3841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__useincr_addr_ex));
        vcdp->chgBit(c+3849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__branch_in_ex));
        vcdp->chgBus(c+3857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_ex),32);
        vcdp->chgBit(c+3865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_en_ex));
        vcdp->chgBus(c+3873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex),7);
        vcdp->chgBus(c+3881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex),32);
        vcdp->chgBus(c+3889,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex),32);
        vcdp->chgBus(c+3897,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex),5);
        vcdp->chgBus(c+3905,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex),5);
        vcdp->chgBus(c+3913,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__imm_vec_ext_ex),2);
        vcdp->chgBus(c+3921,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_vec_mode_ex),2);
        vcdp->chgBus(c+3929,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex),3);
        vcdp->chgBus(c+3937,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_a_ex),32);
        vcdp->chgBus(c+3945,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex),32);
        vcdp->chgBus(c+3953,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex),32);
        vcdp->chgBit(c+3961,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_en_ex));
        vcdp->chgBit(c+3969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_sel_subword_ex));
        vcdp->chgBus(c+3977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_signed_mode_ex),2);
        vcdp->chgBus(c+3985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex),5);
        vcdp->chgBus(c+3993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_a_ex),32);
        vcdp->chgBus(c+4001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_b_ex),32);
        vcdp->chgBus(c+4009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_op_c_ex),32);
        vcdp->chgBus(c+4017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_dot_signed_ex),2);
        vcdp->chgBus(c+4025,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__fpu_op_ex),4);
        vcdp->chgBit(c+4033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_en_ex));
        vcdp->chgBus(c+4041,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_type_ex),2);
        vcdp->chgBus(c+4049,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_flags_ex),15);
        vcdp->chgBus(c+4057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_op_ex),6);
        vcdp->chgBus(c+4065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_lat_ex),2);
        vcdp->chgBus(c+4073,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__apu_waddr_ex),6);
        vcdp->chgBus(c+4081,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_waddr_ex),6);
        vcdp->chgBit(c+4089,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_we_ex));
        vcdp->chgBus(c+4097,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu),6);
        vcdp->chgBus(c+4105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_waddr_ex),6);
        vcdp->chgBit(c+4113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__regfile_alu_we_ex));
        vcdp->chgBit(c+4121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_access_ex));
        vcdp->chgBus(c+4129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_op_ex),2);
        vcdp->chgBus(c+4137,(((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__csr_access_ex)
                               ? (0xfffU & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex)
                               : 0U)),12);
        vcdp->chgBus(c+4145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        vcdp->chgBit(c+4153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_sign_ext_ex));
        vcdp->chgBus(c+4161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_reg_offset_ex),2);
        vcdp->chgBit(c+4169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_req_ex));
        vcdp->chgBit(c+4177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_load_event_ex));
        vcdp->chgBit(c+4185,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                               >> 5U) & (0U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__priv_lvl_q)))));
        vcdp->chgQuad(c+4193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_start_q),64);
        vcdp->chgQuad(c+4209,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_end_q),64);
        vcdp->chgQuad(c+4225,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__hwlp_counter_q),64);
        vcdp->chgBus(c+4241,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__settings_q),6);
        vcdp->chgBit(c+4249,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_rreq_q));
        vcdp->chgBus(c+4257,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_q) 
                               << 5U) | (0x1fU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q) 
                                                  >> 2U)))),6);
        vcdp->chgBit(c+4265,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__csr_req_q));
        vcdp->chgBus(c+4273,((0xfffU & ((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q) 
                                        >> 2U))),12);
        vcdp->chgBus(c+4281,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__wdata_q),32);
        vcdp->chgBit(c+4289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__jump_req_q));
        vcdp->chgBit(c+4297,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__core_busy_q));
        vcdp->chgBit(c+4305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__offset_fsm_cs));
        vcdp->chgBit(c+4313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__is_hwlp_id_q));
        vcdp->chgBus(c+4321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__hwlp_dec_cnt_if),2);
        vcdp->chgBus(c+4329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__CS),4);
        vcdp->chgBit(c+4337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__is_hwlp_q));
        vcdp->chgBus(c+4345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__rdata_last_q),32);
        vcdp->chgBus(c+4353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__addr_q),32);
        vcdp->chgBus(c+4361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__CS),3);
        vcdp->chgArray(c+4369,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__L0_buffer_i__DOT__L0_buffer),128);
        vcdp->chgBus(c+4401,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__id_stage_i__apu_operands_ex_o[0]),32);
        vcdp->chgBus(c+4402,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__id_stage_i__apu_operands_ex_o[1]),32);
        vcdp->chgBus(c+4403,(vlSymsp->TOP__top.riscv_core_i__DOT____Vcellout__id_stage_i__apu_operands_ex_o[2]),32);
        vcdp->chgBus(c+4425,((0xfffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                        >> 0x14U))),32);
        vcdp->chgBus(c+4433,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0xfe0U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                             >> 7U))))),32);
        vcdp->chgBus(c+4441,(((0xffffe000U & (VL_NEGATE_I((IData)(
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
                                       | (0x1eU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                   >> 7U))))))),32);
        vcdp->chgBus(c+4449,((0xfffff000U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id)),32);
        vcdp->chgBus(c+4457,(((0xfff00000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                      >> 0x1fU)))) 
                                              << 0x14U)) 
                              | ((0xff000U & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id) 
                                 | ((0x800U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                               >> 9U)) 
                                    | (0x7feU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                 >> 0x14U)))))),32);
        vcdp->chgBus(c+4465,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 0xfU))),32);
        vcdp->chgBus(c+4473,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 0x14U))),32);
        vcdp->chgBus(c+4481,(((0xffffffe0U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                      >> 0x18U)))) 
                                              << 5U)) 
                              | (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                          >> 0x14U)))),32);
        vcdp->chgBus(c+4489,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 0x19U))),32);
        vcdp->chgBus(c+4497,(((0xffffffc0U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                                      >> 0x18U)))) 
                                              << 6U)) 
                              | ((0x3eU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                           >> 0x13U)) 
                                 | (1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                          >> 0x19U))))),32);
        vcdp->chgBus(c+4505,(((0x3000000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                             >> 3U)) 
                              | ((0x30000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                              >> 7U)) 
                                 | ((0x300U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                               >> 0xdU)) 
                                    | ((2U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                              >> 0x13U)) 
                                       | (1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                >> 0x19U))))))),32);
        vcdp->chgBus(c+4513,(((0x10000U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                           >> 4U)) 
                              | (1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 0x19U)))),32);
        vcdp->chgBus(c+4521,((((IData)(1U) << (0x1fU 
                                               & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                                  >> 0x14U))) 
                              - (IData)(1U))),32);
        vcdp->chgBit(c+4529,((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))));
        vcdp->chgBit(c+4537,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q));
        vcdp->chgBus(c+4545,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 0xfU))),6);
        vcdp->chgBus(c+4553,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 0x14U))),6);
        vcdp->chgBus(c+4561,((0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 7U))),6);
        vcdp->chgBus(c+4569,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__mem[
                             (0x1fU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                       >> 0x14U))]),32);
        vcdp->chgBit(c+4577,((1U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__instr_rdata_id 
                                    >> 7U))));
        vcdp->chgArray(c+4585,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__registers_i__DOT__mem),1024);
        vcdp->chgBus(c+4841,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),5);
        vcdp->chgBit(c+4849,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q));
        vcdp->chgBit(c+4857,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__controller_i__DOT__boot_done_q));
        vcdp->chgBus(c+4865,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs),2);
        vcdp->chgBus(c+4873,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__id_stage_i__DOT__hwloop_regs_i__DOT__i),32);
        vcdp->chgBit(c+4881,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__regfile_we_lsu));
        vcdp->chgBus(c+4889,((~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex)),32);
        vcdp->chgBus(c+4897,((~ vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex)),32);
        vcdp->chgBus(c+4905,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex) 
                               << 0x18U) | (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex) 
                                             << 0x10U) 
                                            | (((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex) 
                                                << 8U) 
                                               | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_b_ex))))),32);
        vcdp->chgBit(c+4913,((((((0x10U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                                 | (0x11U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                                | (0x16U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                               | (0x17U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))) 
                              | (0x47U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))));
        vcdp->chgBit(c+4921,(((0x17U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)) 
                              & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_a_ex 
                                 >> 0x1fU))));
        vcdp->chgBit(c+4929,((0x28U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))));
        vcdp->chgBus(c+4937,(((IData)(0xfffffffeU) 
                              << (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__bmask_a_ex))),32);
        vcdp->chgBit(c+4945,((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))));
        vcdp->chgBit(c+4953,((1U & ((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_b_ex 
                                     >> 0x1fU) & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex)))));
        vcdp->chgBus(c+4961,((3U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operator_ex))),2);
        vcdp->chgBus(c+4969,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResReg_DP),32);
        vcdp->chgBus(c+4977,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__AReg_DP),32);
        vcdp->chgBus(c+4985,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__BReg_DP),32);
        vcdp->chgBit(c+4993,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__RemSel_SP));
        vcdp->chgBit(c+5001,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__CompInv_SP));
        vcdp->chgBit(c+5009,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__ResInv_SP));
        vcdp->chgBus(c+5017,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP),6);
        vcdp->chgBit(c+5025,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__Cnt_DP)))))));
        vcdp->chgBus(c+5033,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__alu_i__DOT__int_div__DOT__div_i__DOT__State_SP),2);
        vcdp->chgBus(c+5041,(((3U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex))
                               ? (0x7fffffffU & (((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex)) 
                                                 >> 1U))
                               : 0U)),32);
        vcdp->chgBus(c+5049,(((IData)(1U) << (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_imm_ex))),32);
        vcdp->chgBit(c+5057,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q));
        vcdp->chgBus(c+5065,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS),3);
        vcdp->chgBus(c+5073,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_a_ex 
                              ^ VL_NEGATE_I((IData)(
                                                    (1U 
                                                     == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex)))))),32);
        vcdp->chgBus(c+5081,((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex 
                              & VL_NEGATE_I((IData)(
                                                    (1U 
                                                     == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex)))))),32);
        vcdp->chgBus(c+5089,(((vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_c_ex 
                               + (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex 
                                  & VL_NEGATE_I((IData)(
                                                        (1U 
                                                         == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex)))))) 
                              + VL_MULS_III(32,32,32, 
                                            (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_a_ex 
                                             ^ VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex))))), vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operand_b_ex))),32);
        vcdp->chgBit(c+5097,((1U == (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__mult_operator_ex))));
        vcdp->chgBus(c+5105,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_type_q),2);
        vcdp->chgBus(c+5113,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        vcdp->chgBit(c+5121,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        vcdp->chgBit(c+5129,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__data_we_q));
        vcdp->chgBus(c+5137,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__CS),2);
        vcdp->chgBus(c+5145,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q),32);
        vcdp->chgBus(c+5153,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mepc_q),32);
        vcdp->chgBus(c+5161,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mstatus_q),6);
        vcdp->chgBus(c+5169,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__mcause_q),6);
        vcdp->chgBit(c+5177,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__id_valid_q));
        vcdp->chgBus(c+5185,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q),12);
        vcdp->chgArray(c+5193,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCCR_q),384);
        vcdp->chgBus(c+5289,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCMR_q),2);
        vcdp->chgBus(c+5297,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__PCER_q),12);
        vcdp->chgBus(c+5305,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__unnamedblk3__DOT__i),32);
        vcdp->chgBus(c+5313,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__cs_registers_i__DOT__unnamedblk2__DOT__i),32);
        vcdp->chgBus(c+5321,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__rdata_sel_q),3);
        vcdp->chgBit(c+5329,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__state_q));
        vcdp->chgBus(c+5337,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__addr_q),15);
        vcdp->chgBit(c+5345,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_sel_q));
        vcdp->chgBus(c+5353,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__stall_cs),2);
        vcdp->chgBus(c+5361,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_cause_q),6);
        vcdp->chgBit(c+5369,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__dbg_ssth_q));
        vcdp->chgBus(c+5377,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__pc_tracking_fsm_cs),2);
    }
}

void Vtop::traceChgThis__10(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+5385,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                               ? ((1U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                   ? ((0xffffff00U 
                                       & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
                                          << 8U)) | 
                                      (0xffU & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_q 
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
        vcdp->chgBus(c+5393,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
                                       : (0xffffU & 
                                          (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
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
                                       : (0xffffU & 
                                          (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
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
                                       : (0xffffU & vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o))))),32);
        vcdp->chgBus(c+5401,(((2U & (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
                                       : (0xffU & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
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
                                       : (0xffU & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
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
                                       : (0xffU & (vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o 
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
    }
}

void Vtop::traceChgThis__11(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5409,(vlSymsp->TOP__top__ram_i.__PVT__instr_rvalid_o));
        vcdp->chgArray(c+5417,(vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_a_o),128);
        vcdp->chgBit(c+5449,(vlSymsp->TOP__top__ram_i.__PVT__data_rvalid_o));
        vcdp->chgBus(c+5457,(vlSymsp->TOP__top__ram_i__dp_ram_i.__PVT__rdata_b_o),32);
    }
}

void Vtop::traceChgThis__12(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5465,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_we_ex));
        vcdp->chgBus(c+5473,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_q),32);
        vcdp->chgBus(c+5481,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__pc_id),32);
        vcdp->chgBus(c+5489,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__alu_operand_c_ex),32);
        vcdp->chgBus(c+5497,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_type_ex),2);
        vcdp->chgBit(c+5505,(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__data_misaligned_ex));
        vcdp->chgBit(c+5513,((3U == (3U & (vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_q 
                                           >> 2U)))));
        vcdp->chgBus(c+5521,(((IData)(4U) + (0xfffffffcU 
                                             & vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__if_stage_i__DOT__genblk1__DOT__prefetch_128__DOT__prefetch_buffer_i__DOT__addr_q))),32);
    }
}

void Vtop::traceChgThis__13(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+5529,(vlTOPp->clk_i));
        vcdp->chgBit(c+5537,(vlTOPp->rstn_i));
        vcdp->chgBit(c+5545,(vlTOPp->irq_i));
        vcdp->chgBus(c+5553,(vlTOPp->irq_id_i),5);
        vcdp->chgBit(c+5561,(vlTOPp->irq_ack_o));
        vcdp->chgBus(c+5569,(vlTOPp->irq_id_o),5);
        vcdp->chgBit(c+5577,(vlTOPp->irq_sec_i));
        vcdp->chgBit(c+5585,(vlTOPp->sec_lvl_o));
        vcdp->chgBit(c+5593,(vlTOPp->debug_req_i));
        vcdp->chgBit(c+5601,(vlTOPp->debug_gnt_o));
        vcdp->chgBit(c+5609,(vlTOPp->debug_rvalid_o));
        vcdp->chgBus(c+5617,(vlTOPp->debug_addr_i),15);
        vcdp->chgBit(c+5625,(vlTOPp->debug_we_i));
        vcdp->chgBus(c+5633,(vlTOPp->debug_wdata_i),32);
        vcdp->chgBus(c+5641,(vlTOPp->debug_rdata_o),32);
        vcdp->chgBit(c+5649,(vlTOPp->debug_halted_o));
        vcdp->chgBit(c+5657,(vlTOPp->fetch_enable_i));
        vcdp->chgBit(c+5665,(vlTOPp->core_busy_o));
        vcdp->chgBus(c+5673,((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_fp_wr) 
                               << 5U) | (0x1fU & ((IData)(vlTOPp->debug_addr_i) 
                                                  >> 2U)))),6);
        vcdp->chgBit(c+5681,((((((IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__dbg_req) 
                                 | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__csr_req_q)) 
                                | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__jump_req_q)) 
                               | (IData)(vlSymsp->TOP__top.__PVT__riscv_core_i__DOT__debug_unit_i__DOT__regfile_wreq)) 
                              | (IData)(vlTOPp->debug_req_i))));
        vcdp->chgBit(c+5689,((1U & ((~ (IData)(vlTOPp->fetch_enable_i)) 
                                    & (~ (IData)(vlSymsp->TOP__top.core_busy_o))))));
    }
}
