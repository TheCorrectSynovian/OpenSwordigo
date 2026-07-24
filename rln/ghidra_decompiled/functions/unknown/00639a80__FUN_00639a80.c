/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00639a80
 * Function: FUN_00639a80
 * Signature: undefined FUN_00639a80(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_00639a80(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
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
  
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar14 = FUN_00632724(auStack_18,param_6 + 0xd0);
                    /* try { // try from 00639ac4 to 00739cab has its CatchHandler @ 00639ccc */
  uVar13 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar13 == 0x40) {
    uVar23 = 8;
  }
  else {
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
LAB_0063a164:
    cVar9 = *(char *)(lVar14 + 0x20);
    bVar1 = true;
    iVar10 = 0;
    bVar6 = false;
LAB_00639ecc:
    if ((int)uVar23 == 0x10) goto LAB_00639ed4;
LAB_00639c94:
    __n = (ulong)(int)uVar23;
    local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 00639cac to 00739cfb has its CatchHandler @ 006370b8 */
    if (cVar9 == '\0') goto LAB_00639cb4;
LAB_00639ef4:
    local_58 = &local_8;
                    /* catch() { ... } // from try @ 00639e5c with catch @ 00639efc */
    FUN_00667088(local_58,0x20);
    cVar9 = *(char *)(lVar14 + 0x88);
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = 0xffffffffffffffff / uVar23;
    }
    if (cVar9 != '\0') goto LAB_00639f18;
LAB_00639ccc:
                    /* catch() { ... } // from try @ 00638c00 with catch @ 00639ccc
                       catch() { ... } // from try @ 00639ac4 with catch @ 00639ccc */
    if (bVar1) {
LAB_0063a3b8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063a388 with catch @ 0063a3b8
                        */
      uVar21 = 0;
      bVar4 = false;
      bVar2 = false;
      goto LAB_00639e40;
    }
                    /* catch() { ... } // from try @ 00639a60 with catch @ 00639cd8 */
    uVar21 = 0;
    bVar4 = false;
LAB_00639ce8:
    if (10 < __n) goto LAB_00639d94;
LAB_00639cf0:
                    /* try { // try from 00639cfc to 00739e03 has its CatchHandler @ 00639cfc
                       catch() { ... } // from try @ 00639cfc with catch @ 00639cfc
                       catch() { ... } // from try @ 00639e18 with catch @ 00639cfc
                       catch() { ... } // from try @ 00639e70 with catch @ 00639cfc
                       catch() { ... } // from try @ 00639f98 with catch @ 00639cfc */
    if ((0x2f < uVar20) && (uVar20 < (int)__n + 0x30U)) {
      uVar13 = uVar20 - 0x30;
LAB_00639d08:
      if (uVar21 <= uVar22) goto LAB_00639dd0;
LAB_00639d10:
      bVar4 = true;
      if (local_30 == (long *)0x0) goto LAB_00639df8;
LAB_00639d1c:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar17 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar17) {
LAB_0063a1f0:
          local_28 = 0xffffffff;
          uVar13 = (**(code **)(*local_30 + 0x48))();
          if (uVar13 == 0xffffffff) {
            local_30 = (long *)0x0;
                    /* catch() { ... } // from try @ 0063a00c with catch @ 0063a20c */
            goto LAB_00639df8;
          }
          goto LAB_00639d4c;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_00639df8;
        pbVar17 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar17) goto LAB_0063a1f0;
      }
      uVar13 = (uint)*pbVar17;
LAB_00639d4c:
      iVar11 = 0;
      local_28 = uVar13;
      if (local_40 == (long *)0x0) goto LAB_00639d74;
      iVar12 = 0;
      if ((int)local_38 == -1) goto LAB_00639e14;
