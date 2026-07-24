/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3684
 * Function: Caver::MagicParticleEmitterComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(MagicParticleEmitterComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicParticleEmitterComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::MagicParticleEmitterComponent::ValueForBindedProperty
          (MagicParticleEmitterComponent *this,int param_1)

{
  ParticleEmitterComponent::ValueForBindedProperty((int)this + -0x10);
  return;
}


