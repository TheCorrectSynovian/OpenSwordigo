/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032f314
 * Function: Caver::OverlayTextComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(OverlayTextComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::OverlayTextComponent::RegisterInterfaces
          (OverlayTextComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6b80);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6b48);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


