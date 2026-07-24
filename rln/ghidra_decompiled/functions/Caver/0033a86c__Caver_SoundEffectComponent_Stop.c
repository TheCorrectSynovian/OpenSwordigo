/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033a86c
 * Function: Caver::SoundEffectComponent::Stop
 * Signature: undefined __thiscall Stop(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::Stop() */

void __thiscall Caver::SoundEffectComponent::Stop(SoundEffectComponent *this)

{
  if (*(SoundEffectSource **)(this + 0x90) != (SoundEffectSource *)0x0) {
    SoundEffectSource::Stop(*(SoundEffectSource **)(this + 0x90));
    return;
  }
  return;
}


