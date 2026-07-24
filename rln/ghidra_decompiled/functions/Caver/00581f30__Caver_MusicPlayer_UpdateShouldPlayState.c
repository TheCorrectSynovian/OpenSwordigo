/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00581f30
 * Function: Caver::MusicPlayer::UpdateShouldPlayState
 * Signature: undefined __thiscall UpdateShouldPlayState(MusicPlayer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::UpdateShouldPlayState() */

void __thiscall Caver::MusicPlayer::UpdateShouldPlayState(MusicPlayer *this)

{
  MusicPlayer MVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00581f30 to 00681f3f has its CatchHandler @ 00582854 */
  MVar1 = (MusicPlayer)0x0;
  if (*this != (MusicPlayer)0x0) {
    MVar1 = (MusicPlayer)(this[1] == (MusicPlayer)0x0);
  }
  if (MVar1 == this[2]) {
    return;
  }
  this[2] = MVar1;
  if (MVar1 == (MusicPlayer)0x0) {
                    /* try { // try from 00581fa8 to 00681fb7 has its CatchHandler @ 0058281c */
    if (*(long **)(this + 0x10) == (long *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 0x10) + 0x28);
    goto LAB_00581fb4;
  }
                    /* try { // try from 00581f78 to 00681f7f has its CatchHandler @ 00582850 */
  if (*(long *)(this + 0x30) == 0) {
LAB_00581f90:
    plVar2 = *(long **)(this + 0x10);
                    /* try { // try from 00581f94 to 00681fa7 has its CatchHandler @ 00582a8c */
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 00581f60 to 00681f63 has its CatchHandler @ 00582ac4 */
      return;
    }
  }
  else {
                    /* try { // try from 00581f80 to 00681f93 has its CatchHandler @ 0058284c */
    plVar2 = *(long **)(this + 0x10);
    if (plVar2 == (long *)0x0) {
      CreatePlayerForPlaylist(this,(shared_ptr *)(this + 0x30));
      goto LAB_00581f90;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x20);
LAB_00581fb4:
                    /* WARNING: Could not recover jumptable at 0x00581fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


