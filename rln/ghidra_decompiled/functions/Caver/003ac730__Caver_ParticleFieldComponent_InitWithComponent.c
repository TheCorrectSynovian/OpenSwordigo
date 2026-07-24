/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac730
 * Function: Caver::ParticleFieldComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ParticleFieldComponent * this, ParticleFieldComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleFieldComponent::InitWithComponent(Caver::ParticleFieldComponent const*) */

void __thiscall
Caver::ParticleFieldComponent::InitWithComponent
          (ParticleFieldComponent *this,ParticleFieldComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  return;
}


