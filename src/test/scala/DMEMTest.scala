import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec
import chisel3._

class DMEMTest extends AnyFlatSpec {
  behavior of "DMEM"
  it should "store/load values" in {
    simulate(new DMEM(32, 1000)) { c =>
      c.reset.poke(1)
      c.clock.step(1)
      c.reset.poke(0)

      c.io.wdEn.poke(1)
      c.io.length.poke(4)
      c.io.addr.poke(0)
      c.io.wdData.poke(0xfffff899)

      c.clock.step(1)

      c.io.rdMode.poke(1)
      c.io.length.poke(4)
      c.io.wdEn.poke(0)
      c.io.addr.poke(0)
      c.io.rdData.expect(0xfffff899L.U)

    }

  }
}