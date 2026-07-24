/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b9c0
 * Function: Caver::OverlayComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(OverlayComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::OverlayComponent::RegisterInterfaces(OverlayComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6b48);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


