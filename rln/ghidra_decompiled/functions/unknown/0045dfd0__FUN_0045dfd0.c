/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045dfd0
 * Function: FUN_0045dfd0
 * Signature: undefined FUN_0045dfd0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045dfd0(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ProgramState *this;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"gameController",auStack_50);
  lVar6 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
      lVar1 = *(long *)(lVar6 + 0xa8);
      plVar2 = *(long **)(lVar6 + 0xb0);
      goto joined_r0x0045e104;
    }
  }
  lVar1 = *(long *)(lVar6 + 0xa8);
  plVar2 = *(long **)(lVar6 + 0xb0);
joined_r0x0045e104:
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0045e040 to 0055e163 has its CatchHandler @ 0045e040
                       catch() { ... } // from try @ 0045e040 with catch @ 0045e040
                       catch() { ... } // from try @ 0045e1b0 with catch @ 0045e040
                       catch() { ... } // from try @ 0045e25c with catch @ 0045e040
                       catch() { ... } // from try @ 0045e3e0 with catch @ 0045e040 */
    plVar2[1] = plVar2[1] + 1;
  }
  Caver::ProgramState::PushInt(this,*(int *)(lVar1 + 0xb0));
  if ((plVar2 != (long *)0x0) && (lVar6 = plVar2[1], plVar2[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar6 = plVar2[2];
    plVar2[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


