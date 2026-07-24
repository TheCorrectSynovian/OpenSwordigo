/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065babc
 * Function: FUN_0065babc
 * Signature: undefined FUN_0065babc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0065babc(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,long *param_8)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  wchar_t wVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  wchar_t wVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  wchar_t *pwVar16;
  char cVar17;
  ulong uVar18;
  char cVar19;
  ulong uVar20;
  ulong __n;
  ulong uVar21;
  ulong uVar22;
  undefined **local_58;
  long *local_40;
  undefined8 local_38;
  long *local_30;
  wchar_t local_28;
  undefined4 uStack_24;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined *local_8;
  
                    /* try { // try from 0065bac0 to 0075bad3 has its CatchHandler @ 0065bd48 */
  local_28 = (wchar_t)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
                    /* try { // try from 0065bad4 to 0075bae3 has its CatchHandler @ 0065bcf4 */
                    /* try { // try from 0065bae4 to 0075baef has its CatchHandler @ 0065bc98 */
  lVar14 = FUN_00654a24(auStack_18,param_6 + 0xd0);
  uVar13 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar13 == 0x40) {
    uVar22 = 8;
  }
  else {
                    /* try { // try from 0065bb20 to 0075bb2b has its CatchHandler @ 0065be00 */
    uVar22 = 0x10;
    if (uVar13 != 8) {
      uVar22 = 10;
    }
  }
                    /* try { // try from 0065bb2c to 0075bfaf has its CatchHandler @ 0065b81c */
  iVar9 = FUN_00654b08(&local_30);
  iVar10 = FUN_00654b08(&local_40);
  if ((iVar9 == -1) == (iVar10 == -1)) {
    wVar11 = L'\0';
    bVar7 = false;
  }
  else {
    wVar11 = FUN_00654b08(&local_30);
    bVar7 = wVar11 == *(wchar_t *)(lVar14 + 0xe0);
    if ((!bVar7) && (wVar11 != *(wchar_t *)(lVar14 + 0xe4))) {
      cVar8 = *(char *)(lVar14 + 0x20);
LAB_0065bbf0:
      iVar9 = 0;
      bVar5 = false;
      do {
        if (((cVar8 != '\0') && (*(wchar_t *)(lVar14 + 0x4c) == wVar11)) ||
           (*(wchar_t *)(lVar14 + 0x48) == wVar11)) {
LAB_0065c330:
          bVar1 = false;
          goto LAB_0065bcd0;
        }
        iVar10 = (int)uVar22;
        if (*(wchar_t *)(lVar14 + 0xf0) == wVar11) {
                    /* try { // try from 0065bfb0 to 0075bfd7 has its CatchHandler @ 0065bfe0 */
          if ((iVar10 == 10) < bVar5) goto LAB_0065bc2c;
          iVar9 = iVar9 + 1;
          if ((iVar10 == 8) || (bVar5 = true, uVar13 == 0)) {
            iVar9 = 0;
                    /* try { // try from 0065bfd8 to 0075bfe3 has its CatchHandler @ 0065b81c */
            bVar5 = true;
            uVar22 = 8;
                    /* catch() { ... } // from try @ 0065bfb0 with catch @ 0065bfe0 */
          }
        }
        else {
          if (!bVar5) goto LAB_0065c330;
LAB_0065bc2c:
          if ((*(wchar_t *)(lVar14 + 0xe8) != wVar11) && (*(wchar_t *)(lVar14 + 0xec) != wVar11)) {
            bVar5 = true;
            bVar1 = false;
            goto joined_r0x0065bff4;
          }
          if ((iVar10 != 0x10) && (uVar13 != 0)) {
            bVar1 = false;
            bVar5 = true;
                    /* try { // try from 0065c370 to 0075c397 has its CatchHandler @ 0065c464 */
            goto LAB_0065bcd8;
          }
          iVar9 = 0;
          bVar5 = false;
          uVar22 = 0x10;
        }
        if (local_30 != (long *)0x0) {
          if ((ulong)local_30[2] < (ulong)local_30[3]) {
            local_30[2] = local_30[2] + 4;
          }
          else {
                    /* try { // try from 0065c324 to 0075c327 has its CatchHandler @ 0065c450 */
            (**(code **)(*local_30 + 0x50))();
          }
          local_28 = L'\xffffffff';
        }
        iVar10 = FUN_00654b08(&local_30);
        iVar12 = FUN_00654b08(&local_40);
                    /* catch() { ... } // from try @ 0065bae4 with catch @ 0065bc98 */
        if ((iVar10 == -1) == (iVar12 == -1)) {
          cVar8 = *(char *)(lVar14 + 0x20);
          bVar1 = true;
          goto LAB_0065bcd0;
        }
        wVar11 = FUN_00654b08(&local_30);
        if (!bVar5) goto LAB_0065c38c;
        cVar8 = *(char *)(lVar14 + 0x20);
      } while( true );
    }
    cVar8 = *(char *)(lVar14 + 0x20);
    if ((cVar8 != '\0') && (wVar11 == *(wchar_t *)(lVar14 + 0x4c))) {
      cVar8 = '\x01';
      goto LAB_0065bbf0;
    }
    if (wVar11 == *(wchar_t *)(lVar14 + 0x48)) goto LAB_0065bbf0;
    if (local_30 != (long *)0x0) {
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 4;
      }
      else {
        FUN_0064d8c4();
      }
      local_28 = L'\xffffffff';
    }
    iVar9 = FUN_00654b08(&local_30);
    iVar10 = FUN_00654b08(&local_40);
    if ((iVar9 == -1) != (iVar10 == -1)) {
      wVar11 = FUN_00654b08(&local_30);
      cVar8 = *(char *)(lVar14 + 0x20);
      goto LAB_0065bbf0;
    }
  }
  cVar8 = *(char *)(lVar14 + 0x20);
  bVar1 = true;
  iVar9 = 0;
  bVar5 = false;
