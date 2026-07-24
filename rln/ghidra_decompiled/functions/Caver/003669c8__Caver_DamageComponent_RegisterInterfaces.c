/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003669c8
 * Function: Caver::DamageComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(DamageComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::DamageComponent::RegisterInterfaces(DamageComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6cd0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


