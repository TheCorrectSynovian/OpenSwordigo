/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00463034
 * Function: FUN_00463034
 * Signature: undefined FUN_00463034(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00463034(lua_State *param_1)

{
  PlayerProfile *this;
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  ProgramState *this_00;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  this_00 = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"gameController",auStack_50);
  lVar7 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this_00 + 0x28),(string *)local_48);
  puVar5 = PTR_DAT_007e5de8;
                    /* try { // try from 0046307c to 00563127 has its CatchHandler @ 0046307c
                       catch(type#1 @ 00000000) { ... } // from try @ 0046307c with catch @ 0046307c
                       catch(type#1 @ 00000000) { ... } // from try @ 00463138 with catch @ 0046307c
                       catch(type#1 @ 00000000) { ... } // from try @ 004631f4 with catch @ 0046307c
                        */
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar9;
      *piVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
                    /* try { // try from 004631cc to 005631f3 has its CatchHandler @ 004631fc */
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this_00);
  uVar8 = Caver::ProgramState::IsIntAtStackIndex(this_00,2);
  if ((uVar8 & 1) == 0) {
    iVar6 = 1;
    this = *(PlayerProfile **)(lVar7 + 0x88);
    plVar1 = *(long **)(lVar7 + 0x90);
  }
  else {
    iVar6 = Caver::ProgramState::IntAtStackIndex(this_00,2);
    this = *(PlayerProfile **)(lVar7 + 0x88);
    plVar1 = *(long **)(lVar7 + 0x90);
  }
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  Caver::PlayerProfile::IncreaseCounterValue(this,(string *)local_48,iVar6);
  if ((plVar1 != (long *)0x0) && (lVar7 = plVar1[1], plVar1[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar7 = plVar1[2];
    plVar1[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
                    /* try { // try from 00463128 to 00563137 has its CatchHandler @ 004631a8 */
  if ((undefined *)(local_48[0] + -0x18) != puVar5) {
    piVar9 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar9;
      *piVar9 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00463128 with catch @ 004631a8
                        */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
                    /* try { // try from 004631f4 to 005631ff has its CatchHandler @ 0046307c */
    }
  }
                    /* try { // try from 00463138 to 005631cb has its CatchHandler @ 0046307c */
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


