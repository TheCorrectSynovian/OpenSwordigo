/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350278
 * Function: Caver::ParticleEmitterComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::Create() */

ParticleEmitterComponent * Caver::ParticleEmitterComponent::Create(void)

{
  ParticleEmitterComponent *this;
  
  this = operator_new(0x1d8);
  ParticleEmitterComponent(this);
  return this;
}


