/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00654584
 * Function: FUN_00654584
 * Signature: undefined FUN_00654584(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00654584(undefined8 param_1,long *param_2,char param_3,long param_4,undefined4 param_5,
            long param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined4 auStack_120 [40];
  undefined1 auStack_80 [16];
  
  lVar7 = FUN_0063c4d0(&DAT_007fd2a8);
  lVar11 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar12 = *(long *)(lVar11 + lVar7 * 8);
  if (lVar12 == 0) {
    puVar8 = operator_new(0x150);
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR_FUN_007b7c80;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = 0;
    *(undefined4 *)((long)puVar8 + 0x4c) = 0;
    *(undefined1 *)(puVar8 + 0x29) = 0;
    FUN_0064fe98(puVar8,param_4 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar8,lVar7);
    lVar12 = *(long *)(lVar11 + lVar7 * 8);
  }
  uVar2 = *(uint *)(param_4 + 0x18);
  puVar5 = auStack_120;
  puVar4 = auStack_120;
  uVar1 = uVar2 & 0x4a;
  iVar6 = FUN_0065421c(auStack_80,param_6,lVar12 + 0x50,uVar2,uVar1 != 8 && uVar1 != 0x40);
  puVar10 = auStack_120 + (0x28 - iVar6);
  if (*(char *)(lVar12 + 0x20) != '\0') {
    lVar7 = -((-(ulong)(iVar6 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar6 + 1U) << 3) + 0x1e
             & 0xfffffffffffffff0);
    puVar4 = (undefined4 *)((long)auStack_120 + lVar7);
    puVar5 = (undefined4 *)((long)auStack_120 + lVar7);
    puVar9 = (undefined4 *)((long)auStack_120 + lVar7 + 8);
    lVar7 = FUN_00651bb0(puVar9,*(undefined4 *)(lVar12 + 0x4c),*(undefined8 *)(lVar12 + 0x10),
                         *(undefined8 *)(lVar12 + 0x18),puVar10,puVar10 + iVar6);
    iVar6 = (int)((ulong)(lVar7 - (long)puVar9) >> 2);
    puVar10 = puVar9;
  }
  puVar9 = puVar10;
  if (((uVar1 == 8 || uVar1 == 0x40) && (puVar5 = puVar4, param_6 != 0)) && ((uVar2 >> 9 & 1) != 0))
  {
    if (uVar1 == 0x40) {
      iVar6 = iVar6 + 1;
      puVar10[-1] = *(undefined4 *)(lVar12 + 0x60);
      puVar9 = puVar10 + -1;
    }
    else {
      puVar9 = puVar10 + -2;
      iVar6 = iVar6 + 2;
      puVar10[-1] = *(undefined4 *)(lVar12 + 0x50 + (((ulong)(uVar2 >> 0xe) & 1) + 2) * 4);
      *puVar9 = *(undefined4 *)(lVar12 + 0x60);
    }
  }
  lVar11 = *(long *)(param_4 + 0x10);
  lVar12 = (long)iVar6;
  puVar10 = puVar9;
  lVar7 = lVar12;
  if (lVar12 < lVar11) {
    lVar3 = -(lVar11 * 4 + 0x1eU & 0xfffffffffffffff0);
    puVar10 = (undefined4 *)((long)puVar5 + lVar3);
    lVar7 = (long)(int)lVar11;
    FUN_006530a4(param_4,param_5,(long)puVar5 + lVar3,puVar9,lVar11,lVar12);
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    lVar11 = (**(code **)(*param_2 + 0x60))(param_2,puVar10,lVar7);
    param_3 = lVar7 != lVar11;
  }
  auVar13[8] = param_3;
  auVar13._0_8_ = param_2;
  auVar13._9_7_ = 0;
  return auVar13;
}


