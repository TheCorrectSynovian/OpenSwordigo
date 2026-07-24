/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00462e44
 * Function: FUN_00462e44
 * Signature: undefined FUN_00462e44(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00462e44(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
                    /* catch() { ... } // from try @ 00462c7c with catch @ 00462e50 */
                    /* try { // try from 00462e54 to 00562e5b has its CatchHandler @ 00462e64 */
  lVar3 = tpidr_el0;
                    /* try { // try from 00462e5c to 00562e67 has its CatchHandler @ 00462b50 */
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00462e54 with catch @ 00462e64 */
  lVar5 = Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"gameController",auStack_50);
  lVar6 = Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar5 + 0x28),(string *)local_48);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_48[0] + -8);
                    /* try { // try from 00462f08 to 00562f1b has its CatchHandler @ 00463020 */
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
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)lVar5);
  FUN_0066a6a8(lVar6 + 0xf0,local_48);
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
                    /* try { // try from 00462f20 to 00562f2f has its CatchHandler @ 00462fb0 */
    piVar7 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
                    /* try { // try from 00462f30 to 00563023 has its CatchHandler @ 00462ee4 */
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
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00462f30 with catch @ 00462ee4 */
  return 0;
}


