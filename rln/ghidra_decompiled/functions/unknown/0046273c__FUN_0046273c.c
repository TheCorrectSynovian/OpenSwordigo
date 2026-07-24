/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046273c
 * Function: FUN_0046273c
 * Signature: undefined FUN_0046273c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0046273c(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ProgramState *this;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_58,"gameController",auStack_60);
                    /* catch() { ... } // from try @ 00461cb8 with catch @ 00462780 */
  lVar7 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_58);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
                    /* try { // try from 004628b4 to 005628bf has its CatchHandler @ 004629e0 */
      lVar1 = *(long *)(lVar7 + 0xa8);
      plVar2 = *(long **)(lVar7 + 0xb0);
      goto joined_r0x004628b8;
    }
  }
  lVar1 = *(long *)(lVar7 + 0xa8);
  plVar2 = *(long **)(lVar7 + 0xb0);
joined_r0x004628b8:
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  FUN_0066a528(local_58,lVar1 + 0x158);
  Caver::ProgramState::PushString(this,(string *)local_58);
  if ((undefined *)(local_58[0] + -0x18) != puVar6) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00461c98 with catch @ 004627ec */
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 004627f8 to 005628b3 has its CatchHandler @ 004627f8
                       catch() { ... } // from try @ 004627f8 with catch @ 004627f8
                       catch() { ... } // from try @ 00462908 with catch @ 004627f8
                       catch() { ... } // from try @ 00462a74 with catch @ 004627f8 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


