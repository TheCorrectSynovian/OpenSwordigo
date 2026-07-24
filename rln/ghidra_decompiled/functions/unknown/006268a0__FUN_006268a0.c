/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006268a0
 * Function: FUN_006268a0
 * Signature: undefined FUN_006268a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006268a0(long *param_1,int *param_2,long param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
                    /* try { // try from 006268dc to 007268e3 has its CatchHandler @ 0062757c */
  if (local_8[0] == '\0') {
    lVar5 = param_1[1];
    uVar3 = 0;
  }
  else {
                    /* try { // try from 006268e4 to 0072694b has its CatchHandler @ 00627584 */
    plVar7 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar2 = (int *)plVar7[2];
    if ((int *)plVar7[3] <= piVar2) goto LAB_00626964;
LAB_00626900:
    iVar1 = *piVar2;
    while (lVar5 = param_1[1], piVar2 = param_2, iVar1 != -1 && param_4 != iVar1) {
      while( true ) {
        param_2 = piVar2;
        if (param_3 <= lVar5 + 1) goto LAB_00626994;
        piVar4 = (int *)plVar7[2];
        piVar6 = (int *)plVar7[3];
        param_2 = piVar2 + 1;
        *piVar2 = iVar1;
        param_1[1] = lVar5 + 1;
        if (piVar4 < piVar6) {
          iVar1 = *piVar4;
          plVar7[2] = (long)(piVar4 + 1);
        }
        else {
          iVar1 = (**(code **)(*plVar7 + 0x50))(plVar7);
        }
        if (iVar1 == -1) break;
        piVar2 = (int *)plVar7[2];
        if (piVar2 < (int *)plVar7[3]) goto LAB_00626900;
LAB_00626964:
        iVar1 = (**(code **)(*plVar7 + 0x48))(plVar7);
        lVar5 = param_1[1];
        piVar2 = param_2;
                    /* try { // try from 00626984 to 0072698b has its CatchHandler @ 006274b0 */
                    /* try { // try from 0062698c to 007269f3 has its CatchHandler @ 006274b8 */
        if (iVar1 == -1 || param_4 == iVar1) goto LAB_00626994;
      }
    }
LAB_00626994:
    uVar3 = 2;
    if (iVar1 != -1) {
      uVar3 = 0;
    }
  }
  if (0 < param_3) {
    *param_2 = 0;
  }
  if (lVar5 == 0) {
    uVar3 = uVar3 | 4;
  }
  else if (uVar3 == 0) {
                    /* try { // try from 00626a3c to 00726a43 has its CatchHandler @ 006273f4 */
    return param_1;
  }
  lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar5,uVar3 | *(uint *)(lVar5 + 0x20));
  return param_1;
}


