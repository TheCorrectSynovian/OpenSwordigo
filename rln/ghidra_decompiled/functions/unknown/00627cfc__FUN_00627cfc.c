/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00627cfc
 * Function: FUN_00627cfc
 * Signature: undefined FUN_00627cfc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00627cfc(long *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  char local_10 [8];
  undefined1 auStack_8 [8];
  
  FUN_00625fe4(local_10,param_1,0);
  if (local_10[0] == '\0') {
    lVar10 = *param_1;
    uVar2 = 4;
  }
  else {
    lVar10 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
    if (lVar10 < 1) {
      lVar10 = 0x7fffffffffffffff;
    }
    FUN_0063b7dc(auStack_8,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
    plVar4 = (long *)FUN_0064f6ac(auStack_8);
    FUN_0063c0c8(auStack_8);
    plVar7 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((int *)plVar7[2] < (int *)plVar7[3]) {
      iVar3 = *(int *)plVar7[2];
    }
    else {
      iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
                    /* try { // try from 00627f08 to 00727f0b has its CatchHandler @ 006286a8 */
    }
    lVar8 = 0;
LAB_00627da0:
    piVar9 = param_2;
    if (lVar8 < lVar10 + -1) {
      while( true ) {
        param_2 = piVar9;
        if (iVar3 == -1) goto LAB_00627e9c;
        cVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,8,iVar3);
        if (cVar1 != '\0') goto LAB_00627dd0;
        piVar6 = (int *)plVar7[2];
        lVar8 = lVar8 + 1;
        piVar5 = (int *)plVar7[3];
        param_2 = piVar9 + 1;
        *piVar9 = iVar3;
        if (piVar6 < piVar5) {
          iVar3 = *piVar6;
          plVar7[2] = (long)(piVar6 + 1);
        }
        else {
          iVar3 = (**(code **)(*plVar7 + 0x50))(plVar7);
        }
                    /* catch() { ... } // from try @ 00628528 with catch @ 00627e78
                       catch() { ... } // from try @ 00628da8 with catch @ 00627e78 */
        if (iVar3 == -1) goto LAB_00627da0;
        if ((int *)plVar7[3] <= (int *)plVar7[2]) break;
        iVar3 = *(int *)plVar7[2];
        piVar9 = param_2;
        if (lVar10 + -1 <= lVar8) goto LAB_00627e9c;
      }
      iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
      goto LAB_00627da0;
    }
LAB_00627e9c:
    if (iVar3 == -1) {
      lVar10 = *param_1;
      *param_2 = 0;
      uVar2 = 6;
      if (lVar8 != 0) {
        uVar2 = 2;
      }
                    /* try { // try from 00627ec0 to 00727ee7 has its CatchHandler @ 00628720 */
      *(undefined8 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x10) = 0;
    }
    else {
LAB_00627dd0:
      lVar10 = *param_1;
      *param_2 = 0;
      *(undefined8 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x10) = 0;
      if (lVar8 != 0) {
        return param_1;
      }
      uVar2 = 4;
                    /* catch() { ... } // from try @ 00627c9c with catch @ 00627dec */
    }
  }
  lVar10 = (long)param_1 + *(long *)(lVar10 + -0x18);
  FUN_006215c0(lVar10,uVar2 | *(uint *)(lVar10 + 0x20));
  return param_1;
}


