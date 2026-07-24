/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065b1a0
 * Function: FUN_0065b1a0
 * Signature: undefined FUN_0065b1a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0065b1a0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,int *param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  wchar_t wVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  wchar_t wVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  wchar_t *pwVar17;
  char cVar18;
  char cVar19;
  uint uVar20;
  ulong __n;
  uint uVar21;
  uint local_6c;
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
                    /* catch() { ... } // from try @ 0065ad20 with catch @ 0065b1b4 */
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  lVar15 = FUN_00654a24(auStack_18,param_6 + 0xd0);
  uVar21 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar21 == 0x40) {
    uVar9 = 8;
  }
  else {
    uVar9 = 0x10;
    if (uVar21 != 8) {
      uVar9 = 10;
    }
  }
                    /* catch() { ... } // from try @ 0065ad0c with catch @ 0065b20c */
  iVar10 = FUN_00654b08(&local_30);
  iVar11 = FUN_00654b08(&local_40);
  if ((iVar10 == -1) == (iVar11 == -1)) {
    wVar12 = L'\0';
    local_6c = 0;
  }
  else {
    wVar12 = FUN_00654b08(&local_30);
    local_6c = (uint)(wVar12 == *(wchar_t *)(lVar15 + 0xe0));
    if ((local_6c == 0) && (wVar12 != *(wchar_t *)(lVar15 + 0xe4))) {
      cVar8 = *(char *)(lVar15 + 0x20);
LAB_0065b2d4:
      iVar10 = 0;
      bVar6 = false;
      do {
        if (((cVar8 != '\0') && (*(wchar_t *)(lVar15 + 0x4c) == wVar12)) ||
           (*(wchar_t *)(lVar15 + 0x48) == wVar12)) {
LAB_0065ba14:
          bVar2 = false;
          goto joined_r0x0065b6d4;
        }
                    /* try { // try from 0065b300 to 0075b327 has its CatchHandler @ 0065b38c */
        if (*(wchar_t *)(lVar15 + 0xf0) == wVar12) {
                    /* catch() { ... } // from try @ 0065b48c with catch @ 0065b684 */
          if ((uVar9 == 10) < bVar6) goto LAB_0065b310;
          iVar10 = iVar10 + 1;
                    /* try { // try from 0065b6a8 to 0075b6af has its CatchHandler @ 0065b71c */
          if ((uVar9 == 8) || (bVar6 = true, uVar21 == 0)) {
                    /* try { // try from 0065b6b0 to 0075b78b has its CatchHandler @ 0065b390 */
            iVar10 = 0;
            bVar6 = true;
            uVar9 = 8;
          }
        }
        else {
          if (!bVar6) goto LAB_0065ba14;
LAB_0065b310:
          if ((*(wchar_t *)(lVar15 + 0xe8) != wVar12) && (*(wchar_t *)(lVar15 + 0xec) != wVar12)) {
            bVar6 = true;
            bVar2 = false;
            goto joined_r0x0065b6d4;
          }
                    /* try { // try from 0065b328 to 0075b38f has its CatchHandler @ 0065ac60 */
          if ((uVar9 != 0x10) && (uVar21 != 0)) {
            bVar2 = false;
                    /* try { // try from 0065ba50 to 0075ba5b has its CatchHandler @ 0065bec0 */
            bVar6 = true;
            goto LAB_0065b3bc;
          }
          iVar10 = 0;
          bVar6 = false;
          uVar9 = 0x10;
        }
        if (local_30 != (long *)0x0) {
          if ((ulong)local_30[2] < (ulong)local_30[3]) {
            local_30[2] = local_30[2] + 4;
          }
          else {
                    /* try { // try from 0065ba0c to 0075ba17 has its CatchHandler @ 0065bf90 */
            (**(code **)(*local_30 + 0x50))();
          }
          local_28 = L'\xffffffff';
        }
        iVar11 = FUN_00654b08(&local_30);
        iVar13 = FUN_00654b08(&local_40);
                    /* catch() { ... } // from try @ 0065b300 with catch @ 0065b38c */
        if ((iVar11 == -1) == (iVar13 == -1)) {
          cVar8 = *(char *)(lVar15 + 0x20);
          bVar2 = true;
          goto joined_r0x0065b6d4;
        }
                    /* catch() { ... } // from try @ 0065b54c with catch @ 0065b390
                       catch() { ... } // from try @ 0065b6b0 with catch @ 0065b390 */
        wVar12 = FUN_00654b08(&local_30);
        if (!bVar6) goto LAB_0065ba70;
        cVar8 = *(char *)(lVar15 + 0x20);
      } while( true );
    }
    cVar8 = *(char *)(lVar15 + 0x20);
    if ((cVar8 != '\0') && (wVar12 == *(wchar_t *)(lVar15 + 0x4c))) {
      cVar8 = '\x01';
      goto LAB_0065b2d4;
    }
                    /* catch() { ... } // from try @ 0065ad00 with catch @ 0065b268 */
                    /* catch() { ... } // from try @ 0065acd4 with catch @ 0065b26c */
    if (wVar12 == *(wchar_t *)(lVar15 + 0x48)) goto LAB_0065b2d4;
    if (local_30 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0065ae90 with catch @ 0065b278 */
                    /* try { // try from 0065b27c to 0075b283 has its CatchHandler @ 0065b288 */
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* catch() { ... } // from try @ 0065b27c with catch @ 0065b288 */
                    /* catch() { ... } // from try @ 0065addc with catch @ 0065b28c
                       catch() { ... } // from try @ 0065ae1c with catch @ 0065b28c
                       catch() { ... } // from try @ 0065aea8 with catch @ 0065b28c */
        local_30[2] = local_30[2] + 4;
      }
      else {
        FUN_0064d8c4();
      }
      local_28 = L'\xffffffff';
    }
    iVar10 = FUN_00654b08(&local_30);
    iVar11 = FUN_00654b08(&local_40);
    if ((iVar10 == -1) != (iVar11 == -1)) {
      wVar12 = FUN_00654b08(&local_30);
      cVar8 = *(char *)(lVar15 + 0x20);
      goto LAB_0065b2d4;
    }
  }
  cVar8 = *(char *)(lVar15 + 0x20);
  bVar2 = true;
  iVar10 = 0;
  bVar6 = false;
