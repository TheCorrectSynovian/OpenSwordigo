/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065a870
 * Function: FUN_0065a870
 * Signature: undefined FUN_0065a870(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0065a870(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,short *param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  wchar_t wVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  wchar_t wVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  wchar_t *pwVar18;
  char cVar19;
  char cVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  ulong __n;
  uint uVar24;
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
  lVar16 = FUN_00654a24(auStack_18,param_6 + 0xd0);
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
  iVar11 = FUN_00654b08(&local_30);
  iVar12 = FUN_00654b08(&local_40);
  if ((iVar11 == -1) == (iVar12 == -1)) {
    wVar13 = L'\0';
    uVar9 = 0;
  }
  else {
    wVar13 = FUN_00654b08(&local_30);
    uVar9 = (ushort)(wVar13 == *(wchar_t *)(lVar16 + 0xe0));
    if ((uVar9 == 0) && (wVar13 != *(wchar_t *)(lVar16 + 0xe4))) {
      cVar8 = *(char *)(lVar16 + 0x20);
LAB_0065a9a4:
      iVar11 = 0;
      bVar6 = false;
      do {
        if (((cVar8 != '\0') && (*(wchar_t *)(lVar16 + 0x4c) == wVar13)) ||
           (*(wchar_t *)(lVar16 + 0x48) == wVar13)) {
LAB_0065b0f8:
          bVar2 = false;
          goto joined_r0x0065adb4;
        }
        if (*(wchar_t *)(lVar16 + 0xf0) == wVar13) {
          if ((uVar10 == 10) < bVar6) goto LAB_0065a9e0;
          iVar11 = iVar11 + 1;
                    /* try { // try from 0065ad80 to 0075ad93 has its CatchHandler @ 0065b154 */
          if ((uVar10 == 8) || (bVar6 = true, uVar24 == 0)) {
                    /* try { // try from 0065ad94 to 0075ada3 has its CatchHandler @ 0065b11c */
            iVar11 = 0;
            bVar6 = true;
            uVar10 = 8;
          }
        }
        else {
          if (!bVar6) goto LAB_0065b0f8;
LAB_0065a9e0:
                    /* try { // try from 0065a9e0 to 0075a9fb has its CatchHandler @ 0065abf4 */
          if ((*(wchar_t *)(lVar16 + 0xe8) != wVar13) && (*(wchar_t *)(lVar16 + 0xec) != wVar13)) {
            bVar6 = true;
            bVar2 = false;
            goto joined_r0x0065adb4;
          }
          if ((uVar10 != 0x10) && (uVar24 != 0)) {
            bVar2 = false;
            bVar6 = true;
            goto LAB_0065aa8c;
          }
          iVar11 = 0;
          bVar6 = false;
                    /* try { // try from 0065aa0c to 0075aa1f has its CatchHandler @ 0065ab24 */
          uVar10 = 0x10;
        }
        if (local_30 != (long *)0x0) {
                    /* try { // try from 0065aa20 to 0075ac57 has its CatchHandler @ 0065a948 */
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
          cVar8 = *(char *)(lVar16 + 0x20);
          bVar2 = true;
          goto joined_r0x0065adb4;
        }
        wVar13 = FUN_00654b08(&local_30);
        if (!bVar6) goto LAB_0065b154;
        cVar8 = *(char *)(lVar16 + 0x20);
      } while( true );
    }
    cVar8 = *(char *)(lVar16 + 0x20);
    if ((cVar8 != '\0') && (wVar13 == *(wchar_t *)(lVar16 + 0x4c))) {
      cVar8 = '\x01';
      goto LAB_0065a9a4;
    }
    if (wVar13 == *(wchar_t *)(lVar16 + 0x48)) goto LAB_0065a9a4;
    if (local_30 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0065aa20 with catch @ 0065a948 */
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 4;
      }
      else {
        FUN_0064d8c4();
      }
      local_28 = L'\xffffffff';
    }
    iVar11 = FUN_00654b08(&local_30);
                    /* try { // try from 0065a970 to 0075a983 has its CatchHandler @ 0065abf0 */
    iVar12 = FUN_00654b08(&local_40);
                    /* try { // try from 0065a984 to 0075a98f has its CatchHandler @ 0065ab8c */
                    /* try { // try from 0065a990 to 0075a99f has its CatchHandler @ 0065ab28 */
    if ((iVar11 == -1) != (iVar12 == -1)) {
      wVar13 = FUN_00654b08(&local_30);
      cVar8 = *(char *)(lVar16 + 0x20);
      goto LAB_0065a9a4;
    }
  }
  cVar8 = *(char *)(lVar16 + 0x20);
  bVar2 = true;
  iVar11 = 0;
  bVar6 = false;
joined_r0x0065adb4:
  if (uVar10 == 0x10) {
    __n = 0x16;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar8 == '\0') goto LAB_0065aaac;
LAB_0065add8:
    local_58 = &local_8;
                    /* try { // try from 0065addc to 0075ade7 has its CatchHandler @ 0065b28c */
    FUN_00667088(local_58,0x20);
    cVar8 = *(char *)(lVar16 + 0x148);
                    /* try { // try from 0065ade8 to 0075ae1b has its CatchHandler @ 0065ac60 */
    uVar24 = 0;
    if (uVar10 != 0) {
      uVar24 = 0xffff / uVar10;
    }
    if (cVar8 == '\0') goto LAB_0065aac4;
LAB_0065adfc:
    local_58 = &local_8;
    if (!bVar2) {
      uVar23 = 0;
      bVar5 = false;
      wVar7 = local_28;
LAB_0065ae10:
      local_28 = wVar7;
      uVar21 = (ushort)uVar23;
                    /* try { // try from 0065ae1c to 0075ae8f has its CatchHandler @ 0065b28c */
      if ((*(char *)(lVar16 + 0x20) == '\0') || (wVar13 != *(wchar_t *)(lVar16 + 0x4c))) {
        if ((wVar13 == *(wchar_t *)(lVar16 + 0x48)) ||
           (pwVar18 = wmemchr((wchar_t *)(lVar16 + 0xf0),wVar13,__n), pwVar18 == (wchar_t *)0x0))
        goto LAB_0065ad28;
        iVar12 = (int)((long)pwVar18 - (lVar16 + 0xf0) >> 2);
        if (0xf < iVar12) {
          iVar12 = iVar12 + -6;
        }
        if (uVar23 <= uVar24) {
          iVar11 = iVar11 + 1;
          bVar5 = (bool)(bVar5 | 0xffff - iVar12 < (int)(uVar23 * uVar10 & 0xffff));
          uVar23 = (uVar23 * uVar10 & 0xffff) + iVar12 & 0xffff;
          goto LAB_0065ae88;
        }
        bVar5 = true;
        if (local_30 != (long *)0x0) goto LAB_0065ae90;
LAB_0065af9c:
        uVar21 = (ushort)uVar23;
        if (local_40 == (long *)0x0) goto LAB_0065ac5c;
        cVar20 = cVar8;
joined_r0x0065afb4:
        uVar21 = (ushort)uVar23;
        cVar19 = '\0';
        if ((int)local_38 == -1) {
          if ((int *)local_40[2] < (int *)local_40[3]) {
            iVar12 = *(int *)local_40[2];
          }
          else {
            iVar12 = (**(code **)(*local_40 + 0x48))();
                    /* catch() { ... } // from try @ 0065ada4 with catch @ 0065b0c0 */
          }
          if (iVar12 == -1) {
            local_40 = (long *)0x0;
            cVar19 = cVar8;
          }
          else {
            local_38 = CONCAT44(local_38._4_4_,iVar12);
            cVar19 = '\0';
          }
        }
        if (cVar19 == cVar20) goto LAB_0065ac5c;
      }
      else {
        if (iVar11 == 0) {
          bVar3 = true;
          goto LAB_0065ad2c;
        }
        FUN_00667890(local_58,iVar11);
        iVar11 = 0;
LAB_0065ae88:
        if (local_30 == (long *)0x0) goto LAB_0065af9c;
LAB_0065ae90:
                    /* try { // try from 0065ae90 to 0075aea7 has its CatchHandler @ 0065b278 */
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* try { // try from 0065aea8 to 0075af03 has its CatchHandler @ 0065b28c */
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065af9c;
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
          goto LAB_0065af9c;
        }
        cVar20 = '\0';
        local_28 = wVar13;
        if (local_40 != (long *)0x0) {
          goto joined_r0x0065afb4;
        }
      }
      wVar7 = local_28;
      wVar13 = L'\xffffffff';
                    /* try { // try from 0065af04 to 0075b27b has its CatchHandler @ 0065ac60 */
      if ((local_30 != (long *)0x0) && (wVar13 = local_28, local_28 == L'\xffffffff')) {
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar13 = *(wchar_t *)local_30[2];
        }
        else {
          wVar13 = (**(code **)(*local_30 + 0x48))();
        }
        wVar7 = wVar13;
        if (wVar13 == L'\xffffffff') {
          local_30 = (long *)0x0;
          wVar7 = local_28;
        }
      }
      goto LAB_0065ae10;
    }
    uVar21 = 0;
    bVar5 = false;
    bVar3 = false;
  }
  else {
LAB_0065aa8c:
    __n = (ulong)(int)uVar10;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar8 != '\0') goto LAB_0065add8;
