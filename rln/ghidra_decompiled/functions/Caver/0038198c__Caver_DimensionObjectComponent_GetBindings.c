/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038198c
 * Function: Caver::DimensionObjectComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(DimensionObjectComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::DimensionObjectComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::DimensionObjectComponent::GetBindings(DimensionObjectComponent *this,vector *param_1)

{
  Component::GetBindings((Component *)(this + -0x10),param_1);
  return;
}


