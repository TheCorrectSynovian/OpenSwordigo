/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005814c0
 * Function: Caver::MusicPlayer::SetCurrentPlaylist
 * Signature: undefined __thiscall SetCurrentPlaylist(MusicPlayer * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::SetCurrentPlaylist(boost::shared_ptr<Caver::MusicPlaylist> const&) */

void __thiscall Caver::MusicPlayer::SetCurrentPlaylist(MusicPlayer *this,shared_ptr *param_1)

{
  shared_ptr *psVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long *plVar4;
  
  uVar2 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
                    /* try { // try from 005814d8 to 006814e3 has its CatchHandler @ 00582f68 */
  if (lVar3 != 0) {
                    /* try { // try from 005814e4 to 006814ef has its CatchHandler @ 00582f10 */
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x38);
  psVar1 = (shared_ptr *)(this + 0x30);
                    /* try { // try from 005814f0 to 006814fb has its CatchHandler @ 00582f08 */
  *(undefined8 *)(this + 0x30) = uVar2;
  *(long *)(this + 0x38) = lVar3;
                    /* try { // try from 005814fc to 0068150f has its CatchHandler @ 00582eb0 */
  if ((plVar4 == (long *)0x0) || (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 != 0)) {
LAB_00581528:
    lVar3 = *(long *)psVar1;
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
                    /* try { // try from 00581520 to 00681553 has its CatchHandler @ 005830b4 */
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 != 0) goto LAB_00581528;
                    /* try { // try from 0058156c to 00681577 has its CatchHandler @ 00582dac */
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)psVar1;
  }
                    /* try { // try from 00581578 to 0068158b has its CatchHandler @ 00582d50 */
  if (lVar3 == 0) {
    plVar4 = *(long **)(this + 0x18);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x18);
        goto LAB_00581554;
      }
    }
  }
  else if (this[2] != (MusicPlayer)0x0) {
    CreatePlayerForPlaylist(this,psVar1);
    plVar4 = *(long **)(this + 0x10);
    if (plVar4 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x20);
LAB_00581554:
                    /* try { // try from 00581554 to 0068155f has its CatchHandler @ 00582e5c */
                    /* WARNING: Could not recover jumptable at 0x00581560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00581560 to 0068156b has its CatchHandler @ 00582e00 */
      (*UNRECOVERED_JUMPTABLE)(plVar4);
      return;
    }
  }
  return;
}


