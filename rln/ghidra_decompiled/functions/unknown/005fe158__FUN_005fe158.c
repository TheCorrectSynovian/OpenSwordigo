/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe158
 * Function: FUN_005fe158
 * Signature: undefined FUN_005fe158(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fe158(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar12 = param_1[4];
  pdVar4 = (double *)FUN_005f4320(lVar12,param_1[1],param_2);
  lVar13 = *param_1;
                    /* try { // try from 005fe198 to 006fe1bf has its CatchHandler @ 005fee54 */
  iVar3 = *(int *)(lVar13 + 0x4c);
  lVar14 = (long)iVar3;
  if (*(int *)(pdVar4 + 1) == 3) {
    return (int)*pdVar4;
  }
  lVar5 = param_1[8];
  *(undefined4 *)(pdVar4 + 1) = 3;
                    /* try { // try from 005fe1c4 to 006fe1cf has its CatchHandler @ 005fee50 */
  *pdVar4 = (double)(int)lVar5;
  iVar2 = *(int *)(lVar13 + 0x4c);
  if ((int)param_1[8] < iVar2) {
    lVar5 = *(long *)(lVar13 + 0x10);
  }
  else {
    lVar5 = FUN_005eec70(lVar12,*(undefined8 *)(lVar13 + 0x10),(int *)(lVar13 + 0x4c),0x10,0x3ffff,
                         "constant table overflow");
    iVar2 = *(int *)(lVar13 + 0x4c);
    *(long *)(lVar13 + 0x10) = lVar5;
  }
                    /* try { // try from 005fe210 to 006fe237 has its CatchHandler @ 005fec9c */
  if (iVar3 < iVar2) {
    lVar6 = (long)iVar2;
    lVar7 = lVar14 + 1;
    *(undefined4 *)(lVar5 + lVar14 * 0x10 + 8) = 0;
    if (lVar7 < lVar6) {
      uVar8 = (lVar6 + -1) - lVar14;
      if (1 < uVar8) {
        uVar10 = uVar8 & 0xfffffffffffffffe;
        lVar7 = lVar7 + uVar10;
        puVar9 = (undefined4 *)(lVar5 + lVar14 * 0x10 + 0x28);
        uVar11 = uVar10;
        do {
          puVar9[-4] = 0;
          *puVar9 = 0;
                    /* try { // try from 005fe258 to 006fe27f has its CatchHandler @ 005fee50 */
          uVar11 = uVar11 - 2;
          puVar9 = puVar9 + 8;
        } while (uVar11 != 0);
        if (uVar8 == uVar10) goto LAB_005fe280;
      }
      puVar9 = (undefined4 *)(lVar5 + lVar7 * 0x10 + 8);
      do {
        lVar7 = lVar7 + 1;
        *puVar9 = 0;
        puVar9 = puVar9 + 4;
      } while (lVar7 < lVar6);
    }
  }
LAB_005fe280:
  plVar1 = (long *)(lVar5 + (long)(int)param_1[8] * 0x10);
  *plVar1 = *param_3;
  *(int *)(plVar1 + 1) = (int)param_3[1];
                    /* try { // try from 005fe2ac to 006fe2bf has its CatchHandler @ 005fee64 */
  if (((3 < (int)param_3[1]) && ((*(byte *)(*param_3 + 9) & 3) != 0)) &&
     ((*(byte *)(lVar13 + 9) >> 2 & 1) != 0)) {
                    /* try { // try from 005fe2c0 to 006fe33f has its CatchHandler @ 005fde3c */
    FUN_005ee334(lVar12,lVar13);
  }
  lVar12 = param_1[8];
  *(int *)(param_1 + 8) = (int)lVar12 + 1;
  return (int)lVar12;
}


