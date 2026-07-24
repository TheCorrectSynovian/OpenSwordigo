/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045d5c0
 * Function: FUN_0045d5c0
 * Signature: undefined FUN_0045d5c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045d5c0(lua_State *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  GameViewController *this;
  long *plVar7;
  int *piVar8;
  int iVar9;
  long local_58;
  long *local_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lVar6 = Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_58,"gameController",auStack_40);
  this = (GameViewController *)
         Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar6 + 0x28),(string *)&local_58);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)lVar6);
  plVar7 = (long *)(local_48 + -0x18);
  if (*plVar7 != 0) {
    puVar1 = *(undefined8 **)(this + 0xa8);
    plVar7 = *(long **)(this + 0xb0);
    if (plVar7 != (long *)0x0) {
      plVar7[1] = plVar7[1] + 1;
    }
    Caver::GameData::ItemForName((string *)*puVar1);
    if ((plVar7 != (long *)0x0) && (lVar6 = plVar7[1], plVar7[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 0045d67c to 0055d737 has its CatchHandler @ 0045d970 */
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar6 = plVar7[2];
      plVar7[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    if (local_58 != 0) {
      Caver::GameViewController::RemoveItemFromCharacter(this,(shared_ptr *)&local_58);
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
    plVar7 = (long *)(local_48 + -0x18);
  }
  if (plVar7 != (long *)puVar5) {
    piVar8 = (int *)(local_48 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(plVar7);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0045d738 to 0055d87b has its CatchHandler @ 0045d078 */
  return 0;
}


