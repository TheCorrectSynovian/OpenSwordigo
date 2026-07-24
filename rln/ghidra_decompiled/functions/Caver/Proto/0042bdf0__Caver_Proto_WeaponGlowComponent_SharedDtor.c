/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bdf0
 * Function: Caver::Proto::WeaponGlowComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::SharedDtor() */

void __thiscall Caver::Proto::WeaponGlowComponent::SharedDtor(WeaponGlowComponent *this)

{
  if (*(WeaponGlowComponent **)PTR_default_instance__007e5698 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042be40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x18) + 8))();
      return;
    }
  }
                    /* try { // try from 0042be4c to 0052be4f has its CatchHandler @ 0042bee4 */
  return;
}


