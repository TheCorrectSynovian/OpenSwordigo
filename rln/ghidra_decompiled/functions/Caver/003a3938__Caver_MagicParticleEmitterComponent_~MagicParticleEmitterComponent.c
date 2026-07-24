/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3938
 * Function: Caver::MagicParticleEmitterComponent::~MagicParticleEmitterComponent
 * Signature: undefined __thiscall ~MagicParticleEmitterComponent(MagicParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicParticleEmitterComponent::~MagicParticleEmitterComponent() */

void __thiscall
Caver::MagicParticleEmitterComponent::~MagicParticleEmitterComponent
          (MagicParticleEmitterComponent *this)

{
  ParticleEmitterComponent::~ParticleEmitterComponent((ParticleEmitterComponent *)this);
  operator_delete(this);
  return;
}


