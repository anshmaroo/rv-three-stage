import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec
import chisel3._

class RegfileTest extends AnyFlatSpec {
  behavior of "Regfile"
  it should "store/load values" in {
    simulate(new Regfile(32)) { c =>
      c.reset.poke(1)
      c.clock.step(1)
      c.reset.poke(0)

      c.io.wdEn.poke(1)
      c.io.wdIndex.poke(0)
      c.io.wdData.poke(1)

      c.clock.step(1)

      c.io.rdIndex0.poke(0)
      c.io.rd0.expect(1.U)

    }

  }
}