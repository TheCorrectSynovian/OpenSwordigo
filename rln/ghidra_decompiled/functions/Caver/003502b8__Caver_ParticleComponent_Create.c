/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003502b8
 * Function: Caver::ParticleComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::Create() */

ParticleComponent * Caver::ParticleComponent::Create(void)

{
  ParticleComponent *this;
  
  this = operator_new(0x90);
  ParticleComponent(this);
  return this;
}


