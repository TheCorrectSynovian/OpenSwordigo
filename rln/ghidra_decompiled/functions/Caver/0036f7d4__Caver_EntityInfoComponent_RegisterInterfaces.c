/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f7d4
 * Function: Caver::EntityInfoComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(EntityInfoComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::EntityInfoComponent::RegisterInterfaces(EntityInfoComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4ff0);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


