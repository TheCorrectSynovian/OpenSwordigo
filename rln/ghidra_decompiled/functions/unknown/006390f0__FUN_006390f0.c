/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006390f0
 * Function: FUN_006390f0
 * Signature: undefined FUN_006390f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_006390f0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,int *param_8)

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
  uint uVar21;
  ulong __n;
  uint uVar22;
  uint local_6c;
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
                    /* catch() { ... } // from try @ 00638474 with catch @ 00639128 */
  lVar15 = FUN_00632724(auStack_18,param_6 + 0xd0);
                    /* catch() { ... } // from try @ 00638420 with catch @ 0063912c */
  uVar22 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar22 == 0x40) {
    uVar10 = 8;
  }
  else {
    uVar10 = 0x10;
    if (uVar22 != 8) {
      uVar10 = 10;
    }
  }
                    /* catch() { ... } // from try @ 0063822c with catch @ 00639160 */
                    /* catch() { ... } // from try @ 00638224 with catch @ 00639164 */
  iVar11 = FUN_00632808(&local_30);
                    /* catch() { ... } // from try @ 00638180 with catch @ 00639168 */
                    /* catch() { ... } // from try @ 00638178 with catch @ 0063916c */
                    /* catch() { ... } // from try @ 00638124 with catch @ 00639170 */
  iVar12 = FUN_00632808(&local_40);
  if ((iVar11 == -1) == (iVar12 == -1)) {
    uVar20 = 0;
    local_6c = 0;
LAB_006397cc:
    cVar9 = *(char *)(lVar15 + 0x20);
    bVar2 = true;
    iVar11 = 0;
    bVar7 = false;
LAB_00639538:
    if (uVar10 == 0x10) goto LAB_00639540;
LAB_00639304:
    __n = (ulong)(int)uVar10;
                    /* catch() { ... } // from try @ 00637a94 with catch @ 00639314 */
                    /* catch() { ... } // from try @ 006379fc with catch @ 00639318 */
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar9 == '\0') goto LAB_00639324;
LAB_00639560:
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
    cVar9 = *(char *)(lVar15 + 0x88);
    uVar22 = 0;
    if (uVar10 != 0) {
      uVar22 = 0xffffffff / uVar10;
    }
    if (cVar9 != '\0') goto LAB_00639584;
LAB_0063933c:
    if (bVar2) {
LAB_00639a28:
      uVar21 = 0;
      bVar5 = false;
      bVar3 = false;
      goto LAB_006394ac;
    }
    uVar21 = 0;
    bVar5 = false;
LAB_00639358:
    if (10 < __n) goto LAB_00639404;
LAB_00639360:
                    /* catch() { ... } // from try @ 00637990 with catch @ 00639368 */
    if ((0x2f < uVar20) && (uVar20 < (int)__n + 0x30U)) {
      uVar14 = uVar20 - 0x30;
LAB_00639378:
      if (uVar21 <= uVar22) goto LAB_00639440;
LAB_00639380:
      bVar5 = true;
      if (local_30 == (long *)0x0) goto LAB_00639464;
LAB_0063938c:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* catch() { ... } // from try @ 0063786c with catch @ 0063939c */
                    /* catch() { ... } // from try @ 00637818 with catch @ 006393a0 */
        local_30[2] = local_30[2] + 1;
        pbVar18 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar18) {
LAB_00639860:
          local_28 = 0xffffffff;
          uVar20 = (**(code **)(*local_30 + 0x48))();
                    /* catch() { ... } // from try @ 0063761c with catch @ 00639870
                       catch() { ... } // from try @ 006376c0 with catch @ 00639870 */
          if (uVar20 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_00639464;
          }
          goto LAB_006393bc;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_00639464;
        pbVar18 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar18) goto LAB_00639860;
      }
      uVar20 = (uint)*pbVar18;
LAB_006393bc:
      iVar12 = 0;
      local_28 = uVar20;
      if (local_40 == (long *)0x0) goto LAB_006393e4;
      iVar13 = 0;
      if ((int)local_38 == -1) goto LAB_00639480;
