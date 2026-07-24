/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003acc58
 * Function: Caver::ParticleObjectComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(ParticleObjectComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ParticleObjectComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::ParticleObjectComponent::GetBindings(ParticleObjectComponent *this,vector *param_1)

{
  Component::GetBindings((Component *)(this + -0x10),param_1);
  return;
}


