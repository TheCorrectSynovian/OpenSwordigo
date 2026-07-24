/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00447efc
 * Function: Caver::GameOverViewController::ShowAdMaybe
 * Signature: undefined __thiscall ShowAdMaybe(GameOverViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverViewController::ShowAdMaybe() */

void __thiscall Caver::GameOverViewController::ShowAdMaybe(GameOverViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00447f18 to 00547f27 has its CatchHandler @ 0044cf90 */
  if (this[0x50] == (GameOverViewController)0x0) {
    this[0x50] = (GameOverViewController)0x1;
    plVar4 = (long *)OnlineController::SharedController();
                    /* try { // try from 00447f38 to 00547f47 has its CatchHandler @ 0044f2cc */
    pcVar7 = *(code **)(*plVar4 + 0x108);
    FUN_00666bb8(local_48,"game_over",auStack_50);
                    /* try { // try from 00447f60 to 00547f6f has its CatchHandler @ 0044cf90 */
    (*pcVar7)(DAT_00683484,plVar4,local_48,0x3c);
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
                    /* try { // try from 00447fb4 to 00547fc3 has its CatchHandler @ 0044cf88 */
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* try { // try from 00447fd8 to 00547fe7 has its CatchHandler @ 0044f264 */
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
                    /* try { // try from 00447f84 to 00547f97 has its CatchHandler @ 0044f2c8 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


