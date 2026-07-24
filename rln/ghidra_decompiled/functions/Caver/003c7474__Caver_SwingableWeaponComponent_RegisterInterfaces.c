/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c7474
 * Function: Caver::SwingableWeaponComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SwingableWeaponComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SwingableWeaponComponent::RegisterInterfaces
          (SwingableWeaponComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7110);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


