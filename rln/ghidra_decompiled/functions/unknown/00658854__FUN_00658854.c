/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00658854
 * Function: FUN_00658854
 * Signature: undefined FUN_00658854(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00658854(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,undefined4 *param_7,long *param_8)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  wchar_t __c;
  int iVar10;
  wchar_t wVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  wchar_t *pwVar15;
  char cVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  long *local_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined *local_8;
  
  wVar11 = L'\0';
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  local_28 = param_3;
  lVar12 = FUN_00654a24(auStack_18,param_6 + 0xd0);
  iVar8 = FUN_00654b08(&local_30);
  iVar9 = FUN_00654b08(&local_40);
  if ((iVar8 == -1) != (iVar9 == -1)) {
    wVar11 = FUN_00654b08(&local_30);
    bVar5 = wVar11 != *(wchar_t *)(lVar12 + 0xe4);
    if ((bVar5) && (wVar11 != *(wchar_t *)(lVar12 + 0xe0))) {
      cVar6 = *(char *)(lVar12 + 0x20);
      __c = wVar11;
LAB_00659154:
      iVar8 = 0;
      bVar5 = false;
      do {
        if ((cVar6 != '\0') && (*(wchar_t *)(lVar12 + 0x4c) == __c)) {
          bVar1 = false;
          local_8 = PTR_DAT_007e5de8 + 0x18;
          goto LAB_00659090;
        }
        if ((*(wchar_t *)(lVar12 + 0x48) == __c) ||
           (wVar11 = *(wchar_t *)(lVar12 + 0xf0), wVar11 != __c)) {
          bVar1 = false;
          goto LAB_006588e4;
        }
        if (!bVar5) {
          lVar13 = *param_8;
          lVar19 = *(long *)(lVar13 + -0x18);
                    /* catch() { ... } // from try @ 0065927c with catch @ 00659324 */
          uVar18 = lVar19 + 1;
          if ((*(ulong *)(lVar13 + -0x10) < uVar18) || (0 < *(int *)(lVar13 + -8))) {
                    /* try { // try from 00659340 to 00759347 has its CatchHandler @ 0065934c */
                    /* try { // try from 00659348 to 007593cb has its CatchHandler @ 006591a0 */
            FUN_00667088(param_8,uVar18);
                    /* catch() { ... } // from try @ 00659340 with catch @ 0065934c */
            lVar13 = *param_8;
                    /* catch() { ... } // from try @ 006591e4 with catch @ 00659350 */
            lVar19 = *(long *)(lVar13 + -0x18);
          }
          *(undefined1 *)(lVar13 + lVar19) = 0x30;
          lVar13 = *param_8;
          if ((undefined *)(lVar13 + -0x18) != PTR_DAT_007e5de8) {
            *(undefined4 *)(lVar13 + -8) = 0;
            *(ulong *)(lVar13 + -0x18) = uVar18;
            *(undefined1 *)(lVar13 + uVar18) = 0;
          }
        }
        iVar8 = iVar8 + 1;
                    /* catch() { ... } // from try @ 00658fcc with catch @ 0065919c */
        if (local_30 == (long *)0x0) {
LAB_006592d8:
          if (local_40 == (long *)0x0) goto LAB_006592b0;
          iVar10 = 1;
joined_r0x006592f0:
          iVar9 = 0;
          if ((int)local_38 == -1) {
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar9 = *(int *)local_40[2];
            }
            else {
              iVar9 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar9 == -1) {
              local_40 = (long *)0x0;
              iVar9 = 1;
            }
            else {
              local_38 = CONCAT44(local_38._4_4_,iVar9);
              iVar9 = 0;
            }
          }
          if (iVar10 == iVar9) goto LAB_006592b0;
        }
        else {
                    /* try { // try from 006591a0 to 007591cb has its CatchHandler @ 006591a0
                       catch() { ... } // from try @ 006591a0 with catch @ 006591a0
                       catch() { ... } // from try @ 006591f0 with catch @ 006591a0
                       catch() { ... } // from try @ 00659290 with catch @ 006591a0
                       catch() { ... } // from try @ 00659348 with catch @ 006591a0 */
          if ((ulong)local_30[2] < (ulong)local_30[3]) {
            local_28 = CONCAT44(local_28._4_4_,0xffffffff);
            local_30[2] = local_30[2] + 4;
          }
          else {
            (**(code **)(*local_30 + 0x50))();
            local_28 = CONCAT44(local_28._4_4_,0xffffffff);
            if (local_30 == (long *)0x0) goto LAB_006592d8;
          }
          if ((int *)local_30[2] < (int *)local_30[3]) {
                    /* try { // try from 006591cc to 007591df has its CatchHandler @ 006593c0 */
            iVar9 = *(int *)local_30[2];
          }
          else {
            iVar9 = (**(code **)(*local_30 + 0x48))();
          }
          if (iVar9 == -1) {
            local_30 = (long *)0x0;
            goto LAB_006592d8;
          }
          iVar10 = 0;
          local_28 = CONCAT44(local_28._4_4_,iVar9);
                    /* try { // try from 006591e4 to 007591ef has its CatchHandler @ 00659350 */
          if (local_40 != (long *)0x0) {
                    /* try { // try from 006591f0 to 0075927b has its CatchHandler @ 006591a0 */
            goto joined_r0x006592f0;
          }
        }
        bVar5 = true;
        __c = FUN_00654b08(&local_30);
        cVar6 = *(char *)(lVar12 + 0x20);
      } while( true );
    }
    cVar6 = *(char *)(lVar12 + 0x20);
    if ((cVar6 != '\0') && (wVar11 == *(wchar_t *)(lVar12 + 0x4c))) {
      cVar6 = '\x01';
      __c = *(wchar_t *)(lVar12 + 0x4c);
      goto LAB_00659154;
    }
    __c = *(wchar_t *)(lVar12 + 0x48);
    if (wVar11 == *(wchar_t *)(lVar12 + 0x48)) goto LAB_00659154;
    uVar17 = 0x2d;
    if (!bVar5) {
      uVar17 = 0x2b;
    }
    FUN_00667890(param_8,uVar17);
    if (local_30 != (long *)0x0) {
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 4;
      }
      else {
        FUN_0064d8c4();
      }
      local_28 = CONCAT44(local_28._4_4_,0xffffffff);
    }
    iVar8 = FUN_00654b08(&local_30);
                    /* catch() { ... } // from try @ 00658fe4 with catch @ 0065912c */
    iVar9 = FUN_00654b08(&local_40);
    if ((iVar8 == -1) != (iVar9 == -1)) {
      __c = FUN_00654b08(&local_30);
      cVar6 = *(char *)(lVar12 + 0x20);
      goto LAB_00659154;
    }
  }
  cVar6 = *(char *)(lVar12 + 0x20);
  iVar8 = 0;
  bVar5 = false;
  bVar1 = true;
  __c = wVar11;
  goto LAB_006588e4;
