/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00462a18
 * Function: FUN_00462a18
 * Signature: undefined FUN_00462a18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00462a18(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  DidEnterPortalGameEvent *this;
  int *piVar6;
  long local_50;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar5 = Caver::ProgramState::FromLuaState(param_1);
  this = operator_new(0x80);
                    /* try { // try from 00462a4c to 00562a73 has its CatchHandler @ 00462a7c */
  Caver::ProgramState::StringAtStackIndex(iVar5);
  Caver::ProgramState::StringAtStackIndex(iVar5);
                    /* try { // try from 00462a74 to 00562aab has its CatchHandler @ 004627f8 */
                    /* catch() { ... } // from try @ 00462a4c with catch @ 00462a7c */
  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent
            (this,(string *)local_48,(string *)&local_50);
                    /* catch() { ... } // from try @ 00462a04 with catch @ 00462a88 */
  Caver::GameEvent::SendEvent((GameEvent *)this);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00462aac with catch @ 00462adc */
    piVar6 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
                    /* try { // try from 00462aac to 00562ad3 has its CatchHandler @ 00462adc */
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00462b50 to 00562bc3 has its CatchHandler @ 00462b50
                       catch() { ... } // from try @ 00462b50 with catch @ 00462b50
                       catch() { ... } // from try @ 00462bcc with catch @ 00462b50
                       catch() { ... } // from try @ 00462c20 with catch @ 00462b50
                       catch() { ... } // from try @ 00462d44 with catch @ 00462b50
                       catch() { ... } // from try @ 00462e5c with catch @ 00462b50 */
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


