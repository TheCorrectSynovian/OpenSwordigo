/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ff9d0
 * Function: FUN_005ff9d0
 * Signature: undefined FUN_005ff9d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ff9d0(long *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
                    /* catch() { ... } // from try @ 005ff964 with catch @ 005ffa28 */
    if (((*param_3 != 5) || (param_3[4] != -1)) || (param_3[5] != -1))
    goto switchD_005ffa08_caseD_7;
    break;
  case 6:
                    /* catch() { ... } // from try @ 005ff88c with catch @ 005ffa50 */
                    /* catch() { ... } // from try @ 005ff844 with catch @ 005ffa60 */
    FUN_005fe5c0(param_1,param_3);
    return;
  default:
switchD_005ffa08_caseD_7:
                    /* catch() { ... } // from try @ 005ff91c with catch @ 005ffa30 */
                    /* catch() { ... } // from try @ 005ff8d4 with catch @ 005ffa40 */
    FUN_005feb5c(param_1,param_3);
    return;
  case 0xd:
                    /* catch() { ... } // from try @ 005ff7fc with catch @ 005ffa70 */
                    /* catch() { ... } // from try @ 005ff7b4 with catch @ 005ffa80 */
    FUN_005ff07c(param_1,param_3);
    return;
  case 0xe:
    FUN_005fe488(param_1,param_3);
                    /* catch() { ... } // from try @ 005ff76c with catch @ 005ffa90 */
    iVar2 = *param_3;
                    /* catch() { ... } // from try @ 005ff71c with catch @ 005ffaa0 */
    if ((iVar2 != 1) && (iVar2 != 3)) {
                    /* catch() { ... } // from try @ 005ff6d4 with catch @ 005ffaa8 */
      if (iVar2 == 10) {
        iVar2 = param_3[2];
      }
      else {
                    /* catch() { ... } // from try @ 005ff644 with catch @ 005ffac8 */
        iVar2 = FUN_005ff268(param_1,param_3,1);
      }
      if (iVar2 != -1) {
        if (param_3[4] == 0xffffffff) {
          param_3[4] = iVar2;
        }
        else {
                    /* try { // try from 005ffaec to 006ffe53 has its CatchHandler @ 005ffe74 */
          lVar6 = *(long *)(*param_1 + 0x18);
          uVar5 = param_3[4];
          do {
            uVar4 = uVar5;
            uVar3 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
            iVar1 = (uVar3 >> 0xe) - 0x1ffff;
            uVar5 = 0xffffffff;
            if (iVar1 != -1) {
              uVar5 = uVar4 + iVar1 + 1;
            }
          } while (uVar5 != 0xffffffff);
          iVar2 = iVar2 + ~uVar4;
          iVar1 = -iVar2;
          if (-1 < iVar2) {
            iVar1 = iVar2;
          }
          if (0x1ffff < iVar1) {
            FUN_00600968(param_1[3],"control structure too long");
            uVar3 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
          }
          *(uint *)(lVar6 + (long)(int)uVar4 * 4) = iVar2 * 0x4000 + 0x7fffc000U | uVar3 & 0x3fff;
        }
      }
    }
    iVar2 = param_3[5];
    *(int *)((long)param_1 + 0x34) = (int)param_1[6];
    if (iVar2 != -1) {
      if (*(uint *)(param_1 + 7) == 0xffffffff) {
        *(int *)(param_1 + 7) = iVar2;
      }
      else {
        lVar6 = *(long *)(*param_1 + 0x18);
        uVar5 = *(uint *)(param_1 + 7);
        do {
          uVar4 = uVar5;
          uVar3 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
          iVar1 = (uVar3 >> 0xe) - 0x1ffff;
          uVar5 = 0xffffffff;
          if (iVar1 != -1) {
            uVar5 = uVar4 + iVar1 + 1;
          }
        } while (uVar5 != 0xffffffff);
        iVar2 = iVar2 + ~uVar4;
                    /* catch() { ... } // from try @ 005ff748 with catch @ 005ffbb0 */
        iVar1 = -iVar2;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        if (0x1ffff < iVar1) {
          FUN_00600968(param_1[3],"control structure too long");
          uVar3 = *(uint *)(lVar6 + (long)(int)uVar4 * 4);
        }
        *(uint *)(lVar6 + (long)(int)uVar4 * 4) = iVar2 * 0x4000 + 0x7fffc000U | uVar3 & 0x3fff;
      }
    }
    param_3[5] = -1;
  }
  return;
}


