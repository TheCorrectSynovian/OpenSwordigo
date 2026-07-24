/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af5d0
 * Function: Caver::ShatterComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ShatterComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShatterComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ShatterComponent::RegisterInterfaces(ShatterComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7598);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


