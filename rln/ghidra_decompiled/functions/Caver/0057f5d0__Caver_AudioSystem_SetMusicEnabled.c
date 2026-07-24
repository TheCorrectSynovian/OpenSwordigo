/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057f5d0
 * Function: Caver::AudioSystem::SetMusicEnabled
 * Signature: undefined __thiscall SetMusicEnabled(AudioSystem * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AudioSystem::SetMusicEnabled(bool) */

void __thiscall Caver::AudioSystem::SetMusicEnabled(AudioSystem *this,bool param_1)

{
  if (*(MusicPlayer **)(this + 0x68) != (MusicPlayer *)0x0) {
    MusicPlayer::SetEnabled(*(MusicPlayer **)(this + 0x68),param_1);
    return;
  }
  return;
}


