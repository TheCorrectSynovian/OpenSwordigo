/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ae2c
 * Function: FUN_0063ae2c
 * Signature: undefined FUN_0063ae2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_0063ae2c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long *param_8)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  void *pvVar15;
  char cVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong __n;
  ulong uVar22;
  ulong uVar23;
  undefined **local_58;
  long *local_40;
  undefined8 local_38;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined *local_8;
  
                    /* catch() { ... } // from try @ 0063aba0 with catch @ 0063ae2c */
                    /* catch() { ... } // from try @ 0063aaf0 with catch @ 0063ae30 */
                    /* catch() { ... } // from try @ 0063ac84 with catch @ 0063ae34 */
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
                    /* try { // try from 0063ae58 to 0073af73 has its CatchHandler @ 0063af7c */
  lVar14 = FUN_00632724(auStack_18,param_6 + 0xd0);
  uVar13 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar13 == 0x40) {
    uVar23 = 8;
  }
  else {
                    /* catch() { ... } // from try @ 0063abd4 with catch @ 0063ae84 */
    uVar23 = 0x10;
    if (uVar13 != 8) {
      uVar23 = 10;
    }
  }
  iVar10 = FUN_00632808(&local_30);
  iVar11 = FUN_00632808(&local_40);
  if ((iVar10 == -1) == (iVar11 == -1)) {
    uVar20 = 0;
    bVar7 = false;
LAB_0063b510:
    cVar9 = *(char *)(lVar14 + 0x20);
    bVar1 = true;
    iVar10 = 0;
    bVar6 = false;
LAB_0063b278:
                    /* try { // try from 0063b27c to 0073b2a3 has its CatchHandler @ 0063b58c */
    if ((int)uVar23 == 0x10) goto LAB_0063b280;
LAB_0063b040:
    __n = (ulong)(int)uVar23;
    local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 0063b05c to 0073b05f has its CatchHandler @ 0063b474 */
    if (cVar9 == '\0') goto LAB_0063b060;
LAB_0063b2a0:
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
    cVar9 = *(char *)(lVar14 + 0x88);
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = 0xffffffffffffffff / uVar23;
    }
    if (cVar9 != '\0') goto LAB_0063b2c4;
LAB_0063b078:
    if (bVar1) {
LAB_0063b764:
      uVar21 = 0;
      bVar4 = false;
      bVar2 = false;
                    /* try { // try from 0063b770 to 0073b95f has its CatchHandler @ 0063b980 */
      goto LAB_0063b1ec;
    }
                    /* try { // try from 0063b080 to 0073b083 has its CatchHandler @ 0063b464 */
    uVar21 = 0;
    bVar4 = false;
LAB_0063b094:
    if (10 < __n) goto LAB_0063b140;
LAB_0063b09c:
                    /* try { // try from 0063b0a4 to 0073b0cb has its CatchHandler @ 0063b5d4 */
    if ((0x2f < uVar20) && (uVar20 < (int)__n + 0x30U)) {
      uVar13 = uVar20 - 0x30;
LAB_0063b0b4:
      if (uVar21 <= uVar22) goto LAB_0063b17c;
LAB_0063b0bc:
      bVar4 = true;
      if (local_30 == (long *)0x0) goto LAB_0063b1a4;
LAB_0063b0c8:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar17 = (byte *)local_30[2];
                    /* try { // try from 0063b0ec to 0073b113 has its CatchHandler @ 0063b5c4 */
        if ((byte *)local_30[3] <= pbVar17) {
LAB_0063b59c:
          local_28 = 0xffffffff;
                    /* catch() { ... } // from try @ 0063b234 with catch @ 0063b59c */
          uVar13 = (**(code **)(*local_30 + 0x48))();
                    /* catch() { ... } // from try @ 0063b17c with catch @ 0063b5ac */
          if (uVar13 == 0xffffffff) {
                    /* catch() { ... } // from try @ 0063b134 with catch @ 0063b5b4 */
            local_30 = (long *)0x0;
            goto LAB_0063b1a4;
          }
          goto LAB_0063b0f8;
        }
      }
      else {
                    /* catch() { ... } // from try @ 0063b2c4 with catch @ 0063b57c */
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_0063b1a4;
                    /* catch() { ... } // from try @ 0063b27c with catch @ 0063b58c */
        pbVar17 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar17) goto LAB_0063b59c;
      }
      uVar13 = (uint)*pbVar17;
LAB_0063b0f8:
      iVar11 = 0;
      local_28 = uVar13;
      if (local_40 == (long *)0x0) goto LAB_0063b120;
      iVar12 = 0;
      if ((int)local_38 == -1) goto LAB_0063b1c0;
