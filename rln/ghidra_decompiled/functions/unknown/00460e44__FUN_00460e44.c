/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00460e44
 * Function: FUN_00460e44
 * Signature: undefined FUN_00460e44(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_00460e44(lua_State *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ProgramState *this;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  long local_68;
  long *local_60;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(&local_68,"gameController",auStack_50);
  lVar7 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)&local_68);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00461048 with catch @ 00461034 */
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* try { // try from 00461044 to 00561047 has its CatchHandler @ 00461058 */
    if (iVar9 < 1) {
                    /* try { // try from 00461048 to 0056106b has its CatchHandler @ 00461034 */
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  if (*(long *)(local_58 + -0x18) != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 0xa8);
    plVar2 = *(long **)(lVar7 + 0xb0);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    Caver::GameData::ItemForName((string *)*puVar1);
    if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar7 = plVar2[2];
      plVar2[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    if (local_68 != 0) {
      Caver::ProgramState::PushBool(this,*(bool *)(local_68 + 0x28));
    }
    if ((local_60 != (long *)0x0) &&
       (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar7 = local_60[2];
      local_60[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
    if (local_68 != 0) {
      uVar10 = 1;
      goto LAB_00460fb0;
    }
  }
  uVar10 = 0;
LAB_00460fb0:
  if ((undefined *)(local_58 + -0x18) != puVar6) {
    piVar8 = (int *)(local_58 + -8);
                    /* try { // try from 0046101c to 0056101f has its CatchHandler @ 00461030 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* catch() { ... } // from try @ 00461044 with catch @ 00461058 */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
                    /* try { // try from 0046106c to 00561087 has its CatchHandler @ 0046106c
                       catch() { ... } // from try @ 0046106c with catch @ 0046106c
                       catch() { ... } // from try @ 0046108c with catch @ 0046106c */
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00460fd0 to 0056101b has its CatchHandler @ 00460710 */
                    /* catch() { ... } // from try @ 00460c74 with catch @ 00460fd8 */
                    /* catch() { ... } // from try @ 00460bf4 with catch @ 00460fdc
                       catch() { ... } // from try @ 00460cfc with catch @ 00460fdc */
                    /* catch() { ... } // from try @ 00460814 with catch @ 00460fe0 */
  return uVar10;
}


