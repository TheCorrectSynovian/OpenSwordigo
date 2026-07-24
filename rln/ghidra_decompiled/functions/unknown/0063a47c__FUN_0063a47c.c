/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063a47c
 * Function: FUN_0063a47c
 * Signature: undefined FUN_0063a47c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_0063a47c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,ulong *param_8)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  void *pvVar18;
  char cVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined **local_58;
  long *local_40;
  undefined8 local_38;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined *local_8;
  
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar17 = FUN_00632724(auStack_18,param_6 + 0xd0);
  uVar16 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar16 == 0x40) {
    iVar15 = 8;
                    /* try { // try from 0063ad70 to 0073ad7f has its CatchHandler @ 0063af24 */
  }
  else {
    iVar15 = 0x10;
    if (uVar16 != 8) {
      iVar15 = 10;
    }
  }
  iVar12 = FUN_00632808(&local_30);
  iVar13 = FUN_00632808(&local_40);
                    /* try { // try from 0063a514 to 0073a53b has its CatchHandler @ 0063a5b4 */
  if ((iVar12 == -1) == (iVar13 == -1)) {
    uVar23 = 0;
    bVar9 = false;
LAB_0063ab68:
    cVar11 = *(char *)(lVar17 + 0x20);
    bVar3 = true;
    iVar12 = 0;
    bVar8 = false;
LAB_0063a8e4:
    if (iVar15 == 0x10) goto LAB_0063a8ec;
LAB_0063a690:
    uVar25 = (ulong)iVar15;
  }
  else {
    bVar10 = FUN_00632808(&local_30);
    uVar23 = (uint)bVar10;
    bVar9 = *(byte *)(lVar17 + 0x6e) == bVar10;
    if ((bVar9) || (*(byte *)(lVar17 + 0x6f) == bVar10)) {
      cVar11 = *(char *)(lVar17 + 0x20);
                    /* try { // try from 0063a53c to 0073a5a7 has its CatchHandler @ 0063a43c */
      if ((cVar11 == '\0') || (*(byte *)(lVar17 + 0x49) != bVar10)) {
        if (*(byte *)(lVar17 + 0x48) != bVar10) {
          if (local_30 != (long *)0x0) {
            if ((ulong)local_30[2] < (ulong)local_30[3]) {
              local_30[2] = local_30[2] + 1;
            }
            else {
              FUN_0062b4a0();
                    /* try { // try from 0063adc0 to 0073ae57 has its CatchHandler @ 0063aa84 */
            }
            local_28 = 0xffffffff;
          }
          iVar12 = FUN_00632808(&local_30);
          iVar13 = FUN_00632808(&local_40);
          if ((iVar12 == -1) == (iVar13 == -1)) goto LAB_0063ab68;
          uVar23 = FUN_00632808(&local_30);
                    /* try { // try from 0063a5a8 to 0073a5ab has its CatchHandler @ 0063a5b4 */
          uVar23 = uVar23 & 0xff;
                    /* try { // try from 0063a5ac to 0073a5d7 has its CatchHandler @ 0063a43c */
          cVar11 = *(char *)(lVar17 + 0x20);
        }
      }
      else {
        cVar11 = '\x01';
      }
    }
    else {
      cVar11 = *(char *)(lVar17 + 0x20);
    }
    iVar12 = 0;
                    /* catch() { ... } // from try @ 0063a514 with catch @ 0063a5b4
                       catch() { ... } // from try @ 0063a5a8 with catch @ 0063a5b4 */
    bVar8 = false;
    do {
      if (((cVar11 != '\0') && (*(byte *)(lVar17 + 0x49) == uVar23)) ||
         (*(byte *)(lVar17 + 0x48) == uVar23)) break;
                    /* try { // try from 0063a5d8 to 0073a5ff has its CatchHandler @ 0063a608 */
      if (*(byte *)(lVar17 + 0x72) == uVar23) {
        if ((iVar15 == 10) < bVar8) goto LAB_0063a5ec;
        iVar12 = iVar12 + 1;
        if ((iVar15 == 8) || (bVar8 = true, uVar16 == 0)) {
          iVar12 = 0;
          bVar8 = true;
          iVar15 = 8;
        }
      }
      else {
        if (!bVar8) break;
LAB_0063a5ec:
                    /* try { // try from 0063a600 to 0073a60b has its CatchHandler @ 0063a43c */
        if ((*(byte *)(lVar17 + 0x70) != uVar23) && (*(byte *)(lVar17 + 0x71) != uVar23)) {
          bVar3 = false;
          bVar8 = true;
          goto LAB_0063a8e4;
        }
                    /* catch() { ... } // from try @ 0063a5d8 with catch @ 0063a608 */
                    /* try { // try from 0063a60c to 0073a7b7 has its CatchHandler @ 0063a60c
                       catch() { ... } // from try @ 0063a60c with catch @ 0063a60c
                       catch() { ... } // from try @ 0063a7fc with catch @ 0063a60c
                       catch() { ... } // from try @ 0063aa78 with catch @ 0063a60c */
        if ((iVar15 != 0x10) && (uVar16 != 0)) {
          bVar3 = false;
          bVar8 = true;
          goto LAB_0063a690;
        }
        iVar12 = 0;
        bVar8 = false;
        iVar15 = 0x10;
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
      iVar13 = FUN_00632808(&local_30);
      iVar14 = FUN_00632808(&local_40);
      if ((iVar13 == -1) == (iVar14 == -1)) {
        cVar11 = *(char *)(lVar17 + 0x20);
        bVar3 = true;
        goto LAB_0063a8e4;
      }
      uVar23 = FUN_00632808(&local_30);
      uVar23 = uVar23 & 0xff;
      cVar11 = *(char *)(lVar17 + 0x20);
    } while (bVar8);
    bVar3 = false;
    if (iVar15 != 0x10) goto LAB_0063a690;
LAB_0063a8ec:
    uVar25 = 0x16;
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
  if (cVar11 != '\0') {
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
  }
  local_58 = &local_8;
  uVar26 = (ulong)iVar15;
  cVar11 = *(char *)(lVar17 + 0x88);
  uVar1 = 0x7fffffffffffffff;
  if (bVar9) {
    uVar1 = 0x8000000000000000;
  }
  uVar2 = 0;
  if (uVar26 != 0) {
    uVar2 = uVar1 / uVar26;
  }
  if (cVar11 == '\0') {
    if (bVar3) {
LAB_0063add4:
      uVar24 = 0;
      bVar6 = false;
      bVar4 = false;
      goto LAB_0063a858;
    }
    uVar24 = 0;
    bVar6 = false;
LAB_0063a6fc:
    if (10 < uVar25) goto LAB_0063a7a8;
LAB_0063a704:
    if ((0x2f < uVar23) && (uVar23 < (int)uVar25 + 0x30U)) {
      uVar16 = uVar23 - 0x30;
LAB_0063a71c:
      if (uVar24 <= uVar2) goto LAB_0063a7e4;
LAB_0063a724:
      bVar6 = true;
      if (local_30 == (long *)0x0) goto LAB_0063a810;
LAB_0063a730:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar20 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar20) {
LAB_0063abf4:
          local_28 = 0xffffffff;
          uVar16 = (**(code **)(*local_30 + 0x48))();
          if (uVar16 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_0063a810;
          }
          goto LAB_0063a760;
        }
      }
      else {
                    /* try { // try from 0063abd4 to 0073abe7 has its CatchHandler @ 0063ae84 */
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_0063a810;
        pbVar20 = (byte *)local_30[2];
                    /* try { // try from 0063abe8 to 0073ac83 has its CatchHandler @ 0063aa84 */
        if ((byte *)local_30[3] <= pbVar20) goto LAB_0063abf4;
      }
      uVar16 = (uint)*pbVar20;
LAB_0063a760:
      iVar15 = 0;
      local_28 = uVar16;
      if (local_40 == (long *)0x0) goto LAB_0063a788;
      iVar13 = 0;
      if ((int)local_38 == -1) goto LAB_0063a82c;
LAB_0063a780:
      if (iVar15 != iVar13) {
LAB_0063a788:
        do {
          if (local_30 == (long *)0x0) {
LAB_0063ac2c:
            uVar23 = 0xff;
            goto LAB_0063a6fc;
          }
          if (local_28 == 0xffffffff) {
            if ((byte *)local_30[2] < (byte *)local_30[3]) {
              uVar16 = (uint)*(byte *)local_30[2];
            }
            else {
              uVar16 = (**(code **)(*local_30 + 0x48))();
              if (uVar16 == 0xffffffff) {
                local_30 = (long *)0x0;
                goto LAB_0063ac2c;
              }
            }
            uVar23 = uVar16 & 0xff;
            local_28 = uVar16;
                    /* try { // try from 0063aba0 to 0073abaf has its CatchHandler @ 0063ae2c */
            goto LAB_0063a6fc;
          }
          uVar23 = local_28 & 0xff;
          if (uVar25 < 0xb) goto LAB_0063a704;
LAB_0063a7a8:
          uVar16 = uVar23 - 0x30;
          if ((uVar16 & 0xff) < 10) goto LAB_0063a71c;
                    /* try { // try from 0063a7b8 to 0073a7c3 has its CatchHandler @ 0063aa30 */
          if ((uVar23 - 0x61 & 0xff) < 6) {
            uVar16 = uVar23 - 0x57;
            goto LAB_0063a71c;
          }
          if (5 < (uVar23 - 0x41 & 0xff)) goto LAB_0063ac34;
          uVar16 = uVar23 - 0x37;
          if (uVar2 < uVar24) goto LAB_0063a724;
LAB_0063a7e4:
          uVar21 = uVar24 * uVar26;
                    /* try { // try from 0063a7f0 to 0073a7fb has its CatchHandler @ 0063aa24 */
          iVar12 = iVar12 + 1;
                    /* try { // try from 0063a7fc to 0073aa4f has its CatchHandler @ 0063a60c */
          uVar24 = (long)(int)uVar16 + uVar21;
          bVar6 = (bool)(bVar6 | uVar1 - (long)(int)uVar16 < uVar21);
          if (local_30 != (long *)0x0) goto LAB_0063a730;
LAB_0063a810:
          if (local_40 == (long *)0x0) break;
          iVar15 = 1;
          iVar13 = 0;
          if ((int)local_38 != -1) goto LAB_0063a780;
LAB_0063a82c:
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar16 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar16 = (**(code **)(*local_40 + 0x48))();
            if (uVar16 == 0xffffffff) goto code_r0x0063ad40;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar16);
          if (iVar15 == 0) break;
        } while( true );
      }
      goto LAB_0063a850;
    }
  }
  else {
    if (bVar3) goto LAB_0063add4;
    uVar24 = 0;
    bVar6 = false;
LAB_0063a97c:
    if ((*(char *)(lVar17 + 0x20) != '\0') && (*(byte *)(lVar17 + 0x49) == uVar23))
    goto LAB_0063aa7c;
LAB_0063a990:
    if ((*(byte *)(lVar17 + 0x48) != uVar23) &&
       (pvVar18 = memchr((void *)(lVar17 + 0x72),uVar23,uVar25), pvVar18 != (void *)0x0)) {
      iVar15 = (int)pvVar18 - (int)(void *)(lVar17 + 0x72);
      if (0xf < iVar15) {
        iVar15 = iVar15 + -6;
      }
      if (uVar2 < uVar24) {
        bVar6 = true;
      }
      else {
        uVar21 = uVar24 * uVar26;
        iVar12 = iVar12 + 1;
        uVar24 = (long)iVar15 + uVar21;
        bVar6 = (bool)(bVar6 | uVar1 - (long)iVar15 < uVar21);
      }
LAB_0063a9ec:
      if (local_30 == (long *)0x0) goto LAB_0063aafc;
LAB_0063a9f4:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar20 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar20) {
LAB_0063acec:
          local_28 = 0xffffffff;
          uVar16 = (**(code **)(*local_30 + 0x48))();
          if (uVar16 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_0063aafc;
          }
          goto LAB_0063aa28;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_0063aafc;
        pbVar20 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar20) goto LAB_0063acec;
      }
                    /* catch() { ... } // from try @ 0063a7f0 with catch @ 0063aa24 */
      uVar16 = (uint)*pbVar20;
