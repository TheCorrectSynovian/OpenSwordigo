/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b900
 * Function: Caver::Proto::HeroEntityComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HeroEntityComponent::SharedDtor() */

void __thiscall Caver::Proto::HeroEntityComponent::SharedDtor(HeroEntityComponent *this)

{
  if ((*(HeroEntityComponent **)PTR_default_instance__007e4d60 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0041b924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


