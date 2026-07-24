/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006265b4
 * Function: FUN_006265b4
 * Signature: undefined FUN_006265b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006265b4(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  long *plVar5;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] == '\0') {
    uVar2 = 4;
    if (param_1[1] != 0) {
      return 0xffffffff;
    }
  }
  else {
    plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    puVar4 = (uint *)plVar5[2];
                    /* try { // try from 00626640 to 00726647 has its CatchHandler @ 00627380 */
    if (puVar4 < (uint *)plVar5[3]) {
      uVar3 = (ulong)*puVar4;
      plVar5[2] = (long)(puVar4 + 1);
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
    }
    if ((int)uVar3 != -1) {
      param_1[1] = 1;
                    /* try { // try from 00626660 to 0072668b has its CatchHandler @ 00627348 */
      return uVar3;
    }
    uVar2 = 6;
    if (param_1[1] != 0) {
      uVar2 = 2;
    }
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,uVar2 | *(uint *)(lVar1 + 0x20));
  return 0xffffffff;
}


