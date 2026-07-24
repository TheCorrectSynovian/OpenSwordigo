/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045d93c
 * Function: FUN_0045d93c
 * Signature: undefined FUN_0045d93c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045d93c(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  ProgramState *this;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
                    /* catch() { ... } // from try @ 0045d3b8 with catch @ 0045d940 */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 0045d964 to 0055d96b has its CatchHandler @ 0045da08 */
                    /* try { // try from 0045d96c to 0055d9f7 has its CatchHandler @ 0045d078 */
                    /* catch() { ... } // from try @ 0045d570 with catch @ 0045d970
                       catch() { ... } // from try @ 0045d67c with catch @ 0045d970 */
                    /* catch() { ... } // from try @ 0045d258 with catch @ 0045d974 */
  FUN_00666bb8(local_58,"gameController",auStack_60);
  lVar8 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_58);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_58[0] + -8);
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
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  if (*(long *)(local_58[0] + -0x18) == 0) {
    bVar7 = 0;
  }
  else {
    lVar1 = *(long *)(lVar8 + 0xa8);
    plVar2 = *(long **)(lVar8 + 0xb0);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
                    /* catch() { ... } // from try @ 0045d4c4 with catch @ 0045d9dc */
    bVar7 = Caver::CharacterState::HasSkillWithName
                      ((CharacterState *)(lVar1 + 0x10),(string *)local_58);
    if ((plVar2 != (long *)0x0) && (lVar8 = plVar2[1], plVar2[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 0045d9f8 to 0055d9ff has its CatchHandler @ 0045da08 */
                    /* try { // try from 0045da00 to 0055da0b has its CatchHandler @ 0045d078 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 0045d87c with catch @ 0045da08
                       catch() { ... } // from try @ 0045d964 with catch @ 0045da08
                       catch() { ... } // from try @ 0045d9f8 with catch @ 0045da08 */
      lVar8 = plVar2[2];
      plVar2[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  Caver::ProgramState::PushBool(this,(bool)(bVar7 & 1));
  if ((undefined *)(local_58[0] + -0x18) != puVar6) {
    piVar9 = (int *)(local_58[0] + -8);
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
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


