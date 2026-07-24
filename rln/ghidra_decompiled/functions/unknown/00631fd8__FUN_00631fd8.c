/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00631fd8
 * Function: FUN_00631fd8
 * Signature: undefined FUN_00631fd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00631fd8(undefined8 param_1,long *param_2,char param_3,long param_4,undefined1 param_5,
            long param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  
                    /* try { // try from 00631ffc to 00732007 has its CatchHandler @ 0063221c */
                    /* try { // try from 0063200c to 00732087 has its CatchHandler @ 00632228 */
  lVar9 = FUN_0063c4d0(&DAT_007fbdd0);
  lVar13 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar14 = *(long *)(lVar13 + lVar9 * 8);
  if (lVar14 == 0) {
    puVar10 = operator_new(0x90);
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &PTR_FUN_007b70c0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    *(undefined1 *)(puVar10 + 9) = 0;
    *(undefined1 *)((long)puVar10 + 0x49) = 0;
    *(undefined1 *)(puVar10 + 0x11) = 0;
    FUN_0062dbf0(puVar10,param_4 + 0xd0);
                    /* catch() { ... } // from try @ 00631ffc with catch @ 0063221c */
                    /* catch() { ... } // from try @ 0063200c with catch @ 00632228 */
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar9);
    lVar14 = *(long *)(lVar13 + lVar9 * 8);
  }
  uVar2 = *(uint *)(param_4 + 0x18);
  puVar4 = auStack_b0;
  puVar5 = auStack_b0;
  uVar1 = uVar2 & 0x4a;
  bVar6 = uVar1 != 8;
  bVar7 = uVar1 != 0x40;
  lVar9 = -param_6;
  if ((bVar6 && bVar7) <= (0 < param_6)) {
    lVar9 = param_6;
  }
  iVar8 = FUN_00631f30(auStack_88,lVar9,lVar14 + 0x4a,uVar2,bVar6 && bVar7);
  puVar12 = auStack_b0 + (0x28 - iVar8);
  if (*(char *)(lVar14 + 0x20) == '\0') {
    puVar11 = puVar12;
    if (!bVar6 || !bVar7) {
LAB_00632188:
      puVar12 = puVar11;
      if (((uVar2 >> 9 & 1) != 0) && (param_6 != 0)) {
        if (uVar1 == 0x40) {
          iVar8 = iVar8 + 1;
          puVar11[-1] = *(undefined1 *)(lVar14 + 0x4e);
          puVar12 = puVar11 + -1;
        }
        else {
          puVar12 = puVar11 + -2;
          iVar8 = iVar8 + 2;
                    /* catch() { ... } // from try @ 006320c8 with catch @ 006321ac */
          puVar11[-1] = *(undefined1 *)(lVar14 + 0x4a + ((ulong)(uVar2 >> 0xe) & 1) + 2);
          *puVar12 = *(undefined1 *)(lVar14 + 0x4e);
        }
      }
      goto LAB_0063209c;
    }
  }
  else {
    lVar9 = -((-(ulong)(iVar8 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar8 + 1U) << 1) + 0x1e
             & 0xfffffffffffffff0);
    puVar5 = auStack_b0 + lVar9;
    puVar4 = auStack_b0 + lVar9;
    puVar11 = auStack_b0 + lVar9 + 2;
    iVar8 = FUN_0062f63c(puVar11,*(undefined1 *)(lVar14 + 0x49),*(undefined8 *)(lVar14 + 0x10),
                         *(undefined8 *)(lVar14 + 0x18),puVar12,puVar12 + iVar8);
    iVar8 = iVar8 - (int)puVar11;
    if (!bVar6 || !bVar7) goto LAB_00632188;
  }
  puVar5 = puVar4;
  if (param_6 < 0) {
    iVar8 = iVar8 + 1;
    puVar11[-1] = *(undefined1 *)(lVar14 + 0x4a);
    puVar12 = puVar11 + -1;
  }
  else {
    puVar12 = puVar11;
    if ((uVar2 >> 0xb & 1) != 0) {
      iVar8 = iVar8 + 1;
      puVar11[-1] = *(undefined1 *)(lVar14 + 0x4b);
      puVar12 = puVar11 + -1;
    }
  }
LAB_0063209c:
  lVar14 = *(long *)(param_4 + 0x10);
  lVar13 = (long)iVar8;
  puVar11 = puVar12;
  lVar9 = lVar13;
  if (lVar13 < lVar14) {
    lVar3 = -(lVar14 + 0x1eU & 0xfffffffffffffff0);
    puVar11 = puVar5 + lVar3;
                    /* try { // try from 006320c8 to 007320ef has its CatchHandler @ 006321ac */
    lVar9 = (long)(int)lVar14;
    FUN_00630d30(param_4,param_5,(long)puVar5 + lVar3,puVar12,lVar14,lVar13);
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
                    /* try { // try from 006320f0 to 0073224b has its CatchHandler @ 00631f0c */
    lVar13 = (**(code **)(*param_2 + 0x60))(param_2,puVar11,lVar9);
    param_3 = lVar9 != lVar13;
  }
  auVar15[8] = param_3;
  auVar15._0_8_ = param_2;
  auVar15._9_7_ = 0;
  return auVar15;
}


