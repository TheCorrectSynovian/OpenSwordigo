/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410868
 * Function: Caver::Proto::ShadowComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::SharedDtor() */

void __thiscall Caver::Proto::ShadowComponent::SharedDtor(ShadowComponent *this)

{
                    /* catch() { ... } // from try @ 0040ebac with catch @ 0041086c */
                    /* catch() { ... } // from try @ 0040eb84 with catch @ 00410870 */
  if ((*(ShadowComponent **)PTR_default_instance__007e5258 != this) &&
     (*(long **)(this + 0x18) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


