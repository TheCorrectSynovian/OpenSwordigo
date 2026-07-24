/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003288d4
 * Function: Caver::ModelTransformControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(ModelTransformControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::ModelTransformControllerComponent::RegisterInterfaces
          (ModelTransformControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6188);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


