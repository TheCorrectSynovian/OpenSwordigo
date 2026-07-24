/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00358adc
 * Function: Caver::CharAnimControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(CharAnimControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::CharAnimControllerComponent::RegisterInterfaces
          (CharAnimControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4840);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4f28);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


