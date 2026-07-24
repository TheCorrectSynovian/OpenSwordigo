/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064bc2c
 * Function: FUN_0064bc2c
 * Signature: undefined FUN_0064bc2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064bc2c(long *param_1,long *param_2,undefined1 *param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  piVar4 = (int *)param_1[3];
  piVar3 = (int *)param_1[2];
  *param_3 = 1;
  if (piVar3 < piVar4) {
    iVar1 = *piVar3;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))();
  }
                    /* try { // try from 0064bc6c to 0074bc93 has its CatchHandler @ 0064bd50 */
  lVar6 = 0;
  do {
    while( true ) {
      if (iVar1 == -1) {
                    /* catch() { ... } // from try @ 0064bc6c with catch @ 0064bd50 */
        return lVar6;
      }
      lVar5 = param_1[3] - param_1[2] >> 2;
      if (lVar5 < 2) break;
      lVar2 = (**(code **)(*param_2 + 0x60))(param_2,param_1[2],lVar5);
                    /* try { // try from 0064bc94 to 0074bdef has its CatchHandler @ 0064bab0 */
      lVar6 = lVar6 + lVar2;
      param_1[2] = param_1[2] + lVar2 * 4;
      if (lVar2 < lVar5) {
LAB_0064bd48:
        *param_3 = 0;
        return lVar6;
      }
LAB_0064bca4:
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    }
    piVar3 = (int *)param_2[5];
    if (piVar3 < (int *)param_2[6]) {
      *piVar3 = iVar1;
      param_2[5] = (long)(piVar3 + 1);
    }
    else {
      iVar1 = (**(code **)(*param_2 + 0x68))(param_2,iVar1);
      if (iVar1 == -1) goto LAB_0064bd48;
    }
    piVar3 = (int *)param_1[2];
    lVar6 = lVar6 + 1;
    if (piVar3 < (int *)param_1[3]) {
      iVar1 = *piVar3;
      param_1[2] = (long)(piVar3 + 1);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    }
    if (iVar1 == -1) {
      return lVar6;
    }
    if ((int *)param_1[3] <= (int *)param_1[2]) goto LAB_0064bca4;
    iVar1 = *(int *)param_1[2];
  } while( true );
}


