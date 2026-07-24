/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a4cc
 * Function: Caver::Proto::EntityActionComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::SharedDtor() */

void __thiscall Caver::Proto::EntityActionComponent::SharedDtor(EntityActionComponent *this)

{
  if ((*(EntityActionComponent **)PTR_default_instance__007e4b60 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


