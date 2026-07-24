/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004611e8
 * Function: FUN_004611e8
 * Signature: undefined FUN_004611e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_004611e8(lua_State *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  int iVar10;
  long local_58;
  long *local_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
                    /* try { // try from 004611f4 to 0056121b has its CatchHandler @ 004611c4 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lVar6 = Caver::ProgramState::FromLuaState(param_1);
                    /* catch() { ... } // from try @ 004611e0 with catch @ 00461218 */
  FUN_00666bb8(&local_58,"gameController",auStack_40);
  lVar7 = Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar6 + 0x28),(string *)&local_58);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)lVar6);
  plVar8 = (long *)(local_48 + -0x18);
  if (*plVar8 != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 0xa8);
    plVar8 = *(long **)(lVar7 + 0xb0);
    if (plVar8 != (long *)0x0) {
      plVar8[1] = plVar8[1] + 1;
    }
    Caver::GameData::ItemForName((string *)*puVar1);
    if ((plVar8 != (long *)0x0) && (lVar6 = plVar8[1], plVar8[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar6 = plVar8[2];
      plVar8[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    if (local_58 != 0) {
      Caver::GameSceneView::ShowItemInfoPopup
                (*(GameSceneView **)(lVar7 + 0xd8),(shared_ptr *)&local_58);
    }
    if ((local_50 != (long *)0x0) &&
       (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar6 = local_50[2];
      local_50[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    plVar8 = (long *)(local_48 + -0x18);
  }
  if (plVar8 != (long *)puVar5) {
    piVar9 = (int *)(local_48 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(plVar8);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


