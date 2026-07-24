/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00406224
 * Function: Caver::Proto::GroundPolygonComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::SharedDtor() */

void __thiscall Caver::Proto::GroundPolygonComponent::SharedDtor(GroundPolygonComponent *this)

{
  if (*(GroundPolygonComponent **)PTR_default_instance__007e5920 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00406274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x50) + 8))();
      return;
    }
  }
  return;
}


