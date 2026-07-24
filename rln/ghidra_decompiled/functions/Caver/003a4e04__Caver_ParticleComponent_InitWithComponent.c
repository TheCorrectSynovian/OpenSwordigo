/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4e04
 * Function: Caver::ParticleComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ParticleComponent * this, ParticleComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::InitWithComponent(Caver::ParticleComponent const*) */

void __thiscall
Caver::ParticleComponent::InitWithComponent(ParticleComponent *this,ParticleComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x70,param_1 + 0x70);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  return;
}


