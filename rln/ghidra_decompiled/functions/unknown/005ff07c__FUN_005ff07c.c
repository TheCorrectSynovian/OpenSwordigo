/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ff07c
 * Function: FUN_005ff07c
 * Signature: undefined FUN_005ff07c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ff07c(long *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  FUN_005fe488();
  iVar3 = *param_2;
                    /* try { // try from 005ff0a8 to 006ff0af has its CatchHandler @ 005ff210 */
  if ((iVar3 - 4U < 2) || (iVar3 == 2)) goto LAB_005ff1b8;
  if (iVar3 == 10) {
    puVar2 = (uint *)(*(long *)(*param_1 + 0x18) + (long)param_2[2] * 4);
    if (param_2[2] < 1) {
LAB_005ff0f0:
      uVar7 = (ulong)*puVar2;
      puVar5 = puVar2;
    }
    else {
      puVar5 = puVar2 + -1;
      uVar7 = (ulong)*puVar5;
      if (-1 < (char)(&DAT_00699dd1)[uVar7 & 0x3f]) goto LAB_005ff0f0;
    }
    *puVar5 = (uint)uVar7 & 0xffffc000 | (uint)uVar7 & 0x3f | (uint)((uVar7 & 0x3fc0) == 0) << 6;
    iVar3 = param_2[2];
  }
  else {
    iVar3 = FUN_005ff268(param_1,param_2,0);
  }
  if (iVar3 != -1) {
                    /* try { // try from 005ff138 to 006ff1db has its CatchHandler @ 005ff068 */
    if (param_2[5] == 0xffffffff) {
      param_2[5] = iVar3;
    }
    else {
      lVar9 = *(long *)(*param_1 + 0x18);
      uVar8 = param_2[5];
      do {
        uVar6 = uVar8;
        uVar4 = *(uint *)(lVar9 + (long)(int)uVar6 * 4);
        iVar1 = (uVar4 >> 0xe) - 0x1ffff;
        uVar8 = 0xffffffff;
        if (iVar1 != -1) {
          uVar8 = uVar6 + iVar1 + 1;
        }
      } while (uVar8 != 0xffffffff);
      iVar3 = iVar3 + ~uVar6;
      iVar1 = -iVar3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      if (0x1ffff < iVar1) {
        FUN_00600968(param_1[3],"control structure too long");
        uVar4 = *(uint *)(lVar9 + (long)(int)uVar6 * 4);
      }
      *(uint *)(lVar9 + (long)(int)uVar6 * 4) = iVar3 * 0x4000 + 0x7fffc000U | uVar4 & 0x3fff;
    }
  }
LAB_005ff1b8:
                    /* catch() { ... } // from try @ 005ff110 with catch @ 005ff1b8 */
  iVar3 = param_2[4];
  *(int *)((long)param_1 + 0x34) = (int)param_1[6];
  if (iVar3 != -1) {
    if (*(uint *)(param_1 + 7) == 0xffffffff) {
      *(int *)(param_1 + 7) = iVar3;
    }
    else {
                    /* try { // try from 005ff1dc to 006ff203 has its CatchHandler @ 005ff20c */
      lVar9 = *(long *)(*param_1 + 0x18);
      uVar8 = *(uint *)(param_1 + 7);
      do {
        uVar6 = uVar8;
        uVar4 = *(uint *)(lVar9 + (long)(int)uVar6 * 4);
        iVar1 = (uVar4 >> 0xe) - 0x1ffff;
        uVar8 = 0xffffffff;
        if (iVar1 != -1) {
          uVar8 = uVar6 + iVar1 + 1;
        }
                    /* try { // try from 005ff204 to 006ff21b has its CatchHandler @ 005ff068 */
      } while (uVar8 != 0xffffffff);
                    /* catch() { ... } // from try @ 005ff1dc with catch @ 005ff20c */
                    /* catch() { ... } // from try @ 005ff0a8 with catch @ 005ff210 */
      iVar3 = iVar3 + ~uVar6;
      iVar1 = -iVar3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
                    /* try { // try from 005ff21c to 006ff21f has its CatchHandler @ 005ff220 */
      if (0x1ffff < iVar1) {
                    /* catch() { ... } // from try @ 005ff21c with catch @ 005ff220 */
                    /* try { // try from 005ff224 to 006ff227 has its CatchHandler @ 005ff22c */
                    /* catch() { ... } // from try @ 005ff224 with catch @ 005ff22c */
        FUN_00600968(param_1[3],"control structure too long");
        uVar4 = *(uint *)(lVar9 + (long)(int)uVar6 * 4);
      }
      *(uint *)(lVar9 + (long)(int)uVar6 * 4) = iVar3 * 0x4000 + 0x7fffc000U | uVar4 & 0x3fff;
    }
  }
  param_2[4] = -1;
  return;
}


