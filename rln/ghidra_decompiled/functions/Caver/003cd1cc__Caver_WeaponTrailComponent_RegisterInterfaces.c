/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cd1cc
 * Function: Caver::WeaponTrailComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(WeaponTrailComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::WeaponTrailComponent::RegisterInterfaces
          (WeaponTrailComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7038);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