joined_r0x0065b6d4:
  if (uVar9 == 0x10) {
    __n = 0x16;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar8 == '\0') goto LAB_0065b3dc;
LAB_0065b6f8:
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
    cVar8 = *(char *)(lVar15 + 0x148);
    uVar21 = 0;
    if (uVar9 != 0) {
      uVar21 = 0xffffffff / uVar9;
    }
    if (cVar8 == '\0') goto LAB_0065b3f4;
LAB_0065b71c:
    local_58 = &local_8;
                    /* catch() { ... } // from try @ 0065b6a8 with catch @ 0065b71c */
    if (!bVar2) {
      uVar20 = 0;
      bVar5 = false;
      wVar7 = local_28;
LAB_0065b730:
      local_28 = wVar7;
      if ((*(char *)(lVar15 + 0x20) == '\0') || (wVar12 != *(wchar_t *)(lVar15 + 0x4c))) {
        if ((wVar12 == *(wchar_t *)(lVar15 + 0x48)) ||
           (pwVar17 = wmemchr((wchar_t *)(lVar15 + 0xf0),wVar12,__n), pwVar17 == (wchar_t *)0x0))
        goto LAB_0065b648;
        uVar14 = (uint)((long)pwVar17 - (lVar15 + 0xf0) >> 2);
        if (0xf < (int)uVar14) {
          uVar14 = uVar14 - 6;
        }
        if (uVar20 <= uVar21) {
          uVar1 = uVar20 * uVar9;
          iVar10 = iVar10 + 1;
                    /* try { // try from 0065b78c to 0075b7bb has its CatchHandler @ 0065b78c
                       catch(type#1 @ 00000000) { ... } // from try @ 0065b78c with catch @ 0065b78c
                       catch(type#1 @ 00000000) { ... } // from try @ 0065b7d4 with catch @ 0065b78c
                       catch(type#1 @ 00000000) { ... } // from try @ 0065b810 with catch @ 0065b78c
                        */
          uVar20 = uVar14 + uVar1;
          bVar5 = (bool)(bVar5 | ~uVar14 < uVar1);
          goto LAB_0065b79c;
        }
        bVar5 = true;
        if (local_30 != (long *)0x0) goto LAB_0065b7a4;
LAB_0065b8b0:
        if (local_40 == (long *)0x0) goto LAB_0065b57c;
        cVar19 = cVar8;
joined_r0x0065b8c8:
        cVar18 = '\0';
        if ((int)local_38 == -1) {
          if ((int *)local_40[2] < (int *)local_40[3]) {
            iVar11 = *(int *)local_40[2];
          }
          else {
            iVar11 = (**(code **)(*local_40 + 0x48))();
          }
          if (iVar11 == -1) {
            local_40 = (long *)0x0;
            cVar18 = cVar8;
          }
          else {
            local_38 = CONCAT44(local_38._4_4_,iVar11);
            cVar18 = '\0';
          }
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065b7bc with catch @ 0065b804
                        */
        if (cVar18 == cVar19) goto LAB_0065b57c;
      }
      else {
        if (iVar10 == 0) {
          bVar3 = true;
          goto LAB_0065b64c;
        }
        FUN_00667890(local_58,iVar10);
        iVar10 = 0;
LAB_0065b79c:
        if (local_30 == (long *)0x0) goto LAB_0065b8b0;
LAB_0065b7a4:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* try { // try from 0065b7bc to 0075b7d3 has its CatchHandler @ 0065b804 */
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065b8b0;
        }
        local_28 = L'\xffffffff';
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
                    /* try { // try from 0065b7d4 to 0075b807 has its CatchHandler @ 0065b78c */
          wVar12 = *(wchar_t *)local_30[2];
        }
        else {
          wVar12 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar12 == L'\xffffffff') {
          local_30 = (long *)0x0;
          goto LAB_0065b8b0;
        }
        cVar19 = '\0';
        local_28 = wVar12;
        if (local_40 != (long *)0x0) {
          goto joined_r0x0065b8c8;
        }
      }
                    /* try { // try from 0065b808 to 0075b80f has its CatchHandler @ 0065b818 */
                    /* try { // try from 0065b810 to 0075b81b has its CatchHandler @ 0065b78c */
      wVar7 = local_28;
      wVar12 = L'\xffffffff';
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065b808 with catch @ 0065b818
                        */
                    /* catch() { ... } // from try @ 0065bb2c with catch @ 0065b81c
                       catch() { ... } // from try @ 0065bfd8 with catch @ 0065b81c */
      if ((local_30 != (long *)0x0) && (wVar12 = local_28, local_28 == L'\xffffffff')) {
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar12 = *(wchar_t *)local_30[2];
        }
        else {
          wVar12 = (**(code **)(*local_30 + 0x48))();
        }
        wVar7 = wVar12;
        if (wVar12 == L'\xffffffff') {
          local_30 = (long *)0x0;
          wVar7 = local_28;
        }
      }
      goto LAB_0065b730;
    }
    uVar20 = 0;
                    /* try { // try from 0065ba5c to 0075ba6b has its CatchHandler @ 0065be64 */
    bVar5 = false;
    bVar3 = false;
  }
  else {
LAB_0065b3bc:
    __n = (ulong)(int)uVar9;
    local_8 = PTR_DAT_007e5de8 + 0x18;
    if (cVar8 != '\0') goto LAB_0065b6f8;
LAB_0065b3dc:
    cVar8 = *(char *)(lVar15 + 0x148);
    uVar21 = 0;
    if (uVar9 != 0) {
      uVar21 = 0xffffffff / uVar9;
    }
    if (cVar8 != '\0') goto LAB_0065b71c;
LAB_0065b3f4:
    uVar20 = 0;
    bVar5 = false;
    if (!bVar2) {
LAB_0065b40c:
      if (10 < __n) goto LAB_0065b4e0;
LAB_0065b414:
      if ((0x2f < (uint)wVar12) && ((uint)wVar12 < (uint)((int)__n + L'0'))) {
        uVar14 = wVar12 + L'\xffffffd0';
LAB_0065b42c:
        if (uVar20 <= uVar21) goto LAB_0065b510;
LAB_0065b434:
        bVar5 = true;
        if (local_30 == (long *)0x0) goto LAB_0065b534;
LAB_0065b440:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065b534;
        }
        local_28 = L'\xffffffff';
        if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
          wVar12 = *(wchar_t *)local_30[2];
        }
        else {
          wVar12 = (**(code **)(*local_30 + 0x48))();
        }
        if (wVar12 == L'\xffffffff') {
          local_30 = (long *)0x0;
          goto LAB_0065b534;
        }
                    /* try { // try from 0065b47c to 0075b487 has its CatchHandler @ 0065b678 */
        iVar11 = 0;
        local_28 = wVar12;
        if (local_40 == (long *)0x0) goto LAB_0065b4a0;
                    /* try { // try from 0065b48c to 0075b507 has its CatchHandler @ 0065b684 */
        iVar13 = 0;
        if ((int)local_38 == -1) goto LAB_0065b550;
LAB_0065b498:
        do {
          if (iVar13 == iVar11) goto LAB_0065b57c;
LAB_0065b4a0:
          while( true ) {
            wVar12 = L'\xffffffff';
            if ((local_30 == (long *)0x0) || (wVar12 = local_28, local_28 != L'\xffffffff'))
            goto LAB_0065b40c;
            if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
              wVar12 = *(wchar_t *)local_30[2];
            }
            else {
              wVar12 = (**(code **)(*local_30 + 0x48))();
            }
            if (wVar12 == L'\xffffffff') {
              local_30 = (long *)0x0;
              goto LAB_0065b40c;
            }
            local_28 = wVar12;
            if (__n < 0xb) goto LAB_0065b414;
LAB_0065b4e0:
            uVar14 = wVar12 + L'\xffffffd0';
            if (uVar14 < 10) goto LAB_0065b42c;
            if ((uint)(wVar12 + L'\xffffff9f') < 6) {
              uVar14 = wVar12 + L'\xffffffa9';
              goto LAB_0065b42c;
            }
            if (5 < (uint)(wVar12 + L'\xffffffbf')) goto LAB_0065b648;
            uVar14 = wVar12 + L'\xffffffc9';
            if (uVar21 < uVar20) goto LAB_0065b434;
LAB_0065b510:
            uVar1 = uVar20 * uVar9;
            iVar10 = iVar10 + 1;
            uVar20 = uVar14 + uVar1;
            bVar5 = (bool)(bVar5 | ~uVar14 < uVar1);
            if (local_30 != (long *)0x0) goto LAB_0065b440;
LAB_0065b534:
            if (local_40 == (long *)0x0) goto LAB_0065b57c;
            iVar11 = 1;
            iVar13 = 0;
                    /* try { // try from 0065b548 to 0075b54b has its CatchHandler @ 0065b608 */
                    /* try { // try from 0065b54c to 0075b6a7 has its CatchHandler @ 0065b390 */
            if ((int)local_38 != -1) goto LAB_0065b498;
LAB_0065b550:
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar13 = *(int *)local_40[2];
            }
            else {
              iVar13 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar13 == -1) break;
            local_38 = CONCAT44(local_38._4_4_,iVar13);
            if (iVar11 == 0) goto LAB_0065b57c;
          }
          local_40 = (long *)0x0;
          iVar13 = 1;
        } while( true );
      }
    }
