/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559a70
 * Function: FUN_00559a70
 * Signature: undefined FUN_00559a70(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00559a70(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
                    /* catch() { ... } // from try @ 00559510 with catch @ 00559a74 */
                    /* catch() { ... } // from try @ 00559484 with catch @ 00559a78 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00559808 with catch @ 00559a88 */
  lVar4 = Caver::ProgramState::FromLuaState(param_1);
                    /* catch() { ... } // from try @ 005597c0 with catch @ 00559a90 */
                    /* catch() { ... } // from try @ 005597d4 with catch @ 00559a94 */
  FUN_00666bb8(local_38,"cameraController",auStack_40);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar4 + 0x28),(string *)local_38);
                    /* catch() { ... } // from try @ 0055981c with catch @ 00559acc */
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar5 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
                    /* try { // try from 00559b0c to 00659b33 has its CatchHandler @ 00559e68 */
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
                    /* try { // try from 00559b34 to 00659c0b has its CatchHandler @ 00559334 */
                    /* catch() { ... } // from try @ 0055955c with catch @ 00559b38 */
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00559438 with catch @ 00559ad4 */
  *(undefined4 *)(lVar4 + 0x98) = 0x3f800000;
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0055964c with catch @ 00559ae8 */
  return 0;
}


