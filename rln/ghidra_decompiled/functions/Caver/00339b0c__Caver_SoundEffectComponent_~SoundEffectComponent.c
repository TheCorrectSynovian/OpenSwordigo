/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339b0c
 * Function: Caver::SoundEffectComponent::~SoundEffectComponent
 * Signature: undefined __thiscall ~SoundEffectComponent(SoundEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::~SoundEffectComponent() */

void __thiscall Caver::SoundEffectComponent::~SoundEffectComponent(SoundEffectComponent *this)

{
  ~SoundEffectComponent(this);
  operator_delete(this);
  return;
}


