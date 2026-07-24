/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005815d8
 * Function: Caver::MusicPlayer::FadeOut
 * Signature: undefined __thiscall FadeOut(MusicPlayer * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::FadeOut(float) */

void __thiscall Caver::MusicPlayer::FadeOut(MusicPlayer *this,float param_1)

{
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(float *)(this + 0x24) = 1.0 / param_1;
  return;
}


