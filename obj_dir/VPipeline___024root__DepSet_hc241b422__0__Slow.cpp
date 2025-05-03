// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipeline.h for the primary calling header

#include "VPipeline__pch.h"
#include "VPipeline___024root.h"

VL_ATTR_COLD void VPipeline___024root___eval_static(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_static\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VPipeline___024root___eval_initial__TOP(VPipeline___024root* vlSelf);

VL_ATTR_COLD void VPipeline___024root___eval_initial(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_initial\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipeline___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VPipeline___024root___eval_initial__TOP(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_initial__TOP\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.io_debugRegs_0 = 0U;
    __Vtemp_1[0U] = 0x69736376U;
    __Vtemp_1[1U] = 0x73742e72U;
    __Vtemp_1[2U] = 0x7465U;
    VL_READMEM_N(true, 32, 1000, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipeline___024root___eval_final(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_final\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__stl(VPipeline___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPipeline___024root___eval_phase__stl(VPipeline___024root* vlSelf);

VL_ATTR_COLD void VPipeline___024root___eval_settle(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_settle\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VPipeline___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("generated/Pipeline.sv", 884, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VPipeline___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__stl(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___dump_triggers__stl\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipeline___024root___stl_sequent__TOP__0(VPipeline___024root* vlSelf);

VL_ATTR_COLD void VPipeline___024root___eval_stl(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_stl\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VPipeline___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VPipeline___024root___stl_sequent__TOP__0(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___stl_sequent__TOP__0\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Pipeline__DOT___IMEM_io_instruction;
    Pipeline__DOT___IMEM_io_instruction = 0;
    VlWide<32>/*1023:0*/ Pipeline__DOT__regfile__DOT___GEN;
    VL_ZERO_W(1024, Pipeline__DOT__regfile__DOT___GEN);
    IData/*31:0*/ Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3;
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 = 0;
    CData/*7:0*/ Pipeline__DOT__DMEM__DOT___dmem_ext_R2_data;
    Pipeline__DOT__DMEM__DOT___dmem_ext_R2_data = 0;
    CData/*7:0*/ Pipeline__DOT__DMEM__DOT___dmem_ext_R3_data;
    Pipeline__DOT__DMEM__DOT___dmem_ext_R3_data = 0;
    SData/*15:0*/ Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0;
    Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_18;
    // Body
    vlSelfRef.io_pcOut = vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc;
    vlSelfRef.io_debugRegs_1 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_1;
    vlSelfRef.io_debugRegs_2 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_2;
    vlSelfRef.io_debugRegs_3 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_3;
    vlSelfRef.io_debugRegs_4 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_4;
    vlSelfRef.io_debugRegs_5 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_5;
    vlSelfRef.io_debugRegs_6 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_6;
    vlSelfRef.io_debugRegs_7 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_7;
    vlSelfRef.io_debugRegs_8 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_8;
    vlSelfRef.io_debugRegs_9 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_9;
    vlSelfRef.io_debugRegs_10 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_10;
    vlSelfRef.io_debugRegs_11 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_11;
    vlSelfRef.io_debugRegs_12 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_12;
    vlSelfRef.io_debugRegs_13 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_13;
    vlSelfRef.io_debugRegs_14 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_14;
    vlSelfRef.io_debugRegs_15 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_15;
    vlSelfRef.io_debugRegs_16 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_16;
    vlSelfRef.io_debugRegs_17 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_17;
    vlSelfRef.io_debugRegs_18 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_18;
    vlSelfRef.io_debugRegs_19 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_19;
    vlSelfRef.io_debugRegs_20 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_20;
    vlSelfRef.io_debugRegs_21 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_21;
    vlSelfRef.io_debugRegs_22 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_22;
    vlSelfRef.io_debugRegs_23 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_23;
    vlSelfRef.io_debugRegs_24 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_24;
    vlSelfRef.io_debugRegs_25 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_25;
    vlSelfRef.io_debugRegs_26 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_26;
    vlSelfRef.io_debugRegs_27 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_27;
    vlSelfRef.io_debugRegs_28 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_28;
    vlSelfRef.io_debugRegs_29 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_29;
    vlSelfRef.io_debugRegs_30 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_30;
    vlSelfRef.io_debugRegs_31 = vlSelfRef.Pipeline__DOT__regfile__DOT__regs_31;
    vlSelfRef.io_debugBranchTaken = vlSelfRef.Pipeline__DOT__stage2Register__DOT__branchTaken;
    vlSelfRef.io_debugLoad = vlSelfRef.Pipeline__DOT__stage2Register__DOT__isLoad;
    vlSelfRef.io_debugStore = vlSelfRef.Pipeline__DOT__stage2Register__DOT__memRWSel;
    vlSelfRef.io_debugAddress = vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult;
    vlSelfRef.io_debugRD = vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd;
    vlSelfRef.io_debugMemAccessLength = vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength;
    vlSelfRef.io_debugInstruction = vlSelfRef.Pipeline__DOT__stage2Register__DOT__instruction;
    vlSelfRef.io_debugRegWEn = vlSelfRef.Pipeline__DOT__stage2Register__DOT__regWEn;
    vlSelfRef.io_debugMemWriteData = vlSelfRef.Pipeline__DOT__stage2Register__DOT__rs2Data;
    vlSelfRef.Pipeline__DOT__DMEM__DOT___GEN = ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memRWSel) 
                                                & ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength) 
                                                   >> 2U));
    Pipeline__DOT___IMEM_io_instruction = ((0x3e7U 
                                            >= (0x3ffU 
                                                & (vlSelfRef.Pipeline__DOT__pc 
                                                   >> 2U)))
                                            ? vlSelfRef.Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory
                                           [(0x3ffU 
                                             & (vlSelfRef.Pipeline__DOT__pc 
                                                >> 2U))]
                                            : 0U);
    vlSelfRef.Pipeline__DOT___pc_T_2 = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1) 
                                        == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd));
    vlSelfRef.Pipeline__DOT___pc_T_3 = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2) 
                                        == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__rd));
    Pipeline__DOT__DMEM__DOT___dmem_ext_R3_data = (
                                                   (0x3e7U 
                                                    >= 
                                                    (0x3ffU 
                                                     & vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))
                                                    ? 
                                                   vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                   [
                                                   (0x3ffU 
                                                    & vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult)]
                                                    : 0U);
    Pipeline__DOT__DMEM__DOT___dmem_ext_R2_data = (
                                                   (0x3e7U 
                                                    >= 
                                                    (0x3ffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult)))
                                                    ? 
                                                   vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                   [
                                                   (0x3ffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))]
                                                    : 0U);
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
    Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3 
        = (((- (IData)((Pipeline__DOT___IMEM_io_instruction 
                        >> 0x1fU))) << 0xcU) | (Pipeline__DOT___IMEM_io_instruction 
                                                >> 0x14U));
    vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_0 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__branchTaken) 
           | ((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__isLoad) 
              & ((IData)(vlSelfRef.Pipeline__DOT___pc_T_2) 
                 | (IData)(vlSelfRef.Pipeline__DOT___pc_T_3))));
    Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0 
        = (((IData)(Pipeline__DOT__DMEM__DOT___dmem_ext_R2_data) 
            << 8U) | (IData)(Pipeline__DOT__DMEM__DOT___dmem_ext_R3_data));
    vlSelfRef.Pipeline__DOT___regfile_io_rd0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U)))
                                                  ? 0U
                                                  : 
                                                 (Pipeline__DOT__regfile__DOT___GEN[
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
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs1), 5U))));
    vlSelfRef.Pipeline__DOT___regfile_io_rd1 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U)))
                                                  ? 0U
                                                  : 
                                                 (Pipeline__DOT__regfile__DOT___GEN[
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
                                                   (0x1fU 
                                                    & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__rs2), 5U))));
    vlSelfRef.Pipeline__DOT___immGen_io_out = (((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & Pipeline__DOT___IMEM_io_instruction)) 
                                                | (3U 
                                                   == 
                                                   (0x7fU 
                                                    & Pipeline__DOT___IMEM_io_instruction)))
                                                ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & Pipeline__DOT___IMEM_io_instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (Pipeline__DOT___IMEM_io_instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (Pipeline__DOT___IMEM_io_instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (Pipeline__DOT___IMEM_io_instruction 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & Pipeline__DOT___IMEM_io_instruction))
                                                     ? 
                                                    (((- (IData)(
                                                                 (Pipeline__DOT___IMEM_io_instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (Pipeline__DOT___IMEM_io_instruction 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (Pipeline__DOT___IMEM_io_instruction 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (Pipeline__DOT___IMEM_io_instruction 
                                                                 >> 7U)))))
                                                     : 
                                                    (((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & Pipeline__DOT___IMEM_io_instruction)) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & Pipeline__DOT___IMEM_io_instruction)))
                                                      ? 
                                                     (0xfffff000U 
                                                      & Pipeline__DOT___IMEM_io_instruction)
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & Pipeline__DOT___IMEM_io_instruction))
                                                       ? 
                                                      (((- (IData)(
                                                                   (Pipeline__DOT___IMEM_io_instruction 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | (((0xff000U 
                                                            & Pipeline__DOT___IMEM_io_instruction) 
                                                           | (0x800U 
                                                              & (Pipeline__DOT___IMEM_io_instruction 
                                                                 >> 9U))) 
                                                          | (0x7feU 
                                                             & (Pipeline__DOT___IMEM_io_instruction 
                                                                >> 0x14U))))
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & Pipeline__DOT___IMEM_io_instruction))
                                                        ? Pipeline__DOT__immGen__DOT___iTypeImmediate_T_3
                                                        : 0U))))));
    vlSelfRef.Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn 
        = ((IData)(vlSelfRef.Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_0)
            ? 0x13U : Pipeline__DOT___IMEM_io_instruction);
    vlSelfRef.io_debugMemData = ((1U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength))
                                  ? ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memReadMode)
                                        ? (0xffffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(Pipeline__DOT__DMEM__DOT___dmem_ext_R3_data) 
                                                            >> 7U)))))
                                        : 0U) << 8U) 
                                     | (IData)(Pipeline__DOT__DMEM__DOT___dmem_ext_R3_data))
                                  : ((2U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength))
                                      ? ((((IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memReadMode)
                                            ? (0xffffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(Pipeline__DOT__DMEM__DOT___dmem_ext_R2_data) 
                                                                >> 7U)))))
                                            : 0U) << 0x10U) 
                                         | (IData)(Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0))
                                      : ((4U == (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__memAccessLength))
                                          ? ((((0x3e7U 
                                                >= 
                                                (0x3ffU 
                                                 & ((IData)(3U) 
                                                    + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult)))
                                                ? vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                               [(0x3ffU 
                                                 & ((IData)(3U) 
                                                    + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))]
                                                : 0U) 
                                              << 0x18U) 
                                             | ((((0x3e7U 
                                                   >= 
                                                   (0x3ffU 
                                                    & ((IData)(2U) 
                                                       + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult)))
                                                   ? 
                                                  vlSelfRef.Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory
                                                  [
                                                  (0x3ffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult))]
                                                   : 0U) 
                                                 << 0x10U) 
                                                | (IData)(Pipeline__DOT__DMEM__DOT____VdfgRegularize_h771000ee_1_0)))
                                          : 0xdeadbeefU)));
    vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel)
            ? vlSelfRef.Pipeline__DOT__stage1Register__DOT__pc
            : (((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__aSel)) 
                & (IData)(vlSelfRef.Pipeline__DOT___pc_T_2))
                ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
                : vlSelfRef.Pipeline__DOT___regfile_io_rd0));
    vlSelfRef.Pipeline__DOT__branchComparator__DOT___GEN 
        = ((7U == (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__cmpMode)) 
           & (vlSelfRef.Pipeline__DOT___regfile_io_rd0 
              >= vlSelfRef.Pipeline__DOT___regfile_io_rd1));
    vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1 
        = ((IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel)
            ? vlSelfRef.Pipeline__DOT__stage1Register__DOT__immediate
            : (((~ (IData)(vlSelfRef.Pipeline__DOT__stage1Register__DOT__bSel)) 
                & (IData)(vlSelfRef.Pipeline__DOT___pc_T_3))
                ? vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult
                : vlSelfRef.Pipeline__DOT___regfile_io_rd1));
    __Vtemp_18[0U] = vlSelfRef.io_debugMemData;
    __Vtemp_18[1U] = vlSelfRef.Pipeline__DOT__stage2Register__DOT__aluResult;
    __Vtemp_18[2U] = (IData)((QData)((IData)(((IData)(4U) 
                                              + vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc))));
    __Vtemp_18[3U] = (IData)(((QData)((IData)(((IData)(4U) 
                                               + vlSelfRef.Pipeline__DOT__stage2Register__DOT__pc))) 
                              >> 0x20U));
    vlSelfRef.Pipeline__DOT____Vcellinp__regfile__io_wdData 
        = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U)))
             ? 0U : (__Vtemp_18[(((IData)(0x1fU) + 
                                  (0x7fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))))) 
           | (__Vtemp_18[(3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.Pipeline__DOT__stage2Register__DOT__wbSel), 5U))));
    vlSelfRef.Pipeline__DOT__alu__DOT__v_0 = (vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in0 
                                              + vlSelfRef.Pipeline__DOT____Vcellinp__alu__io_in1);
}

