/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00383260
 * Function: Caver::HookshotTrailComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(HookshotTrailComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::HookshotTrailComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::HookshotTrailComponent::GetBindings(HookshotTrailComponent *this,vector *param_1)

{
  GlowComponent::GetBindings((vector *)(this + -0x10));
  return;
}


