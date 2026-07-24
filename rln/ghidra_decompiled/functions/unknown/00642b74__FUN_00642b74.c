/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00642b74
 * Function: FUN_00642b74
 * Signature: undefined FUN_00642b74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00642b74(long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char local_10 [8];
  long *local_8;
  
  FUN_006423a0(local_10,param_1);
                    /* try { // try from 00642bac to 00742bb3 has its CatchHandler @ 00642d94 */
  if (local_10[0] == '\0') goto LAB_00642bf4;
  lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar10 = *(long *)(lVar5 + 0x10);
  if (param_3 < lVar10) {
                    /* try { // try from 00642bd4 to 00742bdb has its CatchHandler @ 00642dd0 */
                    /* try { // try from 00642bdc to 00742bef has its CatchHandler @ 00642dcc */
    bVar1 = (*(uint *)(lVar5 + 0x18) & 0xb0) != 0x20;
    if (bVar1) {
      lVar9 = lVar10 - param_3;
      if (*(char *)(lVar5 + 0xe4) == '\0') {
        plVar6 = *(long **)(lVar5 + 0xf0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_006652c8();
        }
        iVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,0x20);
        lVar8 = *param_1;
        *(int *)(lVar5 + 0xe0) = iVar3;
        *(undefined1 *)(lVar5 + 0xe4) = 1;
        lVar5 = (long)param_1 + *(long *)(lVar8 + -0x18);
      }
      else {
        iVar3 = *(int *)(lVar5 + 0xe0);
      }
                    /* catch() { ... } // from try @ 00642c9c with catch @ 00642dc4 */
                    /* catch() { ... } // from try @ 00642c80 with catch @ 00642dc8 */
      if (0 < lVar9) {
        while( true ) {
          plVar6 = *(long **)(lVar5 + 0xe8);
          piVar7 = (int *)plVar6[5];
          if (piVar7 < (int *)plVar6[6]) {
                    /* catch() { ... } // from try @ 00642bd4 with catch @ 00642dd0 */
            *piVar7 = iVar3;
                    /* catch() { ... } // from try @ 00642b28 with catch @ 00642dd4 */
                    /* catch() { ... } // from try @ 00642b20 with catch @ 00642dd8 */
            plVar6[5] = (long)(piVar7 + 1);
            iVar4 = iVar3;
          }
          else {
            iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,iVar3);
          }
          lVar5 = *param_1;
          if (iVar4 == -1) {
            lVar5 = (long)param_1 + *(long *)(lVar5 + -0x18);
            FUN_006215c0(lVar5,*(uint *)(lVar5 + 0x20) | 1);
            lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
            goto LAB_00642be8;
          }
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) break;
          lVar5 = (long)param_1 + *(long *)(lVar5 + -0x18);
        }
        lVar5 = (long)param_1 + *(long *)(lVar5 + -0x18);
      }
    }
LAB_00642be8:
    if (*(int *)(lVar5 + 0x20) == 0) {
      lVar5 = (**(code **)(**(long **)(lVar5 + 0xe8) + 0x60))
                        (*(long **)(lVar5 + 0xe8),param_2,param_3);
      if (param_3 != lVar5) {
        lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_006215c0(lVar5,*(uint *)(lVar5 + 0x20) | 1);
      }
      if (bVar1) goto LAB_00642cd4;
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
      if (*(int *)(lVar5 + 0x20) == 0) {
        lVar10 = lVar10 - param_3;
        if (*(char *)(lVar5 + 0xe4) == '\0') {
          plVar6 = *(long **)(lVar5 + 0xf0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_006652c8();
          }
          iVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,0x20);
          lVar9 = *param_1;
          *(int *)(lVar5 + 0xe0) = iVar3;
          *(undefined1 *)(lVar5 + 0xe4) = 1;
          lVar5 = (long)param_1 + *(long *)(lVar9 + -0x18);
        }
        else {
          iVar3 = *(int *)(lVar5 + 0xe0);
        }
        if (0 < lVar10) {
          while( true ) {
                    /* try { // try from 00642d88 to 00742ec3 has its CatchHandler @ 00642fcc */
            plVar6 = *(long **)(lVar5 + 0xe8);
            piVar7 = (int *)plVar6[5];
                    /* catch() { ... } // from try @ 00642bac with catch @ 00642d94 */
            if (piVar7 < (int *)plVar6[6]) {
              *piVar7 = iVar3;
                    /* catch() { ... } // from try @ 00642c60 with catch @ 00642d64 */
              plVar6[5] = (long)(piVar7 + 1);
              iVar4 = iVar3;
            }
            else {
              iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,iVar3);
            }
            lVar5 = *param_1;
            if (iVar4 == -1) {
              lVar5 = (long)param_1 + *(long *)(lVar5 + -0x18);
              FUN_006215c0(lVar5,*(uint *)(lVar5 + 0x20) | 1);
              goto LAB_00642cd4;
            }
            lVar10 = lVar10 + -1;
            if (lVar10 == 0) break;
            lVar5 = (long)param_1 + *(long *)(lVar5 + -0x18);
          }
          goto LAB_00642cd8;
        }
      }
    }
  }
  else {
                    /* try { // try from 00642c9c to 00742ca7 has its CatchHandler @ 00642dc4 */
                    /* try { // try from 00642ca8 to 00742d87 has its CatchHandler @ 00642a94 */
    lVar10 = (**(code **)(**(long **)(lVar5 + 0xe8) + 0x60))
                       (*(long **)(lVar5 + 0xe8),param_2,param_3);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    if (param_3 != lVar10) {
      FUN_006215c0(lVar5,*(uint *)(lVar5 + 0x20) | 1);
LAB_00642cd4:
      lVar5 = *param_1;
LAB_00642cd8:
      lVar5 = (long)param_1 + *(long *)(lVar5 + -0x18);
    }
  }
                    /* try { // try from 00642bf0 to 00742c53 has its CatchHandler @ 00642fd8 */
  *(undefined8 *)(lVar5 + 0x10) = 0;
LAB_00642bf4:
  plVar6 = local_8;
  lVar5 = *(long *)(*local_8 + -0x18);
  if (((((*(uint *)((long)local_8 + lVar5 + 0x18) >> 0xd & 1) != 0) &&
       (cVar2 = std::uncaught_exception(), cVar2 == '\0')) &&
      (plVar6 = *(long **)((long)plVar6 + lVar5 + 0xe8), plVar6 != (long *)0x0)) &&
     (iVar3 = (**(code **)(*plVar6 + 0x30))(), iVar3 == -1)) {
                    /* try { // try from 00642c60 to 00742c67 has its CatchHandler @ 00642d64 */
    lVar5 = (long)local_8 + *(long *)(*local_8 + -0x18);
    FUN_006215c0(lVar5,*(uint *)(lVar5 + 0x20) | 1);
                    /* try { // try from 00642c80 to 00742c97 has its CatchHandler @ 00642dc8 */
    return param_1;
  }
  return param_1;
}