LAB_006592b0:
  bVar5 = true;
  cVar6 = *(char *)(lVar12 + 0x20);
  bVar1 = true;
  __c = wVar11;
LAB_006588e4:
  local_8 = PTR_DAT_007e5de8 + 0x18;
  if (cVar6 != '\0') {
LAB_00659090:
    FUN_00667088(&local_8,0x20);
  }
  cVar6 = *(char *)(lVar12 + 0x148);
  if (cVar6 == '\0') {
    if (!bVar1) {
      bVar4 = false;
      bVar1 = false;
LAB_0065890c:
      uVar21 = __c + L'\xffffffd0';
      if (9 < uVar21) goto LAB_00658be0;
LAB_00658918:
      lVar19 = *param_8;
      lVar13 = *(long *)(lVar19 + -0x18);
      uVar18 = lVar13 + 1;
      if ((*(ulong *)(lVar19 + -0x10) < uVar18) || (0 < *(int *)(lVar19 + -8))) {
        FUN_00667088(param_8,uVar18);
        lVar19 = *param_8;
        lVar13 = *(long *)(lVar19 + -0x18);
      }
      *(char *)(lVar19 + lVar13) = (char)uVar21 + '0';
      bVar5 = true;
      lVar13 = *param_8;
      if ((undefined *)(lVar13 + -0x18) != PTR_DAT_007e5de8) goto LAB_00658d30;
LAB_00658970:
      if (local_30 == (long *)0x0) goto LAB_00658d44;
      do {
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
          local_28 = CONCAT44(local_28._4_4_,0xffffffff);
        }
        else {
          (**(code **)(*local_30 + 0x50))();
          local_28 = CONCAT44(local_28._4_4_,0xffffffff);
          if (local_30 == (long *)0x0) goto LAB_00658d44;
        }
        if ((int *)local_30[2] < (int *)local_30[3]) {
          iVar9 = *(int *)local_30[2];
        }
        else {
          iVar9 = (**(code **)(*local_30 + 0x48))();
        }
        if (iVar9 == -1) {
          local_30 = (long *)0x0;
          goto LAB_00658d44;
        }
        iVar10 = 0;
        local_28 = CONCAT44(local_28._4_4_,iVar9);
        if (local_40 == (long *)0x0) goto LAB_00658bc8;
        while( true ) {
          iVar9 = 0;
          if ((int)local_38 == -1) {
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar9 = *(int *)local_40[2];
            }
            else {
              iVar9 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar9 == -1) {
                    /* try { // try from 00658fa4 to 00758fcb has its CatchHandler @ 00658fa4
                       catch() { ... } // from try @ 00658fa4 with catch @ 00658fa4
                       catch() { ... } // from try @ 00658ff0 with catch @ 00658fa4 */
              local_40 = (long *)0x0;
              iVar9 = 1;
            }
            else {
              local_38 = CONCAT44(local_38._4_4_,iVar9);
              iVar9 = 0;
            }
          }
          if (iVar9 == iVar10) goto LAB_006589dc;
LAB_00658bc8:
          __c = FUN_00654b08(&local_30);
          uVar21 = __c + L'\xffffffd0';
          if (uVar21 < 10) goto LAB_00658918;
LAB_00658be0:
          if ((*(wchar_t *)(lVar12 + 0x48) == __c) && (bVar1 < (bVar4 ^ 1U))) {
            FUN_00667890(param_8,0x2e);
            bVar1 = true;
            goto LAB_00658970;
          }
          if (((*(wchar_t *)(lVar12 + 0x128) != __c) && (*(wchar_t *)(lVar12 + 0x140) != __c)) ||
             (bVar5 <= bVar4)) goto LAB_006589dc;
          lVar13 = *param_8;
                    /* catch() { ... } // from try @ 00658c9c with catch @ 00658c10 */
          lVar19 = *(long *)(lVar13 + -0x18);
          uVar18 = lVar19 + 1;
          if ((*(ulong *)(lVar13 + -0x10) < uVar18) || (0 < *(int *)(lVar13 + -8))) {
                    /* try { // try from 00658c38 to 00758c4b has its CatchHandler @ 00658e08 */
            FUN_00667088(param_8,uVar18);
            lVar13 = *param_8;
            lVar19 = *(long *)(lVar13 + -0x18);
          }
          *(undefined1 *)(lVar13 + lVar19) = 0x65;
          lVar13 = *param_8;
                    /* try { // try from 00658c50 to 00758c5b has its CatchHandler @ 00658d98 */
          if ((undefined *)(lVar13 + -0x18) != PTR_DAT_007e5de8) {
            *(undefined4 *)(lVar13 + -8) = 0;
            *(ulong *)(lVar13 + -0x18) = uVar18;
            *(undefined1 *)(lVar13 + uVar18) = 0;
          }
          if (local_30 != (long *)0x0) {
                    /* try { // try from 00658c74 to 00758c87 has its CatchHandler @ 00658d94 */
            if ((ulong)local_30[2] < (ulong)local_30[3]) {
              local_30[2] = local_30[2] + 4;
            }
            else {
              (**(code **)(*local_30 + 0x50))();
            }
            local_28 = CONCAT44(local_28._4_4_,0xffffffff);
          }
                    /* try { // try from 00658c88 to 00758c9b has its CatchHandler @ 00658d5c */
          iVar9 = FUN_00654b08(&local_30);
                    /* try { // try from 00658c9c to 00758e0b has its CatchHandler @ 00658c10 */
          iVar10 = FUN_00654b08(&local_40);
          if ((iVar10 == -1) == (iVar9 == -1)) goto LAB_00659214;
          __c = FUN_00654b08(&local_30);
          if (__c == *(wchar_t *)(lVar12 + 0xe4)) {
                    /* try { // try from 00658e54 to 00758fa3 has its CatchHandler @ 00658e0c */
            uVar20 = 0x2b;
          }
          else {
            bVar4 = true;
            uVar20 = 0x2d;
            if (__c != *(wchar_t *)(lVar12 + 0xe0)) goto LAB_0065890c;
          }
          lVar13 = *param_8;
          lVar19 = *(long *)(lVar13 + -0x18);
          uVar18 = lVar19 + 1;
          if ((*(ulong *)(lVar13 + -0x10) < uVar18) || (0 < *(int *)(lVar13 + -8))) {
            FUN_00667088(param_8,uVar18);
            lVar13 = *param_8;
            lVar19 = *(long *)(lVar13 + -0x18);
          }
          *(undefined1 *)(lVar13 + lVar19) = uVar20;
          bVar4 = true;
          lVar13 = *param_8;
          if ((undefined *)(lVar13 + -0x18) == PTR_DAT_007e5de8) goto LAB_00658970;
LAB_00658d30:
          *(undefined4 *)(lVar13 + -8) = 0;
          *(ulong *)(lVar13 + -0x18) = uVar18;
          *(undefined1 *)(lVar13 + uVar18) = 0;
          if (local_30 != (long *)0x0) break;
LAB_00658d44:
          if (local_40 == (long *)0x0) goto LAB_006589dc;
          iVar10 = 1;
                    /* catch() { ... } // from try @ 00658c88 with catch @ 00658d5c */
        }
      } while( true );
    }
