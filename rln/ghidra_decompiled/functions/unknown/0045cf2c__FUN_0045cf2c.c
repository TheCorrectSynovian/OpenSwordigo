/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045cf2c
 * Function: FUN_0045cf2c
 * Signature: undefined FUN_0045cf2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045cf2c(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ProgramState *this;
  long lVar8;
  int *piVar9;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
                    /* try { // try from 0045cf44 to 0055cf7b has its CatchHandler @ 0045cf84 */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 0045bc6c with catch @ 0045cf50 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_58,"gameController",auStack_60);
  lVar8 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_58);
  puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 0045cf7c to 0055cf87 has its CatchHandler @ 0045b718 */
                    /* catch() { ... } // from try @ 0045cf44 with catch @ 0045cf84 */
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
                    /* try { // try from 0045d078 to 0055d257 has its CatchHandler @ 0045d078
                       catch() { ... } // from try @ 0045d078 with catch @ 0045d078
                       catch() { ... } // from try @ 0045d2fc with catch @ 0045d078
                       catch() { ... } // from try @ 0045d3c4 with catch @ 0045d078
                       catch() { ... } // from try @ 0045d5bc with catch @ 0045d078
                       catch() { ... } // from try @ 0045d738 with catch @ 0045d078
                       catch() { ... } // from try @ 0045d884 with catch @ 0045d078
                       catch() { ... } // from try @ 0045d96c with catch @ 0045d078
                       catch() { ... } // from try @ 0045da00 with catch @ 0045d078 */
        iVar7 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  if (*(long *)(local_58[0] + -0x18) == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *(long *)(lVar8 + 0xa8);
    plVar2 = *(long **)(lVar8 + 0xb0);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    iVar7 = Caver::CharacterState::ItemCount((CharacterState *)(lVar1 + 0x10),(string *)local_58);
    if ((plVar2 != (long *)0x0) && (lVar8 = plVar2[1], plVar2[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar8 = plVar2[2];
      plVar2[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  Caver::ProgramState::PushInt(this,iVar7);
  if ((undefined *)(local_58[0] + -0x18) != puVar6) {
    piVar9 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar9;
      *piVar9 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


