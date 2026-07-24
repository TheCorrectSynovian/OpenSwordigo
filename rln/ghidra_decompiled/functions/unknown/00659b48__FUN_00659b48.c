/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00659b48
 * Function: FUN_00659b48
 * Signature: undefined FUN_00659b48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00659b48(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,ulong *param_8)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  wchar_t wVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  wchar_t wVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  wchar_t *pwVar19;
  char cVar20;
  ulong uVar21;
  char cVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined **local_58;
  long *local_40;
  undefined8 local_38;
  long *local_30;
  wchar_t local_28;
  undefined4 uStack_24;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined *local_8;
  
  local_28 = (wchar_t)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar17 = FUN_00654a24(auStack_18,param_6 + 0xd0);
  uVar15 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar15 == 0x40) {
    iVar16 = 8;
  }
  else {
    iVar16 = 0x10;
    if (uVar15 != 8) {
      iVar16 = 10;
    }
  }
                    /* catch() { ... } // from try @ 00659a94 with catch @ 00659bb4 */
                    /* try { // try from 00659bb8 to 00759bdf has its CatchHandler @ 00659bb8
                       catch() { ... } // from try @ 00659bb8 with catch @ 00659bb8
                       catch() { ... } // from try @ 00659c04 with catch @ 00659bb8 */
  iVar11 = FUN_00654b08(&local_30);
  iVar12 = FUN_00654b08(&local_40);
                    /* try { // try from 00659be0 to 00759bf3 has its CatchHandler @ 00659d44 */
  if ((iVar11 == -1) == (iVar12 == -1)) {
    wVar13 = L'\0';
    bVar9 = false;
  }
  else {
    wVar13 = FUN_00654b08(&local_30);
    bVar9 = wVar13 == *(wchar_t *)(lVar17 + 0xe0);
                    /* try { // try from 00659bf8 to 00759c03 has its CatchHandler @ 00659cd4 */
    if ((!bVar9) && (wVar13 != *(wchar_t *)(lVar17 + 0xe4))) {
      cVar10 = *(char *)(lVar17 + 0x20);
LAB_00659c7c:
      iVar11 = 0;
      bVar7 = false;
      do {
        if (((cVar10 != '\0') && (*(wchar_t *)(lVar17 + 0x4c) == wVar13)) ||
           (*(wchar_t *)(lVar17 + 0x48) == wVar13)) {
LAB_0065a3d0:
          bVar3 = false;
          goto joined_r0x0065a0ac;
        }
        if (*(wchar_t *)(lVar17 + 0xf0) == wVar13) {
          if ((iVar16 == 10) < bVar7) goto LAB_00659cb8;
          iVar11 = iVar11 + 1;
          if ((iVar16 == 8) || (bVar7 = true, uVar15 == 0)) {
            iVar11 = 0;
            bVar7 = true;
            iVar16 = 8;
          }
        }
        else {
          if (!bVar7) goto LAB_0065a3d0;
LAB_00659cb8:
          if ((*(wchar_t *)(lVar17 + 0xe8) != wVar13) && (*(wchar_t *)(lVar17 + 0xec) != wVar13)) {
            bVar7 = true;
            bVar3 = false;
            goto joined_r0x0065a0ac;
          }
                    /* catch() { ... } // from try @ 00659bf8 with catch @ 00659cd4 */
          if ((iVar16 != 0x10) && (uVar15 != 0)) {
            bVar3 = false;
            bVar7 = true;
            goto LAB_00659d64;
          }
          iVar11 = 0;
          bVar7 = false;
          iVar16 = 0x10;
        }
        if (local_30 != (long *)0x0) {
          if ((ulong)local_30[2] < (ulong)local_30[3]) {
            local_30[2] = local_30[2] + 4;
          }
          else {
            (**(code **)(*local_30 + 0x50))();
          }
          local_28 = L'\xffffffff';
        }
        iVar12 = FUN_00654b08(&local_30);
        iVar14 = FUN_00654b08(&local_40);
        if ((iVar12 == -1) == (iVar14 == -1)) {
          cVar10 = *(char *)(lVar17 + 0x20);
          bVar3 = true;
          goto joined_r0x0065a0ac;
        }
        wVar13 = FUN_00654b08(&local_30);
                    /* catch() { ... } // from try @ 00659be0 with catch @ 00659d44 */
                    /* try { // try from 00659d48 to 00759d6f has its CatchHandler @ 00659d48
                       catch() { ... } // from try @ 00659d48 with catch @ 00659d48
                       catch() { ... } // from try @ 00659d94 with catch @ 00659d48 */
        if (!bVar7) goto LAB_0065a42c;
        cVar10 = *(char *)(lVar17 + 0x20);
      } while( true );
    }
                    /* try { // try from 00659c04 to 00759d47 has its CatchHandler @ 00659bb8 */
    cVar10 = *(char *)(lVar17 + 0x20);
    if ((cVar10 != '\0') && (wVar13 == *(wchar_t *)(lVar17 + 0x4c))) {
      cVar10 = '\x01';
      goto LAB_00659c7c;
    }
    if (wVar13 == *(wchar_t *)(lVar17 + 0x48)) goto LAB_00659c7c;
    if (local_30 != (long *)0x0) {
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 4;
      }
      else {
        FUN_0064d8c4();
      }
      local_28 = L'\xffffffff';
    }
    iVar11 = FUN_00654b08(&local_30);
    iVar12 = FUN_00654b08(&local_40);
    if ((iVar11 == -1) != (iVar12 == -1)) {
      wVar13 = FUN_00654b08(&local_30);
      cVar10 = *(char *)(lVar17 + 0x20);
      goto LAB_00659c7c;
    }
  }
  cVar10 = *(char *)(lVar17 + 0x20);
  bVar3 = true;
  iVar11 = 0;
  bVar7 = false;
