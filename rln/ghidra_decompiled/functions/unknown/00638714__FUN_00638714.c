/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00638714
 * Function: FUN_00638714
 * Signature: undefined FUN_00638714(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_00638714(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,short *param_8)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  void *pvVar16;
  char cVar17;
  byte *pbVar18;
  long lVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  ulong __n;
  uint uVar24;
  int *piVar25;
  ushort local_6c;
  undefined **local_58;
  long *local_40;
  undefined8 local_38;
  long *local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined1 auStack_18 [16];
  undefined *local_8;
  
  local_28 = (uint)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
                    /* try { // try from 00638730 to 00738733 has its CatchHandler @ 00638bcc */
  lVar15 = FUN_00632724(auStack_18,param_6 + 0xd0);
                    /* try { // try from 00638754 to 00738757 has its CatchHandler @ 00638bc8 */
  uVar24 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar24 == 0x40) {
    uVar10 = 8;
  }
  else {
    uVar10 = 0x10;
    if (uVar24 != 8) {
      uVar10 = 10;
    }
  }
  iVar11 = FUN_00632808(&local_30);
  iVar12 = FUN_00632808(&local_40);
                    /* try { // try from 006387a0 to 007387b3 has its CatchHandler @ 00639094 */
  if ((iVar11 == -1) == (iVar12 == -1)) {
    uVar20 = 0;
    local_6c = 0;
LAB_00638e0c:
    cVar9 = *(char *)(lVar15 + 0x20);
    bVar2 = true;
    iVar11 = 0;
    bVar7 = false;
LAB_00638b6c:
    if (uVar10 == 0x10) goto LAB_00638b74;
LAB_00638928:
    __n = (ulong)(int)uVar10;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar9 == '\0') goto LAB_00638948;
LAB_00638b94:
    local_58 = &local_8;
                    /* catch() { ... } // from try @ 00637c64 with catch @ 00638b9c */
    FUN_00667088(local_58,0x20);
                    /* catch() { ... } // from try @ 006387d4 with catch @ 00638ba0 */
    cVar9 = *(char *)(lVar15 + 0x88);
                    /* catch() { ... } // from try @ 00638454 with catch @ 00638ba4 */
                    /* catch() { ... } // from try @ 006380ec with catch @ 00638ba8 */
                    /* catch() { ... } // from try @ 00638060 with catch @ 00638bac */
                    /* catch() { ... } // from try @ 00637ea0 with catch @ 00638bb0 */
    uVar24 = 0;
    if (uVar10 != 0) {
      uVar24 = 0xffff / uVar10;
    }
                    /* catch() { ... } // from try @ 00637e0c with catch @ 00638bb4 */
    if (cVar9 != '\0') goto LAB_00638bb8;
LAB_00638960:
    if (bVar2) {
LAB_00639088:
      uVar21 = 0;
      bVar5 = false;
                    /* catch() { ... } // from try @ 006387f4 with catch @ 00639090 */
      bVar3 = false;
                    /* catch() { ... } // from try @ 006387a0 with catch @ 00639094 */
      goto LAB_00638ae0;
    }
    uVar23 = 0;
    bVar5 = false;
LAB_00638980:
    if (10 < __n) goto LAB_00638a2c;
LAB_00638988:
    uVar21 = (ushort)uVar23;
    if ((0x2f < uVar20) && (uVar20 < (int)__n + 0x30U)) {
      uVar14 = uVar20 - 0x30;
LAB_006389a0:
      if (uVar23 <= uVar24) goto LAB_00638a68;
LAB_006389a8:
      bVar5 = true;
      if (local_30 == (long *)0x0) goto LAB_00638a98;
LAB_006389b4:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar18 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar18) {
LAB_00638e98:
          local_28 = 0xffffffff;
          uVar20 = (**(code **)(*local_30 + 0x48))();
                    /* catch() { ... } // from try @ 00637844 with catch @ 00638ea4 */
                    /* catch() { ... } // from try @ 00637598 with catch @ 00638ea8 */
          if (uVar20 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_00638a98;
          }
          goto LAB_006389e4;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_00638a98;
        pbVar18 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar18) goto LAB_00638e98;
      }
      uVar20 = (uint)*pbVar18;
