/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af0dc
 * Function: Caver::ShatterComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(ShatterComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ShatterComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall Caver::ShatterComponent::GetBindings(ShatterComponent *this,vector *param_1)

{
  Component::GetBindings((Component *)(this + -0x10),param_1);
  return;
}


