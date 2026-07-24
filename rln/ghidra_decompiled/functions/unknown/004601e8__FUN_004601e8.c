/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004601e8
 * Function: FUN_004601e8
 * Signature: undefined FUN_004601e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_004601e8(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long lVar4;
  long *plVar5;
  int iVar6;
  intrusive_ptr *piVar7;
  undefined1 auStack_50 [8];
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"gameController",auStack_50);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
  if (local_48[0] + -3 != (long *)PTR_DAT_007e5de8) {
                    /* try { // try from 004602d8 to 0056034f has its CatchHandler @ 004601e0 */
    plVar5 = local_48[0] + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = (int)*plVar5;
      *(int *)plVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = (int)*plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_48[0] + -3);
    }
  }
  piVar7 = *(intrusive_ptr **)(lVar4 + 200);
  local_48[0] = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (local_48[0] == (long *)0x0) {
    local_48[0] = (long *)0x0;
  }
  else {
    local_48[0] = (long *)*local_48[0];
    if (local_48[0] != (long *)0x0) {
      *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
    }
  }
  Caver::GameSceneController::RegisterTreasure(piVar7);
  if ((local_48[0] != (long *)0x0) &&
     (iVar6 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar6, iVar6 == 0)) {
    (**(code **)(*local_48[0] + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004602cc to 005602d7 has its CatchHandler @ 0046032c */
  return 0;
}


