/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00636618
 * Function: FUN_00636618
 * Signature: undefined FUN_00636618(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00636618(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,undefined4 *param_7,long *param_8)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  void *pvVar16;
  char cVar17;
  uint uVar18;
  undefined4 uVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  undefined1 uVar23;
  undefined1 auVar24 [16];
  long *local_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  undefined *local_8;
  
                    /* try { // try from 00636624 to 00736663 has its CatchHandler @ 0063650c */
  uVar18 = 0;
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_2;
  local_28 = param_3;
  lVar13 = FUN_00632724(auStack_18,param_6 + 0xd0);
                    /* try { // try from 00636664 to 00736673 has its CatchHandler @ 00636914 */
  iVar9 = FUN_00632808(&local_30);
  iVar10 = FUN_00632808(&local_40);
  if ((iVar9 == -1) != (iVar10 == -1)) {
    bVar8 = FUN_00632808(&local_30);
    uVar12 = (uint)bVar8;
    bVar5 = *(byte *)(lVar13 + 0x6f) != bVar8;
    if ((bVar5) && (*(byte *)(lVar13 + 0x6e) != bVar8)) {
      cVar6 = *(char *)(lVar13 + 0x20);
LAB_00636f98:
      iVar9 = 0;
      bVar5 = false;
      do {
        if ((cVar6 != '\0') && (*(byte *)(lVar13 + 0x49) == uVar12)) {
          bVar1 = false;
          local_8 = PTR_DAT_007e5de8 + 0x18;
          goto LAB_00636ed0;
        }
        if ((*(byte *)(lVar13 + 0x48) == uVar12) ||
           (bVar8 = *(byte *)(lVar13 + 0x72), bVar8 != uVar12)) {
          bVar1 = false;
          goto LAB_006366a8;
        }
        if (bVar5) {
LAB_00636fd8:
          if (local_30 == (long *)0x0) goto LAB_00637174;
LAB_00636fe4:
          if ((ulong)local_30[3] <= (ulong)local_30[2]) {
            (**(code **)(*local_30 + 0x50))();
            local_28 = CONCAT44(local_28._4_4_,0xffffffff);
                    /* try { // try from 006371b8 to 007371df has its CatchHandler @ 00638f50 */
            if (local_30 != (long *)0x0) {
              pbVar20 = (byte *)local_30[2];
              if (pbVar20 < (byte *)local_30[3]) goto LAB_00637010;
              goto LAB_006371cc;
            }
            goto LAB_00637174;
          }
          local_30[2] = local_30[2] + 1;
          pbVar20 = (byte *)local_30[2];
          local_28 = CONCAT44(local_28._4_4_,0xffffffff);
          if (pbVar20 < (byte *)local_30[3]) {
LAB_00637010:
            uVar18 = (uint)*pbVar20;
          }
          else {
LAB_006371cc:
            uVar18 = (**(code **)(*local_30 + 0x48))();
            if (uVar18 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_00637174;
            }
          }
          iVar10 = 0;
          local_28 = CONCAT44(local_28._4_4_,uVar18);
          if (local_40 != (long *)0x0) goto LAB_00637024;
        }
        else {
          lVar14 = *param_8;
          lVar22 = *(long *)(lVar14 + -0x18);
          uVar21 = lVar22 + 1;
                    /* try { // try from 0063712c to 0073713f has its CatchHandler @ 0063954c */
          if ((*(ulong *)(lVar14 + -0x10) < uVar21) || (0 < *(int *)(lVar14 + -8))) {
            FUN_00667088(param_8,uVar21);
            lVar14 = *param_8;
            lVar22 = *(long *)(lVar14 + -0x18);
          }
                    /* try { // try from 00637144 to 0073714b has its CatchHandler @ 00639514 */
          *(undefined1 *)(lVar14 + lVar22) = 0x30;
          lVar14 = *param_8;
          if ((undefined *)(lVar14 + -0x18) == PTR_DAT_007e5de8) goto LAB_00636fd8;
                    /* try { // try from 0063715c to 0073716f has its CatchHandler @ 00639510 */
          *(undefined4 *)(lVar14 + -8) = 0;
          *(ulong *)(lVar14 + -0x18) = uVar21;
          *(undefined1 *)(lVar14 + uVar21) = 0;
                    /* try { // try from 00637170 to 0073717f has its CatchHandler @ 006397b8 */
          if (local_30 != (long *)0x0) goto LAB_00636fe4;
LAB_00637174:
          if (local_40 == (long *)0x0) goto LAB_006370dc;
          iVar10 = 1;
LAB_00637024:
          iVar11 = 0;
          if ((int)local_38 == -1) {
            if ((byte *)local_40[2] < (byte *)local_40[3]) {
              uVar18 = (uint)*(byte *)local_40[2];
            }
            else {
              uVar18 = (**(code **)(*local_40 + 0x48))();
              if (uVar18 == 0xffffffff) {
                local_40 = (long *)0x0;
                iVar11 = 1;
                goto LAB_00637034;
              }
            }
            local_38 = CONCAT44(local_38._4_4_,uVar18);
            iVar11 = 0;
          }
LAB_00637034:
          if (iVar11 == iVar10) goto LAB_006370dc;
        }
        iVar9 = iVar9 + 1;
        if (local_30 == (long *)0x0) {
LAB_00637208:
          uVar12 = 0xff;
        }
        else if ((uint)local_28 == 0xffffffff) {
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
            uVar12 = (uint)*(byte *)local_30[2];
          }
          else {
            uVar12 = (**(code **)(*local_30 + 0x48))(local_30);
                    /* try { // try from 00637200 to 00737227 has its CatchHandler @ 006397b8 */
            if (uVar12 == 0xffffffff) {
              local_30 = (long *)0x0;
              goto LAB_00637208;
            }
          }
          local_28 = CONCAT44(local_28._4_4_,uVar12);
          uVar12 = uVar12 & 0xff;
        }
        else {
          uVar12 = (uint)local_28 & 0xff;
        }
        cVar6 = *(char *)(lVar13 + 0x20);
        bVar5 = true;
      } while( true );
    }
    cVar6 = *(char *)(lVar13 + 0x20);
    uVar18 = (uint)bVar8;
    if ((cVar6 != '\0') && (*(byte *)(lVar13 + 0x49) == uVar18)) {
      cVar6 = '\x01';
      goto LAB_00636f98;
    }
    if (*(byte *)(lVar13 + 0x48) == uVar18) goto LAB_00636f98;
    uVar19 = 0x2d;
    if (!bVar5) {
      uVar19 = 0x2b;
    }
    FUN_00667890(param_8,uVar19);
    if (local_30 != (long *)0x0) {
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
      }
      else {
        FUN_0062b4a0();
      }
      local_28 = CONCAT44(local_28._4_4_,0xffffffff);
    }
    iVar9 = FUN_00632808(&local_30);
    iVar10 = FUN_00632808(&local_40);
    if ((iVar9 == -1) != (iVar10 == -1)) {
      uVar12 = FUN_00632808(&local_30);
      uVar12 = uVar12 & 0xff;
      cVar6 = *(char *)(lVar13 + 0x20);
      goto LAB_00636f98;
    }
  }
  cVar6 = *(char *)(lVar13 + 0x20);
  iVar9 = 0;
                    /* try { // try from 0063669c to 007366af has its CatchHandler @ 00636944 */
  bVar5 = false;
  bVar1 = true;
  uVar12 = uVar18;
  goto LAB_006366a8;