VL_ATTR_COLD void VPipeline___024root___eval_triggers__stl(VPipeline___024root* vlSelf);

VL_ATTR_COLD bool VPipeline___024root___eval_phase__stl(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___eval_phase__stl\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VPipeline___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VPipeline___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__act(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___dump_triggers__act\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipeline___024root___dump_triggers__nba(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___dump_triggers__nba\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipeline___024root___ctor_var_reset(VPipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipeline___024root___ctor_var_reset\n"); );
    VPipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pcOut = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_0 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_1 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_2 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_3 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_4 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_5 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_6 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_7 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_8 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_9 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_10 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_11 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_12 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_13 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_14 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_15 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_16 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_17 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_18 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_19 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_20 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_21 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_22 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_23 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_24 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_25 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_26 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_27 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_28 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_29 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_30 = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegs_31 = VL_RAND_RESET_I(32);
    vlSelf->io_debugInstruction = VL_RAND_RESET_I(32);
    vlSelf->io_debugBranchTaken = VL_RAND_RESET_I(1);
    vlSelf->io_debugLoad = VL_RAND_RESET_I(1);
    vlSelf->io_debugStore = VL_RAND_RESET_I(1);
    vlSelf->io_debugAddress = VL_RAND_RESET_I(32);
    vlSelf->io_debugRegWEn = VL_RAND_RESET_I(1);
    vlSelf->io_debugRD = VL_RAND_RESET_I(5);
    vlSelf->io_debugMemData = VL_RAND_RESET_I(32);
    vlSelf->io_debugMemWriteData = VL_RAND_RESET_I(32);
    vlSelf->io_debugMemAccessLength = VL_RAND_RESET_I(3);
    vlSelf->Pipeline__DOT___immGen_io_out = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT___regfile_io_rd0 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT___regfile_io_rd1 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT___pc_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT___pc_T_3 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT____Vcellinp__regfile__io_wdData = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT____Vcellinp__alu__io_in1 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT____Vcellinp__alu__io_in0 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_0 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_1 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_2 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_3 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_4 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_5 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_6 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_7 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_8 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_9 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_10 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_11 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_12 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_13 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_14 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_15 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_16 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_17 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_18 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_19 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_20 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_21 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_22 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_23 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_24 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_25 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_26 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_27 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_28 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_29 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_30 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__regfile__DOT__regs_31 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__branchComparator__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__alu__DOT__v_0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Pipeline__DOT__DMEM__DOT___GEN = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->Pipeline__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h0a982109__0 = VL_RAND_RESET_I(8);
    vlSelf->Pipeline__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h41b8a8af__0 = VL_RAND_RESET_I(8);
    vlSelf->Pipeline__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h462a8411__0 = VL_RAND_RESET_I(8);
    vlSelf->Pipeline__DOT__DMEM__DOT__dmem_ext__DOT____Vlvbound_h624d58fc__0 = VL_RAND_RESET_I(8);
    vlSelf->Pipeline__DOT__stage1Register__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage1Register__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage1Register__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__stage1Register__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__stage1Register__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__stage1Register__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage1Register__DOT__aluSel = VL_RAND_RESET_I(4);
    vlSelf->Pipeline__DOT__stage1Register__DOT__aSel = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__bSel = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__regWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__wbSel = VL_RAND_RESET_I(2);
    vlSelf->Pipeline__DOT__stage1Register__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__cmpMode = VL_RAND_RESET_I(3);
    vlSelf->Pipeline__DOT__stage1Register__DOT__isBranch = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__isJump = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__memRWSel = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__memAccessLength = VL_RAND_RESET_I(3);
    vlSelf->Pipeline__DOT__stage1Register__DOT__memReadMode = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_9 = VL_RAND_RESET_I(4);
    vlSelf->Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___memAccessLength_T_1 = VL_RAND_RESET_I(8);
    vlSelf->Pipeline__DOT__stage2Register__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage2Register__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage2Register__DOT__aluResult = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage2Register__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Pipeline__DOT__stage2Register__DOT__regWEn = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage2Register__DOT__rs2Data = VL_RAND_RESET_I(32);
    vlSelf->Pipeline__DOT__stage2Register__DOT__wbSel = VL_RAND_RESET_I(2);
    vlSelf->Pipeline__DOT__stage2Register__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage2Register__DOT__memRWSel = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage2Register__DOT__memAccessLength = VL_RAND_RESET_I(3);
    vlSelf->Pipeline__DOT__stage2Register__DOT__memReadMode = VL_RAND_RESET_I(1);
    vlSelf->Pipeline__DOT__stage2Register__DOT__branchTaken = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
