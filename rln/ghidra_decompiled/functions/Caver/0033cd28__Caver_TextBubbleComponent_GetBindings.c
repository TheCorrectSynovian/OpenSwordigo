/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033cd28
 * Function: Caver::TextBubbleComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(TextBubbleComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::TextBubbleComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall Caver::TextBubbleComponent::GetBindings(TextBubbleComponent *this,vector *param_1)

{
  Component::GetBindings((Component *)(this + -0x10),param_1);
  return;
}


