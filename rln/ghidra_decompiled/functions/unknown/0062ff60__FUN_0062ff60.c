/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062ff60
 * Function: FUN_0062ff60
 * Signature: undefined FUN_0062ff60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0062ff60(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined1 param_5,
            undefined8 *param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 *local_38;
  undefined1 auStack_20 [8];
  undefined4 local_18 [2];
  undefined *local_10;
  undefined *local_8;
  
  uVar13 = param_3 & 0xff;
  lVar4 = FUN_0062d354(param_4 + 0xd0);
  lVar5 = FUN_0063c4d0(&DAT_007fbde8);
  lVar9 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar12 = *(long *)(lVar9 + lVar5 * 8);
  if (lVar12 == 0) {
    puVar7 = operator_new(0x70);
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_007b70a0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    *(undefined1 *)((long)puVar7 + 0x21) = 0;
    *(undefined1 *)((long)puVar7 + 0x22) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined1 *)((long)puVar7 + 0x5c) = 0;
    *(undefined1 *)((long)puVar7 + 0x5d) = 0;
    *(undefined1 *)((long)puVar7 + 0x5e) = 0;
    *(undefined1 *)((long)puVar7 + 0x5f) = 0;
    *(undefined1 *)(puVar7 + 0xc) = 0;
    *(undefined1 *)((long)puVar7 + 0x61) = 0;
    *(undefined1 *)((long)puVar7 + 0x62) = 0;
    *(undefined1 *)((long)puVar7 + 99) = 0;
    *(undefined1 *)((long)puVar7 + 0x6f) = 0;
    FUN_0062e2bc(puVar7,param_4 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar7,lVar5);
    lVar12 = *(long *)(lVar9 + lVar5 * 8);
  }
  pbVar10 = (byte *)*param_6;
  if (*pbVar10 == *(byte *)(lVar12 + 100)) {
    local_18[0] = *(undefined4 *)(lVar12 + 0x60);
    lVar5 = *(long *)(pbVar10 + -0x18);
    local_38 = *(undefined1 **)(lVar12 + 0x48);
    uVar14 = *(ulong *)(lVar12 + 0x50);
    if (lVar5 == 0) goto LAB_006302ac;
    pbVar10 = pbVar10 + 1;
  }
  else {
    local_18[0] = *(undefined4 *)(lVar12 + 0x5c);
    uVar14 = *(ulong *)(lVar12 + 0x40);
    local_38 = *(undefined1 **)(lVar12 + 0x38);
    lVar5 = *(long *)(pbVar10 + -0x18);
  }
  if ((pbVar10 < pbVar10 + lVar5) &&
     (pbVar6 = pbVar10, (*(byte *)(*(long *)(lVar4 + 0x30) + (ulong)*pbVar10) >> 2 & 1) != 0)) {
    do {
      pbVar6 = pbVar6 + 1;
      if (pbVar6 == pbVar10 + lVar5) goto LAB_00630030;
    } while ((*(byte *)(*(long *)(lVar4 + 0x30) + (ulong)*pbVar6) >> 2 & 1) != 0);
    lVar5 = (long)pbVar6 - (long)pbVar10;
LAB_00630030:
    if (lVar5 != 0) {
      local_10 = PTR_DAT_007e5de8 + 0x18;
      FUN_00667088(&local_10,lVar5 << 1);
      iVar3 = *(int *)(lVar12 + 0x58);
      lVar4 = lVar5 - iVar3;
      if (0 < lVar4) {
        if (iVar3 < 0) {
          lVar4 = lVar5;
        }
        if (*(long *)(lVar12 + 0x18) == 0) {
          FUN_0066918c(&local_10,pbVar10,lVar4);
          iVar3 = *(int *)(lVar12 + 0x58);
        }
        else {
          FUN_00669074(&local_10,0,*(undefined8 *)(local_10 + -0x18),lVar4 << 1,0);
          if (-1 < *(int *)(local_10 + -8)) {
            FUN_00668ea8(&local_10);
          }
          lVar9 = FUN_0062f63c(local_10,*(undefined1 *)(lVar12 + 0x22),
                               *(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),pbVar10
                               ,pbVar10 + lVar4);
          if (-1 < *(int *)(local_10 + -8)) {
            FUN_00668ea8(&local_10);
          }
          uVar8 = lVar9 - (long)local_10;
          if (*(ulong *)(local_10 + -0x18) < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",
                         "basic_string::erase");
          }
          FUN_00668cb8(&local_10,uVar8,*(ulong *)(local_10 + -0x18) - uVar8,0);
          iVar3 = *(int *)(lVar12 + 0x58);
        }
      }
      if (0 < iVar3) {
        FUN_00667890(&local_10,*(undefined1 *)(lVar12 + 0x21));
        if (lVar4 < 0) {
                    /* catch() { ... } // from try @ 00630284 with catch @ 00630380 */
          FUN_0066783c(&local_10,-lVar4,*(undefined1 *)(lVar12 + 0x65));
                    /* try { // try from 00630390 to 00730493 has its CatchHandler @ 006304b4 */
          FUN_006677d4(&local_10,pbVar10,lVar5);
        }
        else {
          FUN_006677d4(&local_10,pbVar10 + lVar4,(long)*(int *)(lVar12 + 0x58));
        }
      }
      uVar1 = *(uint *)(param_4 + 0x18) & 0xb0;
      if ((*(uint *)(param_4 + 0x18) >> 9 & 1) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar12 + 0x30);
      }
      uVar8 = uVar14 + *(long *)(local_10 + -0x18) + lVar4;
      local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 00630178 to 00730183 has its CatchHandler @ 0062fbf4 */
      FUN_00667088(&local_8,uVar8 * 2);
                    /* catch() { ... } // from try @ 0062ff50 with catch @ 00630180 */
                    /* catch() { ... } // from try @ 00630198 with catch @ 00630184 */
      uVar11 = *(ulong *)(param_4 + 0x10);
                    /* try { // try from 00630194 to 00730197 has its CatchHandler @ 006301a8 */
                    /* try { // try from 00630198 to 007301bb has its CatchHandler @ 00630184 */
      lVar4 = 0;
                    /* catch() { ... } // from try @ 00630194 with catch @ 006301a8 */
      bVar2 = uVar8 < uVar11 && uVar1 == 0x10;
      do {
        switch(*(undefined1 *)((long)local_18 + lVar4)) {
        case 0:
          if (bVar2) {
LAB_00630350:
            FUN_0066783c(&local_8,uVar11 - uVar8,param_5);
          }
          break;
        case 1:
                    /* catch() { ... } // from try @ 0063029c with catch @ 00630320 */
          if (bVar2) goto LAB_00630350;
          FUN_00667890(&local_8,param_5);
          break;
        case 2:
          if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
            FUN_006677d4(&local_8,*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x30));
          }
          break;
        case 3:
          if (uVar14 != 0) {
            FUN_00667890(&local_8,*local_38);
          }
          break;
        case 4:
          FUN_00667614(&local_8,&local_10);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 4);
      if (1 < uVar14) {
                    /* try { // try from 00630208 to 00730283 has its CatchHandler @ 00630208
                       catch() { ... } // from try @ 00630208 with catch @ 00630208
                       catch() { ... } // from try @ 006302a4 with catch @ 00630208
                       catch() { ... } // from try @ 00630494 with catch @ 00630208 */
        FUN_006677d4(&local_8,local_38 + 1,uVar14 - 1);
      }
      uVar14 = *(ulong *)(local_8 + -0x18);
      if (uVar14 < uVar11) {
        if (uVar1 == 0x20) {
          FUN_0066783c(&local_8,uVar11 - uVar14,param_5);
          uVar14 = uVar11;
        }
        else {
          FUN_00669074(&local_8,0,0,uVar11 - uVar14,param_5);
          uVar14 = uVar11;
        }
      }
      if (((param_3 & 0xff) == 0) &&
         (lVar4 = (**(code **)(*param_2 + 0x60))(param_2,local_8,(long)(int)uVar14),
         (int)uVar14 != lVar4)) {
        uVar13 = 1;
      }
                    /* try { // try from 00630284 to 00730297 has its CatchHandler @ 00630380 */
      if (local_8 + -0x18 != PTR_DAT_007e5de8) {
        FUN_0062b45c(local_8 + -0x18,auStack_20);
      }
                    /* try { // try from 0063029c to 007302a3 has its CatchHandler @ 00630320 */
      if (local_10 + -0x18 != PTR_DAT_007e5de8) {
                    /* try { // try from 006302a4 to 0073038f has its CatchHandler @ 00630208 */
        FUN_0062b45c(local_10 + -0x18,&local_8);
      }
    }
  }
LAB_006302ac:
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar15._8_8_ = param_3 & 0xffffffffffffff00 | uVar13;
  auVar15._0_8_ = param_2;
  return auVar15;
}