LAB_006389e4:
      iVar12 = 0;
      local_28 = uVar20;
      if (local_40 == (long *)0x0) goto LAB_00638a0c;
      iVar13 = 0;
      if ((int)local_38 == -1) goto LAB_00638ab4;
LAB_00638a04:
      uVar21 = (ushort)uVar23;
      if (iVar13 != iVar12) {
LAB_00638a0c:
        do {
          if (local_30 == (long *)0x0) {
LAB_00638f48:
            uVar20 = 0xff;
                    /* catch() { ... } // from try @ 00637320 with catch @ 00638f4c */
            goto LAB_00638980;
          }
          if (local_28 == 0xffffffff) {
            if ((byte *)local_30[2] < (byte *)local_30[3]) {
              uVar14 = (uint)*(byte *)local_30[2];
            }
            else {
              uVar14 = (**(code **)(*local_30 + 0x48))();
              if (uVar14 == 0xffffffff) {
                local_30 = (long *)0x0;
                goto LAB_00638f48;
              }
            }
            uVar20 = uVar14 & 0xff;
            local_28 = uVar14;
            goto LAB_00638980;
          }
          uVar20 = local_28 & 0xff;
          if (__n < 0xb) goto LAB_00638988;
LAB_00638a2c:
          uVar21 = (ushort)uVar23;
          uVar14 = uVar20 - 0x30;
          if ((uVar14 & 0xff) < 10) goto LAB_006389a0;
          if ((uVar20 - 0x61 & 0xff) < 6) {
            uVar14 = uVar20 - 0x57;
            goto LAB_006389a0;
          }
          if (5 < (uVar20 - 0x41 & 0xff)) goto LAB_00638f50;
          uVar14 = uVar20 - 0x37;
          if (uVar24 < uVar23) goto LAB_006389a8;
LAB_00638a68:
          uVar20 = uVar23 * uVar10;
          iVar11 = iVar11 + 1;
          uVar22 = uVar20 & 0xffff;
          uVar23 = uVar22 + uVar14 & 0xffff;
          bVar5 = (bool)(bVar5 | ((uVar20 & 0xffff) != 0xffff - uVar14 &&
                                 (int)(0xffff - uVar14) <= (int)uVar22));
          if (local_30 != (long *)0x0) goto LAB_006389b4;
LAB_00638a98:
          uVar21 = (ushort)uVar23;
          if (local_40 == (long *)0x0) break;
          iVar12 = 1;
          iVar13 = 0;
          if ((int)local_38 != -1) goto LAB_00638a04;
LAB_00638ab4:
          uVar21 = (ushort)uVar23;
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar20 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar20 = (**(code **)(*local_40 + 0x48))();
            if (uVar20 == 0xffffffff) goto code_r0x00638fd8;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar20);
          if (iVar12 == 0) break;
        } while( true );
      }
      goto LAB_00638ad8;
    }
  }
  else {
    bVar8 = FUN_00632808(&local_30);
    uVar20 = (uint)bVar8;
    local_6c = (ushort)(*(byte *)(lVar15 + 0x6e) == bVar8);
    if ((local_6c == 0) && (*(byte *)(lVar15 + 0x6f) != bVar8)) {
      cVar9 = *(char *)(lVar15 + 0x20);
    }
    else {
      cVar9 = *(char *)(lVar15 + 0x20);
                    /* try { // try from 006387d4 to 007387df has its CatchHandler @ 00638ba0 */
      if ((cVar9 == '\0') || (*(byte *)(lVar15 + 0x49) != bVar8)) {
        if (*(byte *)(lVar15 + 0x48) != bVar8) {
          if (local_30 != (long *)0x0) {
                    /* try { // try from 006387f4 to 007387fb has its CatchHandler @ 00639090 */
            if ((ulong)local_30[2] < (ulong)local_30[3]) {
              local_30[2] = local_30[2] + 1;
            }
            else {
              FUN_0062b4a0();
            }
            local_28 = 0xffffffff;
          }
          iVar11 = FUN_00632808(&local_30);
          iVar12 = FUN_00632808(&local_40);
                    /* try { // try from 00638824 to 0073882f has its CatchHandler @ 00639040 */
          if ((iVar11 == -1) == (iVar12 == -1)) goto LAB_00638e0c;
          uVar20 = FUN_00632808(&local_30);
          uVar20 = uVar20 & 0xff;
          cVar9 = *(char *)(lVar15 + 0x20);
        }
      }
      else {
        cVar9 = '\x01';
                    /* catch() { ... } // from try @ 00637af0 with catch @ 00638e00 */
      }
    }
    iVar11 = 0;
    bVar7 = false;
                    /* try { // try from 00638850 to 00738877 has its CatchHandler @ 00638cb0 */
    do {
      if (((cVar9 != '\0') && (*(byte *)(lVar15 + 0x49) == uVar20)) ||
         (*(byte *)(lVar15 + 0x48) == uVar20)) break;
                    /* try { // try from 00638878 to 00738bff has its CatchHandler @ 006370b8 */
      if (*(byte *)(lVar15 + 0x72) == uVar20) {
        if ((uVar10 == 10) < bVar7) goto LAB_00638884;
        iVar11 = iVar11 + 1;
                    /* catch() { ... } // from try @ 00637f04 with catch @ 00638dac */
                    /* catch() { ... } // from try @ 00637d18 with catch @ 00638db0 */
        if ((uVar10 == 8) || (bVar7 = true, uVar24 == 0)) {
          iVar11 = 0;
          bVar7 = true;
          uVar10 = 8;
        }
      }
      else {
        if (!bVar7) break;
LAB_00638884:
        if ((*(byte *)(lVar15 + 0x70) != uVar20) && (*(byte *)(lVar15 + 0x71) != uVar20)) {
          bVar2 = false;
          bVar7 = true;
          goto LAB_00638b6c;
        }
        if ((uVar10 != 0x10) && (uVar24 != 0)) {
          bVar2 = false;
          bVar7 = true;
          goto LAB_00638928;
        }
        iVar11 = 0;
        bVar7 = false;
        uVar10 = 0x10;
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
      iVar12 = FUN_00632808(&local_30);
      iVar13 = FUN_00632808(&local_40);
      if ((iVar12 == -1) == (iVar13 == -1)) {
        cVar9 = *(char *)(lVar15 + 0x20);
        bVar2 = true;
        goto LAB_00638b6c;
      }
      uVar20 = FUN_00632808(&local_30);
      uVar20 = uVar20 & 0xff;
      cVar9 = *(char *)(lVar15 + 0x20);
    } while (bVar7);
    bVar2 = false;
    if (uVar10 != 0x10) goto LAB_00638928;
LAB_00638b74:
    __n = 0x16;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar9 != '\0') goto LAB_00638b94;
LAB_00638948:
    cVar9 = *(char *)(lVar15 + 0x88);
    uVar24 = 0;
    if (uVar10 != 0) {
      uVar24 = 0xffff / uVar10;
    }
    if (cVar9 == '\0') goto LAB_00638960;
LAB_00638bb8:
    local_58 = &local_8;
                    /* catch() { ... } // from try @ 00637bec with catch @ 00638bb8 */
    if (bVar2) goto LAB_00639088;
                    /* catch() { ... } // from try @ 006379c4 with catch @ 00638bbc */
                    /* catch() { ... } // from try @ 006374a0 with catch @ 00638bc0 */
    uVar23 = 0;
                    /* catch() { ... } // from try @ 006372bc with catch @ 00638bc4 */
    bVar5 = false;
                    /* catch() { ... } // from try @ 00638754 with catch @ 00638bc8 */
LAB_00638bcc:
                    /* catch() { ... } // from try @ 00638730 with catch @ 00638bcc */
                    /* catch() { ... } // from try @ 00638630 with catch @ 00638bdc */
    if ((*(char *)(lVar15 + 0x20) != '\0') && (*(byte *)(lVar15 + 0x49) == uVar20))
    goto LAB_00638cd0;
LAB_00638be0:
    uVar21 = (ushort)uVar23;
    if ((*(byte *)(lVar15 + 0x48) != uVar20) &&
       (pvVar16 = memchr((void *)(lVar15 + 0x72),uVar20,__n), pvVar16 != (void *)0x0)) {
                    /* try { // try from 00638c00 to 00739a33 has its CatchHandler @ 00639ccc */
      iVar12 = (int)pvVar16 - (int)(void *)(lVar15 + 0x72);
                    /* catch() { ... } // from try @ 00638584 with catch @ 00638c0c */
      if (0xf < iVar12) {
        iVar12 = iVar12 + -6;
      }
      if (uVar24 < uVar23) {
        bVar5 = true;
      }
      else {
        iVar11 = iVar11 + 1;
        bVar5 = (bool)(bVar5 | 0xffff - iVar12 < (int)(uVar23 * uVar10 & 0xffff));
                    /* catch() { ... } // from try @ 006383d4 with catch @ 00638c3c */
        uVar23 = (uVar23 * uVar10 & 0xffff) + iVar12 & 0xffff;
      }
LAB_00638c40:
                    /* catch() { ... } // from try @ 006383b0 with catch @ 00638c40 */
      if (local_30 == (long *)0x0) goto LAB_00638d50;
LAB_00638c48:
                    /* catch() { ... } // from try @ 006382b0 with catch @ 00638c50 */
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar18 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar18) {
LAB_00638f84:
          local_28 = 0xffffffff;
          uVar20 = (**(code **)(*local_30 + 0x48))();
          if (uVar20 == 0xffffffff) {
            local_30 = (long *)0x0;
                    /* catch() { ... } // from try @ 00637c38 with catch @ 00638fa0 */
            goto LAB_00638d50;
          }
          goto LAB_00638c7c;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_00638d50;
        pbVar18 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar18) goto LAB_00638f84;
      }
      uVar20 = (uint)*pbVar18;
