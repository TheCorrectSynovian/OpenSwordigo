/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321998
 * Function: Caver::KeyframeAnimationComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(KeyframeAnimationComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::KeyframeAnimationComponent::RegisterInterfaces
          (KeyframeAnimationComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e5da8);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4c50);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