LAB_0063b118:
      if (iVar11 != iVar12) {
LAB_0063b120:
        do {
          if (local_30 == (long *)0x0) {
LAB_0063b64c:
            uVar20 = 0xff;
            goto LAB_0063b094;
          }
          if (local_28 == 0xffffffff) {
            if ((byte *)local_30[2] < (byte *)local_30[3]) {
              uVar13 = (uint)*(byte *)local_30[2];
            }
            else {
              uVar13 = (**(code **)(*local_30 + 0x48))();
              if (uVar13 == 0xffffffff) {
                local_30 = (long *)0x0;
                goto LAB_0063b64c;
              }
            }
            uVar20 = uVar13 & 0xff;
            local_28 = uVar13;
            goto LAB_0063b094;
          }
                    /* try { // try from 0063b134 to 0073b15b has its CatchHandler @ 0063b5b4 */
          uVar20 = local_28 & 0xff;
          if (__n < 0xb) goto LAB_0063b09c;
LAB_0063b140:
          uVar13 = uVar20 - 0x30;
          if ((uVar13 & 0xff) < 10) goto LAB_0063b0b4;
          if ((uVar20 - 0x61 & 0xff) < 6) {
                    /* catch() { ... } // from try @ 0063b30c with catch @ 0063b56c */
            uVar13 = uVar20 - 0x57;
            goto LAB_0063b0b4;
          }
          if (5 < (uVar20 - 0x41 & 0xff)) goto LAB_0063b654;
          uVar13 = uVar20 - 0x37;
          if (uVar22 < uVar21) goto LAB_0063b0bc;
LAB_0063b17c:
                    /* try { // try from 0063b17c to 0073b1a3 has its CatchHandler @ 0063b5ac */
          iVar10 = iVar10 + 1;
          uVar18 = uVar21 * uVar23;
          uVar21 = (long)(int)uVar13 + uVar18;
          bVar4 = (bool)(bVar4 | (ulong)~(long)(int)uVar13 < uVar18);
          if (local_30 != (long *)0x0) goto LAB_0063b0c8;
LAB_0063b1a4:
          if (local_40 == (long *)0x0) break;
          iVar11 = 1;
          iVar12 = 0;
          if ((int)local_38 != -1) goto LAB_0063b118;
LAB_0063b1c0:
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
                    /* try { // try from 0063b1d0 to 0073b1f7 has its CatchHandler @ 0063b73c */
            uVar13 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar13 = (**(code **)(*local_40 + 0x48))();
            if (uVar13 == 0xffffffff) goto LAB_0063b6dc;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar13);
          if (iVar11 == 0) break;
        } while( true );
      }
      goto LAB_0063b1e4;
    }
  }
  else {
    bVar8 = FUN_00632808(&local_30);
    uVar20 = (uint)bVar8;
                    /* catch() { ... } // from try @ 0063ab1c with catch @ 0063aed4 */
    bVar7 = *(byte *)(lVar14 + 0x6e) == bVar8;
    if ((bVar7) || (*(byte *)(lVar14 + 0x6f) == bVar8)) {
      cVar9 = *(char *)(lVar14 + 0x20);
      if ((cVar9 == '\0') || (*(byte *)(lVar14 + 0x49) != bVar8)) {
        if (*(byte *)(lVar14 + 0x48) != bVar8) {
          if (local_30 != (long *)0x0) {
            if ((ulong)local_30[2] < (ulong)local_30[3]) {
              local_30[2] = local_30[2] + 1;
            }
            else {
              FUN_0062b4a0();
            }
            local_28 = 0xffffffff;
          }
                    /* catch() { ... } // from try @ 0063ad70 with catch @ 0063af24 */
                    /* catch() { ... } // from try @ 0063adac with catch @ 0063af28 */
          iVar10 = FUN_00632808(&local_30);
          iVar11 = FUN_00632808(&local_40);
          if ((iVar10 == -1) == (iVar11 == -1)) goto LAB_0063b510;
          uVar20 = FUN_00632808(&local_30);
          uVar20 = uVar20 & 0xff;
          cVar9 = *(char *)(lVar14 + 0x20);
        }
      }
      else {
        cVar9 = '\x01';
      }
    }
    else {
      cVar9 = *(char *)(lVar14 + 0x20);
    }
    iVar10 = 0;
    bVar6 = false;
    do {
                    /* try { // try from 0063af74 to 0073af7f has its CatchHandler @ 0063aa84 */
                    /* catch() { ... } // from try @ 0063ae58 with catch @ 0063af7c */
      if (((cVar9 != '\0') && (*(byte *)(lVar14 + 0x49) == uVar20)) ||
         (*(byte *)(lVar14 + 0x48) == uVar20)) break;
      iVar11 = (int)uVar23;
      if (*(byte *)(lVar14 + 0x72) == uVar20) {
                    /* catch() { ... } // from try @ 0063b014 with catch @ 0063b494 */
        if ((iVar11 == 10) < bVar6) goto LAB_0063af9c;
        iVar10 = iVar10 + 1;
                    /* try { // try from 0063b4b8 to 0073b6af has its CatchHandler @ 0063b980 */
        if ((iVar11 == 8) || (bVar6 = true, uVar13 == 0)) {
          iVar10 = 0;
          bVar6 = true;
          uVar23 = 8;
        }
      }
      else {
        if (!bVar6) break;
LAB_0063af9c:
        if ((*(byte *)(lVar14 + 0x70) != uVar20) && (*(byte *)(lVar14 + 0x71) != uVar20)) {
          bVar1 = false;
          bVar6 = true;
          goto LAB_0063b278;
        }
                    /* catch() { ... } // from try @ 0063b3c4 with catch @ 0063afbc
                       catch() { ... } // from try @ 0063b960 with catch @ 0063afbc */
        if ((iVar11 != 0x10) && (uVar13 != 0)) {
          bVar1 = false;
          bVar6 = true;
          goto LAB_0063b040;
        }
        iVar10 = 0;
        bVar6 = false;
        uVar23 = 0x10;
      }
      if (local_30 != (long *)0x0) {
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 1;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
        }
        local_28 = 0xffffffff;
      }
      iVar11 = FUN_00632808(&local_30);
      iVar12 = FUN_00632808(&local_40);
                    /* try { // try from 0063b014 to 0073b017 has its CatchHandler @ 0063b494 */
      if ((iVar11 == -1) == (iVar12 == -1)) {
        cVar9 = *(char *)(lVar14 + 0x20);
        bVar1 = true;
        goto LAB_0063b278;
      }
      uVar20 = FUN_00632808(&local_30);
      uVar20 = uVar20 & 0xff;
      cVar9 = *(char *)(lVar14 + 0x20);
    } while (bVar6);
                    /* try { // try from 0063b038 to 0073b03b has its CatchHandler @ 0063b484 */
    bVar1 = false;
    if ((int)uVar23 != 0x10) goto LAB_0063b040;
