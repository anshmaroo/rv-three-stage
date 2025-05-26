// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline.h for the primary calling header

#include "VPipeline__pch.h"
#include "VPipeline___024root.h"

void VPipeline___024root___eval_act(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_act\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VPipeline___024root___nba_sequent__TOP__0(VPipeline___024root* vlSelf);

void VPipeline___024root___eval_nba(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_nba\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VPipeline___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VPipeline___024root___nba_sequent__TOP__0(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___nba_sequent__TOP__0\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Pipeline__DOT___regfile_io_rd0;
    Pipeline__DOT___regfile_io_rd0 = 0;
    IData/*31:0*/ Pipeline__DOT___regfile_io_rd1;
    Pipeline__DOT___regfile_io_rd1 = 0;
    CData/*0:0*/ Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1;
    Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1 = 0;
    VlWide<32>/*1023:0*/ Pipeline__DOT__regfile__DOT___GEN;
    VL_ZERO_W(1024, Pipeline__DOT__regfile__DOT___GEN);
    IData/*31:0*/ Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3;
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 = 0;
    CData/*0:0*/ Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0;
    Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0 = 0;
    CData/*6:0*/ Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2;
    Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2 = 0;
    SData/*15:0*/ Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0;
    Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0 = 0;
    IData/*31:0*/ __Vdly__Pipeline__DOT__pc;
    __Vdly__Pipeline__DOT__pc = 0;
    CData/*7:0*/ __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0;
    SData/*11:0*/ __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0;
    SData/*11:0*/ __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0;
    SData/*11:0*/ __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0;
    CData/*0:0*/ __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0;
    VlWide<16>/*511:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_29;
    // Body
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 0U;
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 0U;
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 0U;
    __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 0U;
    __Vdly__Pipeline__DOT__pc = vlSelfRef.Pipeline__DOT__pc;
    if (vlSelfRef.Pipeline__DOT__DMEM__DOT___GEN) {
        __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 
            = (vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data 
               >> 0x18U);
        __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 
            = (0xfffU & ((IData)(3U) + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult));
        __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0 = 1U;
        __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 
            = (0xffU & (vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data 
                        >> 0x10U));
        __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 
            = (0xfffU & ((IData)(2U) + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult));
        __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1 = 1U;
    }
    if (((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memRWSel) 
         & (0U != (3U & ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength) 
                         >> 1U))))) {
        __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 
            = (0xffU & (vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data 
                        >> 8U));
        __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 
            = (0xfffU & ((IData)(1U) + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult));
        __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2 = 1U;
    }
    if (vlSelfRef.Pipeline__DOT__stage2Register__DOT__memRWSel) {
        __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 
            = (0xffU & vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data);
        __VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 
            = (0xfffU & vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult);
        __VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3 = 1U;
    }
    vlSelfRef.Pipeline__DOT__stage2Register__DOT__memReadMode 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__memReadMode));
    if (__VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0) {
        vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0] 
            = __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v0;
    }
    if (__VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1) {
        vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1] 
            = __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v1;
    }
    if (__VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2) {
        vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2] 
            = __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v2;
    }
    if (__VdlySet__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3) {
        vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__VdlyDim0__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3] 
            = __VdlyVal__Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory__v3;
    }
    vlSelfRef.Pipeline__DOT__stage2Register__DOT__memRWSel 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_2)) 
                                                   & (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__memRWSel)));
    __Vdly__Pipeline__DOT__pc = ((IData)(vlSelfRef.reset)
                                  ? 0U : ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__branchTaken)
                                           ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
                                           : (((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__isLoad) 
                                               & ((IData)(vlSelfRef.Pipeline__DOT___pc_T_2) 
                                                  | (IData)(vlSelfRef.Pipeline__DOT___pc_T_3)))
                                               ? vlSelfRef.Pipeline__DOT__stage1Register__DOT__pc
                                               : ((IData)(4U) 
                                                  + vlSelfRef.Pipeline__DOT__pc))));
    vlSelfRef.Pipeline__DOT__stage2Register__DOT__isLoad 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__isLoad));
    __Vtemp_11[0U] = vlSelfRef.Pipeline__DOT__alu__DOT__v_0;
    __Vtemp_11[1U] = (vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
                      - vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
    __Vtemp_11[2U] = VL_SHIFTL_III(32,32,6, vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0, 
                                   (0x3fU & vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1));
    __Vtemp_11[3U] = VL_SHIFTR_III(32,32,6, vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0, 
                                   (0x3fU & vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1));
    __Vtemp_11[4U] = VL_SHIFTRS_III(32,32,6, vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0, 
                                    (0x3fU & vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1));
    __Vtemp_11[5U] = VL_LTS_III(32, vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0, vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
    __Vtemp_11[6U] = (vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
                      < vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
    __Vtemp_11[7U] = (vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
                      | vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
    __Vtemp_11[8U] = (vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
                      & vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
    __Vtemp_11[9U] = (vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
                      ^ vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
    __Vtemp_11[0xaU] = vlSelfRef.Pipeline__DOT__alu__DOT__v_0;
    __Vtemp_11[0xbU] = vlSelfRef.Pipeline__DOT__alu__DOT__v_0;
    __Vtemp_11[0xcU] = vlSelfRef.Pipeline__DOT__alu__DOT__v_0;
    __Vtemp_11[0xdU] = vlSelfRef.Pipeline__DOT__alu__DOT__v_0;
    __Vtemp_11[0xeU] = vlSelfRef.Pipeline__DOT__alu__DOT__v_0;
    __Vtemp_11[0xfU] = vlSelfRef.Pipeline__DOT__alu__DOT__v_0;
    vlSelfRef.Pipeline__DOT__stage2Register__DOT__branchTaken 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__isJump) 
                                                   | (((((((IData)(vlSelfRef.Pipeline__DOT__branchComparator__DOT___GEN) 
                                                           << 7U) 
                                                          | ((vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0 
                                                              < vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1) 
                                                             << 6U)) 
                                                         | ((VL_GTES_III(32, vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0, vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1) 
                                                             << 5U) 
                                                            | (VL_LTS_III(32, vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0, vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1) 
                                                               << 4U))) 
                                                        | ((0xcU 
                                                            & ((- (IData)((IData)(vlSelfRef.Pipeline__DOT__branchComparator__DOT___GEN))) 
                                                               << 2U)) 
                                                           | (((vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0 
                                                                != vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1) 
                                                               << 1U) 
                                                              | (vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0 
                                                                 == vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1)))) 
                                                       >> (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__cmpMode)) 
                                                      & (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__isBranch))));
    vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs1Data 
        = ((IData)(vlSelfRef.reset) ? 0U : vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0);
    vlSelfRef.io_debugRS1Data = vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs1Data;
    vlSelfRef.Pipeline__DOT__stage1Register__DOT__memReadMode 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (~ 
                                                      (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                                                       >> 0xeU))));
    if (vlSelfRef.reset) {
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2 = 0U;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__instruction = 0U;
        vlSelfRef.io_debugInstruction = vlSelfRef.Pipeline__DOT__stage2Register__DOT__instruction;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__immediate = 0U;
        vlSelfRef.io_debugImmediate = vlSelfRef.Pipeline__DOT__stage2Register__DOT__immediate;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1 = 0U;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc = 0U;
        vlSelfRef.Pipeline__DOT__csrs__DOT__reg_0 = 0U;
    } else {
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2 
            = (0x1fU & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                        >> 0x14U));
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__instruction 
            = ((IData)(vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_2)
                ? 0x13U : vlSelfRef.Pipeline__DOT__stage1Register__DOT__instruction);
        vlSelfRef.io_debugInstruction = vlSelfRef.Pipeline__DOT__stage2Register__DOT__instruction;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__immediate 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__immediate;
        vlSelfRef.io_debugImmediate = vlSelfRef.Pipeline__DOT__stage2Register__DOT__immediate;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1 
            = (0x1fU & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                        >> 0xfU));
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__pc;
        if (vlSelfRef.Pipeline__DOT__stage2Register__DOT__csrWEn) {
            vlSelfRef.Pipeline__DOT__csrs__DOT__reg_0 
                = vlSelfRef.io_debugCsrWdData;
        }
    }
    vlSelfRef.io_debugCsrWdData = ((0x4000U & vlSelfRef.Pipeline__DOT__stage2Register__DOT__instruction)
                                    ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__immediate
                                    : vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs1Data);
    vlSelfRef.io_pcOut = vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc;
    vlSelfRef.io_debugCsr = vlSelfRef.Pipeline__DOT__csrs__DOT__reg_0;
    vlSelfRef.Pipeline__DOT__stage2Register__DOT__csrWEn 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__csrWEn));
    if (vlSelfRef.reset) {
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel = 0U;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1 = 0U;
        vlSelfRef.io_debugRegs_1 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3 = 0U;
        vlSelfRef.io_debugRegs_3 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2 = 0U;
        vlSelfRef.io_debugRegs_2 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5 = 0U;
        vlSelfRef.io_debugRegs_5 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4 = 0U;
        vlSelfRef.io_debugRegs_4 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7 = 0U;
        vlSelfRef.io_debugRegs_7 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6 = 0U;
        vlSelfRef.io_debugRegs_6 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9 = 0U;
        vlSelfRef.io_debugRegs_9 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8 = 0U;
        vlSelfRef.io_debugRegs_8 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11 = 0U;
        vlSelfRef.io_debugRegs_11 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10 = 0U;
        vlSelfRef.io_debugRegs_10 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12 = 0U;
        vlSelfRef.io_debugRegs_12 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13 = 0U;
        vlSelfRef.io_debugRegs_13 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14 = 0U;
        vlSelfRef.io_debugRegs_14 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15 = 0U;
        vlSelfRef.io_debugRegs_15 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16 = 0U;
        vlSelfRef.io_debugRegs_16 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17 = 0U;
        vlSelfRef.io_debugRegs_17 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18 = 0U;
        vlSelfRef.io_debugRegs_18 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19 = 0U;
        vlSelfRef.io_debugRegs_19 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20 = 0U;
        vlSelfRef.io_debugRegs_20 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21 = 0U;
        vlSelfRef.io_debugRegs_21 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22 = 0U;
        vlSelfRef.io_debugRegs_22 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23 = 0U;
        vlSelfRef.io_debugRegs_23 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24 = 0U;
        vlSelfRef.io_debugRegs_24 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25 = 0U;
        vlSelfRef.io_debugRegs_25 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26 = 0U;
        vlSelfRef.io_debugRegs_26 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27 = 0U;
        vlSelfRef.io_debugRegs_27 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28 = 0U;
        vlSelfRef.io_debugRegs_28 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29 = 0U;
        vlSelfRef.io_debugRegs_29 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30 = 0U;
        vlSelfRef.io_debugRegs_30 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30;
        vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31 = 0U;
    } else {
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__wbSel;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (1U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_1 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (3U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_3 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (2U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_2 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (5U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_5 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (4U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_4 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (7U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_7 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (6U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_6 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (9U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_9 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (8U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_8 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0xbU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_11 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0xaU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_10 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0xcU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_12 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0xdU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_13 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0xeU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_14 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0xfU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_15 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x10U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_16 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x11U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_17 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x12U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_18 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x13U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_19 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x14U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_20 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x15U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_21 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x16U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_22 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x17U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_23 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x18U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_24 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x19U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_25 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x1aU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_26 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x1bU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_27 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x1cU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_28 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x1dU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_29 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x1eU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
        vlSelfRef.io_debugRegs_30 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30;
        if ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn) 
              & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd))) 
             & (0x1fU == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd)))) {
            vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31 
                = vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData;
        }
    }
    vlSelfRef.io_debugRegs_31 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31;
    Pipeline__DOT__regfile__DOT___GEN[0U] = 0U;
    Pipeline__DOT__regfile__DOT___GEN[1U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1;
    Pipeline__DOT__regfile__DOT___GEN[2U] = (IData)(
                                                    (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2))));
    Pipeline__DOT__regfile__DOT___GEN[3U] = (IData)(
                                                    ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2))) 
                                                     >> 0x20U));
    Pipeline__DOT__regfile__DOT___GEN[4U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4;
    Pipeline__DOT__regfile__DOT___GEN[5U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5;
    Pipeline__DOT__regfile__DOT___GEN[6U] = (IData)(
                                                    (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6))));
    Pipeline__DOT__regfile__DOT___GEN[7U] = (IData)(
                                                    ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6))) 
                                                     >> 0x20U));
    Pipeline__DOT__regfile__DOT___GEN[8U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8;
    Pipeline__DOT__regfile__DOT___GEN[9U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9;
    Pipeline__DOT__regfile__DOT___GEN[0xaU] = (IData)(
                                                      (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10))));
    Pipeline__DOT__regfile__DOT___GEN[0xbU] = (IData)(
                                                      ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10))) 
                                                       >> 0x20U));
    Pipeline__DOT__regfile__DOT___GEN[0xcU] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12;
    Pipeline__DOT__regfile__DOT___GEN[0xdU] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13;
    Pipeline__DOT__regfile__DOT___GEN[0xeU] = (IData)(
                                                      (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14))));
    Pipeline__DOT__regfile__DOT___GEN[0xfU] = (IData)(
                                                      ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14))) 
                                                       >> 0x20U));
    Pipeline__DOT__regfile__DOT___GEN[0x10U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16;
    Pipeline__DOT__regfile__DOT___GEN[0x11U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17;
    Pipeline__DOT__regfile__DOT___GEN[0x12U] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18))));
    Pipeline__DOT__regfile__DOT___GEN[0x13U] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18))) 
                                                        >> 0x20U));
    Pipeline__DOT__regfile__DOT___GEN[0x14U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20;
    Pipeline__DOT__regfile__DOT___GEN[0x15U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21;
    Pipeline__DOT__regfile__DOT___GEN[0x16U] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22))));
    Pipeline__DOT__regfile__DOT___GEN[0x17U] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22))) 
                                                        >> 0x20U));
    Pipeline__DOT__regfile__DOT___GEN[0x18U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24;
    Pipeline__DOT__regfile__DOT___GEN[0x19U] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25;
    Pipeline__DOT__regfile__DOT___GEN[0x1aU] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26))));
    Pipeline__DOT__regfile__DOT___GEN[0x1bU] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26))) 
                                                        >> 0x20U));
    Pipeline__DOT__regfile__DOT___GEN[0x1cU] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28;
    Pipeline__DOT__regfile__DOT___GEN[0x1dU] = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29;
    Pipeline__DOT__regfile__DOT___GEN[0x1eU] = (IData)(
                                                       (((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30))));
    Pipeline__DOT__regfile__DOT___GEN[0x1fU] = (IData)(
                                                       ((((QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30))) 
                                                        >> 0x20U));
    vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ (IData)(vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_2)) 
                                                   & (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__regWEn)));
    if (vlSelfRef.reset) {
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data = 0U;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength = 0U;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__instruction = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__immediate = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__pc = 0U;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__memAccessLength = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__cmpMode = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__aluSel = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__regWEn = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__wbSel = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__isLoad = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__isBranch = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__isJump = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__memRWSel = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rd = 0U;
    } else {
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data 
            = vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__memAccessLength;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult 
            = (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aluSel), 5U)))
                 ? 0U : (__Vtemp_11[(((IData)(0x1fU) 
                                      + (0x1ffU & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aluSel), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aluSel), 5U))))) 
               | (__Vtemp_11[(0xfU & (VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aluSel), 5U) 
                                      >> 5U))] >> (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aluSel), 5U))));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__instruction 
            = vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__immediate 
            = vlSelfRef.Pipeline__DOT___immGen_io_out;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__pc 
            = vlSelfRef.Pipeline__DOT__pc;
        vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__rd;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___memAccessLength_T_1 
            = (0xffU & ((IData)(1U) << (3U & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                                              >> 0xcU))));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__memAccessLength 
            = (7U & (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___memAccessLength_T_1));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__cmpMode 
            = (7U & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                     >> 0xcU));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN 
            = (0x23U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0 
            = (0x63U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_1 
            = (0x73U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_2 
            = (0x33U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_3 
            = (0x13U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_4 
            = (3U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_5 
            = (0x6fU == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_6 
            = (0x67U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_7 
            = (0x17U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_8 
            = (0x37U == (0x7fU & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_9 
            = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_5) 
               | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_6));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_10 
            = (0U == (7U & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                            >> 0xcU)));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_11 
            = (0x87096520U | (((0x40000000U & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn)
                                ? 4U : 3U) << 0x14U));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_12 
            = (0xfU & (vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_11 
                       >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                 (7U 
                                                  & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                                                     >> 0xcU)), 2U))));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__aluSel 
            = (((((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_4) 
                  | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN)) 
                 | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0)) 
                | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_6))
                ? 0U : ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_2)
                         ? ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_10)
                             ? (1U & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                                      >> 0x1eU)) : (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_12))
                         : ((1U & ((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_3)) 
                                   | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_10)))
                             ? 0U : (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_12))));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel 
            = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0) 
               | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_5));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel 
            = ((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_2)) 
               & ((((((((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_3) 
                        | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_4)) 
                       | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN)) 
                      | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0)) 
                     | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_8)) 
                    | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_7)) 
                   | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_9)) 
                  | ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_1) 
                     & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                        >> 0xeU))));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__regWEn 
            = (1U & ((~ ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN) 
                         | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0))) 
                     & ((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_1)) 
                        | (0U != (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rd)))));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__wbSel 
            = (((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_2) 
                | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_3))
                ? 1U : ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_4)
                         ? 0U : ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_9)
                                  ? 2U : (((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_7) 
                                           | (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_8))
                                           ? 1U : (1U 
                                                   | ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_1) 
                                                      << 1U))))));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__isLoad 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_4;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__isBranch 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__isJump 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_9;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__memRWSel 
            = vlSelfRef.Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rd 
            = (0x1fU & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                        >> 7U));
    }
    vlSelfRef.Pipeline__DOT__pc = __Vdly__Pipeline__DOT__pc;
    Pipeline__DOT___regfile_io_rd0 = (((0U == (0x1fU 
                                               & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U)))
                                        ? 0U : (Pipeline__DOT__regfile__DOT___GEN[
                                                (((IData)(0x1fU) 
                                                  + 
                                                  (0x3ffU 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U))))) 
                                      | (Pipeline__DOT__regfile__DOT___GEN[
                                         (0x1fU & (
                                                   VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U))));
    Pipeline__DOT___regfile_io_rd1 = (((0U == (0x1fU 
                                               & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U)))
                                        ? 0U : (Pipeline__DOT__regfile__DOT___GEN[
                                                (((IData)(0x1fU) 
                                                  + 
                                                  (0x3ffU 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U))))) 
                                      | (Pipeline__DOT__regfile__DOT___GEN[
                                         (0x1fU & (
                                                   VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U))));
    vlSelfRef.io_debugMemWriteData = vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data;
    vlSelfRef.io_debugRS2Data = vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data;
    vlSelfRef.io_debugMemAccessLength = vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength;
    vlSelfRef.io_debugStore = vlSelfRef.Pipeline__DOT__stage2Register__DOT__memRWSel;
    vlSelfRef.Pipeline__DOT__DMEM__DOT___GEN = ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memRWSel) 
                                                & ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength) 
                                                   >> 2U));
    vlSelfRef.io_debugLoad = vlSelfRef.Pipeline__DOT__stage2Register__DOT__isLoad;
    vlSelfRef.io_debugAddress = vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult;
    vlSelfRef.io_debugAluResult = vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult;
    Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0 
        = ((vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
            [(0xfffU & ((IData)(1U) + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))] 
            << 8U) | vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
           [(0xfffU & vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult)]);
    vlSelfRef.io_debugBranchTaken = vlSelfRef.Pipeline__DOT__stage2Register__DOT__branchTaken;
    Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2 
        = (0x7fU & vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
           [(0xfffU & (vlSelfRef.Pipeline__DOT__pc 
                       >> 2U))]);
    Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0 
        = (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
           [(0xfffU & (vlSelfRef.Pipeline__DOT__pc 
                       >> 2U))] >> 0x1fU);
    vlSelfRef.io_debugCsrWEn = vlSelfRef.Pipeline__DOT__stage2Register__DOT__csrWEn;
    vlSelfRef.Pipeline__DOT__stage1Register__DOT__csrWEn 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn)) 
                                                   & ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                                                           >> 0xcU))) 
                                                      | (5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                                                             >> 0xcU))))));
    vlSelfRef.io_debugRD = vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd;
    vlSelfRef.Pipeline__DOT___pc_T_3 = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2) 
                                        == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd));
    vlSelfRef.Pipeline__DOT___pc_T_2 = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1) 
                                        == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd));
    vlSelfRef.io_debugRegWEn = vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn;
    vlSelfRef.io_debugMemData = ((1U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength))
                                  ? ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memReadMode)
                                        ? (0xffffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                            [
                                                            (0xfffU 
                                                             & vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult)] 
                                                            >> 7U)))))
                                        : 0U) << 8U) 
                                     | vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                     [(0xfffU & vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult)])
                                  : ((2U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength))
                                      ? ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memReadMode)
                                            ? (0xffffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                                [
                                                                (0xfffU 
                                                                 & ((IData)(1U) 
                                                                    + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))] 
                                                                >> 7U)))))
                                            : 0U) << 0x10U) 
                                         | (IData)(Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0))
                                      : ((4U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength))
                                          ? ((vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                              [(0xfffU 
                                                & ((IData)(3U) 
                                                   + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))] 
                                              << 0x18U) 
                                             | ((vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))] 
                                                 << 0x10U) 
                                                | (IData)(Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0)))
                                          : 0xdeadbeefU)));
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 
        = (((- (IData)((IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
            << 0xcU) | (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                        [(0xfffU & (vlSelfRef.Pipeline__DOT__pc 
                                    >> 2U))] >> 0x14U));
    vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1 
        = (((IData)(vlSelfRef.Pipeline__DOT___pc_T_3) 
            & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1)))
            ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
            : Pipeline__DOT___regfile_io_rd1);
    vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_2 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__branchTaken) 
           | ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__isLoad) 
              & ((IData)(vlSelfRef.Pipeline__DOT___pc_T_2) 
                 | (IData)(vlSelfRef.Pipeline__DOT___pc_T_3))));
    Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1 = 
        ((IData)(vlSelfRef.Pipeline__DOT___pc_T_2) 
         & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1)));
    __Vtemp_29[0U] = vlSelfRef.io_debugMemData;
    __Vtemp_29[1U] = vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult;
    __Vtemp_29[2U] = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT__csrs__DOT__reg_0)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(4U) 
                                                            + vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc)))));
    __Vtemp_29[3U] = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT__csrs__DOT__reg_0)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc)))) 
                              >> 0x20U));
    vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U)))
             ? 0U : (__Vtemp_29[(((IData)(0x1fU) + 
                                  (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))))) 
           | (__Vtemp_29[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))));
    vlSelfRef.Pipeline__DOT___immGen_io_out = (((0x13U 
                                                 == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)) 
                                                | (3U 
                                                   == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)))
                                                ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                : (
                                                   (0x23U 
                                                    == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                    ? 
                                                   (((- (IData)((IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                           [
                                                           (0xfffU 
                                                            & (vlSelfRef.Pipeline__DOT__pc 
                                                               >> 2U))] 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                             [
                                                             (0xfffU 
                                                              & (vlSelfRef.Pipeline__DOT__pc 
                                                                 >> 2U))] 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                     ? 
                                                    (((- (IData)((IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                            [
                                                            (0xfffU 
                                                             & (vlSelfRef.Pipeline__DOT__pc 
                                                                >> 2U))] 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                               [
                                                               (0xfffU 
                                                                & (vlSelfRef.Pipeline__DOT__pc 
                                                                   >> 2U))] 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                 [
                                                                 (0xfffU 
                                                                  & (vlSelfRef.Pipeline__DOT__pc 
                                                                     >> 2U))] 
                                                                 >> 7U)))))
                                                     : 
                                                    (((0x37U 
                                                       == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)) 
                                                      | (0x17U 
                                                         == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                      [
                                                      (0xfffU 
                                                       & (vlSelfRef.Pipeline__DOT__pc 
                                                          >> 2U))])
                                                      : 
                                                     ((0x6fU 
                                                       == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                       ? 
                                                      (((- (IData)((IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
                                                        << 0x14U) 
                                                       | (((0xff000U 
                                                            & vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                            [
                                                            (0xfffU 
                                                             & (vlSelfRef.Pipeline__DOT__pc 
                                                                >> 2U))]) 
                                                           | (0x800U 
                                                              & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                 [
                                                                 (0xfffU 
                                                                  & (vlSelfRef.Pipeline__DOT__pc 
                                                                     >> 2U))] 
                                                                 >> 9U))) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                [
                                                                (0xfffU 
                                                                 & (vlSelfRef.Pipeline__DOT__pc 
                                                                    >> 2U))] 
                                                                >> 0x14U))))
                                                       : 
                                                      ((0x67U 
                                                        == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                        ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                        : 
                                                       ((0x73U 
                                                         == (IData)(Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                         [
                                                                         (0xfffU 
                                                                          & (vlSelfRef.Pipeline__DOT__pc 
                                                                             >> 2U))] 
                                                                         >> 0x13U)))) 
                                                          << 0x19U) 
                                                         | (0x1ffffffU 
                                                            & ((0x1f00000U 
                                                                & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                   [
                                                                   (0xfffU 
                                                                    & (vlSelfRef.Pipeline__DOT__pc 
                                                                       >> 2U))] 
                                                                   << 5U)) 
                                                               | ((0xf8000U 
                                                                   & vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                   [
                                                                   (0xfffU 
                                                                    & (vlSelfRef.Pipeline__DOT__pc 
                                                                       >> 2U))]) 
                                                                  | ((0x7c00U 
                                                                      & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                         [
                                                                         (0xfffU 
                                                                          & (vlSelfRef.Pipeline__DOT__pc 
                                                                             >> 2U))] 
                                                                         >> 5U)) 
                                                                     | ((0x3e0U 
                                                                         & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                            [
                                                                            (0xfffU 
                                                                             & (vlSelfRef.Pipeline__DOT__pc 
                                                                                >> 2U))] 
                                                                            >> 0xaU)) 
                                                                        | (0x1fU 
                                                                           & (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                                              [
                                                                              (0xfffU 
                                                                               & (vlSelfRef.Pipeline__DOT__pc 
                                                                                >> 2U))] 
                                                                              >> 0xfU))))))))
                                                         : 0U)))))));
    vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0 
        = ((IData)(Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1)
            ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
            : Pipeline__DOT___regfile_io_rd0);
    vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel)
            ? vlSelfRef.Pipeline__DOT__stage1Register__DOT__pc
            : (((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel)) 
                & (IData)(Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1))
                ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
                : Pipeline__DOT___regfile_io_rd0));
    vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel)
            ? vlSelfRef.Pipeline__DOT__stage1Register__DOT__immediate
            : (((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel)) 
                & ((IData)(vlSelfRef.Pipeline__DOT___pc_T_3) 
                   & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2))))
                ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
                : Pipeline__DOT___regfile_io_rd1));
    vlSelfRef.Pipeline__DOT__branchComparator__DOT___GEN 
        = ((7U == (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__cmpMode)) 
           & (vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in0 
              >= vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1));
    vlSelfRef.Pipeline__DOT__alu__DOT__v_0 = (vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
                                              + vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
    vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
        = ((IData)(vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_2)
            ? 0x13U : vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
           [(0xfffU & (vlSelfRef.Pipeline__DOT__pc 
                       >> 2U))]);
}

void VPipeline___024root___eval_triggers__act(VPipeline___024root* vlSelf);

bool VPipeline___024root___eval_phase__act(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_phase__act\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VPipeline___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VPipeline___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPipeline___024root___eval_phase__nba(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_phase__nba\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VPipeline___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__nba(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__act(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG

void VPipeline___024root___eval(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VPipeline___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("generated/Pipeline.sv", 963, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VPipeline___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("generated/Pipeline.sv", 963, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VPipeline___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VPipeline___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VPipeline___024root___eval_debug_assertions(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_debug_assertions\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
