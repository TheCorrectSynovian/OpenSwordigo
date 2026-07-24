/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00461564
 * Function: FUN_00461564
 * Signature: undefined FUN_00461564(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00461564(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar4 = Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_38,"gameController",auStack_40);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar4 + 0x28),(string *)local_38);
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
  Caver::GameSceneView::HideItemInfoPopup(*(GameSceneView **)(lVar4 + 0xd8));
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


