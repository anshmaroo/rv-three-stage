import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec
import scala.math._

class Stage2RegisterTest extends AnyFlatSpec {
  behavior of "Stage2Register"
  it should "identify flags" in {
    simulate(new Stage2Register(32)) { c =>

    }

  }
}