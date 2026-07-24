/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b66d8
 * Function: Caver::RotatingBackgroundComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(RotatingBackgroundComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::RotatingBackgroundComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::RotatingBackgroundComponent::GetBindings(RotatingBackgroundComponent *this,vector *param_1)

{
  BackgroundComponent::GetBindings((BackgroundComponent *)(this + -0x10),param_1);
  return;
}


