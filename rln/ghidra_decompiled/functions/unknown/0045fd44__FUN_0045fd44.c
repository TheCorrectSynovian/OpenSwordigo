/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045fd44
 * Function: FUN_0045fd44
 * Signature: undefined FUN_0045fd44(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045fd44(lua_State *param_1)

{
  GameState *this;
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  ProgramState *this_00;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  this_00 = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_58,"gameController",auStack_60);
  lVar7 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this_00 + 0x28),(string *)local_58);
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
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
                    /* catch() { ... } // from try @ 0045fbbc with catch @ 0045fe78 */
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
      this = *(GameState **)(lVar7 + 0xa8);
      plVar1 = *(long **)(lVar7 + 0xb0);
      goto joined_r0x0045fec4;
    }
  }
  this = *(GameState **)(lVar7 + 0xa8);
  plVar1 = *(long **)(lVar7 + 0xb0);
joined_r0x0045fec4:
  if ((plVar1 != (long *)0x0) && (plVar1[1] == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar7 = plVar1[2];
    plVar1[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this_00);
  lVar7 = Caver::GameState::CurrentLevelState(this,false);
  bVar6 = Caver::StateProperties::HasFlag((StateProperties *)(lVar7 + 0x10),(string *)local_58);
  Caver::ProgramState::PushBool(this_00,(bool)(bVar6 & 1));
  if ((undefined *)(local_58[0] + -0x18) != puVar5) {
    piVar8 = (int *)(local_58[0] + -8);
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
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 0045fbd4 with catch @ 0045fe40 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0045fac0 with catch @ 0045feec */
  __stack_chk_fail();
}


