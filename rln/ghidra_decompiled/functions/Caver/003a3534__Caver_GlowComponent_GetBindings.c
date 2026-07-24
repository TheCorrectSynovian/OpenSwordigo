/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3534
 * Function: Caver::GlowComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(GlowComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GlowComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall Caver::GlowComponent::GetBindings(GlowComponent *this,vector *param_1)

{
  Component::GetBindings((Component *)(this + -0x10),param_1);
  return;
}


