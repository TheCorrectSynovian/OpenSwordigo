/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00361188
 * Function: Caver::CharControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(CharControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::CharControllerComponent::RegisterInterfaces
          (CharControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e7390);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


