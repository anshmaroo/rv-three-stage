#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "VPipeline.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* top = new VPipeline();
    top->reset = 1;
    for (int i = 0; i < 5; i++) {
        top->clock = 0;
        top->eval();  // 7
        top->clock = 1;
        top->eval();  // 8
    }
    top->reset = 0;

    // Run for 6 cycles
    int cycle = 0;
    while ((int) top->io_debugCsr == 0) {
        // Optional: Print PC, regs, etc.
        std::cout << "Cycle " << std::hex << cycle
                  << ", PC = " << std::hex << top->io_pcOut
                  << ", Instruction = " << std::hex << top->io_debugInstruction
                  << ", Immediate = " << std::hex << top->io_debugImmediate
                  << ", Destination register = " << std::hex << (int) top->io_debugRD
                  << ", ALU result = " << std::hex << (int) top->io_debugAluResult
                  << ", End CSR = " << std::hex << top->io_debugCsr 
                  << ", rs1Data = " << std::hex << top->io_debugRS1Data
                  << ", rs2Data = " << std::hex << top->io_debugRS2Data
                  << ", csr write = " << std::hex << (int) top->io_debugCsrWEn
                  << ", csr write data = " << std::hex << (int) top->io_debugCsrWdData
                  << std::endl;
        

        top->clock = 0;
        top->eval();
        top->clock = 1;
        top->eval();
        cycle++;

        std::cout << "\tRegister 0: " << top->io_debugRegs_0 << std::endl;
        std::cout << "\tRegister 1: " << top->io_debugRegs_1 << std::endl;
        std::cout << "\tRegister 2: " << top->io_debugRegs_2 << std::endl;
        std::cout << "\tRegister 3: " << top->io_debugRegs_3 << std::endl;
        std::cout << "\tRegister 4: " << top->io_debugRegs_4 << std::endl;
        std::cout << "\tRegister 5: " << top->io_debugRegs_5 << std::endl;
        std::cout << "\tRegister 6: " << top->io_debugRegs_6 << std::endl;
        std::cout << "\tRegister 7: " << top->io_debugRegs_7 << std::endl;
        std::cout << "\tRegister 8: " << top->io_debugRegs_8 << std::endl;
        std::cout << "\tRegister 9: " << top->io_debugRegs_9 << std::endl;
        std::cout << "\tRegister 10: " << top->io_debugRegs_10 << std::endl;
        std::cout << "\tRegister 11: " << top->io_debugRegs_11 << std::endl;
        std::cout << "\tRegister 12: " << top->io_debugRegs_12 << std::endl;
        std::cout << "\tRegister 13: " << top->io_debugRegs_13 << std::endl;
        std::cout << "\tRegister 14: " << top->io_debugRegs_14 << std::endl;
        std::cout << "\tRegister 15: " << top->io_debugRegs_15 << std::endl;
        std::cout << "\tRegister 16: " << top->io_debugRegs_16 << std::endl;
        std::cout << "\tRegister 17: " << top->io_debugRegs_17 << std::endl;
        std::cout << "\tRegister 18: " << top->io_debugRegs_18 << std::endl;
        std::cout << "\tRegister 19: " << top->io_debugRegs_19 << std::endl;
        std::cout << "\tRegister 20: " << top->io_debugRegs_20 << std::endl;
        std::cout << "\tRegister 21: " << top->io_debugRegs_21 << std::endl;
        std::cout << "\tRegister 22: " << top->io_debugRegs_22 << std::endl;
        std::cout << "\tRegister 23: " << top->io_debugRegs_23 << std::endl;
        std::cout << "\tRegister 24: " << top->io_debugRegs_24 << std::endl;
        std::cout << "\tRegister 25: " << top->io_debugRegs_25 << std::endl;
        std::cout << "\tRegister 26: " << top->io_debugRegs_26 << std::endl;
        std::cout << "\tRegister 27: " << top->io_debugRegs_27 << std::endl;
        std::cout << "\tRegister 28: " << top->io_debugRegs_28 << std::endl;
        std::cout << "\tRegister 29: " << top->io_debugRegs_29 << std::endl;
        std::cout << "\tRegister 30: " << top->io_debugRegs_30 << std::endl;
        std::cout << "\tRegister 31: " << top->io_debugRegs_31 << std::endl;
    }

    top->final();
    delete top;
    return 0;
}