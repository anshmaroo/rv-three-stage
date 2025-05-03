import chisel3._
import scala.math._

class ALU(xlen: Int) extends Module {
  val io = IO(new Bundle {
    val in0 = Input(UInt(xlen.W));
    val in1 = Input(UInt(xlen.W));
    val aluSel = Input(UInt(4.W));
    val out = Output(UInt(xlen.W));
  })

  val add = io.in0 + io.in1;
  val sub = io.in0 - io.in1;
  val sll = io.in0 << io.in1((log(xlen) / log(2)).toInt, 0);
  val srl = io.in0 >> io.in1((log(xlen) / log(2)).toInt, 0);
  val sra = (io.in0.asSInt >> io.in1((log(xlen) / log(2)).toInt, 0)).asUInt
  val slt = (io.in0.asSInt < io.in1.asSInt).asUInt;
  val sltu = io.in0 < io.in1;
  val or = io.in0 | io.in1;
  val and = io.in0 & io.in1;
  val xor = io.in0 ^ io.in1;


  val v = Wire(Vec(10, UInt(xlen.W)));

  v(0) := add;
  v(1) := sub;
  v(2) := sll;
  v(3) := srl;
  v(4) := sra;
  v(5) := slt;
  v(6) := sltu;
  v(7) := or;
  v(8) := and;
  v(9) := xor;

  io.out := v(io.aluSel);

}
