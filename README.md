# three-stage RISC-V pipeline written in Chisel
- supports rv32i base instruction set (still needs wide instructions for rv64)
- tested with chiselsim + verilator
- no branch prediction (always predicts branch not taken)
- hazards handled with data fowarding + pipeline stalls
