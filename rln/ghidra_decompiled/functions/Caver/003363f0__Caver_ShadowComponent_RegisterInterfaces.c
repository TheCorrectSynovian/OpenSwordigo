/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003363f0
 * Function: Caver::ShadowComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ShadowComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ShadowComponent::RegisterInterfaces(ShadowComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4828);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


