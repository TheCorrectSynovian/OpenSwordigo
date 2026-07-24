/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045e1d8
 * Function: FUN_0045e1d8
 * Signature: undefined FUN_0045e1d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045e1d8(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ProgramState *this;
  long lVar7;
  int *piVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"gameController",auStack_50);
  lVar7 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar8;
      *piVar8 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
      lVar1 = *(long *)(lVar7 + 0xa8);
      plVar2 = *(long **)(lVar7 + 0xb0);
      goto joined_r0x0045e31c;
    }
  }
  lVar1 = *(long *)(lVar7 + 0xa8);
  plVar2 = *(long **)(lVar7 + 0xb0);
joined_r0x0045e31c:
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0045e248 to 0055e25b has its CatchHandler @ 0045e3b4 */
    plVar2[1] = plVar2[1] + 1;
  }
  iVar6 = Caver::ProgramState::IntAtStackIndex(this,1);
                    /* try { // try from 0045e25c to 0055e3d7 has its CatchHandler @ 0045e040 */
  if (0x3e6 < iVar6) {
    iVar6 = 999;
  }
  *(int *)(lVar1 + 0xb0) = iVar6;
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


