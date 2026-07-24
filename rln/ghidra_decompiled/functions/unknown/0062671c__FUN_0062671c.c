/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062671c
 * Function: FUN_0062671c
 * Signature: undefined FUN_0062671c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0062671c(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  int *piVar5;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] == '\0') {
    if (param_1[1] == 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
      return param_1;
    }
  }
  else {
    plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar5 = (int *)plVar4[2];
    if (piVar5 < (int *)plVar4[3]) {
      iVar2 = *piVar5;
      plVar4[2] = (long)(piVar5 + 1);
    }
    else {
      iVar2 = (**(code **)(*plVar4 + 0x50))();
    }
    if (iVar2 == -1) {
      uVar3 = 6;
      if (param_1[1] != 0) {
        uVar3 = 2;
      }
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,uVar3 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
    param_1[1] = 1;
    *param_2 = iVar2;
  }
  return param_1;
}


