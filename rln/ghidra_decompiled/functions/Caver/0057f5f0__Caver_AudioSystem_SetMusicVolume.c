/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f5f0
 * Function: Caver::AudioSystem::SetMusicVolume
 * Signature: undefined __thiscall SetMusicVolume(AudioSystem * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::SetMusicVolume(float) */

void __thiscall Caver::AudioSystem::SetMusicVolume(AudioSystem *this,float param_1)

{
  if (*(MusicPlayer **)(this + 0x68) != (MusicPlayer *)0x0) {
    MusicPlayer::SetVolume(*(MusicPlayer **)(this + 0x68),param_1);
    return;
  }
  return;
}


