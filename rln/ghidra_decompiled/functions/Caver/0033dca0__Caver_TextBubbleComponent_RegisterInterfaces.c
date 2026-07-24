/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033dca0
 * Function: Caver::TextBubbleComponent::RegisterInterfaces
 * Signature: undefined __thiscall RegisterInterfaces(TextBubbleComponent * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::RegisterInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::TextBubbleComponent::RegisterInterfaces(TextBubbleComponent *this,ComponentManager *param_1)

{
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e4f20);
  Component::RegisterInterface((Component *)this,param_1,(long)PTR_Interface_007e6b48);
  Component::RegisterInterfaces((ComponentManager *)this);
  return;
}


