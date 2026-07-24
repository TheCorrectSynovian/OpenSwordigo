/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058206c
 * Function: Caver::MusicPlayer::SetLooping
 * Signature: undefined __thiscall SetLooping(MusicPlayer * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::SetLooping(bool) */

void __thiscall Caver::MusicPlayer::SetLooping(MusicPlayer *this,bool param_1)

{
  this[8] = (MusicPlayer)param_1;
                    /* try { // try from 0058207c to 006820a3 has its CatchHandler @ 00582668 */
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00582088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 0x48))();
    return;
  }
  return;
}


