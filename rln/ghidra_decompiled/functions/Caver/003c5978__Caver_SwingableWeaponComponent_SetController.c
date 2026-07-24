/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c5978
 * Function: Caver::SwingableWeaponComponent::SetController
 * Signature: undefined __thiscall SetController(SwingableWeaponComponent * this, SwingableWeaponControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::SetController(Caver::SwingableWeaponControllerComponent*) */

void __thiscall
Caver::SwingableWeaponComponent::SetController
          (SwingableWeaponComponent *this,SwingableWeaponControllerComponent *param_1)

{
  *(SwingableWeaponControllerComponent **)(this + 0x70) = param_1;
  return;
}


