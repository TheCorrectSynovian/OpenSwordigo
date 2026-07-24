/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429a7c
 * Function: Caver::Proto::SwingableWeaponComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(SwingableWeaponComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingableWeaponComponent::SharedDtor() */

void __thiscall Caver::Proto::SwingableWeaponComponent::SharedDtor(SwingableWeaponComponent *this)

{
  if ((*(SwingableWeaponComponent **)PTR_default_instance__007e4b88 != this) &&
     (*(long **)(this + 0x20) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00429aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}