joined_r0x0065a0ac:
  if (iVar16 == 0x10) {
    uVar24 = 0x16;
  }
  else {
LAB_00659d64:
                    /* try { // try from 00659d70 to 00759d83 has its CatchHandler @ 00659ee4 */
    uVar24 = (ulong)iVar16;
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
  if (cVar10 != '\0') {
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
  }
  local_58 = &local_8;
                    /* try { // try from 00659d88 to 00759d93 has its CatchHandler @ 00659e74 */
  uVar25 = (ulong)iVar16;
                    /* try { // try from 00659d94 to 00759ee7 has its CatchHandler @ 00659d48 */
  cVar10 = *(char *)(lVar17 + 0x148);
  uVar1 = 0x7fffffffffffffff;
  if (bVar9) {
    uVar1 = 0x8000000000000000;
  }
  uVar2 = 0;
  if (uVar25 != 0) {
    uVar2 = uVar1 / uVar25;
  }
  if (cVar10 == '\0') {
    uVar23 = 0;
    bVar6 = false;
    if (!bVar3) {
LAB_00659dcc:
      if (10 < uVar24) goto LAB_00659ea0;
LAB_00659dd4:
      if ((0x2f < (uint)wVar13) && ((uint)wVar13 < (uint)((int)uVar24 + L'0'))) {
        uVar15 = wVar13 + L'\xffffffd0';
LAB_00659dec:
        if (uVar23 <= uVar2) goto LAB_00659ed0;
LAB_00659df4:
        bVar6 = true;
        if (local_30 == (long *)0x0) goto LAB_00659efc;
LAB_00659e00:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_00659efc;
        }
        local_28 = L'\xffffffff';
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar13 = *(wchar_t *)local_30[2];
        }
        else {
          wVar13 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar13 == L'\xffffffff') {
          local_30 = (long *)0x0;
          goto LAB_00659efc;
        }
        iVar16 = 0;
        local_28 = wVar13;
        if (local_40 == (long *)0x0) goto LAB_00659e60;
        iVar12 = 0;
        if ((int)local_38 == -1) goto LAB_00659f18;
LAB_00659e58:
        do {
          if (iVar12 == iVar16) goto LAB_00659f44;
LAB_00659e60:
          while( true ) {
            wVar13 = L'\xffffffff';
                    /* catch() { ... } // from try @ 00659d88 with catch @ 00659e74 */
            if ((local_30 == (long *)0x0) || (wVar13 = local_28, local_28 != L'\xffffffff'))
            goto LAB_00659dcc;
            if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
              wVar13 = *(wchar_t *)local_30[2];
            }
            else {
              wVar13 = (**(code **)(*local_30 + 0x48))();
            }
            if (wVar13 == L'\xffffffff') {
              local_30 = (long *)0x0;
              goto LAB_00659dcc;
            }
            local_28 = wVar13;
            if (uVar24 < 0xb) goto LAB_00659dd4;
LAB_00659ea0:
            uVar15 = wVar13 + L'\xffffffd0';
            if (uVar15 < 10) goto LAB_00659dec;
            if ((uint)(wVar13 + L'\xffffff9f') < 6) {
              uVar15 = wVar13 + L'\xffffffa9';
              goto LAB_00659dec;
            }
            if (5 < (uint)(wVar13 + L'\xffffffbf')) goto LAB_0065a004;
            uVar15 = wVar13 + L'\xffffffc9';
            if (uVar2 < uVar23) goto LAB_00659df4;
LAB_00659ed0:
            uVar21 = uVar23 * uVar25;
            iVar11 = iVar11 + 1;
                    /* catch() { ... } // from try @ 00659d70 with catch @ 00659ee4 */
            uVar23 = (long)(int)uVar15 + uVar21;
            bVar6 = (bool)(bVar6 | uVar1 - (long)(int)uVar15 < uVar21);
            if (local_30 != (long *)0x0) goto LAB_00659e00;
LAB_00659efc:
            if (local_40 == (long *)0x0) goto LAB_00659f44;
                    /* catch() { ... } // from try @ 00659f28 with catch @ 00659f04 */
            iVar16 = 1;
            iVar12 = 0;
            if ((int)local_38 != -1) goto LAB_00659e58;
LAB_00659f18:
                    /* try { // try from 00659f24 to 00759f27 has its CatchHandler @ 00659f3c */
            if ((int *)local_40[2] < (int *)local_40[3]) {
                    /* try { // try from 00659f28 to 00759f57 has its CatchHandler @ 00659f04 */
              iVar12 = *(int *)local_40[2];
            }
            else {
              iVar12 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar12 == -1) break;
            local_38 = CONCAT44(local_38._4_4_,iVar12);
                    /* catch() { ... } // from try @ 00659f24 with catch @ 00659f3c */
            if (iVar16 == 0) goto LAB_00659f44;
          }
          local_40 = (long *)0x0;
          iVar12 = 1;
        } while( true );
      }
    }
