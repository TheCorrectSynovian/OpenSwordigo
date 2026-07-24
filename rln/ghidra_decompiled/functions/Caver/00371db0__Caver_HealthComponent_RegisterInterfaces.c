/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371db0
 * Function: Caver::HealthComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(HealthComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::HealthComponent::RegisterInterfaces(HealthComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7450);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


