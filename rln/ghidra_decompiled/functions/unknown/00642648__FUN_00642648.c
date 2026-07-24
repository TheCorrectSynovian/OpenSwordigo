/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00642648
 * Function: FUN_00642648
 * Signature: undefined FUN_00642648(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00642648(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  char local_10 [8];
  long *local_8;
  
  FUN_006423a0(local_10,param_1);
  if (local_10[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar5 = (int *)plVar3[5];
    if (piVar5 < (int *)plVar3[6]) {
      *piVar5 = param_2;
      plVar3[5] = (long)(piVar5 + 1);
    }
    else {
      param_2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
    }
    if (param_2 == -1) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    }
  }
  plVar3 = local_8;
  lVar4 = *(long *)(*local_8 + -0x18);
  if (((((*(uint *)((long)local_8 + lVar4 + 0x18) >> 0xd & 1) != 0) &&
       (cVar1 = std::uncaught_exception(), cVar1 == '\0')) &&
      (plVar3 = *(long **)((long)plVar3 + lVar4 + 0xe8), plVar3 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar3 + 0x30))(), iVar2 == -1)) {
    lVar4 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_006215c0(lVar4,*(uint *)(lVar4 + 0x20) | 1);
    return param_1;
  }
  return param_1;
}


