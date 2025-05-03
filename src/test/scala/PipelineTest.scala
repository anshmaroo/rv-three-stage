import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

class PipelineTest extends AnyFlatSpec {
  behavior of "Pipeline"
  it should "execute instructions" in {
    simulate(new Pipeline(32, 1000)) { c =>
      c.reset.poke(1)
      c.clock.step(1)
      c.reset.poke(0)

    }

  }
}
