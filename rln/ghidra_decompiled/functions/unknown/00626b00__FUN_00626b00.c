/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00626b00
 * Function: FUN_00626b00
 * Signature: undefined FUN_00626b00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00626b00(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  long *plVar6;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    plVar6 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    piVar4 = (int *)plVar6[2];
    if ((int *)plVar6[3] <= piVar4) goto LAB_00626bc0;
LAB_00626b58:
    iVar2 = *piVar4;
    if (iVar2 != -1) {
      do {
        if (iVar2 == param_3) break;
        piVar4 = (int *)param_2[5];
        if (piVar4 < (int *)param_2[6]) {
          *piVar4 = iVar2;
          param_2[5] = (long)(piVar4 + 1);
        }
        else {
          iVar2 = (**(code **)(*param_2 + 0x68))(param_2);
          if (iVar2 == -1) goto LAB_00626be4;
        }
        piVar5 = (int *)plVar6[2];
        piVar4 = (int *)plVar6[3];
        param_1[1] = param_1[1] + 1;
        if (piVar5 < piVar4) {
          iVar2 = *piVar5;
          plVar6[2] = (long)(piVar5 + 1);
        }
        else {
          iVar2 = (**(code **)(*plVar6 + 0x50))(plVar6);
        }
        if (iVar2 != -1) {
          piVar4 = (int *)plVar6[2];
          if (piVar4 < (int *)plVar6[3]) goto LAB_00626b58;
LAB_00626bc0:
          iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
        }
        if (iVar2 == -1) break;
      } while( true );
    }
    if (iVar2 == -1) {
      uVar3 = 6;
      if (param_1[1] != 0) {
        uVar3 = 2;
      }
      goto LAB_00626bf0;
    }
  }
LAB_00626be4:
  if (param_1[1] != 0) {
    return param_1;
  }
  uVar3 = 4;
LAB_00626bf0:
                    /* try { // try from 00626bf4 to 00726bfb has its CatchHandler @ 00627550 */
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00626bfc to 00726c0b has its CatchHandler @ 006274fc */
  FUN_006215c0(lVar1,uVar3 | *(uint *)(lVar1 + 0x20));
  return param_1;
}