LAB_006393dc:
      if (iVar12 != iVar13) {
LAB_006393e4:
        do {
          if (local_30 == (long *)0x0) {
LAB_00639910:
            uVar20 = 0xff;
            goto LAB_00639358;
          }
                    /* catch() { ... } // from try @ 006376ec with catch @ 006393f0 */
                    /* catch() { ... } // from try @ 0063752c with catch @ 006393f4 */
          if (local_28 == 0xffffffff) {
            if ((byte *)local_30[2] < (byte *)local_30[3]) {
              uVar14 = (uint)*(byte *)local_30[2];
            }
            else {
              uVar14 = (**(code **)(*local_30 + 0x48))();
              if (uVar14 == 0xffffffff) {
                local_30 = (long *)0x0;
                goto LAB_00639910;
              }
            }
            uVar20 = uVar14 & 0xff;
            local_28 = uVar14;
            goto LAB_00639358;
          }
                    /* catch() { ... } // from try @ 006374d8 with catch @ 006393f8 */
          uVar20 = local_28 & 0xff;
          if (__n < 0xb) goto LAB_00639360;
LAB_00639404:
          uVar14 = uVar20 - 0x30;
          if ((uVar14 & 0xff) < 10) goto LAB_00639378;
          if ((uVar20 - 0x61 & 0xff) < 6) {
            uVar14 = uVar20 - 0x57;
            goto LAB_00639378;
          }
          if (5 < (uVar20 - 0x41 & 0xff)) goto LAB_00639918;
          uVar14 = uVar20 - 0x37;
          if (uVar22 < uVar21) goto LAB_00639380;
LAB_00639440:
          uVar20 = uVar21 * uVar10;
                    /* catch() { ... } // from try @ 0063746c with catch @ 00639448 */
          iVar11 = iVar11 + 1;
          uVar21 = uVar14 + uVar20;
          bVar5 = (bool)(bVar5 | ~uVar14 < uVar20);
          if (local_30 != (long *)0x0) goto LAB_0063938c;
LAB_00639464:
          if (local_40 == (long *)0x0) break;
          iVar12 = 1;
          iVar13 = 0;
                    /* catch() { ... } // from try @ 00637348 with catch @ 0063947c */
          if ((int)local_38 != -1) goto LAB_006393dc;
LAB_00639480:
                    /* catch() { ... } // from try @ 006372f4 with catch @ 00639480 */
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar20 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar20 = (**(code **)(*local_40 + 0x48))();
            if (uVar20 == 0xffffffff) goto code_r0x006399a0;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar20);
          if (iVar12 == 0) break;
        } while( true );
      }
      goto LAB_006394a4;
    }
  }
  else {
    bVar8 = FUN_00632808(&local_30);
    uVar20 = (uint)bVar8;
    local_6c = (uint)(*(byte *)(lVar15 + 0x6e) == bVar8);
    if ((local_6c == 0) && (*(byte *)(lVar15 + 0x6f) != bVar8)) {
      cVar9 = *(char *)(lVar15 + 0x20);
    }
    else {
      cVar9 = *(char *)(lVar15 + 0x20);
                    /* catch() { ... } // from try @ 00637170 with catch @ 006397b8
                       catch() { ... } // from try @ 00637200 with catch @ 006397b8 */
      if ((cVar9 == '\0') || (*(byte *)(lVar15 + 0x49) != bVar8)) {
        if (*(byte *)(lVar15 + 0x48) != bVar8) {
                    /* catch() { ... } // from try @ 006380b8 with catch @ 006391c0 */
          if (local_30 != (long *)0x0) {
            if ((ulong)local_30[2] < (ulong)local_30[3]) {
              local_30[2] = local_30[2] + 1;
            }
            else {
              FUN_0062b4a0();
            }
            local_28 = 0xffffffff;
          }
          iVar11 = FUN_00632808(&local_30);
                    /* catch() { ... } // from try @ 0063802c with catch @ 006391f4 */
          iVar12 = FUN_00632808(&local_40);
          if ((iVar11 == -1) == (iVar12 == -1)) goto LAB_006397cc;
          uVar20 = FUN_00632808(&local_30);
          uVar20 = uVar20 & 0xff;
          cVar9 = *(char *)(lVar15 + 0x20);
        }
      }
      else {
        cVar9 = '\x01';
      }
    }
    iVar11 = 0;
                    /* catch() { ... } // from try @ 00637ed8 with catch @ 00639228 */
    bVar7 = false;
    do {
      if (((cVar9 != '\0') && (*(byte *)(lVar15 + 0x49) == uVar20)) ||
         (*(byte *)(lVar15 + 0x48) == uVar20)) break;
      if (*(byte *)(lVar15 + 0x72) == uVar20) {
        if ((uVar10 == 10) < bVar7) goto LAB_00639260;
        iVar11 = iVar11 + 1;
        if ((uVar10 == 8) || (bVar7 = true, uVar22 == 0)) {
          iVar11 = 0;
                    /* catch() { ... } // from try @ 0063735c with catch @ 00639780
                       catch() { ... } // from try @ 006373ec with catch @ 00639780 */
          bVar7 = true;
          uVar10 = 8;
        }
      }
      else {
        if (!bVar7) break;
LAB_00639260:
        if ((*(byte *)(lVar15 + 0x70) != uVar20) && (*(byte *)(lVar15 + 0x71) != uVar20)) {
          bVar2 = false;
          bVar7 = true;
          goto LAB_00639538;
        }
                    /* catch() { ... } // from try @ 00637e6c with catch @ 00639278 */
        if ((uVar10 != 0x10) && (uVar22 != 0)) {
          bVar2 = false;
          bVar7 = true;
          goto LAB_00639304;
        }
        iVar11 = 0;
        bVar7 = false;
        uVar10 = 0x10;
      }
      if (local_30 != (long *)0x0) {
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* catch() { ... } // from try @ 00637dd8 with catch @ 006392ac */
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
        goto LAB_00639538;
      }
                    /* catch() { ... } // from try @ 00637bb8 with catch @ 006392e0 */
      uVar20 = FUN_00632808(&local_30);
      uVar20 = uVar20 & 0xff;
      cVar9 = *(char *)(lVar15 + 0x20);
    } while (bVar7);
    bVar2 = false;
    if (uVar10 != 0x10) goto LAB_00639304;
LAB_00639540:
                    /* catch() { ... } // from try @ 0063712c with catch @ 0063954c */
    __n = 0x16;
                    /* catch() { ... } // from try @ 006385c0 with catch @ 00639550 */
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar9 != '\0') goto LAB_00639560;
LAB_00639324:
    cVar9 = *(char *)(lVar15 + 0x88);
    uVar22 = 0;
    if (uVar10 != 0) {
      uVar22 = 0xffffffff / uVar10;
    }
    if (cVar9 == '\0') goto LAB_0063933c;
