/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003acb30
 * Function: Caver::ParticleObjectComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ParticleObjectComponent * this, ParticleObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleObjectComponent::InitWithComponent(Caver::ParticleObjectComponent const*) */

void __thiscall
Caver::ParticleObjectComponent::InitWithComponent
          (ParticleObjectComponent *this,ParticleObjectComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