LAB_00638c7c:
                    /* catch() { ... } // from try @ 00638204 with catch @ 00638c80 */
      local_28 = uVar20;
      if (local_40 == (long *)0x0) goto LAB_00638ca4;
      cVar6 = '\0';
      do {
        uVar21 = (ushort)uVar23;
        cVar17 = '\0';
        if ((int)local_38 == -1) {
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar20 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar20 = (**(code **)(*local_40 + 0x48))();
                    /* catch() { ... } // from try @ 00637670 with catch @ 00638ff0 */
            if (uVar20 == 0xffffffff) {
              local_40 = (long *)0x0;
              cVar17 = cVar9;
              goto LAB_00638c9c;
            }
          }
          local_38 = CONCAT44(local_38._4_4_,uVar20);
          cVar17 = '\0';
        }
LAB_00638c9c:
        if (cVar17 == cVar6) goto LAB_00638ad8;
LAB_00638ca4:
        if (local_30 == (long *)0x0) {
LAB_00638fbc:
          uVar20 = 0xff;
          goto LAB_00638bcc;
        }
                    /* catch() { ... } // from try @ 00638850 with catch @ 00638cb0 */
                    /* catch() { ... } // from try @ 006386a0 with catch @ 00638cb4 */
        if (local_28 == 0xffffffff) {
                    /* catch() { ... } // from try @ 00637a28 with catch @ 00638e50 */
                    /* catch() { ... } // from try @ 006378c8 with catch @ 00638e54 */
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
            uVar14 = (uint)*(byte *)local_30[2];
          }
          else {
            uVar14 = (**(code **)(*local_30 + 0x48))();
            if (uVar14 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_00638fbc;
            }
          }
          uVar20 = uVar14 & 0xff;
          local_28 = uVar14;
          goto LAB_00638bcc;
        }
        uVar20 = local_28 & 0xff;
        if ((*(char *)(lVar15 + 0x20) == '\0') || (*(byte *)(lVar15 + 0x49) != uVar20))
        goto LAB_00638be0;