LAB_0065a004:
    bVar4 = false;
  }
  else {
    if (!bVar3) {
      uVar23 = 0;
      bVar6 = false;
      wVar8 = local_28;
LAB_0065a0f0:
      local_28 = wVar8;
      if ((*(char *)(lVar17 + 0x20) == '\0') || (wVar13 != *(wchar_t *)(lVar17 + 0x4c))) {
        if ((wVar13 == *(wchar_t *)(lVar17 + 0x48)) ||
           (pwVar19 = wmemchr((wchar_t *)(lVar17 + 0xf0),wVar13,uVar24), pwVar19 == (wchar_t *)0x0))
        goto LAB_0065a004;
        iVar16 = (int)((long)pwVar19 - (lVar17 + 0xf0) >> 2);
        if (0xf < iVar16) {
          iVar16 = iVar16 + -6;
        }
        if (uVar23 <= uVar2) {
          uVar21 = uVar23 * uVar25;
          iVar11 = iVar11 + 1;
          uVar23 = (long)iVar16 + uVar21;
          bVar6 = (bool)(bVar6 | uVar1 - (long)iVar16 < uVar21);
          goto LAB_0065a164;
        }
        bVar6 = true;
        if (local_30 != (long *)0x0) goto LAB_0065a16c;
LAB_0065a274:
        if (local_40 == (long *)0x0) goto LAB_00659f44;
        cVar22 = cVar10;
joined_r0x0065a28c:
        cVar20 = '\0';
        if ((int)local_38 == -1) {
          if ((int *)local_40[2] < (int *)local_40[3]) {
            iVar16 = *(int *)local_40[2];
          }
          else {
                    /* try { // try from 0065a38c to 0075a413 has its CatchHandler @ 0065a38c
                       catch() { ... } // from try @ 0065a38c with catch @ 0065a38c
                       catch() { ... } // from try @ 0065a4bc with catch @ 0065a38c */
            iVar16 = (**(code **)(*local_40 + 0x48))();
          }
          if (iVar16 == -1) {
            local_40 = (long *)0x0;
            cVar20 = cVar10;
          }
          else {
            local_38 = CONCAT44(local_38._4_4_,iVar16);
            cVar20 = '\0';
          }
        }
        if (cVar20 == cVar22) goto LAB_00659f44;
      }
      else {
        if (iVar11 == 0) {
          bVar4 = true;
          goto LAB_0065a008;
        }
        FUN_00667890(local_58,iVar11);
        iVar11 = 0;
LAB_0065a164:
        if (local_30 == (long *)0x0) goto LAB_0065a274;
LAB_0065a16c:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065a274;
        }
        local_28 = L'\xffffffff';
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar13 = *(wchar_t *)local_30[2];
        }
        else {
          wVar13 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar13 == L'\xffffffff') {
          local_30 = (long *)0x0;
          goto LAB_0065a274;
        }
        cVar22 = '\0';
        local_28 = wVar13;
        if (local_40 != (long *)0x0) {
          goto joined_r0x0065a28c;
        }
      }
      wVar8 = local_28;
      wVar13 = L'\xffffffff';
      if ((local_30 != (long *)0x0) && (wVar13 = local_28, local_28 == L'\xffffffff')) {
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar13 = *(wchar_t *)local_30[2];
        }
        else {
          wVar13 = (**(code **)(*local_30 + 0x48))();
        }
        wVar8 = wVar13;
        if (wVar13 == L'\xffffffff') {
          local_30 = (long *)0x0;
          wVar8 = local_28;
        }
      }
      goto LAB_0065a0f0;
    }
                    /* try { // try from 0065a414 to 0075a423 has its CatchHandler @ 0065a834 */
    uVar23 = 0;
    bVar6 = false;
    bVar4 = false;
  }
