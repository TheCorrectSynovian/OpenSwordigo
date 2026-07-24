/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419000
 * Function: Caver::Proto::BreakableObjectComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(BreakableObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::SharedDtor() */

void __thiscall Caver::Proto::BreakableObjectComponent::SharedDtor(BreakableObjectComponent *this)

{
  if ((*(BreakableObjectComponent **)PTR_default_instance__007e6f48 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00419024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


