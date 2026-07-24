/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c9434
 * Function: Caver::SwingableWeaponControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SwingableWeaponControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SwingableWeaponControllerComponent::RegisterInterfaces
          (SwingableWeaponControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e48a0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