LAB_0063aa28:
                    /* catch() { ... } // from try @ 0063a7b8 with catch @ 0063aa30 */
      local_28 = uVar16;
      if (local_40 == (long *)0x0) goto LAB_0063aa50;
      cVar7 = '\0';
      do {
        cVar19 = '\0';
        if ((int)local_38 == -1) {
                    /* try { // try from 0063ab1c to 0073ab2f has its CatchHandler @ 0063aed4 */
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar16 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar16 = (**(code **)(*local_40 + 0x48))();
            if (uVar16 == 0xffffffff) {
              local_40 = (long *)0x0;
              cVar19 = cVar11;
              goto LAB_0063aa48;
            }
          }
          local_38 = CONCAT44(local_38._4_4_,uVar16);
                    /* try { // try from 0063ab30 to 0073ab9f has its CatchHandler @ 0063aa84 */
          cVar19 = '\0';
        }
LAB_0063aa48:
        if (cVar19 == cVar7) goto LAB_0063a850;
LAB_0063aa50:
                    /* try { // try from 0063aa50 to 0073aa77 has its CatchHandler @ 0063aa80 */
        if (local_30 == (long *)0x0) {
LAB_0063ad24:
          uVar23 = 0xff;
          goto LAB_0063a97c;
        }
        if (local_28 == 0xffffffff) {
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
            uVar16 = (uint)*(byte *)local_30[2];
          }
          else {
            uVar16 = (**(code **)(*local_30 + 0x48))();
            if (uVar16 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_0063ad24;
            }
          }
          uVar23 = uVar16 & 0xff;
          local_28 = uVar16;
          goto LAB_0063a97c;
        }
        uVar23 = local_28 & 0xff;
                    /* try { // try from 0063aa78 to 0073aa83 has its CatchHandler @ 0063a60c */
        if ((*(char *)(lVar17 + 0x20) == '\0') || (*(byte *)(lVar17 + 0x49) != uVar23))
        goto LAB_0063a990;