LAB_0065bcd0:
  iVar10 = (int)uVar22;
joined_r0x0065bff4:
  if (iVar10 == 0x10) {
    __n = 0x16;
    local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 0065c014 to 0075c02b has its CatchHandler @ 0065c070 */
    if (cVar8 == '\0') goto LAB_0065bcf8;
LAB_0065c018:
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
    cVar8 = *(char *)(lVar14 + 0x148);
                    /* try { // try from 0065c02c to 0075c073 has its CatchHandler @ 0065bfe4 */
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = 0xffffffffffffffff / uVar22;
    }
    if (cVar8 == '\0') goto LAB_0065bd10;
LAB_0065c03c:
    local_58 = &local_8;
    if (!bVar1) {
      uVar20 = 0;
      bVar4 = false;
      wVar6 = local_28;
LAB_0065c050:
      local_28 = wVar6;
      if ((*(char *)(lVar14 + 0x20) == '\0') || (wVar11 != *(wchar_t *)(lVar14 + 0x4c))) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065c014 with catch @ 0065c070
                        */
                    /* try { // try from 0065c074 to 0075c07b has its CatchHandler @ 0065c084 */
                    /* try { // try from 0065c07c to 0075c087 has its CatchHandler @ 0065bfe4 */
        if ((wVar11 == *(wchar_t *)(lVar14 + 0x48)) ||
           (pwVar16 = wmemchr((wchar_t *)(lVar14 + 0xf0),wVar11,__n), pwVar16 == (wchar_t *)0x0))
        goto LAB_0065bf68;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065c074 with catch @ 0065c084
                        */
        iVar10 = (int)((long)pwVar16 - (lVar14 + 0xf0) >> 2);
        if (0xf < iVar10) {
          iVar10 = iVar10 + -6;
        }
        if (uVar20 <= uVar21) {
          iVar9 = iVar9 + 1;
          uVar18 = uVar20 * uVar22;
          uVar20 = (long)iVar10 + uVar18;
          bVar4 = (bool)(bVar4 | (ulong)~(long)iVar10 < uVar18);
          goto LAB_0065c0c0;
        }
        bVar4 = true;
        if (local_30 != (long *)0x0) goto LAB_0065c0c8;
LAB_0065c1d4:
        if (local_40 == (long *)0x0) goto LAB_0065be9c;
        cVar19 = cVar8;
joined_r0x0065c1ec:
        cVar17 = '\0';
        if ((int)local_38 == -1) {
          if ((int *)local_40[2] < (int *)local_40[3]) {
            iVar10 = *(int *)local_40[2];
          }
          else {
            iVar10 = (**(code **)(*local_40 + 0x48))();
          }
          if (iVar10 == -1) {
            local_40 = (long *)0x0;
            cVar17 = cVar8;
          }
          else {
            local_38 = CONCAT44(local_38._4_4_,iVar10);
            cVar17 = '\0';
          }
        }
        if (cVar17 == cVar19) goto LAB_0065be9c;
      }
      else {
        if (iVar9 == 0) {
          bVar2 = true;
          goto LAB_0065bf6c;
        }
        FUN_00667890(local_58,iVar9);
        iVar9 = 0;
LAB_0065c0c0:
        if (local_30 == (long *)0x0) goto LAB_0065c1d4;
LAB_0065c0c8:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065c1d4;
        }
        local_28 = L'\xffffffff';
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar11 = *(wchar_t *)local_30[2];
        }
        else {
          wVar11 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar11 == L'\xffffffff') {
          local_30 = (long *)0x0;
          goto LAB_0065c1d4;
        }
        cVar19 = '\0';
        local_28 = wVar11;
        if (local_40 != (long *)0x0) {
          goto joined_r0x0065c1ec;
        }
      }
      wVar6 = local_28;
      wVar11 = L'\xffffffff';
      if ((local_30 != (long *)0x0) && (wVar11 = local_28, local_28 == L'\xffffffff')) {
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar11 = *(wchar_t *)local_30[2];
        }
        else {
          wVar11 = (**(code **)(*local_30 + 0x48))();
        }
        wVar6 = wVar11;
        if (wVar11 == L'\xffffffff') {
          local_30 = (long *)0x0;
          wVar6 = local_28;
        }
      }
      goto LAB_0065c050;
    }
    uVar20 = 0;
    bVar4 = false;
    bVar2 = false;
  }
  else {
LAB_0065bcd8:
    __n = (ulong)(int)uVar22;
    local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* catch() { ... } // from try @ 0065bad4 with catch @ 0065bcf4 */
    if (cVar8 != '\0') goto LAB_0065c018;
LAB_0065bcf8:
    cVar8 = *(char *)(lVar14 + 0x148);
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = 0xffffffffffffffff / uVar22;
    }
    if (cVar8 != '\0') goto LAB_0065c03c;
