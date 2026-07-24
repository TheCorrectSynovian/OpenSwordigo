/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e2a0
 * Function: Caver::BackgroundComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(BackgroundComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BackgroundComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::BackgroundComponent::RegisterInterfaces(BackgroundComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e52d8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


