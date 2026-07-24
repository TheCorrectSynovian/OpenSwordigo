/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418454
 * Function: Caver::Proto::PhysicsObjectComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::SharedDtor() */

void __thiscall Caver::Proto::PhysicsObjectComponent::SharedDtor(PhysicsObjectComponent *this)

{
  if ((*(PhysicsObjectComponent **)PTR_default_instance__007e5a38 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00418478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


