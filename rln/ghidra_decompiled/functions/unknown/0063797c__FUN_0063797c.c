/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063797c
 * Function: FUN_0063797c
 * Signature: undefined FUN_0063797c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_0063797c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
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
                    /* try { // try from 00637990 to 007379a3 has its CatchHandler @ 00639368 */
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar17 = FUN_00632724(auStack_18,param_6 + 0xd0);
                    /* try { // try from 006379c4 to 007379cf has its CatchHandler @ 00638bbc */
  uVar16 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar16 == 0x40) {
    iVar15 = 8;
  }
  else {
    iVar15 = 0x10;
    if (uVar16 != 8) {
      iVar15 = 10;
    }
  }
  iVar12 = FUN_00632808(&local_30);
                    /* try { // try from 006379fc to 00737a07 has its CatchHandler @ 00639318 */
  iVar13 = FUN_00632808(&local_40);
  if ((iVar12 == -1) == (iVar13 == -1)) {
                    /* try { // try from 00638060 to 0073806b has its CatchHandler @ 00638bac */
    uVar23 = 0;
    bVar9 = false;
LAB_00638068:
    cVar11 = *(char *)(lVar17 + 0x20);
    bVar3 = true;
    iVar12 = 0;
    bVar8 = false;
LAB_00637de4:
    if (iVar15 == 0x10) goto LAB_00637dec;
LAB_00637b90:
    uVar25 = (ulong)iVar15;
  }
  else {
    bVar10 = FUN_00632808(&local_30);
    uVar23 = (uint)bVar10;
                    /* try { // try from 00637a28 to 00737a4f has its CatchHandler @ 00638e50 */
    bVar9 = *(byte *)(lVar17 + 0x6e) == bVar10;
    if ((bVar9) || (*(byte *)(lVar17 + 0x6f) == bVar10)) {
      cVar11 = *(char *)(lVar17 + 0x20);
      if ((cVar11 == '\0') || (*(byte *)(lVar17 + 0x49) != bVar10)) {
        if (*(byte *)(lVar17 + 0x48) != bVar10) {
          if (local_30 != (long *)0x0) {
            if ((ulong)local_30[2] < (ulong)local_30[3]) {
              local_30[2] = local_30[2] + 1;
            }
            else {
              FUN_0062b4a0();
            }
            local_28 = 0xffffffff;
          }
          iVar12 = FUN_00632808(&local_30);
          iVar13 = FUN_00632808(&local_40);
                    /* try { // try from 00637a8c to 00737a93 has its CatchHandler @ 00639880 */
                    /* try { // try from 00637a94 to 00737aa7 has its CatchHandler @ 00639314 */
          if ((iVar12 == -1) == (iVar13 == -1)) goto LAB_00638068;
          uVar23 = FUN_00632808(&local_30);
                    /* try { // try from 00637aa8 to 00737ab7 has its CatchHandler @ 006396d8 */
          uVar23 = uVar23 & 0xff;
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
    bVar8 = false;
    do {
      if (((cVar11 != '\0') && (*(byte *)(lVar17 + 0x49) == uVar23)) ||
         (*(byte *)(lVar17 + 0x48) == uVar23)) break;
      if (*(byte *)(lVar17 + 0x72) == uVar23) {
        if ((iVar15 == 10) < bVar8) goto LAB_00637aec;
        iVar12 = iVar12 + 1;
        if ((iVar15 == 8) || (bVar8 = true, uVar16 == 0)) {
          iVar12 = 0;
          bVar8 = true;
          iVar15 = 8;
        }
      }
      else {
        if (!bVar8) break;
LAB_00637aec:
                    /* try { // try from 00637af0 to 00737b17 has its CatchHandler @ 00638e00 */
        if ((*(byte *)(lVar17 + 0x70) != uVar23) && (*(byte *)(lVar17 + 0x71) != uVar23)) {
          bVar3 = false;
          bVar8 = true;
          goto LAB_00637de4;
        }
        if ((iVar15 != 0x10) && (uVar16 != 0)) {
          bVar3 = false;
          bVar8 = true;
          goto LAB_00637b90;
        }
        iVar12 = 0;
        bVar8 = false;
        iVar15 = 0x10;
      }
      if (local_30 != (long *)0x0) {
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* try { // try from 00637b38 to 00737b5f has its CatchHandler @ 006396d8 */
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
        goto LAB_00637de4;
      }
      uVar23 = FUN_00632808(&local_30);
      uVar23 = uVar23 & 0xff;
      cVar11 = *(char *)(lVar17 + 0x20);
    } while (bVar8);
    bVar3 = false;
    if (iVar15 != 0x10) goto LAB_00637b90;
LAB_00637dec:
    uVar25 = 0x16;
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
  if (cVar11 != '\0') {
                    /* try { // try from 00637e0c to 00737e17 has its CatchHandler @ 00638bb4 */
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
  }
  local_58 = &local_8;
                    /* try { // try from 00637bb8 to 00737bcb has its CatchHandler @ 006392e0 */
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
LAB_006382d4:
      uVar24 = 0;
                    /* try { // try from 006382d8 to 007382e7 has its CatchHandler @ 00639680 */
      bVar6 = false;
      bVar4 = false;
      goto LAB_00637d58;
    }
    uVar24 = 0;
                    /* try { // try from 00637bec to 00737bf7 has its CatchHandler @ 00638bb8 */
    bVar6 = false;
LAB_00637bfc:
                    /* try { // try from 00637bfc to 00737c0b has its CatchHandler @ 00639880 */
    if (10 < uVar25) goto LAB_00637ca8;
LAB_00637c04:
    if ((0x2f < uVar23) && (uVar23 < (int)uVar25 + 0x30U)) {
      uVar16 = uVar23 - 0x30;
LAB_00637c1c:
      if (uVar24 <= uVar2) goto LAB_00637ce4;
LAB_00637c24:
      bVar6 = true;
      if (local_30 == (long *)0x0) goto LAB_00637d10;
LAB_00637c30:
                    /* try { // try from 00637c38 to 00737c43 has its CatchHandler @ 00638fa0 */
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
        pbVar20 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar20) {
LAB_006380f4:
          local_28 = 0xffffffff;
          uVar16 = (**(code **)(*local_30 + 0x48))();
          if (uVar16 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_00637d10;
          }
          goto LAB_00637c60;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_00637d10;
        pbVar20 = (byte *)local_30[2];
                    /* try { // try from 006380ec to 007380f7 has its CatchHandler @ 00638ba8 */
        if ((byte *)local_30[3] <= pbVar20) goto LAB_006380f4;
      }
      uVar16 = (uint)*pbVar20;
LAB_00637c60:
                    /* try { // try from 00637c64 to 00737c8b has its CatchHandler @ 00638b9c */
      iVar15 = 0;
      local_28 = uVar16;
      if (local_40 == (long *)0x0) goto LAB_00637c88;
      iVar13 = 0;
      if ((int)local_38 == -1) goto LAB_00637d2c;
LAB_00637c80:
      if (iVar15 != iVar13) {
LAB_00637c88:
        do {
          if (local_30 == (long *)0x0) {
LAB_0063812c:
            uVar23 = 0xff;
            goto LAB_00637bfc;
          }
          if (local_28 == 0xffffffff) {
            if ((byte *)local_30[2] < (byte *)local_30[3]) {
              uVar16 = (uint)*(byte *)local_30[2];
            }
            else {
              uVar16 = (**(code **)(*local_30 + 0x48))();
                    /* try { // try from 00638124 to 0073812f has its CatchHandler @ 00639170 */
              if (uVar16 == 0xffffffff) {
                local_30 = (long *)0x0;
                goto LAB_0063812c;
              }
            }
            uVar23 = uVar16 & 0xff;
            local_28 = uVar16;
            goto LAB_00637bfc;
          }
          uVar23 = local_28 & 0xff;
          if (uVar25 < 0xb) goto LAB_00637c04;
LAB_00637ca8:
          uVar16 = uVar23 - 0x30;
          if ((uVar16 & 0xff) < 10) goto LAB_00637c1c;
          if ((uVar23 - 0x61 & 0xff) < 6) {
            uVar16 = uVar23 - 0x57;
            goto LAB_00637c1c;
          }
                    /* try { // try from 00637cc8 to 00737ccf has its CatchHandler @ 00639880 */
                    /* try { // try from 00637cd0 to 00737cdf has its CatchHandler @ 006396d4 */
          if (5 < (uVar23 - 0x41 & 0xff)) goto LAB_00638134;
          uVar16 = uVar23 - 0x37;
          if (uVar2 < uVar24) goto LAB_00637c24;
LAB_00637ce4:
          uVar21 = uVar24 * uVar26;
          iVar12 = iVar12 + 1;
          uVar24 = (long)(int)uVar16 + uVar21;
          bVar6 = (bool)(bVar6 | uVar1 - (long)(int)uVar16 < uVar21);
          if (local_30 != (long *)0x0) goto LAB_00637c30;
LAB_00637d10:
          if (local_40 == (long *)0x0) break;
                    /* try { // try from 00637d18 to 00737d3f has its CatchHandler @ 00638db0 */
          iVar15 = 1;
          iVar13 = 0;
          if ((int)local_38 != -1) goto LAB_00637c80;
LAB_00637d2c:
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar16 = (uint)*(byte *)local_40[2];
          }
          else {
                    /* try { // try from 0063822c to 0073823f has its CatchHandler @ 00639160 */
            uVar16 = (**(code **)(*local_40 + 0x48))();
            if (uVar16 == 0xffffffff) goto LAB_00638240;
          }
          local_38 = CONCAT44(local_38._4_4_,uVar16);
          if (iVar15 == 0) break;
        } while( true );
      }
      goto LAB_00637d50;
    }
  }
  else {
                    /* try { // try from 00637e6c to 00737e7f has its CatchHandler @ 00639278 */
    if (bVar3) goto LAB_006382d4;
    uVar24 = 0;
    bVar6 = false;
LAB_00637e7c:
    if ((*(char *)(lVar17 + 0x20) != '\0') && (*(byte *)(lVar17 + 0x49) == uVar23))
    goto LAB_00637f7c;
LAB_00637e90:
                    /* try { // try from 00637ea0 to 00737eab has its CatchHandler @ 00638bb0 */
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
                    /* try { // try from 00637ed8 to 00737ee3 has its CatchHandler @ 00639228 */
        iVar12 = iVar12 + 1;
        uVar24 = (long)iVar15 + uVar21;
        bVar6 = (bool)(bVar6 | uVar1 - (long)iVar15 < uVar21);
      }
LAB_00637eec:
      if (local_30 == (long *)0x0) goto LAB_00637ffc;
LAB_00637ef4:
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* try { // try from 00637f04 to 00737f2b has its CatchHandler @ 00638dac */
        local_30[2] = local_30[2] + 1;
        pbVar20 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar20) {
LAB_006381ec:
          local_28 = 0xffffffff;
          uVar16 = (**(code **)(*local_30 + 0x48))();
          if (uVar16 == 0xffffffff) {
                    /* try { // try from 00638204 to 0073820b has its CatchHandler @ 00638c80 */
            local_30 = (long *)0x0;
            goto LAB_00637ffc;
          }
          goto LAB_00637f28;
        }
      }
      else {
        (**(code **)(*local_30 + 0x50))();
        local_28 = 0xffffffff;
        if (local_30 == (long *)0x0) goto LAB_00637ffc;
        pbVar20 = (byte *)local_30[2];
        if ((byte *)local_30[3] <= pbVar20) goto LAB_006381ec;
      }
      uVar16 = (uint)*pbVar20;
