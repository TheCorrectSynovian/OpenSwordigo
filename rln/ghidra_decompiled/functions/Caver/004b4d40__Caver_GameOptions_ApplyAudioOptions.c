/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4d40
 * Function: Caver::GameOptions::ApplyAudioOptions
 * Signature: undefined __thiscall ApplyAudioOptions(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::ApplyAudioOptions() */

void __thiscall Caver::GameOptions::ApplyAudioOptions(GameOptions *this)

{
  AudioSystem *pAVar1;
  
                    /* try { // try from 004b4d48 to 005b4d5b has its CatchHandler @ 004b4e74 */
  pAVar1 = (AudioSystem *)AudioSystem::sharedSystem();
  AudioSystem::SetMusicEnabled(pAVar1,(bool)this[0x20]);
                    /* try { // try from 004b4d5c to 005b4ee3 has its CatchHandler @ 004b4cf0 */
  pAVar1 = (AudioSystem *)AudioSystem::sharedSystem();
  AudioSystem::SetSoundEnabled(pAVar1,(bool)this[0x21]);
  pAVar1 = (AudioSystem *)AudioSystem::sharedSystem();
  AudioSystem::SetMusicVolume(pAVar1,*(float *)(this + 0x24));
  pAVar1 = (AudioSystem *)AudioSystem::sharedSystem();
  AudioSystem::SetSoundVolume(pAVar1,*(float *)(this + 0x28));
  return;
}


