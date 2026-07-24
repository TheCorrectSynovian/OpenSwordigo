/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00341dd4
 * Function: Caver::TransformControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(TransformControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::TransformControllerComponent::RegisterInterfaces
          (TransformControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6a60);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