LAB_00639d6c:
      if (iVar11 != iVar12) {
LAB_00639d74:
        do {
          if (local_30 == (long *)0x0) {
LAB_0063a2a0:
            uVar20 = 0xff;
            goto LAB_00639ce8;
          }
          if (local_28 == 0xffffffff) {
            if ((byte *)local_30[2] < (byte *)local_30[3]) {
              uVar13 = (uint)*(byte *)local_30[2];
            }
            else {
              uVar13 = (**(code **)(*local_30 + 0x48))();
              if (uVar13 == 0xffffffff) {
                local_30 = (long *)0x0;
                goto LAB_0063a2a0;
              }
            }
                    /* catch() { ... } // from try @ 0063a034 with catch @ 0063a194 */
                    /* catch() { ... } // from try @ 0063a048 with catch @ 0063a198 */
            uVar20 = uVar13 & 0xff;
            local_28 = uVar13;
            goto LAB_00639ce8;
          }
          uVar20 = local_28 & 0xff;
          if (__n < 0xb) goto LAB_00639cf0;
LAB_00639d94:
          uVar13 = uVar20 - 0x30;
          if ((uVar13 & 0xff) < 10) goto LAB_00639d08;
          if ((uVar20 - 0x61 & 0xff) < 6) {
            uVar13 = uVar20 - 0x57;
            goto LAB_00639d08;
          }
          if (5 < (uVar20 - 0x41 & 0xff)) goto LAB_0063a2a8;
          uVar13 = uVar20 - 0x37;
          if (uVar22 < uVar21) goto LAB_00639d10;
LAB_00639dd0:
          iVar10 = iVar10 + 1;
          uVar18 = uVar21 * uVar23;
          uVar21 = (long)(int)uVar13 + uVar18;
          bVar4 = (bool)(bVar4 | (ulong)~(long)(int)uVar13 < uVar18);
          if (local_30 != (long *)0x0) goto LAB_00639d1c;
LAB_00639df8:
          if (local_40 == (long *)0x0) break;
                    /* try { // try from 00639e04 to 00739e17 has its CatchHandler @ 00639f4c */
          iVar11 = 1;
          iVar12 = 0;
          if ((int)local_38 != -1) goto LAB_00639d6c;
LAB_00639e14:
                    /* try { // try from 00639e18 to 00739e5b has its CatchHandler @ 00639cfc */
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar13 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar13 = (**(code **)(*local_40 + 0x48))();
            if (uVar13 == 0xffffffff) goto code_r0x0063a330;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar13);
          if (iVar11 == 0) break;
        } while( true );
      }
      goto LAB_00639e38;
    }
  }
  else {
    bVar8 = FUN_00632808(&local_30);
    uVar20 = (uint)bVar8;
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
          iVar10 = FUN_00632808(&local_30);
          iVar11 = FUN_00632808(&local_40);
          if ((iVar10 == -1) == (iVar11 == -1)) goto LAB_0063a164;
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
      if (((cVar9 != '\0') && (*(byte *)(lVar14 + 0x49) == uVar20)) ||
         (*(byte *)(lVar14 + 0x48) == uVar20)) break;
      iVar11 = (int)uVar23;
      if (*(byte *)(lVar14 + 0x72) == uVar20) {
        if ((iVar11 == 10) < bVar6) goto LAB_00639bf0;
        iVar10 = iVar10 + 1;
        if ((iVar11 == 8) || (bVar6 = true, uVar13 == 0)) {
          iVar10 = 0;
          bVar6 = true;
          uVar23 = 8;
        }
      }
      else {
        if (!bVar6) break;
LAB_00639bf0:
        if ((*(byte *)(lVar14 + 0x70) != uVar20) && (*(byte *)(lVar14 + 0x71) != uVar20)) {
          bVar1 = false;
          bVar6 = true;
          goto LAB_00639ecc;
        }
        if ((iVar11 != 0x10) && (uVar13 != 0)) {
          bVar1 = false;
                    /* try { // try from 0063a3b0 to 0073a3bb has its CatchHandler @ 0063a2b4 */
          bVar6 = true;
          goto LAB_00639c94;
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
                    /* try { // try from 0063a388 to 0073a3af has its CatchHandler @ 0063a3b8 */
          (**(code **)(*local_30 + 0x50))();
        }
        local_28 = 0xffffffff;
      }
      iVar11 = FUN_00632808(&local_30);
      iVar12 = FUN_00632808(&local_40);
      if ((iVar11 == -1) == (iVar12 == -1)) {
        cVar9 = *(char *)(lVar14 + 0x20);
        bVar1 = true;
        goto LAB_00639ecc;
      }
      uVar20 = FUN_00632808(&local_30);
      uVar20 = uVar20 & 0xff;
      cVar9 = *(char *)(lVar14 + 0x20);
    } while (bVar6);
    bVar1 = false;
    if ((int)uVar23 != 0x10) goto LAB_00639c94;
