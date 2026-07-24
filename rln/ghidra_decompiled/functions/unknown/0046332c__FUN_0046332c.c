/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046332c
 * Function: FUN_0046332c
 * Signature: undefined FUN_0046332c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0046332c(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  GameViewController *this;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar4 = Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 00463354 to 005633a7 has its CatchHandler @ 00463354
                       catch() { ... } // from try @ 00463354 with catch @ 00463354
                       catch() { ... } // from try @ 004633b4 with catch @ 00463354 */
  FUN_00666bb8(local_38,"gameController",auStack_40);
  this = (GameViewController *)
         Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar4 + 0x28),(string *)local_38);
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  Caver::GameViewController::GotoCredits(this);
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004633a8 to 005633b3 has its CatchHandler @ 00463438 */
                    /* try { // try from 004633b4 to 005634a7 has its CatchHandler @ 00463354 */
  return 0;
}