LAB_00639584:
    local_58 = &local_8;
    if (bVar2) goto LAB_00639a28;
                    /* catch() { ... } // from try @ 00638514 with catch @ 00639588 */
    uVar21 = 0;
    bVar5 = false;
LAB_00639598:
    if ((*(char *)(lVar15 + 0x20) != '\0') && (*(byte *)(lVar15 + 0x49) == uVar20))
    goto LAB_00639690;
LAB_006395ac:
                    /* catch() { ... } // from try @ 00638240 with catch @ 006395c0 */
    if ((*(byte *)(lVar15 + 0x48) != uVar20) &&
       (pvVar16 = memchr((void *)(lVar15 + 0x72),uVar20,__n), pvVar16 != (void *)0x0)) {
      uVar20 = (int)pvVar16 - (int)(void *)(lVar15 + 0x72);
      if (0xf < (int)uVar20) {
        uVar20 = uVar20 - 6;
      }
      if (uVar22 < uVar21) {
        bVar5 = true;
      }
      else {
        uVar14 = uVar21 * uVar10;
        iVar11 = iVar11 + 1;
        uVar21 = uVar20 + uVar14;
                    /* catch() { ... } // from try @ 00638194 with catch @ 006395f8 */
        bVar5 = (bool)(bVar5 | ~uVar20 < uVar14);
      }
LAB_00639600:
      if (local_30 == (long *)0x0) goto LAB_00639710;
LAB_00639608:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar18 = (byte *)local_30[2];
                    /* catch() { ... } // from try @ 00638658 with catch @ 00639630
                       catch() { ... } // from try @ 006386e8 with catch @ 00639630 */
        if ((byte *)local_30[3] <= pbVar18) {
LAB_0063994c:
          local_28 = 0xffffffff;
          uVar20 = (**(code **)(*local_30 + 0x48))();
          if (uVar20 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_00639710;
          }
          goto LAB_0063963c;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_00639710;
        pbVar18 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar18) goto LAB_0063994c;
      }
      uVar20 = (uint)*pbVar18;
LAB_0063963c:
      local_28 = uVar20;
      if (local_40 == (long *)0x0) goto LAB_00639664;
      cVar6 = '\0';
      do {
        cVar17 = '\0';
        if ((int)local_38 == -1) {
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar20 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar20 = (**(code **)(*local_40 + 0x48))();
            if (uVar20 == 0xffffffff) {
              local_40 = (long *)0x0;
              cVar17 = cVar9;
              goto LAB_0063965c;
            }
          }
          local_38 = CONCAT44(local_38._4_4_,uVar20);
          cVar17 = '\0';
                    /* catch() { ... } // from try @ 0063754c with catch @ 00639748
                       catch() { ... } // from try @ 006375e0 with catch @ 00639748 */
        }
