/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e27c
 * Function: FUN_0063e27c
 * Signature: undefined FUN_0063e27c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0063e27c(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char local_208 [8];
  int local_200 [128];
  
                    /* try { // try from 0063e2a0 to 0073e41f has its CatchHandler @ 0063e2a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0063e2a0 with catch @ 0063e2a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0063e42c with catch @ 0063e2a0
                       catch(type#1 @ 00000000) { ... } // from try @ 0063e4fc with catch @ 0063e2a0
                        */
  FUN_00625fe4(local_208,param_1,0);
  if (local_208[0] == '\0') {
    lVar9 = *param_1;
    uVar3 = 4;
  }
  else {
    FUN_0066c650(param_2,0,*(undefined8 *)(*param_2 + -0x18),0);
    lVar9 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
    if (lVar9 < 1) {
      lVar9 = 0xffffffffffffffe;
    }
    FUN_0063b7dc(local_200,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
    plVar4 = (long *)FUN_0064f6ac(local_200);
    FUN_0063c0c8(local_200);
    plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((int *)plVar5[2] < (int *)plVar5[3]) {
      iVar2 = *(int *)plVar5[2];
    }
    else {
      iVar2 = (**(code **)(*plVar5 + 0x48))();
    }
    if (iVar2 == -1) {
      lVar10 = 0;
      lVar6 = 0;
    }
    else {
      lVar11 = 0;
      lVar8 = 0;
      do {
        cVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,8,iVar2);
        lVar10 = lVar8;
        lVar6 = lVar11;
        if (cVar1 != '\0') goto LAB_0063e3b0;
        if (lVar8 == 0x80) {
          FUN_0066e774(param_2,local_200,0x80);
          lVar10 = 1;
          lVar8 = 0;
        }
        else {
          lVar10 = lVar8 + 1;
        }
        lVar6 = *param_1;
        lVar11 = lVar11 + 1;
        local_200[lVar8] = iVar2;
        plVar5 = *(long **)((long)param_1 + *(long *)(lVar6 + -0x18) + 0xe8);
        piVar7 = (int *)plVar5[2];
                    /* try { // try from 0063e420 to 0073e42b has its CatchHandler @ 0063e4b0 */
        if (piVar7 < (int *)plVar5[3]) {
          iVar2 = *piVar7;
                    /* try { // try from 0063e42c to 0073e4d3 has its CatchHandler @ 0063e2a0 */
          plVar5[2] = (long)(piVar7 + 1);
        }
        else {
          iVar2 = (**(code **)(*plVar5 + 0x50))(plVar5);
        }
        lVar6 = lVar9;
        if (iVar2 == -1) {
          iVar2 = -1;
          if (lVar11 == lVar9) goto LAB_0063e3b0;
          break;
        }
        if ((int *)plVar5[2] < (int *)plVar5[3]) {
          iVar2 = *(int *)plVar5[2];
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063e420 with catch @ 0063e4b0
                        */
          iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
        }
        if (lVar11 == lVar9) goto LAB_0063e3b0;
        lVar8 = lVar10;
      } while (iVar2 != -1);
      iVar2 = -1;
      lVar6 = lVar11;
    }
LAB_0063e3b0:
    FUN_0066e774(param_2,local_200,lVar10);
    if (iVar2 == -1) {
      lVar9 = *param_1;
      uVar3 = 6;
      if (lVar6 != 0) {
        uVar3 = 2;
      }
                    /* try { // try from 0063e4d4 to 0073e4fb has its CatchHandler @ 0063e504 */
      *(undefined8 *)((long)param_1 + *(long *)(lVar9 + -0x18) + 0x10) = 0;
    }
    else {
      lVar9 = *param_1;
      *(undefined8 *)((long)param_1 + *(long *)(lVar9 + -0x18) + 0x10) = 0;
      if (lVar6 != 0) {
        return param_1;
      }
      uVar3 = 4;
    }
  }
  lVar9 = (long)param_1 + *(long *)(lVar9 + -0x18);
  FUN_006215c0(lVar9,uVar3 | *(uint *)(lVar9 + 0x20));
  return param_1;
}


