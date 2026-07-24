/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045d214
 * Function: FUN_0045d214
 * Signature: undefined FUN_0045d214(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045d214(lua_State *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  ProgramState *this;
  GameViewController *this_00;
  long lVar8;
  int *piVar9;
  int iVar10;
  long local_68;
  long *local_60;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_68,"gameController",auStack_50);
                    /* try { // try from 0045d258 to 0055d27b has its CatchHandler @ 0045d974 */
  this_00 = (GameViewController *)
            Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)&local_68);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0045d3c4 to 0055d4c3 has its CatchHandler @ 0045d078 */
    piVar9 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
                    /* try { // try from 0045d27c to 0055d28f has its CatchHandler @ 0045d850 */
  Caver::ProgramState::StringAtStackIndex((int)this);
                    /* try { // try from 0045d290 to 0055d29f has its CatchHandler @ 0045d888 */
  if (*(long *)(local_58 + -0x18) == 0) {
    bVar7 = 0;
  }
  else {
    puVar1 = *(undefined8 **)(this_00 + 0xa8);
    plVar2 = *(long **)(this_00 + 0xb0);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 0045d2a0 to 0055d2d7 has its CatchHandler @ 0045d858 */
      plVar2[1] = plVar2[1] + 1;
    }
    Caver::GameData::ItemForName((string *)*puVar1);
    if ((plVar2 != (long *)0x0) && (lVar8 = plVar2[1], plVar2[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar8 = plVar2[2];
      plVar2[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
                    /* try { // try from 0045d2f8 to 0055d2fb has its CatchHandler @ 0045d888 */
                    /* try { // try from 0045d2fc to 0055d3b7 has its CatchHandler @ 0045d078 */
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (local_68 == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = Caver::GameViewController::AddItemToCharacter(this_00,(shared_ptr *)&local_68);
    }
    if ((local_60 != (long *)0x0) &&
       (lVar8 = local_60[1], local_60[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar8 = local_60[2];
      local_60[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
  }
  Caver::ProgramState::PushBool(this,(bool)(bVar7 & 1));
  if ((undefined *)(local_58 + -0x18) != puVar6) {
    piVar9 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 0045d3b8 to 0055d3c3 has its CatchHandler @ 0045d940 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


