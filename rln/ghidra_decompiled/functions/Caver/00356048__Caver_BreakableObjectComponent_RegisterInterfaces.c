/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00356048
 * Function: Caver::BreakableObjectComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(BreakableObjectComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::BreakableObjectComponent::RegisterInterfaces
          (BreakableObjectComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7dc8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