LAB_0065aaac:
    cVar8 = *(char *)(lVar16 + 0x148);
    uVar24 = 0;
    if (uVar10 != 0) {
      uVar24 = 0xffff / uVar10;
    }
    if (cVar8 != '\0') goto LAB_0065adfc;
LAB_0065aac4:
    uVar23 = 0;
    uVar21 = 0;
    bVar5 = false;
    if (!bVar2) {
LAB_0065aae0:
      if (10 < __n) goto LAB_0065abb4;
LAB_0065aae8:
      uVar21 = (ushort)uVar23;
      if ((0x2f < (uint)wVar13) && ((uint)wVar13 < (uint)((int)__n + L'0'))) {
        uVar15 = wVar13 + L'\xffffffd0';
LAB_0065ab00:
        if (uVar23 <= uVar24) goto LAB_0065abe4;
LAB_0065ab08:
        bVar5 = true;
        if (local_30 == (long *)0x0) goto LAB_0065ac14;
LAB_0065ab14:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* catch() { ... } // from try @ 0065aa0c with catch @ 0065ab24 */
                    /* catch() { ... } // from try @ 0065a990 with catch @ 0065ab28 */
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065ac14;
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
          goto LAB_0065ac14;
        }
        iVar12 = 0;
        local_28 = wVar13;
        if (local_40 == (long *)0x0) goto LAB_0065ab74;
        iVar14 = 0;
        if ((int)local_38 == -1) goto LAB_0065ac30;
LAB_0065ab6c:
        do {
          uVar21 = (ushort)uVar23;
          if (iVar14 == iVar12) goto LAB_0065ac5c;
LAB_0065ab74:
          while( true ) {
            wVar13 = L'\xffffffff';
            if ((local_30 == (long *)0x0) || (wVar13 = local_28, local_28 != L'\xffffffff'))
            goto LAB_0065aae0;
                    /* catch() { ... } // from try @ 0065a984 with catch @ 0065ab8c */
            if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
              wVar13 = *(wchar_t *)local_30[2];
            }
            else {
              wVar13 = (**(code **)(*local_30 + 0x48))();
            }
            if (wVar13 == L'\xffffffff') {
              local_30 = (long *)0x0;
              goto LAB_0065aae0;
            }
            local_28 = wVar13;
            if (__n < 0xb) goto LAB_0065aae8;
LAB_0065abb4:
            uVar21 = (ushort)uVar23;
            uVar15 = wVar13 + L'\xffffffd0';
            if (uVar15 < 10) goto LAB_0065ab00;
            if ((uint)(wVar13 + L'\xffffff9f') < 6) {
              uVar15 = wVar13 + L'\xffffffa9';
              goto LAB_0065ab00;
            }
            if (5 < (uint)(wVar13 + L'\xffffffbf')) goto LAB_0065ad28;
            uVar15 = wVar13 + L'\xffffffc9';
            if (uVar24 < uVar23) goto LAB_0065ab08;
LAB_0065abe4:
            uVar1 = uVar23 * uVar10;
            iVar11 = iVar11 + 1;
                    /* catch() { ... } // from try @ 0065a970 with catch @ 0065abf0 */
                    /* catch() { ... } // from try @ 0065a9e0 with catch @ 0065abf4 */
            uVar22 = uVar1 & 0xffff;
            uVar23 = uVar22 + uVar15 & 0xffff;
            bVar5 = (bool)(bVar5 | ((uVar1 & 0xffff) != 0xffff - uVar15 &&
                                   (int)(0xffff - uVar15) <= (int)uVar22));
            if (local_30 != (long *)0x0) goto LAB_0065ab14;
LAB_0065ac14:
            uVar21 = (ushort)uVar23;
            if (local_40 == (long *)0x0) goto LAB_0065ac5c;
            iVar12 = 1;
            iVar14 = 0;
            if ((int)local_38 != -1) goto LAB_0065ab6c;
LAB_0065ac30:
            uVar21 = (ushort)uVar23;
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar14 = *(int *)local_40[2];
            }
            else {
              iVar14 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar14 == -1) break;
            local_38 = CONCAT44(local_38._4_4_,iVar14);
            if (iVar12 == 0) goto LAB_0065ac5c;
          }
          local_40 = (long *)0x0;
          iVar14 = 1;
        } while( true );
      }
    }
