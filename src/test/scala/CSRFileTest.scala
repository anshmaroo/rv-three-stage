import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec
import chisel3._

class CSRFileTest extends AnyFlatSpec {
  behavior of "CSRFile"
  it should "store/load values" in {
    simulate(new CSRFile(4096, 32)) { c =>
      c.reset.poke(1)
      c.clock.step(1)
      c.reset.poke(0)

      c.io.wdEn.poke(1)
      c.io.addr.poke(0x51e)
      c.io.wdData.poke(1)

      c.clock.step(1)

      c.io.debugAddr.poke(0x51e)
      c.io.rdOut.expect(1.U)
      c.io.debugCsr.expect(1.U)

    }

  }
}