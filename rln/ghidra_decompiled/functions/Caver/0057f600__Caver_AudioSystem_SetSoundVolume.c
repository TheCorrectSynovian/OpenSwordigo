/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f600
 * Function: Caver::AudioSystem::SetSoundVolume
 * Signature: undefined __thiscall SetSoundVolume(AudioSystem * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::SetSoundVolume(float) */

void __thiscall Caver::AudioSystem::SetSoundVolume(AudioSystem *this,float param_1)

{
  *(float *)(this + 0x7c) = param_1;
  return;
}


