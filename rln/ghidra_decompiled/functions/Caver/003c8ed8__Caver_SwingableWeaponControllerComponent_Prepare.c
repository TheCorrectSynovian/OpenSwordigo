/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c8ed8
 * Function: Caver::SwingableWeaponControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::Prepare() */

void __thiscall
Caver::SwingableWeaponControllerComponent::Prepare(SwingableWeaponControllerComponent *this)

{
  if (*(long *)(*(long *)(this + 0x90) + -0x18) != 0) {
    CreateWeapon(this);
    return;
  }
  return;
}


