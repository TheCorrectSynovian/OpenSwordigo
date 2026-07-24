/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065c444
 * Function: FUN_0065c444
 * Signature: undefined FUN_0065c444(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_0065c444(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
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
  
                    /* catch() { ... } // from try @ 0065c3bc with catch @ 0065c448 */
                    /* catch() { ... } // from try @ 0065c324 with catch @ 0065c450 */
  local_28 = (wchar_t)param_3;
  uStack_24 = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
                    /* catch() { ... } // from try @ 0065c370 with catch @ 0065c464 */
                    /* catch() { ... } // from try @ 0065c2b4 with catch @ 0065c478 */
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
                    /* try { // try from 0065c4b8 to 0075c4bb has its CatchHandler @ 0065c5c8 */
  iVar11 = FUN_00654b08(&local_30);
  iVar12 = FUN_00654b08(&local_40);
  if ((iVar11 == -1) == (iVar12 == -1)) {
    wVar13 = L'\0';
    bVar9 = false;
  }
  else {
    wVar13 = FUN_00654b08(&local_30);
    bVar9 = wVar13 == *(wchar_t *)(lVar17 + 0xe0);
    if ((!bVar9) && (wVar13 != *(wchar_t *)(lVar17 + 0xe4))) {
      cVar10 = *(char *)(lVar17 + 0x20);
LAB_0065c578:
      iVar11 = 0;
      bVar7 = false;
      do {
        if (((cVar10 != '\0') && (*(wchar_t *)(lVar17 + 0x4c) == wVar13)) ||
           (*(wchar_t *)(lVar17 + 0x48) == wVar13)) {
LAB_0065cd30:
          bVar3 = false;
          goto joined_r0x0065c9a8;
        }
        if (*(wchar_t *)(lVar17 + 0xf0) == wVar13) {
          if ((iVar16 == 10) < bVar7) goto LAB_0065c5b4;
          iVar11 = iVar11 + 1;
          if ((iVar16 == 8) || (bVar7 = true, uVar15 == 0)) {
            iVar11 = 0;
            bVar7 = true;
            iVar16 = 8;
          }
        }
        else {
          if (!bVar7) goto LAB_0065cd30;
LAB_0065c5b4:
                    /* catch() { ... } // from try @ 0065c550 with catch @ 0065c5bc */
                    /* catch() { ... } // from try @ 0065c4b8 with catch @ 0065c5c8 */
          if ((*(wchar_t *)(lVar17 + 0xe8) != wVar13) && (*(wchar_t *)(lVar17 + 0xec) != wVar13)) {
            bVar7 = true;
                    /* catch() { ... } // from try @ 0065c90c with catch @ 0065c9a4 */
            bVar3 = false;
            goto joined_r0x0065c9a8;
          }
          if ((iVar16 != 0x10) && (uVar15 != 0)) {
            bVar3 = false;
            bVar7 = true;
            goto LAB_0065c660;
          }
                    /* catch() { ... } // from try @ 0065c504 with catch @ 0065c5d8 */
          iVar11 = 0;
          bVar7 = false;
          iVar16 = 0x10;
        }
        if (local_30 != (long *)0x0) {
          if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* try { // try from 0065c5fc to 0075c6af has its CatchHandler @ 0065c5fc
                       catch() { ... } // from try @ 0065c5fc with catch @ 0065c5fc
                       catch() { ... } // from try @ 0065c700 with catch @ 0065c5fc
                       catch() { ... } // from try @ 0065c854 with catch @ 0065c5fc
                       catch() { ... } // from try @ 0065c918 with catch @ 0065c5fc
                       catch() { ... } // from try @ 0065c9f0 with catch @ 0065c5fc
                       catch() { ... } // from try @ 0065ca50 with catch @ 0065c5fc
                       catch() { ... } // from try @ 0065caa4 with catch @ 0065c5fc */
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
          goto joined_r0x0065c9a8;
        }
        wVar13 = FUN_00654b08(&local_30);
        if (!bVar7) goto LAB_0065cd8c;
        cVar10 = *(char *)(lVar17 + 0x20);
      } while( true );
    }
    cVar10 = *(char *)(lVar17 + 0x20);
                    /* try { // try from 0065c504 to 0075c52b has its CatchHandler @ 0065c5d8 */
    if ((cVar10 != '\0') && (wVar13 == *(wchar_t *)(lVar17 + 0x4c))) {
      cVar10 = '\x01';
      goto LAB_0065c578;
    }
    if (wVar13 == *(wchar_t *)(lVar17 + 0x48)) goto LAB_0065c578;
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
                    /* try { // try from 0065c550 to 0075c553 has its CatchHandler @ 0065c5bc */
                    /* try { // try from 0065c554 to 0075c5fb has its CatchHandler @ 0065c260 */
    if ((iVar11 == -1) != (iVar12 == -1)) {
      wVar13 = FUN_00654b08(&local_30);
      cVar10 = *(char *)(lVar17 + 0x20);
      goto LAB_0065c578;
    }
  }
  cVar10 = *(char *)(lVar17 + 0x20);
  bVar3 = true;
  iVar11 = 0;
  bVar7 = false;
joined_r0x0065c9a8:
  if (iVar16 == 0x10) {
    uVar24 = 0x16;
  }
  else {
LAB_0065c660:
    uVar24 = (ulong)iVar16;
  }
                    /* try { // try from 0065c9c8 to 0075c9ef has its CatchHandler @ 0065caac */
  local_8 = PTR_DAT_007e5de8 + 0x18;
  if (cVar10 != '\0') {
    local_58 = &local_8;
    FUN_00667088(local_58,0x20);
  }
  local_58 = &local_8;
  uVar25 = (ulong)iVar16;
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
                    /* try { // try from 0065c6b0 to 0075c6ff has its CatchHandler @ 0065ca58 */
    uVar23 = 0;
    bVar6 = false;
    if (!bVar3) {
LAB_0065c6c8:
      if (10 < uVar24) goto LAB_0065c79c;
LAB_0065c6d0:
      if ((0x2f < (uint)wVar13) && ((uint)wVar13 < (uint)((int)uVar24 + L'0'))) {
        uVar15 = wVar13 + L'\xffffffd0';
LAB_0065c6e8:
        if (uVar23 <= uVar2) goto LAB_0065c7cc;
LAB_0065c6f0:
        bVar6 = true;
        if (local_30 == (long *)0x0) goto LAB_0065c7f8;
LAB_0065c6fc:
                    /* try { // try from 0065c700 to 0075c77b has its CatchHandler @ 0065c5fc */
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
                    /* try { // try from 0065cc50 to 0075cc53 has its CatchHandler @ 0065cd90 */
                    /* try { // try from 0065cc54 to 0075cca7 has its CatchHandler @ 0065cab0 */
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065c7f8;
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
          goto LAB_0065c7f8;
        }
        iVar16 = 0;
        local_28 = wVar13;
        if (local_40 == (long *)0x0) goto LAB_0065c75c;
        iVar12 = 0;
        if ((int)local_38 == -1) goto LAB_0065c814;
LAB_0065c754:
        do {
          if (iVar12 == iVar16) goto LAB_0065c840;
LAB_0065c75c:
          while( true ) {
            wVar13 = L'\xffffffff';
            if ((local_30 == (long *)0x0) || (wVar13 = local_28, local_28 != L'\xffffffff'))
            goto LAB_0065c6c8;
                    /* try { // try from 0065c77c to 0075c787 has its CatchHandler @ 0065ca54 */
            if ((wchar_t *)local_30[2] < (wchar_t *)local_30[3]) {
              wVar13 = *(wchar_t *)local_30[2];
            }
            else {
              wVar13 = (**(code **)(*local_30 + 0x48))();
            }
                    /* try { // try from 0065c788 to 0075c793 has its CatchHandler @ 0065c9f4 */
            if (wVar13 == L'\xffffffff') {
              local_30 = (long *)0x0;
              goto LAB_0065c6c8;
            }
                    /* try { // try from 0065c794 to 0075c79f has its CatchHandler @ 0065ca54 */
            local_28 = wVar13;
            if (uVar24 < 0xb) goto LAB_0065c6d0;
LAB_0065c79c:
            uVar15 = wVar13 + L'\xffffffd0';
            if (uVar15 < 10) goto LAB_0065c6e8;
            if ((uint)(wVar13 + L'\xffffff9f') < 6) {
              uVar15 = wVar13 + L'\xffffffa9';
              goto LAB_0065c6e8;
            }
            if (5 < (uint)(wVar13 + L'\xffffffbf')) goto LAB_0065c900;
                    /* try { // try from 0065c7c4 to 0075c853 has its CatchHandler @ 0065ca08 */
            uVar15 = wVar13 + L'\xffffffc9';
            if (uVar2 < uVar23) goto LAB_0065c6f0;
LAB_0065c7cc:
            uVar21 = uVar23 * uVar25;
            iVar11 = iVar11 + 1;
            uVar23 = (long)(int)uVar15 + uVar21;
            bVar6 = (bool)(bVar6 | uVar1 - (long)(int)uVar15 < uVar21);
            if (local_30 != (long *)0x0) goto LAB_0065c6fc;
LAB_0065c7f8:
            if (local_40 == (long *)0x0) goto LAB_0065c840;
            iVar16 = 1;
            iVar12 = 0;
            if ((int)local_38 != -1) goto LAB_0065c754;
LAB_0065c814:
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar12 = *(int *)local_40[2];
            }
            else {
                    /* try { // try from 0065ccac to 0075cdaf has its CatchHandler @ 0065cab0 */
              iVar12 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar12 == -1) break;
            local_38 = CONCAT44(local_38._4_4_,iVar12);
            if (iVar16 == 0) goto LAB_0065c840;
          }
          local_40 = (long *)0x0;
          iVar12 = 1;
        } while( true );
      }
    }
LAB_0065c900:
    bVar4 = false;
  }
  else {
    if (!bVar3) {
      uVar23 = 0;
      bVar6 = false;
      wVar8 = local_28;
LAB_0065c9ec:
      local_28 = wVar8;
                    /* try { // try from 0065c9f0 to 0075ca27 has its CatchHandler @ 0065c5fc */
                    /* catch() { ... } // from try @ 0065c788 with catch @ 0065c9f4 */
      if ((*(char *)(lVar17 + 0x20) == '\0') || (wVar13 != *(wchar_t *)(lVar17 + 0x4c))) {
                    /* catch() { ... } // from try @ 0065c7c4 with catch @ 0065ca08 */
        if ((wVar13 == *(wchar_t *)(lVar17 + 0x48)) ||
           (pwVar19 = wmemchr((wchar_t *)(lVar17 + 0xf0),wVar13,uVar24), pwVar19 == (wchar_t *)0x0))
        goto LAB_0065c900;
                    /* try { // try from 0065ca28 to 0075ca4f has its CatchHandler @ 0065caac */
        iVar16 = (int)((long)pwVar19 - (lVar17 + 0xf0) >> 2);
        if (0xf < iVar16) {
          iVar16 = iVar16 + -6;
        }
        if (uVar23 <= uVar2) {
          uVar21 = uVar23 * uVar25;
          iVar11 = iVar11 + 1;
                    /* try { // try from 0065ca50 to 0075ca7b has its CatchHandler @ 0065c5fc */
                    /* catch() { ... } // from try @ 0065c77c with catch @ 0065ca54
                       catch() { ... } // from try @ 0065c794 with catch @ 0065ca54 */
          uVar23 = (long)iVar16 + uVar21;
                    /* catch() { ... } // from try @ 0065c6b0 with catch @ 0065ca58 */
          bVar6 = (bool)(bVar6 | uVar1 - (long)iVar16 < uVar21);
          goto LAB_0065ca60;
        }
        bVar6 = true;
        if (local_30 != (long *)0x0) goto LAB_0065ca68;
LAB_0065cb70:
        if (local_40 == (long *)0x0) goto LAB_0065c840;
        cVar22 = cVar10;
joined_r0x0065cb88:
        cVar20 = '\0';
                    /* try { // try from 0065cb88 to 0075cb8b has its CatchHandler @ 0065cd9c */
        if ((int)local_38 == -1) {
                    /* try { // try from 0065cb8c to 0075cc4f has its CatchHandler @ 0065cab0 */
          if ((int *)local_40[2] < (int *)local_40[3]) {
            iVar16 = *(int *)local_40[2];
          }
          else {
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
        if (cVar20 == cVar22) goto LAB_0065c840;
      }
      else {
        if (iVar11 == 0) {
          bVar4 = true;
          goto LAB_0065c904;
        }
        lVar18 = *(long *)(local_8 + -0x18);
        uVar21 = lVar18 + 1;
        if ((*(ulong *)(local_8 + -0x10) < uVar21) || (0 < *(int *)(local_8 + -8))) {
          FUN_00667088(local_58,uVar21);
          lVar18 = *(long *)(local_8 + -0x18);
        }
        local_8[lVar18] = (char)iVar11;
        iVar11 = 0;
        if (local_8 + -0x18 != PTR_DAT_007e5de8) {
          *(undefined4 *)(local_8 + -8) = 0;
          *(ulong *)(local_8 + -0x18) = uVar21;
          local_8[uVar21] = 0;
        }
LAB_0065ca60:
        if (local_30 == (long *)0x0) goto LAB_0065cb70;
LAB_0065ca68:
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
                    /* try { // try from 0065ca7c to 0075caa3 has its CatchHandler @ 0065caac */
          local_30[2] = local_30[2] + 4;
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = L'\xffffffff';
          if (local_30 == (long *)0x0) goto LAB_0065cb70;
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
          goto LAB_0065cb70;
        }
                    /* try { // try from 0065caa4 to 0075caaf has its CatchHandler @ 0065c5fc */
        cVar22 = '\0';
                    /* catch() { ... } // from try @ 0065c9c8 with catch @ 0065caac
                       catch() { ... } // from try @ 0065ca28 with catch @ 0065caac
                       catch() { ... } // from try @ 0065ca7c with catch @ 0065caac */
                    /* try { // try from 0065cab0 to 0075cb87 has its CatchHandler @ 0065cab0
                       catch() { ... } // from try @ 0065cab0 with catch @ 0065cab0
                       catch() { ... } // from try @ 0065cb8c with catch @ 0065cab0
                       catch() { ... } // from try @ 0065cc54 with catch @ 0065cab0
                       catch() { ... } // from try @ 0065ccac with catch @ 0065cab0 */
        local_28 = wVar13;
        if (local_40 != (long *)0x0) {
          goto joined_r0x0065cb88;
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
                    /* try { // try from 0065cca8 to 0075ccab has its CatchHandler @ 0065cd8c */
        }
      }
      goto LAB_0065c9ec;
    }
    uVar23 = 0;
    bVar6 = false;
    bVar4 = false;
  }
LAB_0065c904:
  lVar18 = *(long *)(local_8 + -0x18);
                    /* try { // try from 0065c90c to 0075c917 has its CatchHandler @ 0065c9a4 */
joined_r0x0065c850:
  if (lVar18 == 0) {
                    /* try { // try from 0065c918 to 0075c9c7 has its CatchHandler @ 0065c5fc */
    if ((iVar11 == 0) <= bVar7) {
LAB_0065c924:
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
        goto LAB_0065c8b0;
      }
    }
  }
  else {
                    /* try { // try from 0065c854 to 0075c90b has its CatchHandler @ 0065c5fc */
    FUN_00667890(local_58,iVar11);
    cVar10 = FUN_0063ca8c(*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x18),local_58);
    if (cVar10 == '\0') {
      *param_7 = 4;
    }
    if (((iVar11 == 0) <= bVar7) || (*(long *)(local_8 + -0x18) != 0)) goto LAB_0065c924;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_0065c8b0:
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
LAB_0065cd8c:
                    /* catch() { ... } // from try @ 0065cca8 with catch @ 0065cd8c */
  cVar10 = *(char *)(lVar17 + 0x20);
                    /* catch() { ... } // from try @ 0065cc50 with catch @ 0065cd90 */
  bVar3 = false;
  goto joined_r0x0065c9a8;
LAB_0065c840:
  bVar4 = false;
  bVar3 = true;
  lVar18 = *(long *)(local_8 + -0x18);
  goto joined_r0x0065c850;
}


