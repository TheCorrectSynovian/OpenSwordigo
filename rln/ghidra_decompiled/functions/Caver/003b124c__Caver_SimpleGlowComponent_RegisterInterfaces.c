/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b124c
 * Function: Caver::SimpleGlowComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(SimpleGlowComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SimpleGlowComponent::RegisterInterfaces(SimpleGlowComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e70d0);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6330);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


