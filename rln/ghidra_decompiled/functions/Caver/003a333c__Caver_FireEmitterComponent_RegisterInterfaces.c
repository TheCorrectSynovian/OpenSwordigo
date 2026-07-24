/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a333c
 * Function: Caver::FireEmitterComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(FireEmitterComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::FireEmitterComponent::RegisterInterfaces
          (FireEmitterComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5be8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