LAB_0065a008:
  lVar18 = *(long *)(local_8 + -0x18);
joined_r0x00659f54:
  if (lVar18 == 0) {
    if ((iVar11 == 0) <= bVar7) {
LAB_0065a028:
      if (!bVar4) {
        if (bVar6) {
          uVar24 = 0x7fffffffffffffff;
          if (bVar9) {
            uVar24 = 0x8000000000000000;
          }
          *param_8 = uVar24;
          *param_7 = 4;
        }
        else {
          uVar24 = -uVar23;
          if (!bVar9) {
            uVar24 = uVar23;
          }
          *param_8 = uVar24;
        }
        goto LAB_00659fb4;
      }
    }
  }
  else {
    FUN_00667890(local_58,iVar11);
    cVar10 = FUN_0063ca8c(*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x18),local_58);
    if (cVar10 == '\0') {
      *param_7 = 4;
    }
    if (((iVar11 == 0) <= bVar7) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0065a028;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00659fb4:
  if (bVar3) {
    *param_7 = *param_7 | 2;
  }
  auVar5._8_4_ = local_28;
  auVar5._0_8_ = local_30;
  auVar5._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
    FUN_0064d8e0(local_8 + -0x18,auStack_10);
  }
  return auVar5;
LAB_0065a42c:
  cVar10 = *(char *)(lVar17 + 0x20);
  bVar3 = false;
  goto joined_r0x0065a0ac;
LAB_00659f44:
  bVar4 = false;
  bVar3 = true;
  lVar18 = *(long *)(local_8 + -0x18);
  goto joined_r0x00659f54;
}


