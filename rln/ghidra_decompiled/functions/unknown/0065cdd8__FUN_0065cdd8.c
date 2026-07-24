/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065cdd8
 * Function: FUN_0065cdd8
 * Signature: undefined FUN_0065cdd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0065cdd8(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
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
  
  local_28 = (wchar_t)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar14 = FUN_00654a24(auStack_18,param_6 + 0xd0);
  uVar13 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar13 == 0x40) {
    uVar22 = 8;
  }
  else {
    uVar22 = 0x10;
    if (uVar13 != 8) {
      uVar22 = 10;
    }
  }
  iVar9 = FUN_00654b08(&local_30);
  iVar10 = FUN_00654b08(&local_40);
  if ((iVar9 == -1) == (iVar10 == -1)) {
    wVar11 = L'\0';
    bVar7 = false;
  }
  else {
    wVar11 = FUN_00654b08(&local_30);
    bVar7 = wVar11 == *(wchar_t *)(lVar14 + 0xe0);
                    /* try { // try from 0065d484 to 0075d48b has its CatchHandler @ 0065d500 */
                    /* try { // try from 0065d48c to 0075d51f has its CatchHandler @ 0065d338 */
    if ((!bVar7) && (wVar11 != *(wchar_t *)(lVar14 + 0xe4))) {
      cVar8 = *(char *)(lVar14 + 0x20);
LAB_0065cf0c:
      iVar9 = 0;
      bVar5 = false;
      do {
        if (((cVar8 != '\0') && (*(wchar_t *)(lVar14 + 0x4c) == wVar11)) ||
           (*(wchar_t *)(lVar14 + 0x48) == wVar11)) {
LAB_0065d64c:
          bVar1 = false;
          goto LAB_0065cfec;
        }
        iVar10 = (int)uVar22;
        if (*(wchar_t *)(lVar14 + 0xf0) == wVar11) {
                    /* catch() { ... } // from try @ 0065d1cc with catch @ 0065d2c0 */
          if ((iVar10 == 10) < bVar5) goto LAB_0065cf48;
                    /* catch() { ... } // from try @ 0065d1a0 with catch @ 0065d2d4 */
          iVar9 = iVar9 + 1;
          if ((iVar10 == 8) || (bVar5 = true, uVar13 == 0)) {
            iVar9 = 0;
                    /* try { // try from 0065d2f4 to 0075d32b has its CatchHandler @ 0065d334 */
            bVar5 = true;
            uVar22 = 8;
          }
        }
        else {
          if (!bVar5) goto LAB_0065d64c;
LAB_0065cf48:
                    /* try { // try from 0065cf4c to 0075cf53 has its CatchHandler @ 0065cfcc */
                    /* try { // try from 0065cf54 to 0075cfb7 has its CatchHandler @ 0065cdb0 */
          if ((*(wchar_t *)(lVar14 + 0xe8) != wVar11) && (*(wchar_t *)(lVar14 + 0xec) != wVar11)) {
            bVar5 = true;
            bVar1 = false;
            goto joined_r0x0065d310;
          }
          if ((iVar10 != 0x10) && (uVar13 != 0)) {
                    /* try { // try from 0065d684 to 0075d70f has its CatchHandler @ 0065d684
                       catch(type#1 @ 00000000) { ... } // from try @ 0065d684 with catch @ 0065d684
                       catch(type#1 @ 00000000) { ... } // from try @ 0065d71c with catch @ 0065d684
                       catch(type#1 @ 00000000) { ... } // from try @ 0065d7d4 with catch @ 0065d684
                        */
            bVar1 = false;
            bVar5 = true;
            goto LAB_0065cff4;
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
            (**(code **)(*local_30 + 0x50))();
          }
          local_28 = L'\xffffffff';
        }
        iVar10 = FUN_00654b08(&local_30);
        iVar12 = FUN_00654b08(&local_40);
                    /* catch() { ... } // from try @ 0065ceb0 with catch @ 0065cfb4 */
                    /* try { // try from 0065cfb8 to 0075cfbf has its CatchHandler @ 0065cfc8 */
                    /* try { // try from 0065cfc0 to 0075cfcf has its CatchHandler @ 0065cdb0 */
        if ((iVar10 == -1) == (iVar12 == -1)) {
          cVar8 = *(char *)(lVar14 + 0x20);
          bVar1 = true;
          goto LAB_0065cfec;
        }
                    /* catch() { ... } // from try @ 0065cfb8 with catch @ 0065cfc8 */
                    /* catch() { ... } // from try @ 0065ce9c with catch @ 0065cfcc
                       catch() { ... } // from try @ 0065cf4c with catch @ 0065cfcc */
        wVar11 = FUN_00654b08(&local_30);
                    /* try { // try from 0065cfd4 to 0075d03b has its CatchHandler @ 0065cfd4
                       catch(type#1 @ 00000000) { ... } // from try @ 0065cfd4 with catch @ 0065cfd4
                       catch(type#1 @ 00000000) { ... } // from try @ 0065d044 with catch @ 0065cfd4
                       catch(type#1 @ 00000000) { ... } // from try @ 0065d0c0 with catch @ 0065cfd4
                        */
        if (!bVar5) goto LAB_0065d6a8;
        cVar8 = *(char *)(lVar14 + 0x20);
      } while( true );
    }
    cVar8 = *(char *)(lVar14 + 0x20);
    if ((cVar8 != '\0') && (wVar11 == *(wchar_t *)(lVar14 + 0x4c))) {
      cVar8 = '\x01';
      goto LAB_0065cf0c;
    }
                    /* try { // try from 0065ce9c to 0075cea7 has its CatchHandler @ 0065cfcc */
    if (wVar11 == *(wchar_t *)(lVar14 + 0x48)) goto LAB_0065cf0c;
    if (local_30 != (long *)0x0) {
                    /* try { // try from 0065ceb0 to 0075cf2b has its CatchHandler @ 0065cfb4 */
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
      goto LAB_0065cf0c;
    }
  }
  cVar8 = *(char *)(lVar14 + 0x20);
  bVar1 = true;
  iVar9 = 0;
  bVar5 = false;
