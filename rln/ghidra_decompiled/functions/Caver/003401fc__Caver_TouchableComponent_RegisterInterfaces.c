/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003401fc
 * Function: Caver::TouchableComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(TouchableComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::TouchableComponent::RegisterInterfaces(TouchableComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e62f8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


