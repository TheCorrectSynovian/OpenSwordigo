/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00581e88
 * Function: Caver::MusicPlayer::SetEnabled
 * Signature: undefined __thiscall SetEnabled(MusicPlayer * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::SetEnabled(bool) */

void __thiscall Caver::MusicPlayer::SetEnabled(MusicPlayer *this,bool param_1)

{
  MusicPlayer MVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00581e8c to 00681eb3 has its CatchHandler @ 00582b98 */
  if ((MusicPlayer)param_1 == *this) {
    return;
  }
  *this = (MusicPlayer)param_1;
  if (param_1) {
    MVar1 = (MusicPlayer)(this[1] == (MusicPlayer)0x0);
  }
  else {
    MVar1 = (MusicPlayer)0x0;
  }
  if (MVar1 == this[2]) {
    return;
  }
  this[2] = MVar1;
  if (MVar1 == (MusicPlayer)0x0) {
    if (*(long **)(this + 0x10) == (long *)0x0) {
      return;
    }
                    /* try { // try from 00581f1c to 00681f2f has its CatchHandler @ 00582ac4 */
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 0x10) + 0x28);
    goto LAB_00581f24;
  }
  if (*(long *)(this + 0x30) == 0) {
LAB_00581f00:
                    /* try { // try from 00581f00 to 00681f07 has its CatchHandler @ 00582888 */
    plVar2 = *(long **)(this + 0x10);
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 00581ed4 to 00681ed7 has its CatchHandler @ 00582644 */
      return;
    }
  }
  else {
    plVar2 = *(long **)(this + 0x10);
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 00581ef8 to 00681efb has its CatchHandler @ 00582640 */
      CreatePlayerForPlaylist(this,(shared_ptr *)(this + 0x30));
      goto LAB_00581f00;
    }
  }
                    /* try { // try from 00581f08 to 00681f1b has its CatchHandler @ 00582884 */
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x20);
LAB_00581f24:
                    /* WARNING: Could not recover jumptable at 0x00581f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


