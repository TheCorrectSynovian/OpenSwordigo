/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cc098
 * Function: Caver::WeaponGlowComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(WeaponGlowComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::WeaponGlowComponent::RegisterInterfaces(WeaponGlowComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7c68);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6330);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


