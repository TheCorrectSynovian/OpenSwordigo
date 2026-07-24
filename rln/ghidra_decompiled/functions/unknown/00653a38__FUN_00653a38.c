/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00653a38
 * Function: FUN_00653a38
 * Signature: undefined FUN_00653a38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00653a38(undefined8 param_1,long *param_2,char param_3,long param_4,undefined4 param_5,
            long param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined4 auStack_120 [40];
  undefined1 auStack_80 [16];
  
                    /* try { // try from 00653a48 to 00753a4b has its CatchHandler @ 00653a84 */
  lVar9 = FUN_0063c4d0(&DAT_007fd2a8);
  lVar13 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar14 = *(long *)(lVar13 + lVar9 * 8);
                    /* catch() { ... } // from try @ 00653a48 with catch @ 00653a84 */
  if (lVar14 == 0) {
    puVar10 = operator_new(0x150);
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &PTR_FUN_007b7c80;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    *(undefined4 *)(puVar10 + 9) = 0;
    *(undefined4 *)((long)puVar10 + 0x4c) = 0;
    *(undefined1 *)(puVar10 + 0x29) = 0;
    FUN_0064fe98(puVar10,param_4 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar9);
                    /* try { // try from 00653c94 to 00753e3f has its CatchHandler @ 00653c94
                       catch() { ... } // from try @ 00653c94 with catch @ 00653c94
                       catch() { ... } // from try @ 00653e70 with catch @ 00653c94
                       catch() { ... } // from try @ 00653f30 with catch @ 00653c94 */
    lVar14 = *(long *)(lVar13 + lVar9 * 8);
  }
  uVar2 = *(uint *)(param_4 + 0x18);
  puVar4 = auStack_120;
  puVar5 = auStack_120;
  uVar1 = uVar2 & 0x4a;
  bVar6 = uVar1 != 8;
  bVar7 = uVar1 != 0x40;
  lVar9 = -param_6;
  if ((bVar6 && bVar7) <= (0 < param_6)) {
    lVar9 = param_6;
  }
                    /* try { // try from 00653ad0 to 00753ad7 has its CatchHandler @ 00653b2c */
  iVar8 = FUN_0065398c(auStack_80,lVar9,lVar14 + 0x50,uVar2,bVar6 && bVar7);
  puVar11 = auStack_120 + (0x28 - iVar8);
  if (*(char *)(lVar14 + 0x20) == '\0') {
    puVar12 = puVar11;
    if (!bVar6 || !bVar7) {
LAB_00653bf0:
      puVar11 = puVar12;
      if (((uVar2 >> 9 & 1) != 0) && (param_6 != 0)) {
        if (uVar1 == 0x40) {
          iVar8 = iVar8 + 1;
          puVar12[-1] = *(undefined4 *)(lVar14 + 0x60);
          puVar11 = puVar12 + -1;
        }
        else {
          puVar11 = puVar12 + -2;
          iVar8 = iVar8 + 2;
          puVar12[-1] = *(undefined4 *)(lVar14 + 0x50 + (((ulong)(uVar2 >> 0xe) & 1) + 2) * 4);
          *puVar11 = *(undefined4 *)(lVar14 + 0x60);
        }
      }
      goto LAB_00653af8;
    }
  }
  else {
    lVar9 = -((-(ulong)(iVar8 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar8 + 1U) << 3) + 0x1e
             & 0xfffffffffffffff0);
    puVar5 = (undefined4 *)((long)auStack_120 + lVar9);
    puVar4 = (undefined4 *)((long)auStack_120 + lVar9);
    puVar12 = (undefined4 *)((long)auStack_120 + lVar9 + 8);
    lVar9 = FUN_00651bb0(puVar12,*(undefined4 *)(lVar14 + 0x4c),*(undefined8 *)(lVar14 + 0x10),
                         *(undefined8 *)(lVar14 + 0x18),puVar11,puVar11 + iVar8);
    iVar8 = (int)((ulong)(lVar9 - (long)puVar12) >> 2);
    if (!bVar6 || !bVar7) goto LAB_00653bf0;
  }
  puVar5 = puVar4;
  if (param_6 < 0) {
    iVar8 = iVar8 + 1;
    puVar12[-1] = *(undefined4 *)(lVar14 + 0x50);
    puVar11 = puVar12 + -1;
  }
  else {
    puVar11 = puVar12;
    if ((uVar2 >> 0xb & 1) != 0) {
      iVar8 = iVar8 + 1;
      puVar12[-1] = *(undefined4 *)(lVar14 + 0x54);
      puVar11 = puVar12 + -1;
    }
  }
LAB_00653af8:
  lVar13 = *(long *)(param_4 + 0x10);
  lVar14 = (long)iVar8;
  puVar12 = puVar11;
  lVar9 = lVar14;
  if (lVar14 < lVar13) {
                    /* try { // try from 00653b14 to 00753b17 has its CatchHandler @ 00653b20 */
                    /* try { // try from 00653b18 to 00753b4f has its CatchHandler @ 00653a20 */
                    /* catch() { ... } // from try @ 00653b14 with catch @ 00653b20 */
    lVar3 = -(lVar13 * 4 + 0x1eU & 0xfffffffffffffff0);
    puVar12 = (undefined4 *)((long)puVar5 + lVar3);
                    /* catch() { ... } // from try @ 00653ad0 with catch @ 00653b2c */
    lVar9 = (long)(int)lVar13;
    FUN_006530a4(param_4,param_5,(long)puVar5 + lVar3,puVar11,lVar13,lVar14);
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    lVar13 = (**(code **)(*param_2 + 0x60))(param_2,puVar12,lVar9);
    param_3 = lVar13 != lVar9;
  }
  auVar15[8] = param_3;
  auVar15._0_8_ = param_2;
  auVar15._9_7_ = 0;
  return auVar15;
}


