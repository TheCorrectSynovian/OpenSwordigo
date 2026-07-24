/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ae4c
 * Function: Caver::ManaComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ManaComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ManaComponent::RegisterInterfaces(ManaComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7ab0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


