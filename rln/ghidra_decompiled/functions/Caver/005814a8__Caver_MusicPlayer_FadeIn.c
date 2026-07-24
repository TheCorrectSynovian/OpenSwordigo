/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005814a8
 * Function: Caver::MusicPlayer::FadeIn
 * Signature: undefined __thiscall FadeIn(MusicPlayer * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::FadeIn(float) */

void __thiscall Caver::MusicPlayer::FadeIn(MusicPlayer *this,float param_1)

{
  *(undefined4 *)(this + 0x20) = 1;
  *(float *)(this + 0x24) = 1.0 / param_1;
  return;
}


