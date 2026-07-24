/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b22a4
 * Function: Caver::BushControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(BushControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BushControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::BushControllerComponent::RegisterInterfaces
          (BushControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6450);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


