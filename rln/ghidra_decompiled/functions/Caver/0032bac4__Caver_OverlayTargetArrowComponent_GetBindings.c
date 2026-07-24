/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032bac4
 * Function: Caver::OverlayTargetArrowComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(OverlayTargetArrowComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::OverlayTargetArrowComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::OverlayTargetArrowComponent::GetBindings(OverlayTargetArrowComponent *this,vector *param_1)

{
  OverlayComponent::GetBindings((vector *)(this + -0x10));
  return;
}


