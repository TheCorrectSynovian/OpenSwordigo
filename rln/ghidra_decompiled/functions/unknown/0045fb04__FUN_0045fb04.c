/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045fb04
 * Function: FUN_0045fb04
 * Signature: undefined FUN_0045fb04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0045fb04(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar7 = Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_58,"gameController",auStack_60);
  lVar8 = Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar7 + 0x28),(string *)local_58);
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
      lVar1 = *(long *)(lVar8 + 0xa8);
      plVar2 = *(long **)(lVar8 + 0xb0);
      goto joined_r0x0045fc6c;
    }
  }
  lVar1 = *(long *)(lVar8 + 0xa8);
  plVar2 = *(long **)(lVar8 + 0xb0);
joined_r0x0045fc6c:
  if ((plVar2 != (long *)0x0) && (plVar2[1] == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar8 = plVar2[2];
    plVar2[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)lVar7);
                    /* try { // try from 0045fbbc to 0055fbcf has its CatchHandler @ 0045fe78 */
  Caver::StateProperties::AddFlag((string *)(lVar1 + 0x128));
                    /* try { // try from 0045fbd4 to 0055fbdb has its CatchHandler @ 0045fe40 */
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
                    /* try { // try from 0045fbdc to 0055fef7 has its CatchHandler @ 0045f940 */
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