LAB_0065ad28:
    bVar3 = false;
  }
LAB_0065ad2c:
                    /* try { // try from 0065ad30 to 0075ad3b has its CatchHandler @ 0065b158 */
  lVar17 = *(long *)(local_8 + -0x18);
joined_r0x0065ac6c:
  if (lVar17 == 0) {
    if ((iVar11 == 0) <= bVar6) {
LAB_0065acb8:
      if (!bVar3) {
        if (bVar5) {
          *param_8 = -1;
                    /* try { // try from 0065acd4 to 0075ace3 has its CatchHandler @ 0065b26c */
          *param_7 = 4;
        }
        else {
          *param_8 = uVar9 + (uVar21 ^ -uVar9);
        }
        goto LAB_0065acd8;
      }
    }
  }
  else {
    local_58 = &local_8;
    FUN_00667890(local_58,iVar11);
    cVar8 = FUN_0063ca8c(*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18),local_58);
    if (cVar8 == '\0') {
      *param_7 = 4;
    }
    if (((iVar11 == 0) <= bVar6) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0065acb8;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_0065acd8:
  if (bVar2) {
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = local_28;
  auVar4._0_8_ = local_30;
  auVar4._12_4_ = uStack_24;
                    /* try { // try from 0065ad00 to 0075ad0b has its CatchHandler @ 0065b268 */
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0065ad94 with catch @ 0065b11c */
    FUN_0064d8e0(local_8 + -0x18,auStack_10);
  }
                    /* try { // try from 0065ad0c to 0075ad1f has its CatchHandler @ 0065b20c */
                    /* try { // try from 0065ad20 to 0075ad2f has its CatchHandler @ 0065b1b4 */
  return auVar4;
LAB_0065b154:
                    /* catch() { ... } // from try @ 0065ad80 with catch @ 0065b154 */
  cVar8 = *(char *)(lVar16 + 0x20);
                    /* catch() { ... } // from try @ 0065ad30 with catch @ 0065b158 */
  bVar2 = false;
  goto joined_r0x0065adb4;
LAB_0065ac5c:
                    /* try { // try from 0065ac60 to 0075acd3 has its CatchHandler @ 0065ac60
                       catch() { ... } // from try @ 0065ac60 with catch @ 0065ac60
                       catch() { ... } // from try @ 0065ade8 with catch @ 0065ac60
                       catch() { ... } // from try @ 0065af04 with catch @ 0065ac60
                       catch() { ... } // from try @ 0065b328 with catch @ 0065ac60 */
  bVar3 = false;
  bVar2 = true;
  lVar17 = *(long *)(local_8 + -0x18);
  goto joined_r0x0065ac6c;
}


