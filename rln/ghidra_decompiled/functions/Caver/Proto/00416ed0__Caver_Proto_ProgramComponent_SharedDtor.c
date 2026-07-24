/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416ed0
 * Function: Caver::Proto::ProgramComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::SharedDtor() */

void __thiscall Caver::Proto::ProgramComponent::SharedDtor(ProgramComponent *this)

{
                    /* catch() { ... } // from try @ 00416f18 with catch @ 00416ed0
                       catch() { ... } // from try @ 00416f88 with catch @ 00416ed0 */
  if ((*(ProgramComponent **)PTR_default_instance__007e56e8 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00416ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