LAB_00638cd0:
        uVar21 = (ushort)uVar23;
        if (iVar11 == 0) {
          bVar3 = true;
          iVar11 = 0;
          goto LAB_00638ae0;
        }
        lVar19 = *(long *)(local_8 + -0x18);
        uVar1 = lVar19 + 1;
        if ((*(ulong *)(local_8 + -0x10) < uVar1) || (0 < *(int *)(local_8 + -8))) {
                    /* catch() { ... } // from try @ 006384d0 with catch @ 00638d04 */
                    /* catch() { ... } // from try @ 00638320 with catch @ 00638d08 */
          FUN_00667088(local_58,uVar1);
          lVar19 = *(long *)(local_8 + -0x18);
        }
        local_8[lVar19] = (char)iVar11;
        iVar11 = 0;
        if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_00638c40;
        *(undefined4 *)(local_8 + -8) = 0;
        *(ulong *)(local_8 + -0x18) = uVar1;
        local_8[uVar1] = 0;
        if (local_30 != (long *)0x0) goto LAB_00638c48;
LAB_00638d50:
        uVar21 = (ushort)uVar23;
        if (local_40 == (long *)0x0) goto LAB_00638ad8;
                    /* catch() { ... } // from try @ 00638150 with catch @ 00638d58 */
                    /* catch() { ... } // from try @ 00637f74 with catch @ 00638d5c */
        cVar6 = cVar9;
      } while( true );
    }
  }
