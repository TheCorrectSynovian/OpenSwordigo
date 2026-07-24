/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040add0
 * Function: Caver::Proto::ShapeComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShapeComponent::SharedDtor() */

void __thiscall Caver::Proto::ShapeComponent::SharedDtor(ShapeComponent *this)

{
  if (*(ShapeComponent **)PTR_default_instance__007e7b10 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040ae34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x20) + 8))();
      return;
    }
  }
  return;
}


