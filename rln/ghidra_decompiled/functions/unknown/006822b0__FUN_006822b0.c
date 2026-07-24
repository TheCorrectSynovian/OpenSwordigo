/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006822b0
 * Function: FUN_006822b0
 * Signature: undefined FUN_006822b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006822b0(ulong *param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  int *piVar16;
  ulong uVar17;
  int *piVar18;
  ulong *puVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  piVar16 = (int *)param_1[2];
  uVar17 = *param_1;
  if ((param_2 < 0x30) || ((int)param_3[5] == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_007e8a58) && (param_1[5] == DAT_007fe3c8)) {
                    /* catch() { ... } // from try @ 00682240 with catch @ 00682314 */
      puVar19 = DAT_007fe3d0;
      puVar13 = (ulong *)0x0;
      puVar15 = (ulong *)0x0;
      while (puVar10 = puVar19, puVar10 != (ulong *)0x0) {
        if ((*puVar10 <= *param_3) && (*param_3 < puVar10[1])) {
          uVar17 = puVar10[2];
          piVar18 = (int *)puVar10[3];
          if (puVar10 != DAT_007fe3d0) {
                    /* catch() { ... } // from try @ 0068222c with catch @ 0068234c */
                    /* catch() { ... } // from try @ 00682208 with catch @ 00682350 */
            puVar15[5] = puVar10[5];
            puVar10[5] = (ulong)DAT_007fe3d0;
            DAT_007fe3d0 = puVar10;
          }
          goto LAB_006824c0;
        }
        puVar13 = puVar10;
        if (*puVar10 == 0 && puVar10[1] == 0) break;
        puVar19 = (ulong *)puVar10[5];
        if (puVar19 != (ulong *)0x0) {
          puVar15 = puVar10;
        }
      }
      goto LAB_006823e0;
    }
    puVar11 = &DAT_007fe408;
    DAT_007e8a58 = param_1[4];
    DAT_007fe3c8 = param_1[5];
    do {
      puVar11[-6] = 0;
      puVar11[-5] = 0;
      puVar11[-1] = puVar11;
      puVar11 = puVar11 + 6;
    } while (puVar11 != (undefined8 *)0x7fe588);
    DAT_007fe550 = 0;
    DAT_007fe3d0 = &DAT_007fe3d8;
                    /* catch() { ... } // from try @ 006821f0 with catch @ 006823c0 */
    *(undefined4 *)(param_3 + 5) = 0;
                    /* try { // try from 006823c4 to 007823eb has its CatchHandler @ 006823c4
                       catch() { ... } // from try @ 006823c4 with catch @ 006823c4
                       catch() { ... } // from try @ 00682410 with catch @ 006823c4
                       catch() { ... } // from try @ 006824b4 with catch @ 006823c4 */
  }
  puVar15 = (ulong *)0x0;
  puVar13 = (ulong *)0x0;
LAB_006823e0:
  uVar22 = (ulong)(ushort)param_1[3];
  uVar9 = 0;
  uVar14 = 0;
                    /* try { // try from 006823ec to 007823ff has its CatchHandler @ 006825b8 */
  bVar4 = false;
  piVar21 = (int *)0x0;
  piVar18 = (int *)0x0;
  while (uVar22 = uVar22 - 1, uVar22 != 0xffffffffffffffff) {
                    /* try { // try from 00682404 to 0078240f has its CatchHandler @ 00682578 */
    iVar3 = *piVar16;
    piVar20 = piVar18;
    if (iVar3 == 1) {
                    /* try { // try from 00682410 to 00782437 has its CatchHandler @ 006823c4 */
      uVar12 = uVar17 + *(long *)(piVar16 + 4);
      if ((uVar12 <= *param_3) && (*param_3 < uVar12 + *(long *)(piVar16 + 10))) {
                    /* try { // try from 00682438 to 007824b3 has its CatchHandler @ 006825c4 */
        bVar4 = true;
        uVar9 = uVar12 + *(long *)(piVar16 + 10);
        uVar14 = uVar12;
      }
    }
    else {
      piVar20 = piVar16;
      if ((iVar3 != 0x6474e550) && (piVar20 = piVar18, iVar3 == 2)) {
        piVar21 = piVar16;
      }
    }
    piVar16 = piVar16 + 0xe;
    piVar18 = piVar20;
  }
  if (!bVar4) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar15 != (ulong *)0x0) && (puVar13 != (ulong *)0x0)) {
      puVar15[5] = puVar13[5];
      puVar13[5] = (ulong)DAT_007fe3d0;
      DAT_007fe3d0 = puVar13;
    }
    puVar13 = DAT_007fe3d0;
    DAT_007fe3d0[2] = uVar17;
    puVar13[3] = (ulong)piVar18;
                    /* try { // try from 006824b4 to 0078262f has its CatchHandler @ 006823c4 */
    puVar13[4] = (ulong)piVar21;
    *puVar13 = uVar14;
    puVar13[1] = uVar9;
  }
