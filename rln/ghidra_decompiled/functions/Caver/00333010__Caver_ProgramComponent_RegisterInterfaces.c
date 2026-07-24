/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00333010
 * Function: Caver::ProgramComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ProgramComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ProgramComponent::RegisterInterfaces(ProgramComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6398);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


