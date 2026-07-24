/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045f8b8
 * Function: FUN_0045f8b8
 * Signature: undefined FUN_0045f8b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045f8b8(lua_State *param_1)

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
  
                    /* try { // try from 0045f8cc to 0055f933 has its CatchHandler @ 0045f93c */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 0045f5d4 with catch @ 0045f8d8 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_58,"gameController",auStack_60);
  lVar8 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_58);
  puVar6 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 0045f348 with catch @ 0045f908 */
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
      lVar1 = *(long *)(lVar8 + 0xa8);
      plVar2 = *(long **)(lVar8 + 0xb0);
      goto joined_r0x0045fa2c;
    }
  }
  lVar1 = *(long *)(lVar8 + 0xa8);
  plVar2 = *(long **)(lVar8 + 0xb0);
joined_r0x0045fa2c:
  if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
                    /* try { // try from 0045f934 to 0055f93f has its CatchHandler @ 0045f148 */
                    /* catch() { ... } // from try @ 0045f8cc with catch @ 0045f93c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 0045f940 to 0055fabf has its CatchHandler @ 0045f940
                       catch() { ... } // from try @ 0045f940 with catch @ 0045f940
                       catch() { ... } // from try @ 0045fae0 with catch @ 0045f940
                       catch() { ... } // from try @ 0045fbdc with catch @ 0045f940 */
    lVar8 = plVar2[2];
    plVar2[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  bVar7 = Caver::StateProperties::HasFlag((StateProperties *)(lVar1 + 0x128),(string *)local_58);
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
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


