// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPipeline__pch.h"
#include "VPipeline.h"
#include "VPipeline___024root.h"
#include "VPipeline___024unit.h"

// FUNCTIONS
VPipeline__Syms::~VPipeline__Syms()
{
}

VPipeline__Syms::VPipeline__Syms(VerilatedContext* contextp, const char* namep, VPipeline* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(822);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
