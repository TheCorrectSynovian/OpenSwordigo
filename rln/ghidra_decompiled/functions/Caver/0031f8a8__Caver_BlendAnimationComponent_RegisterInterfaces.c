/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f8a8
 * Function: Caver::BlendAnimationComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(BlendAnimationComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::BlendAnimationComponent::RegisterInterfaces
          (BlendAnimationComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4e80);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4c50);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


