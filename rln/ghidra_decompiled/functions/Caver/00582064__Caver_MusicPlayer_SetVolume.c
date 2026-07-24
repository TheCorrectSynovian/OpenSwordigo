/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00582064
 * Function: Caver::MusicPlayer::SetVolume
 * Signature: undefined __thiscall SetVolume(MusicPlayer * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::SetVolume(float) */

void __thiscall Caver::MusicPlayer::SetVolume(MusicPlayer *this,float param_1)

{
  *(float *)(this + 4) = param_1;
  UpdatePlayerVolume(this);
  return;
}