LAB_00638f50:
                    /* catch() { ... } // from try @ 006371b8 with catch @ 00638f50 */
  bVar3 = false;
LAB_00638ae0:
  local_58 = &local_8;
  if (*(long *)(local_8 + -0x18) == 0) {
    if ((iVar11 == 0) <= bVar7) {
LAB_00638f0c:
      if (!bVar3) {
        if (bVar5) {
          *param_8 = -1;
          *param_7 = 4;
        }
        else {
          *param_8 = local_6c + (uVar21 ^ -local_6c);
        }
        goto LAB_00638b14;
      }
    }
  }
  else {
    FUN_00667890(local_58,iVar11);
    cVar9 = FUN_0063ca8c(*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x18),local_58);
    if (cVar9 == '\0') {
      *param_7 = 4;
    }
                    /* catch() { ... } // from try @ 00637504 with catch @ 00638ef8 */
                    /* catch() { ... } // from try @ 006373a4 with catch @ 00638efc */
    if (((iVar11 == 0) <= bVar7) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_00638f0c;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00638b14:
  if (bVar2) {
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = local_28;
  auVar4._0_8_ = local_30;
  auVar4._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00638824 with catch @ 00639040 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)(local_8 + -8);
      *(int *)(local_8 + -8) = iVar11 + -1;
    }
    else {
      piVar25 = (int *)(local_8 + -8);
      do {
        iVar11 = *piVar25;
        cVar9 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar2) {
          *piVar25 = iVar11 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_8 + -0x18);
    }
  }
  return auVar4;
code_r0x00638fd8:
  local_40 = (long *)0x0;
  iVar13 = 1;
  goto LAB_00638a04;
LAB_00638ad8:
  bVar3 = false;
  bVar2 = true;
  goto LAB_00638ae0;
}