LAB_00637f28:
                    /* try { // try from 00637f2c to 00737f3b has its CatchHandler @ 006396d0 */
      local_28 = uVar16;
      if (local_40 == (long *)0x0) goto LAB_00637f50;
      cVar7 = '\0';
      do {
        cVar19 = '\0';
        if ((int)local_38 == -1) {
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar16 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar16 = (**(code **)(*local_40 + 0x48))();
            if (uVar16 == 0xffffffff) {
              local_40 = (long *)0x0;
              cVar19 = cVar11;
              goto LAB_00637f48;
            }
          }
                    /* try { // try from 0063802c to 0073803f has its CatchHandler @ 006391f4 */
          local_38 = CONCAT44(local_38._4_4_,uVar16);
          cVar19 = '\0';
        }
LAB_00637f48:
        if (cVar19 == cVar7) goto LAB_00637d50;
LAB_00637f50:
        if (local_30 == (long *)0x0) {
LAB_00638224:
                    /* try { // try from 00638224 to 0073822b has its CatchHandler @ 00639164 */
          uVar23 = 0xff;
          goto LAB_00637e7c;
        }
        if (local_28 == 0xffffffff) {
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
            uVar16 = (uint)*(byte *)local_30[2];
          }
          else {
            uVar16 = (**(code **)(*local_30 + 0x48))();
            if (uVar16 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_00638224;
            }
          }
                    /* try { // try from 006380b8 to 007380cb has its CatchHandler @ 006391c0 */
          uVar23 = uVar16 & 0xff;
          local_28 = uVar16;
          goto LAB_00637e7c;
        }
        uVar23 = local_28 & 0xff;
                    /* try { // try from 00637f74 to 00737f9b has its CatchHandler @ 00638d5c */
        if ((*(char *)(lVar17 + 0x20) == '\0') || (*(byte *)(lVar17 + 0x49) != uVar23))
        goto LAB_00637e90;
