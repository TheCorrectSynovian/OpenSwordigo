/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576d9c
 * Function: FUN_00576d9c
 * Signature: undefined FUN_00576d9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576d9c(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long *plVar4;
  int *piVar5;
  int iVar6;
  undefined *local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  plVar4 = (long *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (plVar4 == (long *)0x0) {
    local_38[0] = PTR_DAT_007e5de8 + 0x18;
  }
  else {
    local_38[0] = PTR_DAT_007e5de8 + 0x18;
    if (*plVar4 != 0) {
      FUN_0066a6a8(local_38,*plVar4 + 0x50);
    }
  }
  Caver::ProgramState::PushString(this,(string *)local_38);
  if (local_38[0] + -0x18 != PTR_DAT_007e5de8) {
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
      operator_delete(local_38[0] + -0x18);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


