/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00581fc0
 * Function: Caver::MusicPlayer::SetSuspended
 * Signature: undefined __thiscall SetSuspended(MusicPlayer * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::SetSuspended(bool) */

void __thiscall Caver::MusicPlayer::SetSuspended(MusicPlayer *this,bool param_1)

{
  MusicPlayer MVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00581fd8 to 00681fdb has its CatchHandler @ 00582a8c */
  if ((MusicPlayer)param_1 == this[1]) {
    return;
  }
  this[1] = (MusicPlayer)param_1;
                    /* try { // try from 00581ff0 to 00681ff7 has its CatchHandler @ 00582c38 */
  MVar1 = (MusicPlayer)(*this != (MusicPlayer)0x0 && !param_1);
  if (MVar1 == this[2]) {
    return;
  }
                    /* try { // try from 00582010 to 00682017 has its CatchHandler @ 00582818 */
  this[2] = MVar1;
  if (*this == (MusicPlayer)0x0 || param_1) {
    if (*(long **)(this + 0x10) == (long *)0x0) {
      return;
    }
                    /* try { // try from 00582050 to 0068205b has its CatchHandler @ 005827c8 */
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 0x10) + 0x28);
    goto LAB_00582058;
  }
                    /* try { // try from 00582020 to 00682027 has its CatchHandler @ 00582c38 */
  if (*(long *)(this + 0x30) == 0) {
LAB_00582034:
    plVar2 = *(long **)(this + 0x10);
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar2 = *(long **)(this + 0x10);
    if (plVar2 == (long *)0x0) {
      CreatePlayerForPlaylist(this,(shared_ptr *)(this + 0x30));
      goto LAB_00582034;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x20);
LAB_00582058:
                    /* WARNING: Could not recover jumptable at 0x00582060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


