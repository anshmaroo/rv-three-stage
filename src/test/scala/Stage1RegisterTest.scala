import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

class Stage1RegisterTest extends AnyFlatSpec {
  behavior of "Stage1Register"
  it should "identify flags" in {
    simulate(new Stage1Register(32)) { c =>
      c.reset.poke(1)
      c.clock.step(1)
      c.reset.poke(0)
      c.io.instructionIn.poke(0x00210183)
      c.clock.step(1)
      c.io.memAccessLength.expect(1)

    }

  }
}