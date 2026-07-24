/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423898
 * Function: Caver::Proto::ParticleFieldComponent::Swap
 * Signature: undefined __thiscall Swap(ParticleFieldComponent * this, ParticleFieldComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::Swap(Caver::Proto::ParticleFieldComponent*) */

void __thiscall
Caver::Proto::ParticleFieldComponent::Swap
          (ParticleFieldComponent *this,ParticleFieldComponent *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


