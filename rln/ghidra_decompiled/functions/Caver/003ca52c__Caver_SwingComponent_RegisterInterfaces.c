/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca52c
 * Function: Caver::SwingComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SwingComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SwingComponent::RegisterInterfaces(SwingComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e75f8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


