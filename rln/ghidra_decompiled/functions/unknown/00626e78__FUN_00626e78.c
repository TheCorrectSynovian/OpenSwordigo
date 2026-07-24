/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00626e78
 * Function: FUN_00626e78
 * Signature: undefined FUN_00626e78(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00626e78(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char local_8 [8];
  
                    /* try { // try from 00626e94 to 00726ebf has its CatchHandler @ 006274b4 */
  iVar2 = -1;
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
                    /* try { // try from 00626ed4 to 00726edf has its CatchHandler @ 006273d8 */
    if ((int *)plVar3[2] < (int *)plVar3[3]) {
      iVar2 = *(int *)plVar3[2];
    }
    else {
      iVar2 = (**(code **)(*plVar3 + 0x48))();
    }
    if (iVar2 == -1) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00626ef4 to 00726f07 has its CatchHandler @ 006273d4 */
      FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 2);
      return -1;
    }
  }
  return iVar2;
}