LAB_0063b280:
    __n = 0x16;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar9 != '\0') goto LAB_0063b2a0;
LAB_0063b060:
    cVar9 = *(char *)(lVar14 + 0x88);
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = 0xffffffffffffffff / uVar23;
    }
    if (cVar9 == '\0') goto LAB_0063b078;
LAB_0063b2c4:
    local_58 = &local_8;
                    /* try { // try from 0063b2c4 to 0073b2eb has its CatchHandler @ 0063b57c */
    if (bVar1) goto LAB_0063b764;
    uVar21 = 0;
    bVar4 = false;
LAB_0063b2d8:
    if ((*(char *)(lVar14 + 0x20) != '\0') && (*(byte *)(lVar14 + 0x49) == uVar20))
    goto LAB_0063b3d4;
LAB_0063b2ec:
    if ((*(byte *)(lVar14 + 0x48) != uVar20) &&
       (pvVar15 = memchr((void *)(lVar14 + 0x72),uVar20,__n), pvVar15 != (void *)0x0)) {
                    /* try { // try from 0063b30c to 0073b333 has its CatchHandler @ 0063b56c */
      iVar11 = (int)pvVar15 - (int)(void *)(lVar14 + 0x72);
      if (0xf < iVar11) {
        iVar11 = iVar11 + -6;
      }
      if (uVar22 < uVar21) {
        bVar4 = true;
      }
      else {
        iVar10 = iVar10 + 1;
        uVar18 = uVar21 * uVar23;
        uVar21 = (long)iVar11 + uVar18;
        bVar4 = (bool)(bVar4 | (ulong)~(long)iVar11 < uVar18);
      }
LAB_0063b344:
      if (local_30 == (long *)0x0) goto LAB_0063b454;
LAB_0063b34c:
                    /* try { // try from 0063b354 to 0073b37b has its CatchHandler @ 0063b55c */
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar17 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar17) {
LAB_0063b688:
          local_28 = 0xffffffff;
          uVar13 = (**(code **)(*local_30 + 0x48))();
          if (uVar13 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_0063b454;
          }
          goto LAB_0063b380;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_0063b454;
        pbVar17 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar17) goto LAB_0063b688;
      }
      uVar13 = (uint)*pbVar17;