LAB_0063965c:
        if (cVar6 == cVar17) goto LAB_006394a4;
LAB_00639664:
        if (local_30 == (long *)0x0) {
LAB_00639984:
          uVar20 = 0xff;
          goto LAB_00639598;
        }
        if (local_28 == 0xffffffff) {
                    /* catch() { ... } // from try @ 0063772c with catch @ 00639818 */
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
            uVar14 = (uint)*(byte *)local_30[2];
          }
          else {
            uVar14 = (**(code **)(*local_30 + 0x48))();
            if (uVar14 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_00639984;
            }
          }
          uVar20 = uVar14 & 0xff;
          local_28 = uVar14;
          goto LAB_00639598;
        }
        uVar20 = local_28 & 0xff;
                    /* catch() { ... } // from try @ 006382d8 with catch @ 00639680
                       catch() { ... } // from try @ 00638368 with catch @ 00639680 */
        if ((*(char *)(lVar15 + 0x20) == '\0') || (*(byte *)(lVar15 + 0x49) != uVar20))
        goto LAB_006395ac;
LAB_00639690:
        if (iVar11 == 0) {
          bVar3 = true;
          iVar11 = 0;
          goto LAB_006394ac;
        }
        lVar19 = *(long *)(local_8 + -0x18);
        uVar1 = lVar19 + 1;
        if ((*(ulong *)(local_8 + -0x10) < uVar1) || (0 < *(int *)(local_8 + -8))) {
          FUN_00667088(local_58,uVar1);
                    /* catch() { ... } // from try @ 00637f2c with catch @ 006396d0
                       catch() { ... } // from try @ 00637fbc with catch @ 006396d0 */
                    /* catch() { ... } // from try @ 00637cd0 with catch @ 006396d4
                       catch() { ... } // from try @ 00637d60 with catch @ 006396d4 */
          lVar19 = *(long *)(local_8 + -0x18);
        }
                    /* catch() { ... } // from try @ 00637aa8 with catch @ 006396d8
                       catch() { ... } // from try @ 00637b38 with catch @ 006396d8 */
        local_8[lVar19] = (char)iVar11;
        iVar11 = 0;
        if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_00639600;
        *(undefined4 *)(local_8 + -8) = 0;
        *(ulong *)(local_8 + -0x18) = uVar1;
        local_8[uVar1] = 0;
        if (local_30 != (long *)0x0) goto LAB_00639608;
LAB_00639710:
                    /* catch() { ... } // from try @ 00637880 with catch @ 00639710
                       catch() { ... } // from try @ 00637910 with catch @ 00639710 */
        if (local_40 == (long *)0x0) goto LAB_006394a4;
        cVar6 = cVar9;
      } while( true );
    }
  }
LAB_00639918:
  bVar3 = false;
LAB_006394ac:
  local_58 = &local_8;
  if (*(long *)(local_8 + -0x18) == 0) {
    if ((iVar11 == 0) <= bVar7) {
LAB_006398d4:
      if (!bVar3) {
        if (bVar5) {
          *param_8 = -1;
          *param_7 = 4;
        }
        else {
          *param_8 = (uVar21 ^ -local_6c) + local_6c;
        }
        goto LAB_006394e0;
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 006377ac with catch @ 00639880
                       catch() { ... } // from try @ 00637a8c with catch @ 00639880
                       catch() { ... } // from try @ 00637bfc with catch @ 00639880
                       catch() { ... } // from try @ 00637cc8 with catch @ 00639880 */
    FUN_00667890(local_58,iVar11);
    cVar9 = FUN_0063ca8c(*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x18),local_58);
    if (cVar9 == '\0') {
      *param_7 = 4;
    }
    if (((iVar11 == 0) <= bVar7) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_006398d4;
  }
                    /* catch() { ... } // from try @ 00637288 with catch @ 006394d0 */
  *param_8 = 0;
  *param_7 = 4;
LAB_006394e0:
  if (bVar2) {
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = local_28;
  auVar4._0_8_ = local_30;
  auVar4._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
    FUN_0062b45c(local_8 + -0x18,auStack_10);
  }
                    /* catch() { ... } // from try @ 0063715c with catch @ 00639510 */
                    /* catch() { ... } // from try @ 00637144 with catch @ 00639514 */
  return auVar4;
code_r0x006399a0:
  local_40 = (long *)0x0;
  iVar13 = 1;
  goto LAB_006393dc;
LAB_006394a4:
  bVar3 = false;
  bVar2 = true;
  goto LAB_006394ac;
}