LAB_00637f7c:
        if (iVar12 == 0) {
          bVar4 = true;
          iVar12 = 0;
          goto LAB_00637d58;
        }
        lVar22 = *(long *)(local_8 + -0x18);
        uVar21 = lVar22 + 1;
        if ((*(ulong *)(local_8 + -0x10) < uVar21) || (0 < *(int *)(local_8 + -8))) {
          FUN_00667088(local_58,uVar21);
                    /* try { // try from 00637fbc to 00737fe3 has its CatchHandler @ 006396d0 */
          lVar22 = *(long *)(local_8 + -0x18);
        }
        local_8[lVar22] = (char)iVar12;
        iVar12 = 0;
        if (local_8 + -0x18 == PTR_DAT_007e5de8) goto LAB_00637eec;
        *(undefined4 *)(local_8 + -8) = 0;
        *(ulong *)(local_8 + -0x18) = uVar21;
        local_8[uVar21] = 0;
        if (local_30 != (long *)0x0) goto LAB_00637ef4;
LAB_00637ffc:
        if (local_40 == (long *)0x0) goto LAB_00637d50;
        cVar7 = cVar11;
      } while( true );
    }
  }
LAB_00638134:
  bVar4 = false;
  if (*(long *)(local_8 + -0x18) != 0) goto LAB_00638144;
