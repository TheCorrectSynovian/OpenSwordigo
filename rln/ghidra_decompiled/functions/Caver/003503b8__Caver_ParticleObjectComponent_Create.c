/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003503b8
 * Function: Caver::ParticleObjectComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleObjectComponent::Create() */

ParticleObjectComponent * Caver::ParticleObjectComponent::Create(void)

{
  ParticleObjectComponent *this;
  
  this = operator_new(0x120);
  ParticleObjectComponent(this);
  return this;
}


