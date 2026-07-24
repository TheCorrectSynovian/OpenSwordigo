/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003504b8
 * Function: Caver::SoundEffectComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::Create() */

SoundEffectComponent * Caver::SoundEffectComponent::Create(void)

{
  SoundEffectComponent *this;
  
  this = operator_new(0x98);
  SoundEffectComponent(this);
  return this;
}


