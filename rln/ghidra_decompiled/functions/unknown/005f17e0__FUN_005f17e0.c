/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f17e0
 * Function: FUN_005f17e0
 * Signature: undefined FUN_005f17e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f17e0(long param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  long local_2c0 [9];
  char local_275 [525];
  long local_68;
  
                    /* try { // try from 005f17ec to 006f17ff has its CatchHandler @ 005f2204 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_005ef720(param_1,local_2c0);
                    /* try { // try from 005f182c to 006f183b has its CatchHandler @ 005f2280 */
  *(undefined4 *)(local_2c0[0] + 0x60) = param_4;
  if (*(int *)(param_1 + 0x10) != 0x28) {
    uVar20 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = FUN_0060072c(param_1,0x28);
    uVar7 = FUN_005ef3d4(uVar20,"\'%s\' expected",uVar7);
    FUN_00600968(param_1,uVar7);
  }
  FUN_00600a74(param_1);
  if (param_3 == 0) {
    plVar17 = *(long **)(param_1 + 0x30);
    lVar21 = *plVar17;
  }
  else {
    uVar7 = FUN_00600970(param_1,&DAT_0069a0b7,4);
    FUN_005f21a8(param_1,uVar7,0);
    plVar17 = *(long **)(param_1 + 0x30);
    lVar21 = *plVar17;
    bVar8 = *(char *)((long)plVar17 + 0x4a) + 1;
    *(byte *)((long)plVar17 + 0x4a) = bVar8;
    *(int *)(*(long *)(lVar21 + 0x30) +
             (ulong)*(ushort *)((long)plVar17 + (ulong)bVar8 * 2 + 0xc2) * 0x10 + 8) =
         (int)plVar17[6];
  }
  *(undefined1 *)(lVar21 + 0x72) = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != 0x29) {
    iVar18 = 0;
                    /* try { // try from 005f1900 to 006f1913 has its CatchHandler @ 005f2240 */
    iVar19 = iVar18;
    if (iVar5 != 0x11d) goto LAB_005f1924;
LAB_005f1944:
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    FUN_00600a74(param_1);
                    /* try { // try from 005f1960 to 006f1967 has its CatchHandler @ 005f2158 */
    FUN_005f21a8(param_1,uVar7,iVar18);
                    /* try { // try from 005f1968 to 006f197b has its CatchHandler @ 005f2154 */
    bVar8 = *(byte *)(lVar21 + 0x72);
    iVar18 = iVar18 + 1;
    do {
      if (bVar8 != 0) {
LAB_005f1980:
        bVar8 = bVar8 & 1;
        goto LAB_005f19c4;
      }
      if (*(int *)(param_1 + 0x10) != 0x2c) {
                    /* try { // try from 005f197c to 006f198f has its CatchHandler @ 005f215c */
        bVar8 = 0;
        goto LAB_005f1980;
      }
      FUN_00600a74(param_1);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar19 = iVar18;
      if (iVar5 == 0x11d) goto LAB_005f1944;
LAB_005f1924:
      if (iVar5 == 0x117) {
        FUN_00600a74(param_1);
                    /* try { // try from 005f1990 to 006f199f has its CatchHandler @ 005f2124 */
        uVar7 = FUN_00600970(param_1,&DAT_0069a0d5,3);
        iVar18 = iVar19 + 1;
        FUN_005f21a8(param_1,uVar7,iVar19);
        *(undefined1 *)(lVar21 + 0x72) = 7;
        bVar8 = 1;
                    /* try { // try from 005f19c0 to 006f19c3 has its CatchHandler @ 005f215c */
        goto LAB_005f19c4;
      }
      FUN_00600968(param_1,"<name> or \'...\' expected");
      bVar8 = *(byte *)(lVar21 + 0x72);
      iVar18 = iVar19;
    } while( true );
  }
  bVar8 = 0;
  iVar18 = 0;
