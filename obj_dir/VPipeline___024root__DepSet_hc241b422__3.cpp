// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline.h for the primary calling header

#include "VPipeline__pch.h"
#include "VPipeline___024root.h"

VL_INLINE_OPT void VPipeline___024root___nba_sequent__TOP__5(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___nba_sequent__TOP__5\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1;
    Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1 = 0;
    IData/*31:0*/ Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3;
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__csrOffset = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rd = 0U;
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__instruction = 0U;
    } else {
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__csrOffset 
            = (vlSelfRef.Pipeline__DOT__stage1Register__DOT__instruction 
               >> 0x14U);
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__rd 
            = (0x1fU & (vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
                        >> 7U));
        vlSelfRef.Pipeline__DOT__stage1Register__DOT__instruction 
            = vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn;
    }
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
                                         | (IData)(vlSelfRef.Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0))
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
                                                | (IData)(vlSelfRef.Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0)))
                                          : 0xdeadbeefU)));
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 
        = (((- (IData)((IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
            << 0xcU) | (vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                        [(0xfffU & (vlSelfRef.Pipeline__DOT__pc 
                                    >> 2U))] >> 0x14U));
    vlSelfRef.Pipeline__DOT____Vcellinp__branchComparator__io_in1 
        = (((IData)(vlSelfRef.Pipeline__DOT___pc_T_3) 
            & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1)))
            ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
            : vlSelfRef.Pipeline__DOT___regfile_io_rd1);
    vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_2 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__branchTaken) 
           | ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__isLoad) 
              & ((IData)(vlSelfRef.Pipeline__DOT___pc_T_2) 
                 | (IData)(vlSelfRef.Pipeline__DOT___pc_T_3))));
    Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1 = 
        ((IData)(vlSelfRef.Pipeline__DOT___pc_T_2) 
         & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1)));
    __Vtemp_2[0U] = vlSelfRef.io_debugMemData;
    __Vtemp_2[1U] = vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(vlSelfRef.Pipeline__DOT___csrs_io_r0Out)) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc)))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(vlSelfRef.Pipeline__DOT___csrs_io_r0Out)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(4U) 
                                                            + vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc)))) 
                             >> 0x20U));
    vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U)))
             ? 0U : (__Vtemp_2[(((IData)(0x1fU) + (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))))) 
           | (__Vtemp_2[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U) 
                               >> 5U))] >> (0x1fU & 
                                            VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))));
    vlSelfRef.Pipeline__DOT___immGen_io_out = (((0x13U 
                                                 == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)) 
                                                | (3U 
                                                   == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)))
                                                ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                    ? 
                                                   (((- (IData)((IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
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
                                                     == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                     ? 
                                                    (((- (IData)((IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
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
                                                       == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)) 
                                                      | (0x17U 
                                                         == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2)))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                                      [
                                                      (0xfffU 
                                                       & (vlSelfRef.Pipeline__DOT__pc 
                                                          >> 2U))])
                                                      : 
                                                     ((0x6fU 
                                                       == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                       ? 
                                                      (((- (IData)((IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_0))) 
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
                                                        == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
                                                        ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                        : 
                                                       ((0x73U 
                                                         == (IData)(vlSelfRef.Pipeline__DOT__immGen__DOT____VdfgRegularize_h8d16997b_0_2))
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
            : vlSelfRef.Pipeline__DOT___regfile_io_rd0);
    vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel)
            ? vlSelfRef.Pipeline__DOT__stage1Register__DOT__pc
            : (((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel)) 
                & (IData)(Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_1))
                ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
                : vlSelfRef.Pipeline__DOT___regfile_io_rd0));
    vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel)
            ? vlSelfRef.Pipeline__DOT__stage1Register__DOT__immediate
            : (((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel)) 
                & ((IData)(vlSelfRef.Pipeline__DOT___pc_T_3) 
                   & (0U != (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2))))
                ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
                : vlSelfRef.Pipeline__DOT___regfile_io_rd1));
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
void VPipeline___024root___eval_act(VPipeline___024root* vlSelf);

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

void VPipeline___024root___eval_nba(VPipeline___024root* vlSelf);

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
            VL_FATAL_MT("generated/Pipeline.sv", 33744, "", "NBA region did not converge.");
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
                VL_FATAL_MT("generated/Pipeline.sv", 33744, "", "Active region did not converge.");
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
