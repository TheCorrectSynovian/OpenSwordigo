/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f5e4
 * Function: Caver::AudioSystem::SetSoundEnabled
 * Signature: undefined __thiscall SetSoundEnabled(AudioSystem * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::SetSoundEnabled(bool) */

void __thiscall Caver::AudioSystem::SetSoundEnabled(AudioSystem *this,bool param_1)

{
  this[0x78] = (AudioSystem)param_1;
  return;
}