LAB_0065bd10:
    uVar20 = 0;
    bVar4 = false;
    if (!bVar1) {
LAB_0065bd28:
      if (10 < __n) goto LAB_0065bdfc;
LAB_0065bd30:
      if ((0x2f < (uint)wVar11) && ((uint)wVar11 < (uint)((int)__n + L'0'))) {
        uVar13 = wVar11 + L'\xffffffd0';
LAB_0065bd48:
                    /* catch() { ... } // from try @ 0065bac0 with catch @ 0065bd48 */
        if (uVar20 <= uVar21) goto LAB_0065be2c;
LAB_0065bd50:
        bVar4 = true;
        if (local_30 == (long *)0x0) goto LAB_0065be54;
LAB_0065bd5c:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
                    /* catch() { ... } // from try @ 0065c3c0 with catch @ 0065c260
                       catch() { ... } // from try @ 0065c554 with catch @ 0065c260 */
          if (local_30 == (long *)0x0) goto LAB_0065be54;
        }
        local_28 = L'\xffffffff';
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar11 = *(wchar_t *)local_30[2];
        }
        else {
          wVar11 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar11 == L'\xffffffff') {
          local_30 = (long *)0x0;
          goto LAB_0065be54;
        }
        iVar10 = 0;
        local_28 = wVar11;
        if (local_40 == (long *)0x0) goto LAB_0065bdbc;
                    /* catch() { ... } // from try @ 0065bab4 with catch @ 0065bda4 */
        iVar12 = 0;
        if ((int)local_38 == -1) goto LAB_0065be70;
