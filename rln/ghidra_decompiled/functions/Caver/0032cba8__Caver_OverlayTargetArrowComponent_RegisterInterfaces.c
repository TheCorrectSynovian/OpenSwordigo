/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032cba8
 * Function: Caver::OverlayTargetArrowComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(OverlayTargetArrowComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::OverlayTargetArrowComponent::RegisterInterfaces
          (OverlayTargetArrowComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4f08);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6b48);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


