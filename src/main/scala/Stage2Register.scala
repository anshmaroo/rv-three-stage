
import chisel3._
import chisel3.util._
import scala.math._

class Stage2Register(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val instructionIn = Input(UInt(32.W))
    val pcIn = Input(UInt(xlen.W))
    val immediateIn = Input(UInt(xlen.W))
    val aluResultIn = Input(UInt(xlen.W))
    val rdIn = Input(UInt((log(xlen) / log(2.0)).toInt.W))
    val regWEnIn = Input(Bool())
    val rs2DataIn = Input(UInt(xlen.W))
    val wbSelIn = Input(UInt(2.W))
    val isLoadIn = Input(Bool())
    val memRWSelIn = Input(Bool())
    val memAccessLengthIn = Input(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val memReadModeIn = Input(Bool())
    val memWriteMaskIn = Input(UInt(xlen.W))
    val branchTakenIn = Input(Bool())

    val instruction = Output(UInt(32.W))
    val pc = Output(UInt(xlen.W))
    val immediate = Output(UInt(xlen.W))
    val aluResult = Output(UInt(xlen.W))
    val rd = Output(UInt((log(xlen)/log(2)).toInt.W))
    val regWEn = Output(Bool())
    val rs2Data = Output(UInt(xlen.W))
    val wbSel = Output(UInt(2.W))
    val isLoad = Output(Bool())
    val memRWSel = Output(Bool())
    val memAccessLength = Output(UInt((log(xlen / 8)/log(2) + 1).toInt.W))
    val memReadMode = Output(Bool())
    val memWriteMask = Output(UInt(xlen.W))
    val branchTaken = Output(Bool())
  })

  val instruction = RegInit(0.U(32.W))
  val pc = RegInit(0.U(xlen.W))
  val immediate = RegInit(0.U(xlen.W))
  val aluResult = RegInit(0.U(xlen.W))
  val rd = RegInit(0.U((log(xlen)/log(2)).toInt.W))
  val regWEn = RegInit(0.U(1.W))
  val rs2Data = RegInit(0.U(xlen.W))
  val wbSel = RegInit(0.U(2.W))
  val isLoad = RegInit(0.U(1.W))
  val memRWSel = RegInit(0.U(1.W))
  val memAccessLength = RegInit(0.U((log(xlen / 8)/log(2) + 1).toInt.W))
  val memReadMode = RegInit(0.U(1.W))
  val memWriteMask = RegInit(0.U(xlen.W))
  val branchTaken = RegInit(0.U(1.W))

  instruction := io.instructionIn
  pc := io.pcIn
  immediate := io.immediateIn
  aluResult := io.aluResultIn
  rd := io.rdIn
  regWEn := io.regWEnIn
  rs2Data := io.rs2DataIn
  wbSel := io.wbSelIn
  isLoad := io.isLoadIn
  memRWSel := io.memRWSelIn
  memAccessLength := io.memAccessLengthIn
  memReadMode := io.memReadModeIn
  memWriteMask := io.memWriteMaskIn
  branchTaken := io.branchTakenIn

  io.instruction := instruction
  io.pc := pc
  io.immediate := immediate
  io.aluResult := aluResult
  io.rd := rd
  io.regWEn := regWEn
  io.rs2Data := rs2Data
  io.wbSel := wbSel
  io.isLoad := isLoad
  io.memRWSel := memRWSel
  io.memAccessLength := memAccessLength
  io.memReadMode := memReadMode
  io.memWriteMask := memWriteMask
  io.branchTaken := branchTaken

}


