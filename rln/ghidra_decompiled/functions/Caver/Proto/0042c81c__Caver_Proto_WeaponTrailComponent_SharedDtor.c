/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c81c
 * Function: Caver::Proto::WeaponTrailComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::SharedDtor() */

void __thiscall Caver::Proto::WeaponTrailComponent::SharedDtor(WeaponTrailComponent *this)

{
  if ((*(WeaponTrailComponent **)PTR_default_instance__007e5120 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042c840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
                    /* try { // try from 0042c844 to 0052c847 has its CatchHandler @ 0042c954 */
  return;
}


