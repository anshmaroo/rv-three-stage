# three-stage RISC-V pipeline written in Chisel
- supports rv32i/rv64i base instruction sets
- tested with chiselsim + verilator
- no branch prediction (always predicts branch not taken)
- hazards handled with data fowarding + pipeline stalls
