/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437008
 * Function: Caver::Proto::SpellComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpellComponent::SharedDtor() */

void __thiscall Caver::Proto::SpellComponent::SharedDtor(SpellComponent *this)

{
  if ((*(SpellComponent **)PTR_default_instance__007e66b8 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0043702c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00436ea4 with catch @ 0043702c */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


