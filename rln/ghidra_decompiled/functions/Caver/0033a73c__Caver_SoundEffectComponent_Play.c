/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a73c
 * Function: Caver::SoundEffectComponent::Play
 * Signature: undefined __thiscall Play(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::Play() */

void __thiscall Caver::SoundEffectComponent::Play(SoundEffectComponent *this)

{
  PlayWithDelay(this,*(float *)(this + 0x84));
  return;
}


