/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00627a84
 * Function: FUN_00627a84
 * Signature: undefined FUN_00627a84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00627a84(long *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auStack_8 [8];
  
  FUN_0063b7dc(auStack_8,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
  plVar4 = (long *)FUN_0064f6ac(auStack_8);
  FUN_0063c0c8(auStack_8);
  plVar6 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  piVar5 = (int *)plVar6[2];
  if ((int *)plVar6[3] <= piVar5) goto LAB_00627b54;
  while (*piVar5 != -1) {
    while( true ) {
      cVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,8);
      if (cVar2 == '\0') {
        return param_1;
      }
      piVar5 = (int *)plVar6[2];
      if (piVar5 < (int *)plVar6[3]) {
        iVar3 = *piVar5;
        plVar6[2] = (long)(piVar5 + 1);
      }
      else {
        iVar3 = (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      if (iVar3 == -1) goto LAB_00627b70;
      piVar5 = (int *)plVar6[2];
      if (piVar5 < (int *)plVar6[3]) break;
LAB_00627b54:
      iVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
      if (iVar3 == -1) goto LAB_00627b70;
    }
  }
LAB_00627b70:
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 2);
                    /* try { // try from 00627b9c to 00727c9b has its CatchHandler @ 00627b9c
                       catch() { ... } // from try @ 00627b9c with catch @ 00627b9c
                       catch() { ... } // from try @ 00627ce8 with catch @ 00627b9c */
  return param_1;
}