LAB_00637d64:
  if ((iVar12 == 0) <= bVar8) goto LAB_0063818c;
LAB_00637d78:
  *param_8 = 0;
  *param_7 = 4;
LAB_00637d8c:
  if (bVar3) {
    *param_7 = *param_7 | 2;
  }
  auVar5._8_4_ = local_28;
  auVar5._0_8_ = local_30;
  auVar5._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
                    /* try { // try from 006382b0 to 007382b7 has its CatchHandler @ 00638c50 */
    FUN_0062b45c(local_8 + -0x18,auStack_10);
  }
                    /* try { // try from 00637dd8 to 00737deb has its CatchHandler @ 006392ac */
  return auVar5;
LAB_00638240:
                    /* try { // try from 00638240 to 007382a3 has its CatchHandler @ 006395c0 */
  local_40 = (long *)0x0;
  iVar13 = 1;
  goto LAB_00637c80;
LAB_00637d50:
  bVar4 = false;
  bVar3 = true;
LAB_00637d58:
                    /* try { // try from 00637d60 to 00737d87 has its CatchHandler @ 006396d4 */
  if (*(long *)(local_8 + -0x18) == 0) goto LAB_00637d64;
LAB_00638144:
                    /* try { // try from 00638150 to 00738177 has its CatchHandler @ 00638d58 */
  FUN_00667890(local_58,iVar12);
  cVar11 = FUN_0063ca8c(*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x18),local_58);
  if (cVar11 == '\0') {
    *param_7 = 4;
  }
                    /* try { // try from 00638178 to 0073817f has its CatchHandler @ 0063916c */
                    /* try { // try from 00638180 to 00738193 has its CatchHandler @ 00639168 */
  if (((iVar12 == 0) <= bVar8) || (*(long *)(local_8 + -0x18) != 0)) {
LAB_0063818c:
    if (!bVar4) {
      if (bVar6) {
                    /* try { // try from 00638194 to 007381f7 has its CatchHandler @ 006395f8 */
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
      goto LAB_00637d8c;
    }
  }
  goto LAB_00637d78;
}


