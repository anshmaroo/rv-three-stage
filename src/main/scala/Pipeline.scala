import chisel3._
import chisel3.util._
import scala.math._

class Pipeline(xlen: Int, memSize: Int, csrFileSize: Int) extends Module {
  val io = IO(new Bundle {
    val pcOut = Output(UInt(xlen.W))
    val debugRegs = Output(Vec(32, UInt(xlen.W)))
    val debugInstruction = Output(UInt(32.W))
    val debugImmediate = Output(SInt(xlen.W))
    val debugBranchTaken = Output(Bool())
    val debugLoad = Output(Bool())
    val debugStore = Output(Bool())
    val debugAddress = Output(UInt(xlen.W))
    val debugRegWEn = Output(Bool())
    val debugRD = Output(UInt(5.W))
    val debugAluResult = Output(UInt(xlen.W))
    val debugMemData = Output(UInt(xlen.W))
    val debugMemWriteData = Output(UInt(xlen.W))
    val debugMemAccessLength = Output(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val debugCsr = Output(UInt(xlen.W))
    val debugRS1Data = Output(UInt(xlen.W))
    val debugRS2Data = Output(UInt(xlen.W))
    val debugCsrWEn = Output(Bool())
    val debugCsrWdData = Output(UInt(xlen.W))
  })

  val pc = RegInit(0.U(xlen.W))
  val regfile = Module(new Regfile(xlen))
  val immGen = Module(new ImmGen(xlen))
  val branchComparator = Module(new BranchComparator(xlen))
  val alu = Module(new ALU(xlen))
  val IMEM = Module(new IMEM(memSize))
  val DMEM = Module(new DMEM(xlen, memSize))
  val stage1Register = Module(new Stage1Register((xlen)))
  val stage2Register = Module(new Stage2Register((xlen)))
  val nop = 0x13.U

  // CSR file for modified risc-v test suite
  val csrs = Module(new CSRFile(csrFileSize, xlen))

  // instruction fetch/decode
  IMEM.io.addr := pc
  val instruction = IMEM.io.instruction
  val opcode = instruction(6, 0)

  immGen.io.instruction := instruction
  val immediate = immGen.io.out.asUInt

  // stage 1 register inputs
  stage1Register.io.instructionIn := MuxCase(instruction, Array(
    (stage2Register.io.branchTaken) -> nop,
    (stage2Register.io.isLoad
      && (stage2Register.io.rd === stage1Register.io.rs1 || stage2Register.io.rd === stage1Register.io.rs2)) -> nop
    )
  )
  stage1Register.io.pcIn := pc
  stage1Register.io.immediateIn := immediate

  // regfile inputs
  regfile.io.rdIndex0 := stage1Register.io.rs1
  regfile.io.rdIndex1 := stage1Register.io.rs2
  regfile.io.wdIndex := stage2Register.io.rd
  regfile.io.wdEn := stage2Register.io.regWEn

  val regfileWriteData = MuxCase(0.U, Array(
    (stage2Register.io.wbSel === 0.U) -> DMEM.io.rdData,
    (stage2Register.io.wbSel === 1.U) -> stage2Register.io.aluResult,
    (stage2Register.io.wbSel === 2.U) -> (stage2Register.io.pc + 4.U),
    (stage2Register.io.wbSel === 3.U) -> csrs.io.rdOut
  ))
  regfile.io.wdData := regfileWriteData

  // alu inputs
  alu.io.in0 := MuxCase(regfile.io.rd0, Array(
    (stage1Register.io.aSel === 1.U) -> stage1Register.io.pc,
    (stage1Register.io.aSel === 0.U) -> MuxCase(regfile.io.rd0, Array(
        ((stage1Register.io.rs1 === stage2Register.io.rd) & (stage1Register.io.rs1 =/= 0.U))  -> stage2Register.io.aluResult,
          (stage1Register.io.rs1 =/= stage2Register.io.rd) -> regfile.io.rd0
        )
      )
    )
  )

  alu.io.in1 := MuxCase(regfile.io.rd1, Array(
    (stage1Register.io.bSel === 1.U) -> stage1Register.io.immediate,
    (stage1Register.io.bSel === 0.U) -> MuxCase(regfile.io.rd1, Array(
      ((stage1Register.io.rs2 === stage2Register.io.rd) & (stage1Register.io.rs2 =/= 0.U)) -> stage2Register.io.aluResult,
      (stage1Register.io.rs2 =/= stage2Register.io.rd) -> regfile.io.rd1
    )
    )
  )
  )

  alu.io.aluSel := stage1Register.io.aluSel


  // branch comparator inputs
  branchComparator.io.in0 := MuxCase(regfile.io.rd0, Array(
    ((stage2Register.io.rd === stage1Register.io.rs1) & stage1Register.io.rs1 =/= 0.U) -> stage2Register.io.aluResult
  )
  )
  branchComparator.io.in1 := MuxCase(regfile.io.rd1, Array(
    ((stage2Register.io.rd === stage1Register.io.rs2) & stage1Register.io.rs1 =/= 0.U) -> stage2Register.io.aluResult
  )
  )
  branchComparator.io.cmpMode := stage1Register.io.cmpMode


  // stage 2 register inputs
  stage2Register.io.instructionIn := MuxCase(stage1Register.io.instruction, Array(
    (stage2Register.io.branchTaken) -> nop,
    (stage2Register.io.isLoad
      && (stage2Register.io.rd === stage1Register.io.rs1 || stage2Register.io.rd === stage1Register.io.rs2)) -> nop
    )
  )
  stage2Register.io.pcIn := stage1Register.io.pc
  stage2Register.io.immediateIn := stage1Register.io.immediate
  stage2Register.io.aluResultIn := alu.io.out
  stage2Register.io.rdIn := stage1Register.io.rd
  stage2Register.io.regWEnIn := MuxCase(stage1Register.io.regWEn, Array (
    (stage2Register.io.branchTaken) -> false.B,
    (stage2Register.io.isLoad
      && (stage2Register.io.rd === stage1Register.io.rs1 || stage2Register.io.rd === stage1Register.io.rs2)) -> false.B
    )
  )
  stage2Register.io.rs1DataIn := MuxCase(regfile.io.rd0, Array(
    ((stage2Register.io.rd === stage1Register.io.rs1) & stage1Register.io.rs1 =/= 0.U) -> stage2Register.io.aluResult
  )
  )
  stage2Register.io.rs2DataIn := MuxCase(regfile.io.rd1, Array(
    ((stage2Register.io.rd === stage1Register.io.rs2) & stage1Register.io.rs1 =/= 0.U) -> stage2Register.io.aluResult
  )
  )
  stage2Register.io.wbSelIn := stage1Register.io.wbSel
  stage2Register.io.isLoadIn := stage1Register.io.isLoad
  stage2Register.io.memRWSelIn := MuxCase(stage1Register.io.memRWSel, Array (
      (stage2Register.io.branchTaken) -> false.B,
      (stage2Register.io.isLoad
        && (stage2Register.io.rd === stage1Register.io.rs1 || stage2Register.io.rd === stage1Register.io.rs2)) -> false.B
    )
  )
  stage2Register.io.memAccessLengthIn := stage1Register.io.memAccessLength
  stage2Register.io.memReadModeIn := stage1Register.io.memReadMode
  stage2Register.io.memWriteMaskIn:= stage1Register.io.memWriteMask
  stage2Register.io.branchTakenIn := (stage1Register.io.isJump) | (stage1Register.io.isBranch & branchComparator.io.branchTaken)
  stage2Register.io.csrOffsetIn := stage1Register.io.csrOffset
  stage2Register.io.csrWEnIn := stage1Register.io.csrWEn

  // memory inputs
  DMEM.io.wdData := stage2Register.io.rs2Data
  DMEM.io.wdEn := stage2Register.io.memRWSel
  DMEM.io.addr := stage2Register.io.aluResult
  DMEM.io.length := stage2Register.io.memAccessLength
  DMEM.io.rdMode := stage2Register.io.memReadMode

  // pc input
  pc := MuxCase(pc + 4.U, Array(
    (stage2Register.io.branchTaken) -> stage2Register.io.aluResult,
    (stage2Register.io.isLoad
      && (stage2Register.io.rd === stage1Register.io.rs1 || stage2Register.io.rd === stage1Register.io.rs2)) -> stage1Register.io.pc
    )
  )

  // csr
  csrs.io.addr := stage2Register.io.csrOffset
  csrs.io.debugAddr := 0x51E.U
  csrs.io.wdEn := stage2Register.io.csrWEn
  csrs.io.wdData := MuxCase(stage2Register.io.rs1Data,
    Array((stage2Register.io.instruction(14) === 1.U) -> stage2Register.io.immediate)
  )


  // debug stuff
  io.pcOut := stage2Register.io.pc
  io.debugRegs := regfile.io.debugRegs
  io.debugInstruction := stage2Register.io.instruction
  io.debugBranchTaken := stage2Register.io.branchTaken
  io.debugLoad := stage2Register.io.isLoad
  io.debugStore := stage2Register.io.memRWSel
  io.debugAddress := stage2Register.io.aluResult
  io.debugRegWEn := stage2Register.io.regWEn
  io.debugRD := stage2Register.io.rd
  io.debugAluResult := stage2Register.io.aluResult
  io.debugMemData := DMEM.io.rdData
  io.debugMemAccessLength := stage2Register.io.memAccessLength
  io.debugMemWriteData := stage2Register.io.rs2Data
  io.debugImmediate := stage2Register.io.immediate.asSInt
  io.debugRS1Data := stage2Register.io.rs1Data
  io.debugRS2Data := stage2Register.io.rs2Data
  io.debugCsr := csrs.io.debugCsr
  io.debugCsrWEn := stage2Register.io.csrWEn
  io.debugCsrWdData := MuxCase(stage2Register.io.rs1Data,
    Array((stage2Register.io.instruction(14) === 1.U) -> stage2Register.io.immediate)
  )
}

object VerilogGen extends App {
  emitVerilog(new Pipeline(32, 0x1000, 4096), Array("--target-dir", "generated"))
}