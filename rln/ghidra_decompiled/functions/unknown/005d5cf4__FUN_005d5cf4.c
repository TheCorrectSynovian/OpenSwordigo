/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5cf4
 * Function: FUN_005d5cf4
 * Signature: undefined FUN_005d5cf4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5cf4(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ProgramState *this;
  float *pfVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  long local_1c8 [2];
  long local_1b8 [3];
  undefined *local_1a0 [7];
  undefined1 auStack_168 [16];
  long local_158;
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 005d5d20 to 006d5d47 has its CatchHandler @ 005d5db8 */
  pfVar6 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
  FUN_006473c8(local_1b8,0x18);
                    /* try { // try from 005d5d50 to 006d5d53 has its CatchHandler @ 005d5ee0 */
  FUN_00640490(local_1b8 + 2,&DAT_00698256,4);
  uVar7 = FUN_00641620((double)*pfVar6,local_1b8 + 2);
                    /* try { // try from 005d5d74 to 006d5d9b has its CatchHandler @ 005d5db0 */
  FUN_00640490(uVar7,", Y: ",5);
  uVar7 = FUN_00641620((double)pfVar6[1],uVar7);
                    /* try { // try from 005d5d9c to 006d5f13 has its CatchHandler @ 005d576c */
  FUN_00640490(uVar7,", Width: ",9);
                    /* catch() { ... } // from try @ 005d5d74 with catch @ 005d5db0 */
  uVar7 = FUN_00641620((double)pfVar6[2],uVar7);
                    /* catch() { ... } // from try @ 005d5d20 with catch @ 005d5db8 */
                    /* catch() { ... } // from try @ 005d5cd8 with catch @ 005d5dc0 */
  FUN_00640490(uVar7,", Height: ",10);
                    /* catch() { ... } // from try @ 005d5c90 with catch @ 005d5dd0 */
  uVar7 = FUN_00641620((double)pfVar6[3],uVar7);
                    /* catch() { ... } // from try @ 005d5c48 with catch @ 005d5de0 */
  FUN_00640490(uVar7,&DAT_006933db,1);
                    /* catch() { ... } // from try @ 005d5c00 with catch @ 005d5df0 */
  FUN_006459d8(local_1c8,local_1a0);
                    /* catch() { ... } // from try @ 005d5bb8 with catch @ 005d5e00 */
  Caver::ProgramState::PushString(this,(string *)local_1c8);
  puVar5 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 005d5b70 with catch @ 005d5e10 */
  if ((undefined *)(local_1c8[0] + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 005d5858 with catch @ 005d5ec0 */
    piVar8 = (int *)(local_1c8[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 005d5810 with catch @ 005d5ed0 */
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 005d5f14 to 006d64a7 has its CatchHandler @ 005d64b0 */
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_1c8[0] + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 005d5b28 with catch @ 005d5e20 */
  puVar4 = PTR_PTR_007e5078;
                    /* catch() { ... } // from try @ 005d5ae0 with catch @ 005d5e30 */
  local_1b8[0] = *(long *)PTR_PTR_007e5078;
  uVar7 = *(undefined8 *)(PTR_PTR_007e5078 + 0x48);
                    /* catch() { ... } // from try @ 005d5a98 with catch @ 005d5e40 */
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007e5078 + 0x40);
  local_1a0[0] = PTR_DAT_007e5770 + 0x10;
                    /* catch() { ... } // from try @ 005d5a50 with catch @ 005d5e50 */
  local_1b8[2] = uVar7;
  if ((undefined *)(local_158 + -0x18) != puVar5) {
    piVar8 = (int *)(local_158 + -8);
                    /* catch() { ... } // from try @ 005d5794 with catch @ 005d5ef0 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_158 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 005d5a08 with catch @ 005d5e60 */
  local_1a0[0] = PTR_DAT_007e6a48 + 0x10;
                    /* catch() { ... } // from try @ 005d59c0 with catch @ 005d5e70 */
  FUN_0063c0c8(auStack_168);
  local_1b8[0] = *(long *)(puVar4 + 0x10);
                    /* catch() { ... } // from try @ 005d5978 with catch @ 005d5e80 */
  *(undefined8 *)((long)local_1b8 + *(long *)(local_1b8[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_1b8[1] = 0;
                    /* catch() { ... } // from try @ 005d5930 with catch @ 005d5e90 */
  FUN_006221dc(auStack_150);
                    /* catch() { ... } // from try @ 005d58e8 with catch @ 005d5ea0 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 005d58a0 with catch @ 005d5eb0 */
  return 1;
}


