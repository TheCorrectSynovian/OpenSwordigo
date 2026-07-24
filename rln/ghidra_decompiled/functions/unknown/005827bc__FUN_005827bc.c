/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005827bc
 * Function: FUN_005827bc
 * Signature: undefined FUN_005827bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005827bc(lua_State *param_1)

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
  
                    /* catch() { ... } // from try @ 00582050 with catch @ 005827c8 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  lVar4 = Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_38,"musicPlayer",auStack_40);
  lVar4 = Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar4 + 0x28),(string *)local_38);
                    /* catch() { ... } // from try @ 00582010 with catch @ 00582818 */
  if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00581f78 with catch @ 00582850 */
                    /* catch() { ... } // from try @ 00581f30 with catch @ 00582854 */
    piVar5 = (int *)(local_38[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 00581f08 with catch @ 00582884 */
    if (iVar6 < 1) {
                    /* catch() { ... } // from try @ 00581f00 with catch @ 00582888 */
      operator_delete((undefined *)(local_38[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00581fa8 with catch @ 0058281c */
  *(undefined8 *)(lVar4 + 0x20) = 0x3f2aaaab00000001;
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00581f80 with catch @ 0058284c */
  return 0;
}


