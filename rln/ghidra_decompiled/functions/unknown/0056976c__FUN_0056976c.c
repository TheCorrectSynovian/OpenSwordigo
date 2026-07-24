/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056976c
 * Function: FUN_0056976c
 * Signature: undefined FUN_0056976c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0056976c(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long *plVar4;
  long *plVar5;
  int iVar6;
  code *pcVar7;
  undefined1 auStack_50 [8];
  long *local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"scene",auStack_50);
  plVar4 = (long *)Caver::ProgramTable::PointerForKey
                             ((ProgramTable *)(this + 0x28),(string *)local_48);
  if (local_48[0] + -3 != (long *)PTR_DAT_007e5de8) {
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
                    /* try { // try from 005697d8 to 006697e7 has its CatchHandler @ 005699e8 */
  plVar5 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
                    /* try { // try from 005697e8 to 006698b7 has its CatchHandler @ 0056963c */
    pcVar7 = *(code **)(*plVar4 + 0x28);
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    local_48[0] = plVar5;
    (*pcVar7)(plVar4,local_48);
    if ((local_48[0] != (long *)0x0) &&
       (iVar6 = (int)local_48[0][1] + -1, *(int *)(local_48[0] + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*local_48[0] + 8))();
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


