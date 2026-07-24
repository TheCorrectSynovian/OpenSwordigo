/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558e0c
 * Function: FUN_00558e0c
 * Signature: undefined FUN_00558e0c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00558e0c(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* try { // try from 00558e10 to 00658e13 has its CatchHandler @ 005591c0 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00558e28 to 00658e8f has its CatchHandler @ 005591d0 */
  lVar4 = Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_38,"cameraController",auStack_40);
  puVar5 = (undefined4 *)
           Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar4 + 0x28),(string *)local_38);
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00558ee8 to 0065925f has its CatchHandler @ 00558a74 */
    piVar7 = (int *)(local_38[0] + -8);
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
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
  plVar6 = *(long **)(puVar5 + 0x1a);
  *(undefined8 *)(puVar5 + 0x1a) = 0;
  if ((plVar6 != (long *)0x0) &&
     (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = *(long **)(puVar5 + 0x1c);
  *(undefined8 *)(puVar5 + 0x1c) = 0;
  if ((plVar6 != (long *)0x0) &&
     (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar6 + 8))();
  }
                    /* try { // try from 00558ec0 to 00658ee7 has its CatchHandler @ 005592e0 */
  *puVar5 = 2;
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


