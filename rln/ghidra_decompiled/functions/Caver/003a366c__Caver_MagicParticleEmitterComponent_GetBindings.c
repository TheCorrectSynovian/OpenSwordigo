/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a366c
 * Function: Caver::MagicParticleEmitterComponent::GetBindings
 * Signature: undefined __thiscall GetBindings(MagicParticleEmitterComponent * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::MagicParticleEmitterComponent::GetBindings(std::vector<Caver::Binding,
   std::allocator<Caver::Binding> >*) */

void __thiscall
Caver::MagicParticleEmitterComponent::GetBindings
          (MagicParticleEmitterComponent *this,vector *param_1)

{
  ParticleEmitterComponent::GetBindings((ParticleEmitterComponent *)(this + -0x10),param_1);
  return;
}