LAB_005f19c4:
  plVar10 = *(long **)(param_1 + 0x30);
  uVar1 = iVar18 + (uint)*(byte *)((long)plVar10 + 0x4a);
  *(char *)((long)plVar10 + 0x4a) = (char)uVar1;
  if (iVar18 != 0) {
                    /* try { // try from 005f19d8 to 006f19eb has its CatchHandler @ 005f2120 */
    uVar6 = (undefined4)plVar10[6];
    lVar14 = (long)iVar18;
    lVar9 = *(long *)(*plVar10 + 0x30);
    uVar15 = (ulong)(iVar18 - 1U) + 1;
    uVar12 = (ulong)(uVar1 & 0xff);
    if (1 < uVar15) {
      uVar1 = ~(iVar18 - 1U) & 1;
      lVar13 = uVar15 - uVar1;
      lVar4 = lVar14 * -2;
                    /* try { // try from 005f1a18 to 006f1a27 has its CatchHandler @ 005f21cc */
      lVar14 = lVar14 - lVar13;
      puVar11 = (ushort *)((long)plVar10 + uVar12 * 2 + 0xc6 + lVar4);
      do {
        uVar2 = *puVar11;
        lVar13 = lVar13 + -2;
        *(undefined4 *)(lVar9 + (ulong)puVar11[-1] * 0x10 + 8) = uVar6;
        *(undefined4 *)(lVar9 + (ulong)uVar2 * 0x10 + 8) = uVar6;
        puVar11 = puVar11 + 2;
                    /* try { // try from 005f1a3c to 006f1a4f has its CatchHandler @ 005f211c */
      } while (lVar13 != 0);
      if (uVar1 == 0) goto LAB_005f1a6c;
    }
    iVar5 = -(int)lVar14;
    puVar11 = (ushort *)((long)plVar10 + uVar12 * 2 + 0xc4 + lVar14 * -2);
    do {
      iVar5 = iVar5 + 1;
      *(undefined4 *)(lVar9 + (ulong)*puVar11 * 0x10 + 8) = uVar6;
      puVar11 = puVar11 + 1;
    } while (iVar5 != 0);
  }
LAB_005f1a6c:
  *(byte *)(lVar21 + 0x71) = *(char *)((long)plVar17 + 0x4a) - bVar8;
                    /* try { // try from 005f1a7c to 006f1a8b has its CatchHandler @ 005f2194 */
  FUN_005fe088(plVar17);
  if (*(int *)(param_1 + 0x10) != 0x29) {
    uVar20 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = FUN_0060072c(param_1,0x29);
                    /* try { // try from 005f1aa4 to 006f1aab has its CatchHandler @ 005f2420 */
    uVar7 = FUN_005ef3d4(uVar20,"\'%s\' expected",uVar7);
    FUN_00600968(param_1,uVar7);
  }
  FUN_00600a74(param_1);
  uVar2 = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + 1;
  *(ushort *)(*(long *)(param_1 + 0x38) + 0x60) = uVar2;
  if (200 < uVar2) {
    FUN_006007a0(param_1,"chunk has too many syntax levels",0);
  }
  do {
    uVar1 = *(int *)(param_1 + 0x10) - 0x104;
    if ((uVar1 < 0x1c) && ((1 << (ulong)(uVar1 & 0x1f) & 0x8010007U) != 0)) break;
    iVar5 = FUN_005efacc(param_1);
    if (*(int *)(param_1 + 0x10) == 0x3b) {
      FUN_00600a74(param_1);
    }
    lVar21 = *(long *)(param_1 + 0x30);
    *(uint *)(lVar21 + 0x3c) = (uint)*(byte *)(lVar21 + 0x4a);
  } while (iVar5 == 0);
  *(short *)(*(long *)(param_1 + 0x38) + 0x60) = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + -1;
  *(undefined4 *)(local_2c0[0] + 100) = *(undefined4 *)(param_1 + 4);
  FUN_005f1098(param_1,0x106,0x109,param_4);
  FUN_005ef820(param_1);
  plVar17 = *(long **)(param_1 + 0x30);
  lVar21 = *plVar17;
  iVar5 = *(int *)(lVar21 + 0x58);
  if (*(int *)((long)plVar17 + 0x44) < iVar5) {
    iVar18 = iVar5;
    if (!SBORROW4(iVar5,iVar5)) goto LAB_005f1c04;
  }
  else {
    uVar7 = FUN_005eec70(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(lVar21 + 0x20),
                         (int *)(lVar21 + 0x58),8,0x3ffff,"constant table overflow");
    iVar18 = *(int *)(lVar21 + 0x58);
    *(undefined8 *)(lVar21 + 0x20) = uVar7;
    if (iVar18 <= iVar5) goto LAB_005f1c04;
  }
  lVar9 = (long)iVar5;
  do {
    lVar14 = lVar9 + 1;
    *(undefined8 *)(*(long *)(lVar21 + 0x20) + lVar9 * 8) = 0;
    lVar9 = lVar14;
  } while (iVar18 != lVar14);
