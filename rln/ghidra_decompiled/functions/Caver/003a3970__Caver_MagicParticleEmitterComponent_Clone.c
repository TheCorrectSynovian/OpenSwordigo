/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3970
 * Function: Caver::MagicParticleEmitterComponent::Clone
 * Signature: undefined __thiscall Clone(MagicParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicParticleEmitterComponent::Clone() const */

ParticleEmitterComponent * __thiscall
Caver::MagicParticleEmitterComponent::Clone(MagicParticleEmitterComponent *this)

{
  undefined *puVar1;
  ParticleEmitterComponent *this_00;
  
  this_00 = operator_new(0x1e0);
  ParticleEmitterComponent::ParticleEmitterComponent(this_00);
  puVar1 = PTR_vtable_007e5508;
  *(undefined4 *)(this_00 + 0x1d8) = 0;
  *(undefined **)this_00 = puVar1 + 0x10;
  *(undefined **)(this_00 + 0x18) = puVar1 + 0x168;
  *(undefined **)(this_00 + 0x10) = puVar1 + 0x128;
  ParticleEmitterComponent::InitWithComponent(this_00,(ParticleEmitterComponent *)this);
  return this_00;
}


