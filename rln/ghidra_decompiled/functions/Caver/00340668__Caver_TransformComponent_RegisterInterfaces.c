/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00340668
 * Function: Caver::TransformComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(TransformComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::TransformComponent::RegisterInterfaces(TransformComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6220);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


