/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00569950
 * Function: FUN_00569950
 * Signature: undefined FUN_00569950(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00569950(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  ProgramState *this;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"scene",auStack_50);
  lVar5 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 005698b8 with catch @ 00569a20 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  bVar4 = Caver::ProgramState::BoolAtStackIndex(this,1);
  iVar7 = -1;
  if ((bVar4 & 1) != 0) {
    iVar7 = 1;
  }
  *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + iVar7;
  this[0x52] = (ProgramState)(bVar4 & 1);
                    /* catch() { ... } // from try @ 005697d8 with catch @ 005699e8 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


