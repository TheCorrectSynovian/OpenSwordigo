/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac10c
 * Function: Caver::ParticleEmitterComponent::Clone
 * Signature: undefined __thiscall Clone(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::Clone() const */

ParticleEmitterComponent * __thiscall
Caver::ParticleEmitterComponent::Clone(ParticleEmitterComponent *this)

{
  ParticleEmitterComponent *this_00;
  
  this_00 = operator_new(0x1d8);
  ParticleEmitterComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