LAB_0063aa7c:
        if (iVar12 == 0) {
          bVar4 = true;
          iVar12 = 0;
          goto LAB_0063a858;
        }
                    /* catch() { ... } // from try @ 0063aa50 with catch @ 0063aa80 */
                    /* try { // try from 0063aa84 to 0073aaef has its CatchHandler @ 0063aa84
                       catch() { ... } // from try @ 0063aa84 with catch @ 0063aa84
                       catch() { ... } // from try @ 0063ab30 with catch @ 0063aa84
                       catch() { ... } // from try @ 0063abe8 with catch @ 0063aa84
                       catch() { ... } // from try @ 0063ac98 with catch @ 0063aa84
                       catch() { ... } // from try @ 0063adc0 with catch @ 0063aa84
                       catch() { ... } // from try @ 0063af74 with catch @ 0063aa84 */
        lVar22 = *(long *)(local_8 + -0x18);
        uVar21 = lVar22 + 1;
        if ((*(ulong *)(local_8 + -0x10) < uVar21) || (0 < *(int *)(local_8 + -8))) {
          FUN_00667088(local_58,uVar21);
          lVar22 = *(long *)(local_8 + -0x18);
        }
        local_8[lVar22] = (char)iVar12;
        iVar12 = 0;
        if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_0063a9ec;
        *(undefined4 *)(local_8 + -8) = 0;
        *(ulong *)(local_8 + -0x18) = uVar21;
                    /* try { // try from 0063aaf0 to 0073aaff has its CatchHandler @ 0063ae30 */
        local_8[uVar21] = 0;
        if (local_30 != (long *)0x0) goto LAB_0063a9f4;
