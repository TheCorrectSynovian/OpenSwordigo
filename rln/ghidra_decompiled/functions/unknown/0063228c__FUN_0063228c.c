/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063228c
 * Function: FUN_0063228c
 * Signature: undefined FUN_0063228c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0063228c(undefined8 param_1,long *param_2,char param_3,long param_4,undefined1 param_5,
            long param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [24];
  
  lVar7 = FUN_0063c4d0(&DAT_007fbdd0);
  lVar11 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar12 = *(long *)(lVar11 + lVar7 * 8);
  if (lVar12 == 0) {
    puVar8 = operator_new(0x90);
                    /* try { // try from 00632450 to 0073245f has its CatchHandler @ 006325e8 */
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR_FUN_007b70c0;
                    /* try { // try from 00632464 to 007324df has its CatchHandler @ 00632644 */
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(undefined1 *)(puVar8 + 9) = 0;
    *(undefined1 *)((long)puVar8 + 0x49) = 0;
    *(undefined1 *)(puVar8 + 0x11) = 0;
    FUN_0062dbf0(puVar8,param_4 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar8,lVar7);
    lVar12 = *(long *)(lVar11 + lVar7 * 8);
  }
                    /* catch() { ... } // from try @ 0063224c with catch @ 006322e0 */
  uVar2 = *(uint *)(param_4 + 0x18);
  puVar5 = auStack_b0;
  puVar4 = auStack_b0;
  uVar1 = uVar2 & 0x4a;
  iVar6 = FUN_00631f30(auStack_88,param_6,lVar12 + 0x4a,uVar2,uVar1 != 8 && uVar1 != 0x40);
  puVar9 = auStack_b0 + (0x28 - iVar6);
  if (*(char *)(lVar12 + 0x20) != '\0') {
    lVar7 = -((-(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar6 + 1U) << 1) + 0x1e
             & 0xfffffffffffffff0);
    puVar4 = auStack_b0 + lVar7;
    puVar5 = auStack_b0 + lVar7;
    puVar10 = auStack_b0 + lVar7 + 2;
    iVar6 = FUN_0062f63c(puVar10,*(undefined1 *)(lVar12 + 0x49),*(undefined8 *)(lVar12 + 0x10),
                         *(undefined8 *)(lVar12 + 0x18),puVar9,puVar9 + iVar6);
    iVar6 = iVar6 - (int)puVar10;
    puVar9 = puVar10;
  }
  puVar10 = puVar9;
  if (((uVar1 == 8 || uVar1 == 0x40) && (puVar5 = puVar4, param_6 != 0)) && ((uVar2 >> 9 & 1) != 0))
  {
    if (uVar1 == 0x40) {
      iVar6 = iVar6 + 1;
      puVar9[-1] = *(undefined1 *)(lVar12 + 0x4e);
      puVar10 = puVar9 + -1;
    }
    else {
      puVar10 = puVar9 + -2;
      iVar6 = iVar6 + 2;
      puVar9[-1] = *(undefined1 *)(lVar12 + 0x4a + ((ulong)(uVar2 >> 0xe) & 1) + 2);
                    /* try { // try from 0063243c to 00732447 has its CatchHandler @ 00632638 */
      *puVar10 = *(undefined1 *)(lVar12 + 0x4e);
    }
  }
  lVar12 = *(long *)(param_4 + 0x10);
  lVar11 = (long)iVar6;
  puVar9 = puVar10;
  lVar7 = lVar11;
  if (lVar11 < lVar12) {
                    /* catch() { ... } // from try @ 00632514 with catch @ 00632350
                       catch() { ... } // from try @ 0063265c with catch @ 00632350 */
    lVar3 = -(lVar12 + 0x1eU & 0xfffffffffffffff0);
    puVar9 = puVar5 + lVar3;
    lVar7 = (long)(int)lVar12;
    FUN_00630d30(param_4,param_5,(long)puVar5 + lVar3,puVar10,lVar12,lVar11);
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    lVar11 = (**(code **)(*param_2 + 0x60))(param_2,puVar9,lVar7);
    param_3 = lVar7 != lVar11;
  }
  auVar13[8] = param_3;
  auVar13._0_8_ = param_2;
  auVar13._9_7_ = 0;
  return auVar13;
}


