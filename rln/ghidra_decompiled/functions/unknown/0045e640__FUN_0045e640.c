/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045e640
 * Function: FUN_0045e640
 * Signature: undefined FUN_0045e640(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045e640(lua_State *param_1)

{
  GameState *this;
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  ProgramState *this_00;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 0045e670 to 0055e683 has its CatchHandler @ 0045e7d4 */
  FUN_00666bb8(local_58,"gameController",auStack_60);
                    /* try { // try from 0045e684 to 0055e7f7 has its CatchHandler @ 0045e468 */
  lVar6 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this_00 + 0x28),(string *)local_58);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
      this = *(GameState **)(lVar6 + 0xa8);
      plVar1 = *(long **)(lVar6 + 0xb0);
      goto joined_r0x0045e7c8;
    }
  }
  this = *(GameState **)(lVar6 + 0xa8);
  plVar1 = *(long **)(lVar6 + 0xb0);
joined_r0x0045e7c8:
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar6 = plVar1[2];
    plVar1[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this_00);
  lVar6 = Caver::GameState::StateForQuestWithName(this,(string *)local_58);
  if (lVar6 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(lVar6 + 8) == '\0';
  }
  Caver::ProgramState::PushBool(this_00,bVar5);
  if ((undefined *)(local_58[0] + -0x18) != puVar4) {
    piVar7 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 0045e670 with catch @ 0045e7d4 */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


