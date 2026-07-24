/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383070
 * Function: Caver::FireBreathComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(FireBreathComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::FireBreathComponent::RegisterInterfaces(FireBreathComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4810);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6868);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