LAB_0065cfec:
  iVar10 = (int)uVar22;
joined_r0x0065d310:
  if (iVar10 == 0x10) {
    __n = 0x16;
    local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 0065d32c to 0075d337 has its CatchHandler @ 0065d0cc */
    if (cVar8 == '\0') goto LAB_0065d014;
LAB_0065d334:
                    /* catch() { ... } // from try @ 0065d2f4 with catch @ 0065d334 */
    local_58 = &local_8;
                    /* catch() { ... } // from try @ 0065d48c with catch @ 0065d338
                       catch() { ... } // from try @ 0065d5d4 with catch @ 0065d338 */
    FUN_00667088(local_58,0x20);
    cVar8 = *(char *)(lVar14 + 0x148);
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = 0xffffffffffffffff / uVar22;
    }
    if (cVar8 == '\0') goto LAB_0065d02c;
LAB_0065d358:
    local_58 = &local_8;
    if (!bVar1) {
      uVar20 = 0;
      bVar4 = false;
      wVar6 = local_28;
LAB_0065d36c:
      local_28 = wVar6;
      if ((*(char *)(lVar14 + 0x20) == '\0') || (wVar11 != *(wchar_t *)(lVar14 + 0x4c))) {
                    /* try { // try from 0065d380 to 0075d38b has its CatchHandler @ 0065d568 */
                    /* try { // try from 0065d38c to 0075d393 has its CatchHandler @ 0065d550 */
                    /* try { // try from 0065d394 to 0075d45f has its CatchHandler @ 0065d568 */
        if ((wVar11 == *(wchar_t *)(lVar14 + 0x48)) ||
           (pwVar16 = wmemchr((wchar_t *)(lVar14 + 0xf0),wVar11,__n), pwVar16 == (wchar_t *)0x0))
        goto LAB_0065d284;
        iVar10 = (int)((long)pwVar16 - (lVar14 + 0xf0) >> 2);
        if (0xf < iVar10) {
          iVar10 = iVar10 + -6;
        }
        if (uVar20 <= uVar21) {
          iVar9 = iVar9 + 1;
          uVar18 = uVar20 * uVar22;
          uVar20 = (long)iVar10 + uVar18;
          bVar4 = (bool)(bVar4 | (ulong)~(long)iVar10 < uVar18);
          goto LAB_0065d3dc;
        }
        bVar4 = true;
        if (local_30 != (long *)0x0) goto LAB_0065d3e4;
LAB_0065d4f0:
        if (local_40 == (long *)0x0) goto LAB_0065d1b8;
        cVar19 = cVar8;
                    /* catch() { ... } // from try @ 0065d484 with catch @ 0065d500 */
joined_r0x0065d508:
        cVar17 = '\0';
        if ((int)local_38 == -1) {
          if ((int *)local_40[2] < (int *)local_40[3]) {
            iVar10 = *(int *)local_40[2];
          }
          else {
            iVar10 = (**(code **)(*local_40 + 0x48))();
          }
                    /* try { // try from 0065d520 to 0075d547 has its CatchHandler @ 0065d54c */
          if (iVar10 == -1) {
            local_40 = (long *)0x0;
            cVar17 = cVar8;
                    /* try { // try from 0065d588 to 0075d58f has its CatchHandler @ 0065d5dc */
          }
          else {
            local_38 = CONCAT44(local_38._4_4_,iVar10);
            cVar17 = '\0';
          }
        }
        if (cVar17 == cVar19) goto LAB_0065d1b8;
      }
      else {
                    /* catch() { ... } // from try @ 0065d38c with catch @ 0065d550 */
        if (iVar9 == 0) {
          bVar2 = true;
          goto LAB_0065d288;
        }
        FUN_00667890(local_58,iVar9);
        iVar9 = 0;
LAB_0065d3dc:
        if (local_30 == (long *)0x0) goto LAB_0065d4f0;
LAB_0065d3e4:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
                    /* try { // try from 0065d5ac to 0075d5d3 has its CatchHandler @ 0065d62c */
          if (local_30 == (long *)0x0) goto LAB_0065d4f0;
        }
        local_28 = L'\xffffffff';
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar11 = *(wchar_t *)local_30[2];
        }
        else {
                    /* try { // try from 0065d5fc to 0075d623 has its CatchHandler @ 0065d628 */
          wVar11 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar11 == L'\xffffffff') {
          local_30 = (long *)0x0;
          goto LAB_0065d4f0;
        }
        cVar19 = '\0';
        local_28 = wVar11;
        if (local_40 != (long *)0x0) {
          goto joined_r0x0065d508;
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
      goto LAB_0065d36c;
    }
    uVar20 = 0;
    bVar4 = false;
    bVar2 = false;
  }
  else {
LAB_0065cff4:
    __n = (ulong)(int)uVar22;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar8 != '\0') goto LAB_0065d334;