LAB_0063aafc:
        if (local_40 == (long *)0x0) goto LAB_0063a850;
        cVar7 = cVar11;
      } while( true );
    }
  }
LAB_0063ac34:
  bVar4 = false;
  if (*(long *)(local_8 + -0x18) != 0) goto LAB_0063ac44;
LAB_0063a864:
  if ((iVar12 == 0) <= bVar8) goto LAB_0063ac8c;
LAB_0063a878:
  *param_8 = 0;
  *param_7 = 4;
LAB_0063a88c:
  if (bVar3) {
    *param_7 = *param_7 | 2;
  }
  auVar5._8_4_ = local_28;
  auVar5._0_8_ = local_30;
  auVar5._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
                    /* try { // try from 0063adac to 0073adbf has its CatchHandler @ 0063af28 */
    FUN_0062b45c(local_8 + -0x18,auStack_10);
  }
  return auVar5;
code_r0x0063ad40:
  local_40 = (long *)0x0;
  iVar13 = 1;
  goto LAB_0063a780;
LAB_0063a850:
  bVar4 = false;
  bVar3 = true;
LAB_0063a858:
  if (*(long *)(local_8 + -0x18) == 0) goto LAB_0063a864;
LAB_0063ac44:
  FUN_00667890(local_58,iVar12);
  cVar11 = FUN_0063ca8c(*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x18),local_58);
  if (cVar11 == '\0') {
    *param_7 = 4;
  }
                    /* try { // try from 0063ac84 to 0073ac97 has its CatchHandler @ 0063ae34 */
  if (((iVar12 == 0) <= bVar8) || (*(long *)(local_8 + -0x18) != 0)) {
LAB_0063ac8c:
    if (!bVar4) {
      if (bVar6) {
                    /* try { // try from 0063ac98 to 0073ad6f has its CatchHandler @ 0063aa84 */
        uVar25 = 0x7fffffffffffffff;
        if (bVar9) {
          uVar25 = 0x8000000000000000;
        }
        *param_8 = uVar25;
        *param_7 = 4;
      }
      else {
        uVar25 = -uVar24;
        if (!bVar9) {
          uVar25 = uVar24;
        }
        *param_8 = uVar25;
      }
      goto LAB_0063a88c;
    }
  }
  goto LAB_0063a878;
}


