/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b65e0
 * Function: Caver::PressureTriggerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(PressureTriggerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::PressureTriggerComponent::RegisterInterfaces
          (PressureTriggerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7218);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