LAB_0065d014:
    cVar8 = *(char *)(lVar14 + 0x148);
    uVar21 = 0;
    if (uVar22 != 0) {
      uVar21 = 0xffffffffffffffff / uVar22;
    }
    if (cVar8 != '\0') goto LAB_0065d358;
LAB_0065d02c:
    uVar20 = 0;
    bVar4 = false;
    if (!bVar1) {
                    /* try { // try from 0065d03c to 0075d043 has its CatchHandler @ 0065d098 */
LAB_0065d044:
                    /* try { // try from 0065d044 to 0075d0b7 has its CatchHandler @ 0065cfd4 */
      if (10 < __n) goto LAB_0065d118;
LAB_0065d04c:
      if ((0x2f < (uint)wVar11) && ((uint)wVar11 < (uint)((int)__n + L'0'))) {
        uVar13 = wVar11 + L'\xffffffd0';
LAB_0065d064:
        if (uVar20 <= uVar21) goto LAB_0065d148;
LAB_0065d06c:
        bVar4 = true;
        if (local_30 == (long *)0x0) goto LAB_0065d170;
LAB_0065d078:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
                    /* catch() { ... } // from try @ 0065d380 with catch @ 0065d568
                       catch() { ... } // from try @ 0065d394 with catch @ 0065d568 */
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065d170;
        }
        local_28 = L'\xffffffff';
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065d03c with catch @ 0065d098
                        */
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar11 = *(wchar_t *)local_30[2];
        }
        else {
                    /* catch() { ... } // from try @ 0065d588 with catch @ 0065d5dc */
          wVar11 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar11 == L'\xffffffff') {
          local_30 = (long *)0x0;
                    /* catch() { ... } // from try @ 0065d520 with catch @ 0065d54c */
          goto LAB_0065d170;
        }
        iVar10 = 0;
                    /* try { // try from 0065d0b8 to 0075d0bf has its CatchHandler @ 0065d0c8 */
        local_28 = wVar11;
        if (local_40 == (long *)0x0) goto LAB_0065d0d8;
                    /* try { // try from 0065d0c0 to 0075d0cb has its CatchHandler @ 0065cfd4 */
        iVar12 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065d0b8 with catch @ 0065d0c8
                        */
                    /* try { // try from 0065d0cc to 0075d15f has its CatchHandler @ 0065d0cc
                       catch() { ... } // from try @ 0065d0cc with catch @ 0065d0cc
                       catch() { ... } // from try @ 0065d1a8 with catch @ 0065d0cc
                       catch() { ... } // from try @ 0065d1d0 with catch @ 0065d0cc
                       catch() { ... } // from try @ 0065d284 with catch @ 0065d0cc
                       catch() { ... } // from try @ 0065d32c with catch @ 0065d0cc */
        if ((int)local_38 == -1) goto LAB_0065d18c;
