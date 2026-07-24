/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339b44
 * Function: Caver::SoundEffectComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SoundEffectComponent * this, SoundEffectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::InitWithComponent(Caver::SoundEffectComponent const*) */

void __thiscall
Caver::SoundEffectComponent::InitWithComponent
          (SoundEffectComponent *this,SoundEffectComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x78,param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  return;
}


