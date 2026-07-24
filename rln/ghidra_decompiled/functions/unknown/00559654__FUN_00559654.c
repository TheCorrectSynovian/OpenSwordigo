/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559654
 * Function: FUN_00559654
 * Signature: undefined FUN_00559654(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00559654(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProgramState *this;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  int iVar9;
  SceneObject *this_00;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  long local_68 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00559678 to 0065969f has its CatchHandler @ 00559c4c */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_68,"cameraController",auStack_70);
                    /* try { // try from 005596a0 to 00659713 has its CatchHandler @ 00559334 */
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(this + 0x28),(string *)local_68);
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
                    /* try { // try from 00559834 to 0065985f has its CatchHandler @ 00559ca4 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
                    /* try { // try from 00559860 to 00659b0b has its CatchHandler @ 00559334 */
    }
  }
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 0055971c to 006597bf has its CatchHandler @ 00559334 */
    Caver::ProgramState::PointerAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar5;
    puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
    if ((this_00 != (SceneObject *)0x0) &&
       (plVar6 = (long *)Caver::SceneObject::ComponentWithInterface
                                   (this_00,(long)PTR_Interface_007e5840), plVar6 != (long *)0x0)) {
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      if (puVar5 == (undefined8 *)0x0) {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        uVar10 = *puVar5;
        uVar11 = puVar5[1];
                    /* try { // try from 00559714 to 0065971b has its CatchHandler @ 00559be8 */
      }
      plVar7 = *(long **)(lVar4 + 0x68);
      *(undefined8 *)(lVar4 + 0x68) = 0;
      if ((plVar7 != (long *)0x0) &&
         (iVar9 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*plVar7 + 8))();
      }
      plVar7 = *(long **)(lVar4 + 0x70);
      *(undefined8 *)(lVar4 + 0x70) = 0;
      if ((plVar7 == (long *)0x0) ||
         (iVar9 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar9, iVar9 != 0)) {
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        *(long **)(lVar4 + 0x70) = plVar6;
      }
      else {
                    /* try { // try from 005597e4 to 00659807 has its CatchHandler @ 00559334 */
        (**(code **)(*plVar7 + 8))();
        plVar7 = *(long **)(lVar4 + 0x70);
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        *(long **)(lVar4 + 0x70) = plVar6;
                    /* try { // try from 00559808 to 0065981b has its CatchHandler @ 00559a88 */
        if ((plVar7 != (long *)0x0) &&
           (iVar9 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar9, iVar9 == 0)) {
          (**(code **)(*plVar7 + 8))();
                    /* try { // try from 0055981c to 0065982f has its CatchHandler @ 00559acc */
        }
      }
      *(undefined8 *)(lVar4 + 0x84) = uVar10;
      *(undefined8 *)(lVar4 + 0x8c) = uVar11;
      iVar9 = (int)plVar6[1] + -1;
      *(int *)(plVar6 + 1) = iVar9;
      if (iVar9 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005597c0 to 006597d3 has its CatchHandler @ 00559a90 */
                    /* try { // try from 005597d4 to 006597e3 has its CatchHandler @ 00559a94 */
  return 0;
}


