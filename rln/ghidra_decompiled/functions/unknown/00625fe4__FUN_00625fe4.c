/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625fe4
 * Function: FUN_00625fe4
 * Signature: undefined FUN_00625fe4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00625fe4(undefined1 *param_1,long *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  
  lVar5 = *(long *)(*param_2 + -0x18);
  *param_1 = 0;
  lVar5 = (long)param_2 + lVar5;
  uVar6 = *(uint *)(lVar5 + 0x20);
  if (uVar6 == 0) {
    if (*(long *)(lVar5 + 0xd8) == 0) {
      if (param_3 != '\0') goto LAB_0062603c;
LAB_00626078:
      if ((*(uint *)(lVar5 + 0x18) >> 0xc & 1) != 0) {
        plVar7 = *(long **)(lVar5 + 0xe8);
                    /* try { // try from 0062608c to 0072608f has its CatchHandler @ 006262cc */
        if ((int *)plVar7[2] < (int *)plVar7[3]) {
          iVar2 = *(int *)plVar7[2];
        }
        else {
          iVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);
          lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
                    /* try { // try from 00626174 to 0072619f has its CatchHandler @ 006262e0 */
        }
        plVar8 = *(long **)(lVar5 + 0xf0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_006652c8();
        }
        if (iVar2 != -1) {
          do {
            cVar1 = (**(code **)(*plVar8 + 0x10))(plVar8,8);
            if (cVar1 == '\0') {
              lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
              goto LAB_00626034;
            }
            piVar4 = (int *)plVar7[2];
            if (piVar4 < (int *)plVar7[3]) {
              iVar2 = *piVar4;
              plVar7[2] = (long)(piVar4 + 1);
            }
            else {
                    /* try { // try from 0062612c to 00726137 has its CatchHandler @ 006262d0 */
              iVar2 = (**(code **)(*plVar7 + 0x50))(plVar7);
            }
            if (iVar2 == -1) break;
            if ((int *)plVar7[2] < (int *)plVar7[3]) {
              iVar2 = *(int *)plVar7[2];
            }
            else {
              iVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);
            }
          } while (iVar2 != -1);
          lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
        }
        uVar6 = *(uint *)(lVar5 + 0x20);
        uVar3 = 2;
        goto LAB_00626058;
      }
    }
    else {
      FUN_00641e9c();
      lVar5 = (long)param_2 + *(long *)(*param_2 + -0x18);
      if (param_3 == '\0') goto LAB_00626078;
    }
LAB_00626034:
    uVar6 = *(uint *)(lVar5 + 0x20);
    if (uVar6 == 0) {
LAB_0062603c:
      *param_1 = 1;
      return;
    }
  }
  uVar3 = 0;
LAB_00626058:
  FUN_006215c0(lVar5,uVar3 | 4 | uVar6);
  return;
}


