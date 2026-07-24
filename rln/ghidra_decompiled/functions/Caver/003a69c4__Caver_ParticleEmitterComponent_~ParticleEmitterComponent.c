/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a69c4
 * Function: Caver::ParticleEmitterComponent::~ParticleEmitterComponent
 * Signature: undefined __thiscall ~ParticleEmitterComponent(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::~ParticleEmitterComponent() */

void __thiscall
Caver::ParticleEmitterComponent::~ParticleEmitterComponent(ParticleEmitterComponent *this)

{
  ~ParticleEmitterComponent(this);
  operator_delete(this);
  return;
}


