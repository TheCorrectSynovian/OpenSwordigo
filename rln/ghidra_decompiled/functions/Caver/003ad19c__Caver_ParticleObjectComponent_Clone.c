/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ad19c
 * Function: Caver::ParticleObjectComponent::Clone
 * Signature: undefined __thiscall Clone(ParticleObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleObjectComponent::Clone() const */

ParticleObjectComponent * __thiscall
Caver::ParticleObjectComponent::Clone(ParticleObjectComponent *this)

{
  ParticleObjectComponent *this_00;
  
  this_00 = operator_new(0x120);
  ParticleObjectComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  return this_00;
}


