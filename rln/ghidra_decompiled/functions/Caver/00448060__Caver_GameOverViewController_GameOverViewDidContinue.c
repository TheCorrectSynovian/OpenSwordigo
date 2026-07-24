/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00448060
 * Function: Caver::GameOverViewController::GameOverViewDidContinue
 * Signature: undefined __thiscall GameOverViewDidContinue(GameOverViewController * this, GameOverView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverViewController::GameOverViewDidContinue(Caver::GameOverView*) */

void __thiscall
Caver::GameOverViewController::GameOverViewDidContinue
          (GameOverViewController *this,GameOverView *param_1)

{
  undefined8 uVar1;
  long lVar2;
  GameViewController *this_00;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long local_58;
  long *local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00448078 to 00548087 has its CatchHandler @ 0044f1fc */
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[0x7c] == (GameOverViewController)0x0) {
    this[0x7c] = (GameOverViewController)0x1;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    this_00 = operator_new(0x140);
                    /* try { // try from 004480c4 to 005480d7 has its CatchHandler @ 0044f1f8 */
    GameViewController::GameViewController(this_00);
    boost::shared_ptr<Caver::GameViewController>::shared_ptr<Caver::GameViewController>
              ((shared_ptr<Caver::GameViewController> *)&local_48,this_00);
    uVar1 = *(undefined8 *)(this + 0x58);
    lVar3 = *(long *)(this + 0x60);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    plVar5 = *(long **)(local_48 + 0x90);
                    /* try { // try from 004480f4 to 00548103 has its CatchHandler @ 0044cf78 */
    *(undefined8 *)(local_48 + 0x88) = uVar1;
    *(long *)(local_48 + 0x90) = lVar3;
    if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00448118 to 00548127 has its CatchHandler @ 0044f194 */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    plVar5 = *(long **)(this + 0x40);
                    /* try { // try from 00448140 to 0054814f has its CatchHandler @ 0044cf78 */
    pcVar4 = *(code **)(*plVar5 + 8);
    local_58 = local_48;
    local_50 = local_40;
    if (local_40 != (long *)0x0) {
      local_40[1] = local_40[1] + 1;
    }
                    /* try { // try from 00448164 to 00548177 has its CatchHandler @ 0044f190 */
    (*pcVar4)(DAT_00683484,DAT_00683484,plVar5,&local_58,1);
    plVar5 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar3 = local_50[1], local_50[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00448194 to 005481a3 has its CatchHandler @ 0044cf70 */
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 004481b8 to 005481c7 has its CatchHandler @ 0044f12c */
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    ShowAdMaybe(this);
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 004481e0 to 005481ef has its CatchHandler @ 0044cf70 */
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = local_40[2];
      local_40[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
                    /* try { // try from 00448204 to 00548217 has its CatchHandler @ 0044f128 */
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 004480a0 to 005480af has its CatchHandler @ 0044cf80 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


