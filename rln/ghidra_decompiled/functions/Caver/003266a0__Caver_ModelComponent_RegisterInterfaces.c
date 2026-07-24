/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003266a0
 * Function: Caver::ModelComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ModelComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ModelComponent::RegisterInterfaces(ModelComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7860);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


