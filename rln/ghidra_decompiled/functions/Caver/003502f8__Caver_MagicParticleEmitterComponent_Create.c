/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003502f8
 * Function: Caver::MagicParticleEmitterComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicParticleEmitterComponent::Create() */

MagicParticleEmitterComponent * Caver::MagicParticleEmitterComponent::Create(void)

{
  MagicParticleEmitterComponent *this;
  
  this = operator_new(0x1e0);
  MagicParticleEmitterComponent(this);
  return this;
}