LAB_0065b648:
    bVar3 = false;
  }
LAB_0065b64c:
  lVar16 = *(long *)(local_8 + -0x18);
joined_r0x0065b58c:
  if (lVar16 == 0) {
    if ((iVar10 == 0) <= bVar6) {
LAB_0065b5d8:
      if (!bVar3) {
        if (bVar5) {
          *param_8 = -1;
          *param_7 = 4;
        }
        else {
          *param_8 = (uVar20 ^ -local_6c) + local_6c;
        }
        goto LAB_0065b5f8;
      }
    }
  }
  else {
    local_58 = &local_8;
    FUN_00667890(local_58,iVar10);
    cVar8 = FUN_0063ca8c(*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(lVar15 + 0x18),local_58);
    if (cVar8 == '\0') {
      *param_7 = 4;
    }
    if (((iVar10 == 0) <= bVar6) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0065b5d8;
  }
  *param_8 = 0;
                    /* catch() { ... } // from try @ 0065b47c with catch @ 0065b678 */
  *param_7 = 4;
LAB_0065b5f8:
  if (bVar2) {
                    /* catch() { ... } // from try @ 0065b548 with catch @ 0065b608 */
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = local_28;
  auVar4._0_8_ = local_30;
  auVar4._12_4_ = uStack_24;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
                    /* try { // try from 0065ba30 to 0075ba3b has its CatchHandler @ 0065bf8c */
    FUN_0064d8e0(local_8 + -0x18,auStack_10);
                    /* try { // try from 0065ba3c to 0075ba4f has its CatchHandler @ 0065bf24 */
  }
  return auVar4;
LAB_0065ba70:
  cVar8 = *(char *)(lVar15 + 0x20);
  bVar2 = false;
  goto joined_r0x0065b6d4;
LAB_0065b57c:
  bVar3 = false;
  bVar2 = true;
  lVar16 = *(long *)(local_8 + -0x18);
  goto joined_r0x0065b58c;
}


