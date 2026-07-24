/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6b1c
 * Function: Caver::RotatingBackgroundComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(RotatingBackgroundComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RotatingBackgroundComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::RotatingBackgroundComponent::RegisterInterfaces
          (RotatingBackgroundComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e73f8);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e52d8);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


