import chisel3._
import chisel3.util._
import scala.math._

class Stage1Register(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val instructionIn = Input(UInt(32.W))
    val pcIn = Input(UInt(xlen.W))
    val immediateIn = Input(UInt(xlen.W))

    val instruction = Output(UInt(32.W))
    val pc = Output(UInt(xlen.W))
    val rs1 = Output(UInt((5.W)))
    val rs2 = Output(UInt((5.W)))
    val rd = Output(UInt((5.W)))

    val immediate = Output(UInt(xlen.W))

    val aluSel = Output(UInt(4.W))
    val aSel = Output(Bool())
    val bSel = Output(Bool())

    val regWEn = Output(Bool())
    val wbSel = Output(UInt(2.W))

    val isLoad = Output(Bool())

    val cmpMode = Output(UInt(3.W))
    val isBranch = Output(Bool())
    val isJump = Output(Bool())

    val memRWSel = Output(Bool())
    val memAccessLength = Output(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val memReadMode = Output(Bool())
    val memWriteMask = Output(UInt(xlen.W))

    val csrOffset = Output(UInt(12.W))
    val csrWEn = Output(Bool())
  })

  val opcode = io.instructionIn(6, 0)
  val funct3 = io.instructionIn(14, 12)
  val funct7aux = io.instructionIn(30)


  val instruction = RegInit(0.U(xlen.W))
  val pc = RegInit(0.U(xlen.W))
  val rs1 = RegInit(0.U((5.W)))
  val rs2 = RegInit(0.U((5.W)))
  val rd = RegInit(0.U((5.W)))
  val immediate = RegInit(0.U(xlen.W))
  val aluSel = RegInit(0.U(4.W))
  val aSel = RegInit(0.U(1.W))
  val bSel = RegInit(0.U(1.W))
  val regWEn = RegInit(0.U(1.W))
  val wbSel = RegInit(0.U(2.W))
  val isLoad = RegInit(0.U(1.W))
  val cmpMode = RegInit(0.U(3.W))
  val isBranch = RegInit(0.U(1.W))
  val isJump = RegInit(0.U(1.W))
  val memRWSel = RegInit(0.U(1.W))
  val memAccessLength = RegInit(0.U((log(xlen / 8)/log(2) + 1).toInt.W))
  val memReadMode = RegInit(0.U(1.W))
  val memWriteMask = RegInit(0.U(xlen.W))
  val csrOffset = RegInit(0.U(12.W))
  val csrWEn = RegInit(0.U(1.W))

  // instruction
  instruction := io.instructionIn
  // pc
  pc := io.pcIn

  // regfile
  rs1 := io.instructionIn(19, 15)
  rs2 := io.instructionIn(24, 20)
  rd := io.instructionIn(11, 7)


  regWEn := true.B
  switch (opcode) {
    is (0b0100011.U) {
      regWEn := false.B
    }
    is (0b1100011.U) {
      regWEn := false.B
    }
    is (0b1110011.U) {
      // csr type
      when (rd === 0.U) {
        regWEn := false.B
      }
    }
  }

  wbSel := 1.U
  switch (opcode) {
    is(0b0110011.U) {
      // r-type
      wbSel := 1.U
    }
    is(0b0010011.U) {
      // i-type
      wbSel := 1.U
    }
    is(0b0000011.U) {
      // load
      wbSel := 0.U
    }
    is(0b1101111.U) {
      // jump
      wbSel := 2.U
    }
    is(0b1100111.U) {
      // jump and link
      wbSel := 2.U
    }
    is(0b0010111.U) {
      // u-type
      wbSel := 1.U
    }
    is(0b0110111.U) {
      // u-type
      wbSel := 1.U
    }
    is(0b1110011.U) {
      // csr type
      wbSel := 3.U;
    }
  }

  // immediate
  immediate := io.immediateIn

  // ALU
  aluSel := 0.U
  when (opcode === 0b0000011.U || opcode === 0b0100011.U || opcode === 0b1100011.U || opcode === 0b1100111.U) {
    // load, store, branch, jump - add
    aluSel := 0.U
  } .elsewhen (opcode === 0b0110011.U) {
    // r-types
    switch (funct3) {
      is(0b000.U) {
        when (funct7aux) {
          aluSel := 1.U
        } otherwise {
          aluSel := 0.U
        }
      }
      is (0b111.U) {
        aluSel := 8.U
      }
      is (0b110.U) {
        aluSel := 7.U
      }
      is(0b100.U) {
        aluSel := 9.U
      }
      is(0b001.U) {
        aluSel := 2.U
      }
      is(0b101.U) {
        when (funct7aux) {
          aluSel := 4.U
        } otherwise {
          aluSel := 3.U
        }
      }
      is(0b010.U) {
        aluSel := 5.U
      }
      is(0b011.U) {
        aluSel := 6.U
      }
    }
  } .elsewhen (opcode === 0b0010011.U) {
    // i-types
    switch (funct3) {
      is(0b000.U) {
        aluSel := 0.U
      }
      is (0b111.U) {
        aluSel := 8.U
      }
      is (0b110.U) {
        aluSel := 7.U
      }
      is(0b100.U) {
        aluSel := 9.U
      }
      is(0b001.U) {
        aluSel := 2.U
      }
      is(0b101.U) {
        when (funct7aux) {
          aluSel := 4.U
        } otherwise {
          aluSel := 3.U
        }
      }
      is(0b010.U) {
        aluSel := 5.U
      }
      is(0b011.U) {
        aluSel := 6.U
      }
    }
  }

  aSel := false.B
  switch (opcode) {
    is(0b1100011.U) {
      aSel := true.B
    }
    is(0b1101111.U) {
      aSel := true.B
    }
  }

  bSel := false.B
  switch (opcode) {
    is(0b0110011.U) {
      // r-type
      bSel := false.B
    }
    is(0b0010011.U) {
      // i-type (arithmetic)
      bSel := true.B
    }
    is(0b0000011.U) {
      // i-type (loads)
      bSel := true.B
    }
    is(0b0100011.U) {
      // s-type
      bSel := true.B
    }
    is(0b1100011.U) {
      // b-type
      bSel := true.B
    }
    is(0b0110111.U) {
      // u-type (lui)
      bSel := true.B
    }
    is(0b0010111.U) {
      // u-type (auipc)
      bSel := true.B
    }
    is(0b1101111.U) {
      // j-type
      bSel := true.B
    }
    is(0b1100111.U) {
      // i-type (jump)
      bSel := true.B
    }
    is(0b1110011.U) {
      // csr type
      when(funct3(2) === 1.U) {
        bSel := true.B
      }
    }
  }

  // branches
  cmpMode := funct3


  when (opcode === 0b1100011.U) {
    isBranch := true.B
  } .otherwise {
    isBranch := false.B
  }

  isJump := false.B
  when (opcode === 0b1101111.U || opcode === 0b1100111.U) {
    isJump := true.B
  }


  // memory
  when (opcode === 0b0000011.U) {
    isLoad := true.B
  } .otherwise {
    isLoad := false.B
  }

  memRWSel := false.B
  switch (opcode) {
    is(0b0100011.U) {
      memRWSel := true.B
    }
  }

  memWriteMask := 0.U
  val numBytes = (1.U << funct3)
  memWriteMask := (-1).S.pad(xlen).asUInt

  memReadMode := ~funct3(2)
  memAccessLength := (1.U << (funct3 & 0x3.U))

  // csr
  csrOffset := instruction(31, 20)
  csrWEn := (opcode === 0b1110011.U) & (funct3 === 0b001.U | funct3 === 0b101.U)

  // set all outputs
  io.instruction := instruction
  io.pc := pc
  io.rs1 := rs1
  io.rs2 := rs2
  io.rd := rd
  io.immediate := immediate
  io.aluSel := aluSel
  io.aSel := aSel
  io.bSel := bSel
  io.regWEn := regWEn
  io.wbSel := wbSel
  io.isLoad := isLoad
  io.cmpMode := cmpMode
  io.isBranch := isBranch
  io.isJump := isJump
  io.memRWSel := memRWSel
  io.memAccessLength := memAccessLength
  io.memReadMode := memReadMode
  io.memWriteMask := memWriteMask
  io.csrOffset := csrOffset
  io.csrWEn := csrWEn
}