LAB_0063b380:
      local_28 = uVar13;
      if (local_40 == (long *)0x0) goto LAB_0063b3a8;
      cVar5 = '\0';
      do {
        cVar16 = '\0';
                    /* try { // try from 0063b39c to 0073b3c3 has its CatchHandler @ 0063b554 */
        if ((int)local_38 == -1) {
                    /* catch() { ... } // from try @ 0063b05c with catch @ 0063b474 */
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar13 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar13 = (**(code **)(*local_40 + 0x48))();
            if (uVar13 == 0xffffffff) {
              local_40 = (long *)0x0;
              cVar16 = cVar9;
              goto LAB_0063b3a0;
            }
          }
                    /* catch() { ... } // from try @ 0063b038 with catch @ 0063b484 */
          local_38 = CONCAT44(local_38._4_4_,uVar13);
          cVar16 = '\0';
        }
LAB_0063b3a0:
        if (cVar5 == cVar16) goto LAB_0063b1e4;
LAB_0063b3a8:
        if (local_30 == (long *)0x0) {
LAB_0063b6c0:
          uVar20 = 0xff;
          goto LAB_0063b2d8;
        }
        if (local_28 == 0xffffffff) {
                    /* catch() { ... } // from try @ 0063b39c with catch @ 0063b554 */
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
                    /* catch() { ... } // from try @ 0063b354 with catch @ 0063b55c */
            uVar13 = (uint)*(byte *)local_30[2];
          }
          else {
            uVar13 = (**(code **)(*local_30 + 0x48))();
            if (uVar13 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_0063b6c0;
            }
          }
          uVar20 = uVar13 & 0xff;
          local_28 = uVar13;
          goto LAB_0063b2d8;
        }
        uVar20 = local_28 & 0xff;
                    /* try { // try from 0063b3c4 to 0073b4b7 has its CatchHandler @ 0063afbc */
        if ((*(char *)(lVar14 + 0x20) == '\0') || (*(byte *)(lVar14 + 0x49) != uVar20))
        goto LAB_0063b2ec;
LAB_0063b3d4:
        if (iVar10 == 0) {
          bVar2 = true;
          iVar10 = 0;
          goto LAB_0063b1ec;
        }
        lVar19 = *(long *)(local_8 + -0x18);
        uVar18 = lVar19 + 1;
        if ((*(ulong *)(local_8 + -0x10) < uVar18) || (0 < *(int *)(local_8 + -8))) {
          FUN_00667088(local_58,uVar18);
          lVar19 = *(long *)(local_8 + -0x18);
        }
        local_8[lVar19] = (char)iVar10;
        iVar10 = 0;
        if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_0063b344;
        *(undefined4 *)(local_8 + -8) = 0;
        *(ulong *)(local_8 + -0x18) = uVar18;
        local_8[uVar18] = 0;
        if (local_30 != (long *)0x0) goto LAB_0063b34c;
LAB_0063b454:
        if (local_40 == (long *)0x0) goto LAB_0063b1e4;
                    /* catch() { ... } // from try @ 0063b080 with catch @ 0063b464 */
        cVar5 = cVar9;
      } while( true );
    }
  }
LAB_0063b654:
  bVar2 = false;
LAB_0063b1ec:
  local_58 = &local_8;
  if (*(long *)(local_8 + -0x18) == 0) {
    if ((iVar10 == 0) <= bVar6) {
LAB_0063b610:
      if (!bVar2) {
        if (bVar4) {
          *param_8 = -1;
          *param_7 = 4;
        }
        else {
                    /* catch() { ... } // from try @ 0063b6dc with catch @ 0063b720 */
          *param_8 = (uVar21 ^ -(ulong)bVar7) + (ulong)bVar7;
        }
        goto LAB_0063b220;
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 0063b0ec with catch @ 0063b5c4 */
    FUN_00667890(local_58,iVar10);
                    /* catch() { ... } // from try @ 0063b0a4 with catch @ 0063b5d4 */
    cVar9 = FUN_0063ca8c(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),local_58);
    if (cVar9 == '\0') {
      *param_7 = 4;
    }
    if (((iVar10 == 0) <= bVar6) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0063b610;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_0063b220:
  if (bVar1) {
    *param_7 = *param_7 | 2;
  }
                    /* try { // try from 0063b234 to 0073b25b has its CatchHandler @ 0063b59c */
  auVar3._8_4_ = local_28;
  auVar3._0_8_ = local_30;
  auVar3._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0063b1d0 with catch @ 0063b73c */
    FUN_0062b45c(local_8 + -0x18,auStack_10);
  }
  return auVar3;
LAB_0063b6dc:
                    /* try { // try from 0063b6dc to 0073b703 has its CatchHandler @ 0063b720 */
  local_40 = (long *)0x0;
  iVar12 = 1;
  goto LAB_0063b118;
LAB_0063b1e4:
  bVar2 = false;
  bVar1 = true;
  goto LAB_0063b1ec;
}


