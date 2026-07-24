/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040badc
 * Function: Caver::Proto::CollisionShapeComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::SharedDtor() */

void __thiscall Caver::Proto::CollisionShapeComponent::SharedDtor(CollisionShapeComponent *this)

{
  if (*(CollisionShapeComponent **)PTR_default_instance__007e7360 != this) {
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x30) + 8))();
    }
    if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040bb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x38) + 8))();
      return;
    }
  }
  return;
}


