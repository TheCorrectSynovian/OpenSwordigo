/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c90b4
 * Function: Caver::SwingableWeaponControllerComponent::StopSwing
 * Signature: undefined __thiscall StopSwing(SwingableWeaponControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::StopSwing() */

void __thiscall
Caver::SwingableWeaponControllerComponent::StopSwing(SwingableWeaponControllerComponent *this)

{
  if (*(SwingableWeaponComponent **)(this + 0x98) != (SwingableWeaponComponent *)0x0) {
    SwingableWeaponComponent::StopSwing(*(SwingableWeaponComponent **)(this + 0x98));
    return;
  }
  return;
}


