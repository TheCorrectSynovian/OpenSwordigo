/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe674
 * Function: FUN_005fe674
 * Signature: undefined FUN_005fe674(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe674(long *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  FUN_00600404();
                    /* try { // try from 005fe6a0 to 006fe6c7 has its CatchHandler @ 005fefa4 */
  if ((*param_2 == 10) && (iVar12 = param_2[2], iVar12 != -1)) {
    if (param_2[4] != 0xffffffff) {
      lVar13 = *(long *)(*param_1 + 0x18);
      uVar10 = param_2[4];
      do {
        uVar5 = uVar10;
        uVar9 = *(uint *)(lVar13 + (long)(int)uVar5 * 4);
        iVar14 = (uVar9 >> 0xe) - 0x1ffff;
        uVar10 = 0xffffffff;
                    /* try { // try from 005fe6e8 to 006fe70f has its CatchHandler @ 005ff010 */
        if (iVar14 != -1) {
          uVar10 = uVar5 + iVar14 + 1;
        }
      } while (uVar10 != 0xffffffff);
      iVar12 = iVar12 + ~uVar5;
      iVar14 = -iVar12;
      if (-1 < iVar12) {
        iVar14 = iVar12;
      }
      if (0x1ffff < iVar14) {
        FUN_00600968(param_1[3],"control structure too long");
        uVar9 = *(uint *)(lVar13 + (long)(int)uVar5 * 4);
      }
                    /* try { // try from 005fe720 to 006fe727 has its CatchHandler @ 005ff008 */
      *(uint *)(lVar13 + (long)(int)uVar5 * 4) = iVar12 * 0x4000 + 0x7fffc000U | uVar9 & 0x3fff;
      goto LAB_005fe730;
    }
    param_2[4] = iVar12;
  }
  else {
LAB_005fe730:
    iVar12 = param_2[4];
  }
  iVar14 = param_2[5];
  if (iVar12 == iVar14) goto LAB_005fea18;
  if (iVar12 != -1) {
    do {
      puVar1 = (uint *)(*(long *)(*param_1 + 0x18) + (long)iVar12 * 4);
                    /* try { // try from 005fe768 to 006fe78f has its CatchHandler @ 005fef54 */
      if ((iVar12 < 1) || (uVar10 = puVar1[-1], -1 < (char)(&DAT_00699dd1)[(ulong)uVar10 & 0x3f])) {
        uVar10 = *puVar1;
      }
      if ((uVar10 & 0x3f) != 0x1b) goto LAB_005fe818;
      iVar2 = (*puVar1 >> 0xe) - 0x1ffff;
      iVar3 = iVar12 + iVar2;
      iVar12 = -1;
      if (iVar2 != -1) {
        iVar12 = iVar3 + 1;
      }
    } while (iVar12 != -1);
  }
  if (iVar14 == -1) {
    uVar7 = 0xffffffff;
    uVar6 = 0xffffffff;
  }
  else {
                    /* try { // try from 005fe7b0 to 006fe7d7 has its CatchHandler @ 005ff008 */
    uVar7 = 0xffffffff;
    do {
      puVar1 = (uint *)(*(long *)(*param_1 + 0x18) + (long)iVar14 * 4);
      if ((iVar14 < 1) || (uVar10 = puVar1[-1], -1 < (char)(&DAT_00699dd1)[(ulong)uVar10 & 0x3f])) {
        uVar10 = *puVar1;
      }
      if ((uVar10 & 0x3f) != 0x1b) goto LAB_005fe818;
      iVar12 = (*puVar1 >> 0xe) - 0x1ffff;
      iVar2 = iVar14 + iVar12;
      iVar14 = -1;
      if (iVar12 != -1) {
        iVar14 = iVar2 + 1;
      }
    } while (iVar14 != -1);
    uVar6 = 0xffffffff;
  }
  goto LAB_005fe9e0;
LAB_005fe818:
                    /* try { // try from 005fe818 to 006fe82b has its CatchHandler @ 005ff00c */
  if (*param_2 == 10) {
                    /* try { // try from 005fe82c to 006fe89b has its CatchHandler @ 005fde3c */
    uVar9 = 0xffffffff;
  }
  else {
    uVar10 = *(uint *)(param_1 + 7);
    *(uint *)(param_1 + 7) = 0xffffffff;
    uVar5 = FUN_006001e8(param_1,0x7fff8016,*(undefined4 *)(param_1[3] + 8));
    uVar9 = uVar5;
    if ((uVar10 != 0xffffffff) && (uVar9 = uVar10, uVar5 != 0xffffffff)) {
      lVar13 = *(long *)(*param_1 + 0x18);
      uVar9 = uVar5;
      do {
        uVar11 = uVar9;
        uVar8 = *(uint *)(lVar13 + (long)(int)uVar11 * 4);
        iVar12 = (uVar8 >> 0xe) - 0x1ffff;
        uVar9 = 0xffffffff;
                    /* try { // try from 005fe89c to 006fe89f has its CatchHandler @ 005feddc */
        if (iVar12 != -1) {
          uVar9 = uVar11 + iVar12 + 1;
        }
                    /* try { // try from 005fe8a0 to 006fe8ff has its CatchHandler @ 005fde3c */
      } while (uVar9 != 0xffffffff);
      iVar12 = uVar10 + ~uVar11;
      iVar14 = -iVar12;
      if (-1 < iVar12) {
        iVar14 = iVar12;
      }
      if (0x1ffff < iVar14) {
        FUN_00600968(param_1[3],"control structure too long");
        uVar8 = *(uint *)(lVar13 + (long)(int)uVar11 * 4);
      }
      *(uint *)(lVar13 + (long)(int)uVar11 * 4) = iVar12 * 0x4000 + 0x7fffc000U | uVar8 & 0x3fff;
      uVar9 = uVar5;
    }
  }
                    /* try { // try from 005fe900 to 006fe917 has its CatchHandler @ 005fedfc */
  *(int *)((long)param_1 + 0x34) = (int)param_1[6];
  uVar6 = FUN_006001e8(param_1,param_3 << 6 | 0x4002,*(undefined4 *)(param_1[3] + 8));
  *(int *)((long)param_1 + 0x34) = (int)param_1[6];
  uVar7 = FUN_006001e8(param_1,param_3 << 6 | 0x800002,*(undefined4 *)(param_1[3] + 8));
                    /* try { // try from 005fe958 to 006fe97f has its CatchHandler @ 005febac */
  *(int *)((long)param_1 + 0x34) = (int)param_1[6];
  if (uVar9 != 0xffffffff) {
    uVar10 = *(uint *)(param_1 + 7);
    if (uVar10 == 0xffffffff) {
      *(uint *)(param_1 + 7) = uVar9;
    }
    else {
      lVar13 = *(long *)(*param_1 + 0x18);
      do {
        uVar8 = uVar10;
        uVar5 = *(uint *)(lVar13 + (long)(int)uVar8 * 4);
        iVar12 = (uVar5 >> 0xe) - 0x1ffff;
        uVar10 = 0xffffffff;
        if (iVar12 != -1) {
          uVar10 = uVar8 + iVar12 + 1;
        }
      } while (uVar10 != 0xffffffff);
                    /* try { // try from 005fe9a0 to 006fe9c7 has its CatchHandler @ 005fedfc */
      iVar12 = uVar9 + ~uVar8;
      iVar14 = -iVar12;
      if (-1 < iVar12) {
        iVar14 = iVar12;
      }
      if (0x1ffff < iVar14) {
        FUN_00600968(param_1[3],"control structure too long");
        uVar5 = *(uint *)(lVar13 + (long)(int)uVar8 * 4);
      }
                    /* try { // try from 005fe9d4 to 006fe9db has its CatchHandler @ 005fede0 */
      *(uint *)(lVar13 + (long)(int)uVar8 * 4) = iVar12 * 0x4000 + 0x7fffc000U | uVar5 & 0x3fff;
    }
  }
LAB_005fe9e0:
  uVar4 = (undefined4)param_1[6];
  *(undefined4 *)((long)param_1 + 0x34) = uVar4;
  FUN_005fdedc(param_1,param_2[5],uVar4,param_3,uVar6);
  FUN_005fdedc(param_1,param_2[4],uVar4,param_3,uVar7);
LAB_005fea18:
                    /* try { // try from 005fea1c to 006fea43 has its CatchHandler @ 005feb5c */
  param_2[2] = param_3;
  param_2[4] = -1;
  param_2[5] = -1;
  *param_2 = 0xc;
  return;
}