code_r0x00636a34:
  bVar4 = true;
  uVar23 = 0x2d;
  if (*(byte *)(lVar13 + 0x6e) != uVar12) goto LAB_006366d0;
LAB_00636a48:
  lVar14 = *param_8;
  lVar22 = *(long *)(lVar14 + -0x18);
                    /* try { // try from 00636a54 to 00736aa3 has its CatchHandler @ 00636a54
                       catch(type#1 @ 00000000) { ... } // from try @ 00636a54 with catch @ 00636a54
                       catch(type#1 @ 00000000) { ... } // from try @ 00636aac with catch @ 00636a54
                       catch(type#1 @ 00000000) { ... } // from try @ 00636b84 with catch @ 00636a54
                        */
  uVar21 = lVar22 + 1;
  if ((*(ulong *)(lVar14 + -0x10) < uVar21) || (0 < *(int *)(lVar14 + -8))) {
    FUN_00667088(param_8,uVar21);
    lVar14 = *param_8;
    lVar22 = *(long *)(lVar14 + -0x18);
  }
  *(undefined1 *)(lVar14 + lVar22) = uVar23;
  bVar4 = true;
  lVar14 = *param_8;
  if ((undefined *)(lVar14 + -0x18) == PTR_DAT_007e5de8) {
LAB_00636738:
    if (local_30 != (long *)0x0) goto LAB_00636740;
LAB_00636ab0:
    if (local_40 == (long *)0x0) goto LAB_0063679c;
    iVar10 = 1;
  }
  else {
LAB_00636a9c:
    *(undefined4 *)(lVar14 + -8) = 0;
    *(ulong *)(lVar14 + -0x18) = uVar21;
                    /* try { // try from 00636aa4 to 00736aab has its CatchHandler @ 00636b38 */
    *(undefined1 *)(lVar14 + uVar21) = 0;
                    /* try { // try from 00636aac to 00736b5b has its CatchHandler @ 00636a54 */
    if (local_30 == (long *)0x0) goto LAB_00636ab0;
LAB_00636740:
    if ((ulong)local_30[3] <= (ulong)local_30[2]) {
      (**(code **)(*local_30 + 0x50))();
      local_28 = CONCAT44(local_28._4_4_,0xffffffff);
      if (local_30 != (long *)0x0) {
        pbVar20 = (byte *)local_30[2];
                    /* try { // try from 00636df4 to 00736e93 has its CatchHandler @ 00636b90 */
        if (pbVar20 < (byte *)local_30[3]) goto LAB_00636770;
        goto LAB_00636e00;
      }
      goto LAB_00636ab0;
    }
                    /* try { // try from 00636750 to 00736763 has its CatchHandler @ 006368c0 */
    local_30[2] = local_30[2] + 1;
    local_28 = CONCAT44(local_28._4_4_,0xffffffff);
    pbVar20 = (byte *)local_30[2];
                    /* try { // try from 0063676c to 0073677f has its CatchHandler @ 00636860 */
    if (pbVar20 < (byte *)local_30[3]) {
LAB_00636770:
      uVar18 = (uint)*pbVar20;
    }
    else {
LAB_00636e00:
                    /* catch() { ... } // from try @ 00636dcc with catch @ 00636e08 */
      uVar18 = (**(code **)(*local_30 + 0x48))();
                    /* catch() { ... } // from try @ 00636d84 with catch @ 00636e10 */
      if (uVar18 == 0xffffffff) {
        local_30 = (long *)0x0;
        goto LAB_00636ab0;
      }
    }
    iVar10 = 0;
    local_28 = CONCAT44(local_28._4_4_,uVar18);
    if (local_40 == (long *)0x0) goto LAB_00636af0;
                    /* try { // try from 00636784 to 00736797 has its CatchHandler @ 00636870 */
  }
  iVar11 = 0;
  if ((int)local_38 == -1) {
    if ((byte *)local_40[2] < (byte *)local_40[3]) {
      uVar18 = (uint)*(byte *)local_40[2];
    }
    else {
                    /* try { // try from 00636e94 to 00737073 has its CatchHandler @ 0063707c */
      uVar18 = (**(code **)(*local_40 + 0x48))();
      if (uVar18 == 0xffffffff) {
        local_40 = (long *)0x0;
        iVar11 = 1;
        goto LAB_00636794;
      }
    }
    local_38 = CONCAT44(local_38._4_4_,uVar18);
    if (iVar10 == 0) goto LAB_0063679c;
  }
  else {
LAB_00636794:
    if (iVar11 == iVar10) goto LAB_0063679c;
  }
