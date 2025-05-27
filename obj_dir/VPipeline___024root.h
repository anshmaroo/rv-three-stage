// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE___024ROOT_H_
#define VERILATED_VPIPELINE___024ROOT_H_  // guard

#include "verilated.h"


class VPipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPipeline___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_debugBranchTaken,0,0);
        VL_OUT8(io_debugLoad,0,0);
        VL_OUT8(io_debugStore,0,0);
        VL_OUT8(io_debugRegWEn,0,0);
        VL_OUT8(io_debugRD,4,0);
        VL_OUT8(io_debugMemAccessLength,2,0);
        VL_OUT8(io_debugCsrWEn,0,0);
        CData/*0:0*/ Pipeline__DOT___pc_T_2;
        CData/*0:0*/ Pipeline__DOT___pc_T_3;
        CData/*0:0*/ Pipeline__DOT____VdfgRegularize_h5e5eb77f_0_2;
        CData/*0:0*/ Pipeline__DOT__branchComparator__DOT___GEN;
        CData/*0:0*/ Pipeline__DOT__DMEM__DOT___GEN;
        CData/*4:0*/ Pipeline__DOT__stage1Register__DOT__rs1;
        CData/*4:0*/ Pipeline__DOT__stage1Register__DOT__rs2;
        CData/*4:0*/ Pipeline__DOT__stage1Register__DOT__rd;
        CData/*3:0*/ Pipeline__DOT__stage1Register__DOT__aluSel;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__aSel;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__bSel;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__regWEn;
        CData/*1:0*/ Pipeline__DOT__stage1Register__DOT__wbSel;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__isLoad;
        CData/*2:0*/ Pipeline__DOT__stage1Register__DOT__cmpMode;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__isBranch;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__isJump;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__memRWSel;
        CData/*2:0*/ Pipeline__DOT__stage1Register__DOT__memAccessLength;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__memReadMode;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__csrWEn;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_0;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_1;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_2;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_3;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_4;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_5;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_6;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_7;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_8;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_9;
        CData/*0:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_10;
        CData/*3:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_11;
        CData/*3:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_12;
        IData/*31:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_13;
        CData/*3:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_14;
        CData/*3:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___GEN_15;
        CData/*7:0*/ Pipeline__DOT__stage1Register__DOT__unnamedblk1__DOT___memAccessLength_T_1;
        CData/*4:0*/ Pipeline__DOT__stage2Register__DOT__rd;
        CData/*0:0*/ Pipeline__DOT__stage2Register__DOT__regWEn;
        CData/*1:0*/ Pipeline__DOT__stage2Register__DOT__wbSel;
        CData/*0:0*/ Pipeline__DOT__stage2Register__DOT__isLoad;
        CData/*0:0*/ Pipeline__DOT__stage2Register__DOT__memRWSel;
        CData/*2:0*/ Pipeline__DOT__stage2Register__DOT__memAccessLength;
        CData/*0:0*/ Pipeline__DOT__stage2Register__DOT__memReadMode;
        CData/*0:0*/ Pipeline__DOT__stage2Register__DOT__branchTaken;
        CData/*0:0*/ Pipeline__DOT__stage2Register__DOT__csrWEn;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_pcOut,31,0);
        VL_OUT(io_debugRegs_0,31,0);
        VL_OUT(io_debugRegs_1,31,0);
        VL_OUT(io_debugRegs_2,31,0);
    };
    struct {
        VL_OUT(io_debugRegs_3,31,0);
        VL_OUT(io_debugRegs_4,31,0);
        VL_OUT(io_debugRegs_5,31,0);
        VL_OUT(io_debugRegs_6,31,0);
        VL_OUT(io_debugRegs_7,31,0);
        VL_OUT(io_debugRegs_8,31,0);
        VL_OUT(io_debugRegs_9,31,0);
        VL_OUT(io_debugRegs_10,31,0);
        VL_OUT(io_debugRegs_11,31,0);
        VL_OUT(io_debugRegs_12,31,0);
        VL_OUT(io_debugRegs_13,31,0);
        VL_OUT(io_debugRegs_14,31,0);
        VL_OUT(io_debugRegs_15,31,0);
        VL_OUT(io_debugRegs_16,31,0);
        VL_OUT(io_debugRegs_17,31,0);
        VL_OUT(io_debugRegs_18,31,0);
        VL_OUT(io_debugRegs_19,31,0);
        VL_OUT(io_debugRegs_20,31,0);
        VL_OUT(io_debugRegs_21,31,0);
        VL_OUT(io_debugRegs_22,31,0);
        VL_OUT(io_debugRegs_23,31,0);
        VL_OUT(io_debugRegs_24,31,0);
        VL_OUT(io_debugRegs_25,31,0);
        VL_OUT(io_debugRegs_26,31,0);
        VL_OUT(io_debugRegs_27,31,0);
        VL_OUT(io_debugRegs_28,31,0);
        VL_OUT(io_debugRegs_29,31,0);
        VL_OUT(io_debugRegs_30,31,0);
        VL_OUT(io_debugRegs_31,31,0);
        VL_OUT(io_debugInstruction,31,0);
        VL_OUT(io_debugImmediate,31,0);
        VL_OUT(io_debugAddress,31,0);
        VL_OUT(io_debugAluResult,31,0);
        VL_OUT(io_debugMemData,31,0);
        VL_OUT(io_debugMemWriteData,31,0);
        VL_OUT(io_debugCsr,31,0);
        VL_OUT(io_debugRS1Data,31,0);
        VL_OUT(io_debugRS2Data,31,0);
        VL_OUT(io_debugCsrWdData,31,0);
        IData/*31:0*/ Pipeline__DOT___immGen_io_out;
        IData/*31:0*/ Pipeline__DOT__pc;
        IData/*31:0*/ Pipeline__DOT____Vcellinp__regfile__io_wdData;
        IData/*31:0*/ Pipeline__DOT____Vcellinp__branchComparator__io_in1;
        IData/*31:0*/ Pipeline__DOT____Vcellinp__branchComparator__io_in0;
        IData/*31:0*/ Pipeline__DOT____Vcellinp__alu__io_in1;
        IData/*31:0*/ Pipeline__DOT____Vcellinp__alu__io_in0;
        IData/*31:0*/ Pipeline__DOT____Vcellinp__stage1Register__io_instructionIn;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_1;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_2;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_3;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_4;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_5;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_6;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_7;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_8;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_9;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_10;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_11;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_12;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_13;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_14;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_15;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_16;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_17;
    };
    struct {
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_18;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_19;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_20;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_21;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_22;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_23;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_24;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_25;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_26;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_27;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_28;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_29;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_30;
        IData/*31:0*/ Pipeline__DOT__regfile__DOT__regs_31;
        IData/*31:0*/ Pipeline__DOT__alu__DOT__v_0;
        IData/*31:0*/ Pipeline__DOT__stage1Register__DOT__instruction;
        IData/*31:0*/ Pipeline__DOT__stage1Register__DOT__pc;
        IData/*31:0*/ Pipeline__DOT__stage1Register__DOT__immediate;
        IData/*31:0*/ Pipeline__DOT__stage2Register__DOT__instruction;
        IData/*31:0*/ Pipeline__DOT__stage2Register__DOT__pc;
        IData/*31:0*/ Pipeline__DOT__stage2Register__DOT__immediate;
        IData/*31:0*/ Pipeline__DOT__stage2Register__DOT__aluResult;
        IData/*31:0*/ Pipeline__DOT__stage2Register__DOT__rs1Data;
        IData/*31:0*/ Pipeline__DOT__stage2Register__DOT__rs2Data;
        IData/*31:0*/ Pipeline__DOT__csrs__DOT__reg_0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4096> Pipeline__DOT__IMEM__DOT__imem_ext__DOT__Memory;
        VlUnpacked<CData/*7:0*/, 4096> Pipeline__DOT__DMEM__DOT__dmem_ext__DOT__Memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipeline__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipeline___024root(VPipeline__Syms* symsp, const char* v__name);
    ~VPipeline___024root();
    VL_UNCOPYABLE(VPipeline___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