LAB_0065d0d0:
        do {
          if (iVar12 == iVar10) goto LAB_0065d1b8;
LAB_0065d0d8:
          while( true ) {
            wVar11 = L'\xffffffff';
            if ((local_30 == (long *)0x0) || (wVar11 = local_28, local_28 != L'\xffffffff'))
            goto LAB_0065d044;
            if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
              wVar11 = *(wchar_t *)local_30[2];
            }
            else {
                    /* catch() { ... } // from try @ 0065d5fc with catch @ 0065d628 */
                    /* catch() { ... } // from try @ 0065d5ac with catch @ 0065d62c */
              wVar11 = (**(code **)(*local_30 + 0x48))();
            }
            if (wVar11 == L'\xffffffff') {
              local_30 = (long *)0x0;
              goto LAB_0065d044;
            }
            local_28 = wVar11;
            if (__n < 0xb) goto LAB_0065d04c;
LAB_0065d118:
            uVar13 = wVar11 + L'\xffffffd0';
            if (uVar13 < 10) goto LAB_0065d064;
            if ((uint)(wVar11 + L'\xffffff9f') < 6) {
              uVar13 = wVar11 + L'\xffffffa9';
              goto LAB_0065d064;
            }
            if (5 < (uint)(wVar11 + L'\xffffffbf')) goto LAB_0065d284;
            uVar13 = wVar11 + L'\xffffffc9';
            if (uVar21 < uVar20) goto LAB_0065d06c;
LAB_0065d148:
            iVar9 = iVar9 + 1;
            uVar18 = uVar20 * uVar22;
            uVar20 = (long)(int)uVar13 + uVar18;
                    /* try { // try from 0065d160 to 0075d16f has its CatchHandler @ 0065d300 */
            bVar4 = (bool)(bVar4 | (ulong)~(long)(int)uVar13 < uVar18);
            if (local_30 != (long *)0x0) goto LAB_0065d078;
LAB_0065d170:
            if (local_40 == (long *)0x0) goto LAB_0065d1b8;
            iVar10 = 1;
            iVar12 = 0;
            if ((int)local_38 != -1) goto LAB_0065d0d0;
LAB_0065d18c:
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar12 = *(int *)local_40[2];
            }
            else {
              iVar12 = (**(code **)(*local_40 + 0x48))();
                    /* try { // try from 0065d5d4 to 0075d5fb has its CatchHandler @ 0065d338 */
            }
                    /* try { // try from 0065d1a0 to 0075d1a7 has its CatchHandler @ 0065d2d4 */
            if (iVar12 == -1) break;
                    /* try { // try from 0065d1a8 to 0075d1cb has its CatchHandler @ 0065d0cc */
            local_38 = CONCAT44(local_38._4_4_,iVar12);
            if (iVar10 == 0) goto LAB_0065d1b8;
          }
          local_40 = (long *)0x0;
          iVar12 = 1;
        } while( true );
      }
    }
LAB_0065d284:
                    /* try { // try from 0065d284 to 0075d2f3 has its CatchHandler @ 0065d0cc */
    bVar2 = false;
  }
LAB_0065d288:
  lVar15 = *(long *)(local_8 + -0x18);
joined_r0x0065d1c8:
  if (lVar15 == 0) {
    if ((iVar9 == 0) <= bVar5) {
LAB_0065d214:
      if (!bVar2) {
        if (bVar4) {
          *param_8 = -1;
          *param_7 = 4;
        }
        else {
          *param_8 = (uVar20 ^ -(ulong)bVar7) + (ulong)bVar7;
        }
        goto LAB_0065d234;
      }
    }
  }
  else {
                    /* try { // try from 0065d1cc to 0075d1cf has its CatchHandler @ 0065d2c0 */
    local_58 = &local_8;
                    /* try { // try from 0065d1d0 to 0075d27b has its CatchHandler @ 0065d0cc */
    FUN_00667890(local_58,iVar9);
    cVar8 = FUN_0063ca8c(*(undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),local_58);
    if (cVar8 == '\0') {
      *param_7 = 4;
    }
    if (((iVar9 == 0) <= bVar5) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0065d214;
  }
                    /* catch() { ... } // from try @ 0065d27c with catch @ 0065d2b0 */
  *param_8 = 0;
  *param_7 = 4;
LAB_0065d234:
  if (bVar1) {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_28;
  auVar3._0_8_ = local_30;
  auVar3._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
    FUN_0064d8e0(local_8 + -0x18,auStack_10);
  }
                    /* try { // try from 0065d27c to 0075d283 has its CatchHandler @ 0065d2b0 */
  return auVar3;
LAB_0065d6a8:
  cVar8 = *(char *)(lVar14 + 0x20);
  bVar1 = false;
  goto LAB_0065cfec;
LAB_0065d1b8:
  bVar2 = false;
  bVar1 = true;
  lVar15 = *(long *)(local_8 + -0x18);
  goto joined_r0x0065d1c8;
}