LAB_006824c0:
  if (piVar18 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar17 + *(long *)(piVar18 + 4);
  if (*(char *)(uVar17 + *(long *)(piVar18 + 4)) != '\x01') {
    return 1;
  }
  uVar6 = *(undefined1 *)(lVar1 + 1);
  uVar7 = FUN_00681e64(uVar6,param_3);
  uVar7 = FUN_00681ec4(uVar6,uVar7,lVar1 + 4,&local_40);
  cVar2 = *(char *)(lVar1 + 2);
  if ((cVar2 != -1) && (*(char *)(lVar1 + 3) == ';')) {
    uVar8 = FUN_00681e64(cVar2,param_3);
    piVar16 = (int *)FUN_00681ec4(cVar2,uVar8,uVar7,&local_38);
    if (local_38 == 0) {
      return 1;
    }
    if (((ulong)piVar16 & 3) == 0) {
      uVar17 = *param_3;
      if (uVar17 < (ulong)(lVar1 + *piVar16)) {
        return 1;
      }
      uVar9 = local_38 - 1;
                    /* catch() { ... } // from try @ 00682404 with catch @ 00682578 */
      if (uVar17 < (ulong)(lVar1 + piVar16[uVar9 * 2])) {
        uVar14 = 0;
        uVar22 = uVar9;
        do {
          uVar12 = uVar22;
          if (uVar12 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar9 = uVar12 + uVar14 >> 1;
          uVar22 = uVar9;
        } while ((uVar17 < (ulong)(lVar1 + piVar16[uVar9 * 2])) ||
                (uVar14 = uVar9 + 1, uVar22 = uVar12,
                (ulong)(lVar1 + piVar16[uVar9 * 2 + 2]) <= uVar17
                    /* catch() { ... } // from try @ 006823ec with catch @ 006825b8 */));
      }
      uVar17 = lVar1 + piVar16[uVar9 * 2 + 1];
      bVar5 = FUN_006822a0(uVar17);
      uVar14 = FUN_00681da4(bVar5);
      FUN_00681ec4(bVar5 & 0xf,0,uVar17 + (uVar14 & 0xffffffff) + 8,&local_30);
      iVar3 = piVar16[uVar9 * 2];
      if (*param_3 < (ulong)(lVar1 + iVar3 + local_30)) {
        param_3[4] = uVar17;
      }
      param_3[3] = lVar1 + iVar3;
      return 1;
                    /* try { // try from 00682630 to 00782657 has its CatchHandler @ 00682630
                       catch() { ... } // from try @ 00682630 with catch @ 00682630
                       catch() { ... } // from try @ 0068267c with catch @ 00682630 */
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
                    /* try { // try from 00682658 to 0078266b has its CatchHandler @ 006827b8 */
  local_30 = 0;
  local_18 = local_40;
  uVar17 = FUN_00682140(&local_30,local_40,*param_3);
  param_3[4] = uVar17;
  if (uVar17 != 0) {
                    /* try { // try from 00682670 to 0078267b has its CatchHandler @ 00682748 */
    uVar6 = FUN_006822a0();
                    /* try { // try from 0068267c to 007827bb has its CatchHandler @ 00682630 */
    uVar7 = FUN_00681e64(uVar6,param_3);
    FUN_00681ec4(uVar6,uVar7,param_3[4] + 8,&local_38);
    param_3[3] = local_38;
  }
  return 1;
}


