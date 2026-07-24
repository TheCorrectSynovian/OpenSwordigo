/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350478
 * Function: Caver::ParticleFieldComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleFieldComponent::Create() */

ParticleFieldComponent * Caver::ParticleFieldComponent::Create(void)

{
  ParticleFieldComponent *this;
  
  this = operator_new(0x78);
  ParticleFieldComponent(this);
  return this;
}