LAB_005f1c04:
  iVar18 = *(int *)((long)plVar17 + 0x44);
  lVar9 = *(long *)(lVar21 + 0x20);
  iVar5 = iVar18 + 1;
                    /* try { // try from 005f1c14 to 006f1c1b has its CatchHandler @ 005f1c20 */
  *(int *)((long)plVar17 + 0x44) = iVar5;
  *(long *)(lVar9 + (long)iVar18 * 8) = local_2c0[0];
                    /* try { // try from 005f1c1c to 006f1c5f has its CatchHandler @ 005f08ec */
                    /* catch() { ... } // from try @ 005f1c14 with catch @ 005f1c20 */
  if (((*(byte *)(local_2c0[0] + 9) & 3) != 0) && ((*(byte *)(lVar21 + 9) >> 2 & 1) != 0)) {
                    /* catch() { ... } // from try @ 005f10a0 with catch @ 005f1c34 */
                    /* catch() { ... } // from try @ 005f104c with catch @ 005f1c3c */
    FUN_005ee334(*(undefined8 *)(param_1 + 0x38),lVar21);
    iVar5 = *(int *)((long)plVar17 + 0x44);
  }
  uVar6 = FUN_005fdc7c(plVar17,0x24,0,iVar5 + -1);
                    /* try { // try from 005f1c60 to 006f1c67 has its CatchHandler @ 005f1c6c */
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  *param_2 = 0xb;
  param_2[2] = uVar6;
                    /* catch() { ... } // from try @ 005f1c60 with catch @ 005f1c6c */
                    /* catch() { ... } // from try @ 005f107c with catch @ 005f1c70 */
  if (*(char *)(local_2c0[0] + 0x70) != '\0') {
    uVar15 = 0;
                    /* catch() { ... } // from try @ 005f1000 with catch @ 005f1c80 */
    pcVar16 = local_275 + 1;
    do {
      uVar6 = 0;
      if (pcVar16[-1] != '\x06') {
        uVar6 = 4;
      }
                    /* try { // try from 005f1ca4 to 006f1cab has its CatchHandler @ 005f1cb0 */
      FUN_005fdb84(plVar17,uVar6,0,*pcVar16,0);
      uVar15 = uVar15 + 1;
                    /* catch() { ... } // from try @ 005f1ca4 with catch @ 005f1cb0 */
                    /* catch() { ... } // from try @ 005f10c8 with catch @ 005f1cb4 */
      pcVar16 = pcVar16 + 2;
    } while (uVar15 < *(byte *)(local_2c0[0] + 0x70));
  }
                    /* catch() { ... } // from try @ 005f0d08 with catch @ 005f1cbc */
                    /* catch() { ... } // from try @ 005f101c with catch @ 005f1cc0 */
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005f1ce4 to 006f1cef has its CatchHandler @ 005f1dcc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