LAB_00636af0:
  uVar12 = FUN_00632808(&local_30);
  uVar12 = uVar12 & 0xff;
  goto LAB_006366d0;
LAB_006370dc:
  iVar9 = iVar9 + 1;
  bVar5 = true;
  cVar6 = *(char *)(lVar13 + 0x20);
  bVar1 = true;
  uVar12 = (uint)bVar8;
LAB_006366a8:
  local_8 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 006366b0 to 0073674f has its CatchHandler @ 0063650c */
  if (cVar6 != '\0') {
LAB_00636ed0:
    FUN_00667088(&local_8,0x20);
  }
  cVar6 = *(char *)(lVar13 + 0x88);
  if (cVar6 == '\0') {
    if (bVar1) {
LAB_006370a4:
                    /* catch() { ... } // from try @ 00637090 with catch @ 006370a4 */
      puVar15 = local_8;
      if (*(long *)(local_8 + -0x18) != 0) {
LAB_006370b0:
                    /* try { // try from 006370b8 to 0073712b has its CatchHandler @ 006370b8
                       catch() { ... } // from try @ 006370b8 with catch @ 006370b8
                       catch() { ... } // from try @ 00638878 with catch @ 006370b8
                       catch() { ... } // from try @ 00639cac with catch @ 006370b8 */
        FUN_00667890(&local_8,iVar9);
        goto LAB_006367b8;
      }
      goto LAB_006367dc;
    }
    bVar4 = false;
    bVar1 = false;
LAB_006366d0:
    if ((uVar12 - 0x30 & 0xff) < 10) {
      lVar22 = *param_8;
      lVar14 = *(long *)(lVar22 + -0x18);
      uVar21 = lVar14 + 1;
      if ((*(ulong *)(lVar22 + -0x10) < uVar21) || (0 < *(int *)(lVar22 + -8))) {
        FUN_00667088(param_8,uVar21);
        lVar22 = *param_8;
        lVar14 = *(long *)(lVar22 + -0x18);
      }
      *(char *)(lVar22 + lVar14) = (char)(uVar12 - 0x30) + '0';
      bVar5 = true;
      lVar14 = *param_8;
      if ((undefined *)(lVar14 + -0x18) == PTR_DAT_007e5de8) goto LAB_00636738;
      goto LAB_00636a9c;
    }
    if ((*(byte *)(lVar13 + 0x48) == uVar12) && (bVar1 < (bVar4 ^ 1U))) {
                    /* try { // try from 00636d3c to 00736d63 has its CatchHandler @ 00636e20 */
      FUN_00667890(param_8,0x2e);
      bVar1 = true;
      goto LAB_00636738;
    }
                    /* catch() { ... } // from try @ 006365d8 with catch @ 00636974 */
    if (((*(byte *)(lVar13 + 0x80) != uVar12) && (*(byte *)(lVar13 + 0x86) != uVar12)) ||
       (bVar5 <= bVar4)) goto LAB_0063679c;
    lVar14 = *param_8;
    lVar22 = *(long *)(lVar14 + -0x18);
    uVar21 = lVar22 + 1;
    if ((*(ulong *)(lVar14 + -0x10) < uVar21) || (0 < *(int *)(lVar14 + -8))) {
                    /* catch() { ... } // from try @ 00636610 with catch @ 006369a4 */
      FUN_00667088(param_8,uVar21);
      lVar14 = *param_8;
      lVar22 = *(long *)(lVar14 + -0x18);
    }
    *(undefined1 *)(lVar14 + lVar22) = 0x65;
    lVar14 = *param_8;
    if ((undefined *)(lVar14 + -0x18) != PTR_DAT_007e5de8) {
      *(undefined4 *)(lVar14 + -8) = 0;
      *(ulong *)(lVar14 + -0x18) = uVar21;
      *(undefined1 *)(lVar14 + uVar21) = 0;
                    /* catch() { ... } // from try @ 00636c1c with catch @ 00636e60 */
    }
    if (local_30 != (long *)0x0) {
      if ((ulong)local_30[2] < (ulong)local_30[3]) {
        local_30[2] = local_30[2] + 1;
      }
      else {
        (**(code **)(*local_30 + 0x50))();
                    /* catch() { ... } // from try @ 00636bd4 with catch @ 00636e70 */
      }
      local_28 = CONCAT44(local_28._4_4_,0xffffffff);
    }
    iVar10 = FUN_00632808(&local_30);
    iVar11 = FUN_00632808(&local_40);
    if ((iVar11 == -1) != (iVar10 == -1)) {
      uVar12 = FUN_00632808(&local_30);
      uVar12 = uVar12 & 0xff;
      if (*(byte *)(lVar13 + 0x6f) != uVar12) goto code_r0x00636a34;
      uVar23 = 0x2b;
      goto LAB_00636a48;
    }
LAB_00637060:
    if (*(long *)(local_8 + -0x18) != 0) {
LAB_006367b8:
      puVar15 = local_8;
                    /* try { // try from 006367b8 to 007367df has its CatchHandler @ 00636860 */
      cVar6 = FUN_0063ca8c(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18),&local_8);
      if (cVar6 == '\0') {
        *param_7 = 4;
      }
      goto LAB_006367dc;
    }
    puVar15 = local_8 + -0x18;
                    /* try { // try from 00637074 to 0073707f has its CatchHandler @ 00636b90 */
                    /* catch() { ... } // from try @ 00636e94 with catch @ 0063707c */
    if (puVar15 == PTR_DAT_007e5de8) goto LAB_006367f0;
  }
  else {
    if (bVar1) goto LAB_006370a4;
    cVar7 = *(char *)(lVar13 + 0x20);
    bVar4 = false;
    bVar1 = false;
LAB_00636830:
    if (cVar7 == '\0') goto LAB_00636840;
    while (*(byte *)(lVar13 + 0x49) != uVar12) {
LAB_00636840:
      if (*(byte *)(lVar13 + 0x48) == uVar12) {
        if ((bVar4 ^ 1U) <= bVar1) goto LAB_00637060;
        if (*(long *)(local_8 + -0x18) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00636aa4 with catch @ 00636b38
                        */
          FUN_00667890(&local_8,iVar9);
        }
        lVar14 = *param_8;
        lVar22 = *(long *)(lVar14 + -0x18);
        uVar21 = lVar22 + 1;
                    /* try { // try from 00636b5c to 00736b83 has its CatchHandler @ 00636b8c */
        if ((*(ulong *)(lVar14 + -0x10) < uVar21) || (0 < *(int *)(lVar14 + -8))) {
          FUN_00667088(param_8,uVar21);
          lVar14 = *param_8;
          lVar22 = *(long *)(lVar14 + -0x18);
        }
        *(undefined1 *)(lVar14 + lVar22) = 0x2e;
                    /* try { // try from 00636b84 to 00736b8f has its CatchHandler @ 00636a54 */
        bVar1 = true;
        lVar14 = *param_8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00636b5c with catch @ 00636b8c
                        */
                    /* catch() { ... } // from try @ 00636df4 with catch @ 00636b90
                       catch() { ... } // from try @ 00637074 with catch @ 00636b90 */
        if ((undefined *)(lVar14 + -0x18) != PTR_DAT_007e5de8) {
          *(undefined4 *)(lVar14 + -8) = 0;
          *(ulong *)(lVar14 + -0x18) = uVar21;
          *(undefined1 *)(lVar14 + uVar21) = 0;
        }
        goto joined_r0x00636bac;
      }
      pvVar16 = memchr((void *)(lVar13 + 0x72),uVar12,10);
      if (pvVar16 != (void *)0x0) {
                    /* catch() { ... } // from try @ 0063676c with catch @ 00636860
                       catch() { ... } // from try @ 006367b8 with catch @ 00636860 */
        lVar22 = *param_8;
                    /* catch() { ... } // from try @ 00636784 with catch @ 00636870 */
        lVar14 = *(long *)(lVar22 + -0x18);
        uVar21 = lVar14 + 1;
        if ((*(ulong *)(lVar22 + -0x10) < uVar21) || (0 < *(int *)(lVar22 + -8))) {
                    /* try { // try from 00636894 to 0073690b has its CatchHandler @ 00636910 */
          FUN_00667088(param_8,uVar21);
          lVar22 = *param_8;
          lVar14 = *(long *)(lVar22 + -0x18);
        }
        *(char *)(lVar22 + lVar14) = ((char)pvVar16 - (char)(void *)(lVar13 + 0x72)) + '0';
        lVar14 = *param_8;
        if ((undefined *)(lVar14 + -0x18) != PTR_DAT_007e5de8) {
          *(undefined4 *)(lVar14 + -8) = 0;
          *(ulong *)(lVar14 + -0x18) = uVar21;
          *(undefined1 *)(lVar14 + uVar21) = 0;
                    /* catch() { ... } // from try @ 00636c64 with catch @ 00636e50 */
        }
                    /* catch() { ... } // from try @ 00636750 with catch @ 006368c0 */
        iVar9 = iVar9 + 1;
        bVar5 = true;
        goto joined_r0x00636bac;
      }
                    /* try { // try from 00636bd4 to 00736bfb has its CatchHandler @ 00636e70 */
      if (((*(byte *)(lVar13 + 0x80) != uVar12) && (*(byte *)(lVar13 + 0x86) != uVar12)) ||
         (bVar5 <= bVar4)) goto LAB_0063679c;
      if ((!bVar1) && (*(long *)(local_8 + -0x18) != 0)) {
        FUN_00667890(&local_8,iVar9);
      }
      lVar14 = *param_8;
      lVar22 = *(long *)(lVar14 + -0x18);
      uVar21 = lVar22 + 1;
                    /* try { // try from 00636c1c to 00736c43 has its CatchHandler @ 00636e60 */
      if ((*(ulong *)(lVar14 + -0x10) < uVar21) || (0 < *(int *)(lVar14 + -8))) {
        FUN_00667088(param_8,uVar21);
        lVar14 = *param_8;
        lVar22 = *(long *)(lVar14 + -0x18);
      }
      *(undefined1 *)(lVar14 + lVar22) = 0x65;
      lVar14 = *param_8;
      if ((undefined *)(lVar14 + -0x18) != PTR_DAT_007e5de8) {
        *(undefined4 *)(lVar14 + -8) = 0;
                    /* try { // try from 00637090 to 00737093 has its CatchHandler @ 006370a4 */
        *(ulong *)(lVar14 + -0x18) = uVar21;
                    /* try { // try from 00637094 to 007370b7 has its CatchHandler @ 00637080 */
        *(undefined1 *)(lVar14 + uVar21) = 0;
      }
      if (local_30 != (long *)0x0) {
                    /* try { // try from 00636c64 to 00736c8b has its CatchHandler @ 00636e50 */
        if ((ulong)local_30[2] < (ulong)local_30[3]) {
          local_30[2] = local_30[2] + 1;
        }
        else {
          FUN_0062b4a0();
        }
        local_28 = CONCAT44(local_28._4_4_,0xffffffff);
      }
      iVar10 = FUN_00632808(&local_30);
      iVar11 = FUN_00632808(&local_40);
      if ((iVar11 == -1) == (iVar10 == -1)) goto LAB_00637060;
                    /* try { // try from 00636cac to 00736cd3 has its CatchHandler @ 00636e40 */
      uVar12 = FUN_00632808(&local_30);
      uVar12 = uVar12 & 0xff;
      bVar4 = *(byte *)(lVar13 + 0x6f) != uVar12;
      if ((bVar4) && (*(byte *)(lVar13 + 0x6e) != uVar12)) {
        cVar7 = *(char *)(lVar13 + 0x20);
        bVar4 = true;
        goto LAB_00636830;
      }
      cVar7 = *(char *)(lVar13 + 0x20);
      if ((cVar7 == '\0') || (*(byte *)(lVar13 + 0x49) != uVar12)) {
        if (*(byte *)(lVar13 + 0x48) == uVar12) {
          bVar4 = true;
          goto LAB_00636830;
        }
        uVar19 = 0x2d;
        if (!bVar4) {
          uVar19 = 0x2b;
        }
        FUN_00667890(param_8,uVar19);
        bVar4 = true;
                    /* try { // try from 00636d84 to 00736dab has its CatchHandler @ 00636e10 */
        goto joined_r0x00636bac;
      }
      bVar4 = true;
    }
    if ((bVar4 ^ 1U) <= bVar1) goto LAB_00637060;
    if (iVar9 != 0) {
      FUN_00667890(&local_8,iVar9);
      bVar1 = false;
      iVar9 = 0;
joined_r0x00636bac:
      if (local_30 == (long *)0x0) {
LAB_00636bb0:
        cVar7 = cVar6;
        if (local_40 == (long *)0x0) goto LAB_0063679c;
LAB_00636914:
                    /* catch() { ... } // from try @ 00636664 with catch @ 00636914 */
        cVar17 = '\0';
        if ((int)local_38 == -1) {
          if ((byte *)local_40[2] < (byte *)local_40[3]) {
            uVar18 = (uint)*(byte *)local_40[2];
          }
          else {
            uVar18 = (**(code **)(*local_40 + 0x48))();
            if (uVar18 == 0xffffffff) {
              local_40 = (long *)0x0;
              cVar17 = cVar6;
              goto LAB_00636924;
            }
          }
          local_38 = CONCAT44(local_38._4_4_,uVar18);
          cVar17 = '\0';
        }
LAB_00636924:
        if (cVar17 == cVar7) goto LAB_0063679c;
      }
      else {
        if ((ulong)local_30[3] <= (ulong)local_30[2]) {
          (**(code **)(*local_30 + 0x50))();
          local_28 = CONCAT44(local_28._4_4_,0xffffffff);
          if (local_30 != (long *)0x0) {
            pbVar20 = (byte *)local_30[2];
            if (pbVar20 < (byte *)local_30[3]) goto LAB_00636900;
            goto LAB_00636db4;
          }
          goto LAB_00636bb0;
        }
        local_30[2] = local_30[2] + 1;
        local_28._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
        local_28 = CONCAT44(local_28._4_4_,0xffffffff);
        pbVar20 = (byte *)local_30[2];
        if (pbVar20 < (byte *)local_30[3]) {
LAB_00636900:
          uVar18 = (uint)*pbVar20;
        }
        else {
LAB_00636db4:
          uVar18 = (**(code **)(*local_30 + 0x48))();
          if (uVar18 == 0xffffffff) {
                    /* try { // try from 00636dcc to 00736df3 has its CatchHandler @ 00636e08 */
            local_30 = (long *)0x0;
            goto LAB_00636bb0;
          }
        }
                    /* try { // try from 0063690c to 00736a07 has its CatchHandler @ 0063650c */
        local_28 = CONCAT44(local_28._4_4_,uVar18);
                    /* catch() { ... } // from try @ 00636894 with catch @ 00636910 */
        cVar7 = '\0';
        if (local_40 != (long *)0x0) goto LAB_00636914;
      }
      if (local_30 == (long *)0x0) {
LAB_00636e38:
        uVar12 = 0xff;
        cVar7 = *(char *)(lVar13 + 0x20);
                    /* catch() { ... } // from try @ 00636cac with catch @ 00636e40 */
      }
      else if ((uint)local_28 == 0xffffffff) {
        if ((byte *)local_30[2] < (byte *)local_30[3]) {
          uVar12 = (uint)*(byte *)local_30[2];
        }
        else {
                    /* catch() { ... } // from try @ 00636d3c with catch @ 00636e20 */
          uVar12 = (**(code **)(*local_30 + 0x48))();
                    /* catch() { ... } // from try @ 00636cf4 with catch @ 00636e30 */
          if (uVar12 == 0xffffffff) {
            local_30 = (long *)0x0;
            goto LAB_00636e38;
          }
        }
        local_28 = CONCAT44(local_28._4_4_,uVar12);
                    /* try { // try from 00636cf4 to 00736d1b has its CatchHandler @ 00636e30 */
        uVar12 = uVar12 & 0xff;
        cVar7 = *(char *)(lVar13 + 0x20);
      }
      else {
        uVar12 = (uint)local_28 & 0xff;
                    /* catch() { ... } // from try @ 0063669c with catch @ 00636944 */
        cVar7 = *(char *)(lVar13 + 0x20);
      }
      goto LAB_00636830;
    }
    FUN_00668cb8(param_8,0,*(undefined8 *)(*param_8 + -0x18),0);
    bVar1 = false;
LAB_0063679c:
    puVar15 = local_8;
    if (*(long *)(local_8 + -0x18) != 0) {
      if ((bVar4 ^ 1U) <= bVar1) goto LAB_006367b8;
      goto LAB_006370b0;
    }
LAB_006367dc:
                    /* try { // try from 006367e0 to 00736893 has its CatchHandler @ 0063650c */
    puVar15 = puVar15 + -0x18;
    if (puVar15 == PTR_DAT_007e5de8) goto LAB_006367f0;
  }
                    /* catch() { ... } // from try @ 00637094 with catch @ 00637080 */
  uVar3 = local_28;
  plVar2 = local_30;
  FUN_0062b45c(puVar15,auStack_10);
  local_30 = plVar2;
  local_28 = uVar3;
LAB_006367f0:
  auVar24._8_8_ = local_28;
  auVar24._0_8_ = local_30;
  return auVar24;
}


