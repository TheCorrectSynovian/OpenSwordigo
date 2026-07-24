/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00356ba0
 * Function: Caver::CharAnimControllerComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(CharAnimControllerComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::CharAnimControllerComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::CharAnimControllerComponent::GetBindings(CharAnimControllerComponent *this,vector *param_1)

{
  AnimationControllerComponent::GetBindings((AnimationControllerComponent *)(this + -0x10),param_1);
  return;
}