LAB_00659274:
                    /* try { // try from 0065927c to 0075928f has its CatchHandler @ 00659324 */
    puVar14 = local_8;
    if (*(long *)(local_8 + -0x18) != 0) {
LAB_00659280:
      FUN_00667890(&local_8,iVar8);
                    /* try { // try from 00659290 to 0075933f has its CatchHandler @ 006591a0 */
LAB_006589f8:
      puVar14 = local_8;
      cVar6 = FUN_0063ca8c(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),&local_8);
      if (cVar6 == '\0') {
        *param_7 = 4;
      }
    }
LAB_00658a1c:
    puVar14 = puVar14 + -0x18;
    if (puVar14 == PTR_DAT_007e5de8) goto LAB_00658a30;
  }
  else {
    if (bVar1) goto LAB_00659274;
    cVar7 = *(char *)(lVar12 + 0x20);
    bVar4 = false;
    bVar1 = false;
LAB_00658a70:
    if ((cVar7 != '\0') && (__c == *(wchar_t *)(lVar12 + 0x4c))) {
      if ((bVar4 ^ 1U) <= bVar1) goto LAB_00659214;
      if (iVar8 != 0) {
        FUN_00667890(&local_8,iVar8);
        bVar1 = false;
        iVar8 = 0;
LAB_00658b48:
        if (local_30 == (long *)0x0) {
LAB_00658e10:
          if (local_40 == (long *)0x0) goto LAB_006589dc;
          cVar7 = cVar6;
joined_r0x00658e28:
          cVar16 = '\0';
          if ((int)local_38 == -1) {
                    /* try { // try from 00658e30 to 00758e43 has its CatchHandler @ 00658fa0 */
            if ((int *)local_40[2] < (int *)local_40[3]) {
              iVar9 = *(int *)local_40[2];
            }
            else {
              iVar9 = (**(code **)(*local_40 + 0x48))();
            }
            if (iVar9 == -1) {
              local_40 = (long *)0x0;
              cVar16 = cVar6;
            }
            else {
                    /* try { // try from 00658e48 to 00758e53 has its CatchHandler @ 00658f30 */
              local_38 = CONCAT44(local_38._4_4_,iVar9);
              cVar16 = '\0';
            }
          }
          if (cVar7 == cVar16) goto LAB_006589dc;
        }
        else {
LAB_00658b50:
          if ((ulong)local_30[2] < (ulong)local_30[3]) {
            local_30[2] = local_30[2] + 4;
            local_28 = CONCAT44(local_28._4_4_,0xffffffff);
          }
          else {
            (**(code **)(*local_30 + 0x50))();
            local_28 = CONCAT44(local_28._4_4_,0xffffffff);
            if (local_30 == (long *)0x0) goto LAB_00658e10;
          }
          if ((int *)local_30[2] < (int *)local_30[3]) {
            iVar9 = *(int *)local_30[2];
          }
          else {
            iVar9 = (**(code **)(*local_30 + 0x48))();
          }
          if (iVar9 == -1) {
            local_30 = (long *)0x0;
            goto LAB_00658e10;
          }
          cVar7 = '\0';
          local_28 = CONCAT44(local_28._4_4_,iVar9);
          if (local_40 != (long *)0x0) {
            goto joined_r0x00658e28;
          }
        }
        __c = FUN_00654b08(&local_30);
        cVar7 = *(char *)(lVar12 + 0x20);
        goto LAB_00658a70;
      }
      FUN_00668cb8(param_8,0,*(undefined8 *)(*param_8 + -0x18),0);
      bVar1 = false;
                    /* try { // try from 006593f8 to 0075940b has its CatchHandler @ 00659648 */
LAB_006589dc:
      puVar14 = local_8;
      if (*(long *)(local_8 + -0x18) != 0) {
        if ((bVar4 ^ 1U) <= bVar1) goto LAB_006589f8;
        goto LAB_00659280;
      }
      goto LAB_00658a1c;
    }
    if (__c != *(wchar_t *)(lVar12 + 0x48)) {
                    /* catch() { ... } // from try @ 00658c74 with catch @ 00658d94 */
      pwVar15 = wmemchr((wchar_t *)(lVar12 + 0xf0),__c,10);
                    /* catch() { ... } // from try @ 00658c50 with catch @ 00658d98 */
      if (pwVar15 != (wchar_t *)0x0) {
        lVar19 = *param_8;
        lVar13 = *(long *)(lVar19 + -0x18);
        uVar18 = lVar13 + 1;
        if ((*(ulong *)(lVar19 + -0x10) < uVar18) || (0 < *(int *)(lVar19 + -8))) {
          FUN_00667088(param_8,uVar18);
          lVar19 = *param_8;
          lVar13 = *(long *)(lVar19 + -0x18);
        }
        *(char *)(lVar19 + lVar13) = (char)((long)pwVar15 - (lVar12 + 0xf0) >> 2) + '0';
        lVar13 = *param_8;
        if ((undefined *)(lVar13 + -0x18) != PTR_DAT_007e5de8) {
          *(undefined4 *)(lVar13 + -8) = 0;
          *(ulong *)(lVar13 + -0x18) = uVar18;
          *(undefined1 *)(lVar13 + uVar18) = 0;
        }
        iVar8 = iVar8 + 1;
                    /* catch() { ... } // from try @ 00658c38 with catch @ 00658e08 */
        bVar5 = true;
                    /* try { // try from 00658e0c to 00758e2f has its CatchHandler @ 00658e0c
                       catch() { ... } // from try @ 00658e0c with catch @ 00658e0c
                       catch() { ... } // from try @ 00658e54 with catch @ 00658e0c */
        if (local_30 != (long *)0x0) goto LAB_00658b50;
        goto LAB_00658e10;
      }
      if (((__c != *(wchar_t *)(lVar12 + 0x128)) && (__c != *(wchar_t *)(lVar12 + 0x140))) ||
         (bVar5 <= bVar4)) goto LAB_006589dc;
      if ((!bVar1) && (*(long *)(local_8 + -0x18) != 0)) {
        FUN_00667890(&local_8,iVar8);
      }
      FUN_00667890(param_8,0x65);
      if (local_30 != (long *)0x0) {
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 4;
        }
        else {
                    /* catch() { ... } // from try @ 006591cc with catch @ 006593c0 */
          (**(code **)(*local_30 + 0x50))();
                    /* try { // try from 006593cc to 007593f7 has its CatchHandler @ 006593cc
                       catch() { ... } // from try @ 006593cc with catch @ 006593cc
                       catch() { ... } // from try @ 0065941c with catch @ 006593cc
                       catch() { ... } // from try @ 00659510 with catch @ 006593cc
                       catch() { ... } // from try @ 006595d0 with catch @ 006593cc */
        }
        local_28 = CONCAT44(local_28._4_4_,0xffffffff);
      }
      iVar9 = FUN_00654b08(&local_30);
      iVar10 = FUN_00654b08(&local_40);
      if ((iVar10 == -1) == (iVar9 == -1)) goto LAB_00659214;
      __c = FUN_00654b08(&local_30);
      bVar4 = __c == *(wchar_t *)(lVar12 + 0xe4);
                    /* catch() { ... } // from try @ 00658e48 with catch @ 00658f30 */
      if ((bVar4) || (__c == *(wchar_t *)(lVar12 + 0xe0))) {
        cVar7 = *(char *)(lVar12 + 0x20);
        if ((cVar7 == '\0') || (__c != *(wchar_t *)(lVar12 + 0x4c))) {
                    /* try { // try from 00658fcc to 00758fdf has its CatchHandler @ 0065919c */
          if (__c != *(wchar_t *)(lVar12 + 0x48)) {
            uVar17 = 0x2d;
                    /* try { // try from 00658fe4 to 00758fef has its CatchHandler @ 0065912c */
            if (bVar4) {
              uVar17 = 0x2b;
            }
            FUN_00667890(param_8,uVar17);
                    /* try { // try from 00658ff0 to 0075919f has its CatchHandler @ 00658fa4 */
            bVar4 = true;
            goto LAB_00658b48;
          }
          goto LAB_00658f48;
        }
        cVar7 = '\x01';
        bVar4 = true;
      }
      else {
        cVar7 = *(char *)(lVar12 + 0x20);
LAB_00658f48:
        bVar4 = true;
      }
      goto LAB_00658a70;
    }
    if (bVar1 < (bVar4 ^ 1U)) {
      lVar13 = *(long *)(local_8 + -0x18);
      if (lVar13 != 0) {
        uVar18 = lVar13 + 1;
        if ((*(ulong *)(local_8 + -0x10) < uVar18) || (0 < *(int *)(local_8 + -8))) {
          FUN_00667088(&local_8,uVar18);
          lVar13 = *(long *)(local_8 + -0x18);
        }
        local_8[lVar13] = (char)iVar8;
        if (local_8 + -0x18 != PTR_DAT_007e5de8) {
          *(undefined4 *)(local_8 + -8) = 0;
          *(ulong *)(local_8 + -0x18) = uVar18;
          local_8[uVar18] = 0;
        }
      }
      lVar13 = *param_8;
      lVar19 = *(long *)(lVar13 + -0x18);
      uVar18 = lVar19 + 1;
      if ((*(ulong *)(lVar13 + -0x10) < uVar18) || (0 < *(int *)(lVar13 + -8))) {
        FUN_00667088(param_8,uVar18);
        lVar13 = *param_8;
        lVar19 = *(long *)(lVar13 + -0x18);
      }
      *(undefined1 *)(lVar13 + lVar19) = 0x2e;
      bVar1 = true;
      lVar13 = *param_8;
      if ((undefined *)(lVar13 + -0x18) != PTR_DAT_007e5de8) {
        *(undefined4 *)(lVar13 + -8) = 0;
        *(ulong *)(lVar13 + -0x18) = uVar18;
        *(undefined1 *)(lVar13 + uVar18) = 0;
      }
      goto LAB_00658b48;
    }
LAB_00659214:
    if (*(long *)(local_8 + -0x18) != 0) goto LAB_006589f8;
    puVar14 = local_8 + -0x18;
    if (puVar14 == PTR_DAT_007e5de8) goto LAB_00658a30;
  }
  uVar3 = local_28;
  plVar2 = local_30;
  FUN_0064d8e0(puVar14,auStack_10);
  local_30 = plVar2;
  local_28 = uVar3;
LAB_00658a30:
  auVar22._8_8_ = local_28;
  auVar22._0_8_ = local_30;
  return auVar22;
}


