/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00626d40
 * Function: FUN_00626d40
 * Signature: undefined FUN_00626d40(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00626d40(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  char local_8 [8];
  
                    /* try { // try from 00626d44 to 00726d6b has its CatchHandler @ 006273dc */
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar4 = (int *)plVar3[2];
                    /* try { // try from 00626d84 to 00726d8b has its CatchHandler @ 006274f8 */
    if (piVar4 < (int *)plVar3[3]) {
      iVar2 = *piVar4;
      plVar3[2] = (long)(piVar4 + 1);
    }
    else {
                    /* try { // try from 00626de8 to 00726df7 has its CatchHandler @ 006273e8 */
      iVar2 = (**(code **)(*plVar3 + 0x50))();
    }
    if (iVar2 == -1) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00626dc0 to 00726dcb has its CatchHandler @ 006273f0 */
      FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 2);
      return param_1;
    }
    param_1[1] = 1;
  }
  return param_1;
}


