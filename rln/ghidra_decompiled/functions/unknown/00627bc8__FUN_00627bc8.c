/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00627bc8
 * Function: FUN_00627bc8
 * Signature: undefined FUN_00627bc8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00627bc8(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  char local_8 [8];
  
  FUN_00625fe4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar4 = (int *)plVar3[2];
    if (piVar4 < (int *)plVar3[3]) {
      iVar2 = *piVar4;
      plVar3[2] = (long)(piVar4 + 1);
    }
    else {
      iVar2 = (**(code **)(*plVar3 + 0x50))();
    }
    if (iVar2 == -1) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 6);
      return param_1;
    }
    *param_2 = iVar2;
  }
  return param_1;
}


