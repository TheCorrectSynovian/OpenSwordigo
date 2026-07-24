/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037a430
 * Function: Caver::ItemDropComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ItemDropComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemDropComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ItemDropComponent::RegisterInterfaces(ItemDropComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e60a0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


