/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031d304
 * Function: Caver::AnimationControllerComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(AnimationControllerComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::AnimationControllerComponent::RegisterInterfaces
          (AnimationControllerComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4f28);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