LAB_00639ed4:
    __n = 0x16;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar9 != '\0') goto LAB_00639ef4;
LAB_00639cb4:
    cVar9 = *(char *)(lVar14 + 0x88);
    uVar22 = 0;
    if (uVar23 != 0) {
      uVar22 = 0xffffffffffffffff / uVar23;
    }
    if (cVar9 == '\0') goto LAB_00639ccc;
LAB_00639f18:
    local_58 = &local_8;
    if (bVar1) goto LAB_0063a3b8;
                    /* try { // try from 00639f20 to 00739f97 has its CatchHandler @ 00639fa0 */
    uVar21 = 0;
    bVar4 = false;
LAB_00639f2c:
    if ((*(char *)(lVar14 + 0x20) != '\0') && (*(byte *)(lVar14 + 0x49) == uVar20))
    goto LAB_0063a028;
LAB_00639f40:
                    /* catch() { ... } // from try @ 00639e04 with catch @ 00639f4c */
    if ((*(byte *)(lVar14 + 0x48) != uVar20) &&
       (pvVar15 = memchr((void *)(lVar14 + 0x72),uVar20,__n), pvVar15 != (void *)0x0)) {
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
LAB_00639f98:
                    /* try { // try from 00639f98 to 00739fa3 has its CatchHandler @ 00639cfc */
      if (local_30 == (long *)0x0) goto LAB_0063a0a8;
LAB_00639fa0:
                    /* catch() { ... } // from try @ 00639f20 with catch @ 00639fa0 */
                    /* try { // try from 00639fa4 to 0073a00b has its CatchHandler @ 00639fa4
                       catch() { ... } // from try @ 00639fa4 with catch @ 00639fa4
                       catch() { ... } // from try @ 0063a080 with catch @ 00639fa4
                       catch() { ... } // from try @ 0063a0e0 with catch @ 00639fa4
                       catch() { ... } // from try @ 0063a2a8 with catch @ 00639fa4 */
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar17 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar17) {
LAB_0063a2dc:
          local_28 = 0xffffffff;
          uVar13 = (**(code **)(*local_30 + 0x48))();
          if (uVar13 == 0xffffffff) {
                    /* try { // try from 0063a2f4 to 0073a2f7 has its CatchHandler @ 0063a364 */
            local_30 = (long *)0x0;
                    /* try { // try from 0063a2f8 to 0073a387 has its CatchHandler @ 0063a2b4 */
            goto LAB_0063a0a8;
          }
          goto LAB_00639fd4;
        }
      }
      else {
                    /* catch() { ... } // from try @ 0063a230 with catch @ 0063a2b0 */
                    /* try { // try from 0063a2b4 to 0073a2f3 has its CatchHandler @ 0063a2b4
                       catch(type#1 @ 00000000) { ... } // from try @ 0063a2b4 with catch @ 0063a2b4
                       catch(type#1 @ 00000000) { ... } // from try @ 0063a2f8 with catch @ 0063a2b4
                       catch(type#1 @ 00000000) { ... } // from try @ 0063a3b0 with catch @ 0063a2b4
                        */
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_0063a0a8;
        pbVar17 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar17) goto LAB_0063a2dc;
      }
      uVar13 = (uint)*pbVar17;
LAB_00639fd4:
      local_28 = uVar13;
      if (local_40 == (long *)0x0) goto LAB_00639ffc;
      cVar5 = '\0';
      do {
        cVar16 = '\0';
        if ((int)local_38 == -1) {
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
                    /* try { // try from 0063a0d4 to 0073a0df has its CatchHandler @ 0063a25c */
            uVar13 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar13 = (**(code **)(*local_40 + 0x48))();
            if (uVar13 == 0xffffffff) {
              local_40 = (long *)0x0;
              cVar16 = cVar9;
              goto LAB_00639ff4;
            }
          }
          local_38 = CONCAT44(local_38._4_4_,uVar13);
          cVar16 = '\0';
                    /* try { // try from 0063a0e0 to 0073a22f has its CatchHandler @ 00639fa4 */
        }
