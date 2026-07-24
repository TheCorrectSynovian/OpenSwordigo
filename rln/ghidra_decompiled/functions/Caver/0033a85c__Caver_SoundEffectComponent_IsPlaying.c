/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a85c
 * Function: Caver::SoundEffectComponent::IsPlaying
 * Signature: undefined __thiscall IsPlaying(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::IsPlaying() */

void __thiscall Caver::SoundEffectComponent::IsPlaying(SoundEffectComponent *this)

{
  if (*(SoundEffectSource **)(this + 0x90) != (SoundEffectSource *)0x0) {
    SoundEffectSource::isPlaying(*(SoundEffectSource **)(this + 0x90));
    return;
  }
  return;
}


