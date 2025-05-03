import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

class BranchComparatorTest extends AnyFlatSpec {
  behavior of "Branch Comparator"
  it should "compare values" in {
    simulate(new BranchComparator(32)) { c =>
      c.io.in0.poke(0x2a)
      c.io.in1.poke(0x2a)
//      c.io.cmpMode.poke()
    }

  }
}