LAB_00639ff4:
        if (cVar5 == cVar16) goto LAB_00639e38;
LAB_00639ffc:
        if (local_30 == (long *)0x0) {
LAB_0063a314:
          uVar20 = 0xff;
          goto LAB_00639f2c;
        }
                    /* try { // try from 0063a00c to 0073a033 has its CatchHandler @ 0063a20c */
        if (local_28 == 0xffffffff) {
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
            uVar13 = (uint)*(byte *)local_30[2];
          }
          else {
            uVar13 = (**(code **)(*local_30 + 0x48))();
            if (uVar13 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_0063a314;
            }
          }
          uVar20 = uVar13 & 0xff;
          local_28 = uVar13;
          goto LAB_00639f2c;
        }
        uVar20 = local_28 & 0xff;
        if ((*(char *)(lVar14 + 0x20) == '\0') || (*(byte *)(lVar14 + 0x49) != uVar20))
        goto LAB_00639f40;
LAB_0063a028:
        if (iVar10 == 0) {
          bVar2 = true;
          iVar10 = 0;
          goto LAB_00639e40;
        }
                    /* try { // try from 0063a034 to 0073a047 has its CatchHandler @ 0063a194 */
        lVar19 = *(long *)(local_8 + -0x18);
        uVar18 = lVar19 + 1;
                    /* try { // try from 0063a048 to 0073a07f has its CatchHandler @ 0063a198 */
        if ((*(ulong *)(local_8 + -0x10) < uVar18) || (0 < *(int *)(local_8 + -8))) {
          FUN_00667088(local_58,uVar18);
          lVar19 = *(long *)(local_8 + -0x18);
        }
        local_8[lVar19] = (char)iVar10;
        iVar10 = 0;
                    /* try { // try from 0063a080 to 0073a0d3 has its CatchHandler @ 00639fa4 */
        if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_00639f98;
        *(undefined4 *)(local_8 + -8) = 0;
        *(ulong *)(local_8 + -0x18) = uVar18;
        local_8[uVar18] = 0;
        if (local_30 != (long *)0x0) goto LAB_00639fa0;
LAB_0063a0a8:
        if (local_40 == (long *)0x0) goto LAB_00639e38;
        cVar5 = cVar9;
      } while( true );
    }
  }
LAB_0063a2a8:
                    /* try { // try from 0063a2a8 to 0073a2b3 has its CatchHandler @ 00639fa4 */
  bVar2 = false;
LAB_00639e40:
  local_58 = &local_8;
  if (*(long *)(local_8 + -0x18) == 0) {
                    /* try { // try from 00639e5c to 00739e6f has its CatchHandler @ 00639efc */
    if ((iVar10 == 0) <= bVar6) {
LAB_0063a264:
      if (!bVar2) {
        if (bVar4) {
          *param_8 = -1;
          *param_7 = 4;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063a2f4 with catch @ 0063a364
                        */
          *param_8 = (uVar21 ^ -(ulong)bVar7) + (ulong)bVar7;
        }
        goto LAB_00639e74;
      }
    }
  }
  else {
    FUN_00667890(local_58,iVar10);
    cVar9 = FUN_0063ca8c(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),local_58);
                    /* try { // try from 0063a230 to 0073a2a7 has its CatchHandler @ 0063a2b0 */
    if (cVar9 == '\0') {
      *param_7 = 4;
    }
                    /* catch() { ... } // from try @ 0063a0d4 with catch @ 0063a25c */
    if (((iVar10 == 0) <= bVar6) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0063a264;
  }
  *param_8 = 0;
                    /* try { // try from 00639e70 to 00739f1f has its CatchHandler @ 00639cfc */
  *param_7 = 4;
LAB_00639e74:
  if (bVar1) {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_28;
  auVar3._0_8_ = local_30;
  auVar3._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
    FUN_0062b45c(local_8 + -0x18,auStack_10);
  }
  return auVar3;
code_r0x0063a330:
  local_40 = (long *)0x0;
  iVar12 = 1;
  goto LAB_00639d6c;
LAB_00639e38:
  bVar2 = false;
  bVar1 = true;
  goto LAB_00639e40;
}


