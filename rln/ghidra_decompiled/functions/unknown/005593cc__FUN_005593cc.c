/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005593cc
 * Function: FUN_005593cc
 * Signature: undefined FUN_005593cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005593cc(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 auStack_60 [8];
  long local_58 [2];
  long local_48;
  
                    /* try { // try from 005593e0 to 006593f3 has its CatchHandler @ 00559c40 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 005593f4 to 00659403 has its CatchHandler @ 00559b78 */
                    /* try { // try from 00559404 to 00659437 has its CatchHandler @ 00559334 */
  FUN_00666bb8(local_58,"cameraController",auStack_60);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_58);
  if ((undefined *)(local_58[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00559564 to 0065961b has its CatchHandler @ 00559334 */
    piVar7 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
                    /* try { // try from 00559438 to 0065943b has its CatchHandler @ 00559ad4 */
                    /* try { // try from 0055943c to 00659483 has its CatchHandler @ 00559334 */
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 == (undefined8 *)0x0) {
    Caver::ProgramState::PointerAtStackIndex(this,2);
  }
  else {
    plVar9 = (long *)*puVar5;
    puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
    if (plVar9 != (long *)0x0) {
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 00559484 to 006594ab has its CatchHandler @ 00559a78 */
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = *puVar5;
        uVar10 = *(undefined4 *)(puVar5 + 1);
      }
      plVar6 = *(long **)(lVar4 + 0x68);
      *(undefined8 *)(lVar4 + 0x68) = 0;
      if ((plVar6 != (long *)0x0) &&
         (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = *(long **)(lVar4 + 0x70);
      *(undefined8 *)(lVar4 + 0x70) = 0;
                    /* try { // try from 005594c4 to 006594ef has its CatchHandler @ 00559dcc */
      if ((plVar6 != (long *)0x0) &&
         (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      plVar6 = *(long **)(lVar4 + 0x68);
      *(long **)(lVar4 + 0x68) = plVar9;
      if ((plVar6 != (long *)0x0) &&
         (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
                    /* try { // try from 00559510 to 00659537 has its CatchHandler @ 00559a74 */
      *(undefined8 *)(lVar4 + 0x78) = uVar11;
      *(undefined4 *)(lVar4 + 0x80) = uVar10;
      iVar8 = (int)plVar9[1] + -1;
      *(int *)(plVar9 + 1) = iVar8;
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
                    /* try { // try from 00559544 to 00659557 has its CatchHandler @ 00559c3c */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0055955c to 00659563 has its CatchHandler @ 00559b38 */
  return 0;
}