LAB_0065bdb4:
        do {
          if (iVar12 == iVar10) goto LAB_0065be9c;
LAB_0065bdbc:
          while( true ) {
            wVar11 = L'\xffffffff';
            if ((local_30 == (long *)0x0) || (wVar11 = local_28, local_28 != L'\xffffffff'))
            goto LAB_0065bd28;
            if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
              wVar11 = *(wchar_t *)local_30[2];
            }
            else {
              wVar11 = (**(code **)(*local_30 + 0x48))();
            }
            if (wVar11 == L'\xffffffff') {
              local_30 = (long *)0x0;
              goto LAB_0065bd28;
            }
            local_28 = wVar11;
            if (__n < 0xb) goto LAB_0065bd30;
LAB_0065bdfc:
                    /* catch() { ... } // from try @ 0065baa8 with catch @ 0065bdfc */
            uVar13 = wVar11 + L'\xffffffd0';
                    /* catch() { ... } // from try @ 0065bb20 with catch @ 0065be00 */
            if (uVar13 < 10) goto LAB_0065bd48;
            if ((uint)(wVar11 + L'\xffffff9f') < 6) {
              uVar13 = wVar11 + L'\xffffffa9';
              goto LAB_0065bd48;
            }
            if (5 < (uint)(wVar11 + L'\xffffffbf')) goto LAB_0065bf68;
            uVar13 = wVar11 + L'\xffffffc9';
            if (uVar21 < uVar20) goto LAB_0065bd50;
LAB_0065be2c:
            iVar9 = iVar9 + 1;
            uVar18 = uVar20 * uVar22;
            uVar20 = (long)(int)uVar13 + uVar18;
            bVar4 = (bool)(bVar4 | (ulong)~(long)(int)uVar13 < uVar18);
            if (local_30 != (long *)0x0) goto LAB_0065bd5c;
LAB_0065be54:
            if (local_40 == (long *)0x0) goto LAB_0065be9c;
            iVar10 = 1;
                    /* catch() { ... } // from try @ 0065ba5c with catch @ 0065be64 */
            iVar12 = 0;
            if ((int)local_38 != -1) goto LAB_0065bdb4;
LAB_0065be70:
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar12 = *(int *)local_40[2];
            }
            else {
                    /* try { // try from 0065c2b4 to 0075c2db has its CatchHandler @ 0065c478 */
              iVar12 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar12 == -1) break;
            local_38 = CONCAT44(local_38._4_4_,iVar12);
            if (iVar10 == 0) goto LAB_0065be9c;
          }
          local_40 = (long *)0x0;
          iVar12 = 1;
        } while( true );
      }
    }
LAB_0065bf68:
    bVar2 = false;
  }
LAB_0065bf6c:
  lVar15 = *(long *)(local_8 + -0x18);
joined_r0x0065beac:
  if (lVar15 == 0) {
    if ((iVar9 == 0) <= bVar5) {
LAB_0065bef8:
      if (!bVar2) {
        if (bVar4) {
          *param_8 = -1;
          *param_7 = 4;
        }
        else {
          *param_8 = (uVar20 ^ -(ulong)bVar7) + (ulong)bVar7;
        }
        goto LAB_0065bf18;
      }
    }
  }
  else {
    local_58 = &local_8;
    FUN_00667890(local_58,iVar9);
                    /* catch() { ... } // from try @ 0065ba50 with catch @ 0065bec0 */
    cVar8 = FUN_0063ca8c(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),local_58);
    if (cVar8 == '\0') {
      *param_7 = 4;
    }
    if (((iVar9 == 0) <= bVar5) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0065bef8;
  }
                    /* catch() { ... } // from try @ 0065ba30 with catch @ 0065bf8c */
                    /* catch() { ... } // from try @ 0065ba0c with catch @ 0065bf90 */
  *param_8 = 0;
  *param_7 = 4;
LAB_0065bf18:
  if (bVar1) {
                    /* catch() { ... } // from try @ 0065ba3c with catch @ 0065bf24 */
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_28;
  auVar3._0_8_ = local_30;
  auVar3._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
    FUN_0064d8e0(local_8 + -0x18,auStack_10);
  }
  return auVar3;
LAB_0065c38c:
  cVar8 = *(char *)(lVar14 + 0x20);
  bVar1 = false;
  goto LAB_0065bcd0;
LAB_0065be9c:
  bVar2 = false;
  bVar1 = true;
  lVar15 = *(long *)(local_8 + -0x18);
  goto joined_r0x0065beac;
}


