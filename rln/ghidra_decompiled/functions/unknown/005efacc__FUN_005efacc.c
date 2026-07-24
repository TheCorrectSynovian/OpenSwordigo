/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005efacc
 * Function: FUN_005efacc
 * Signature: undefined FUN_005efacc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005efacc(long param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  byte bVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong *local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined2 local_a3;
  ulong local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  ulong local_88;
  int local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined8 local_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (0x13 < *(int *)(param_1 + 0x10) - 0x102U) {
switchD_005efb20_caseD_104:
    plVar22 = *(long **)(param_1 + 0x30);
    FUN_005f1cf4(param_1,&local_80);
    if (local_80 == 0xd) {
      lVar15 = *(long *)(*plVar22 + 0x18);
      *(uint *)(lVar15 + (long)(int)local_78 * 4) =
           *(uint *)(lVar15 + (long)(int)local_78 * 4) & 0xff803fff | 0x4000;
    }
    else {
      local_88 = 0;
      FUN_005f2ccc(param_1,&local_88,1);
    }
    goto LAB_005f0e30;
  }
                    /* try { // try from 005efb0c to 006efb33 has its CatchHandler @ 005efb48 */
  uVar10 = *(undefined4 *)(param_1 + 4);
  switch(*(int *)(param_1 + 0x10)) {
  case 0x102:
    FUN_00600a74(param_1);
    lVar15 = *(long *)(param_1 + 0x30);
    plVar22 = *(long **)(lVar15 + 0x28);
                    /* try { // try from 005efb34 to 006efbc3 has its CatchHandler @ 005ef938 */
    if (plVar22 == (long *)0x0) {
      bVar13 = 0;
    }
    else {
      bVar13 = 0;
      do {
        if (*(char *)((long)plVar22 + 0xe) != '\0') goto LAB_005f071c;
        pbVar1 = (byte *)((long)plVar22 + 0xd);
                    /* catch() { ... } // from try @ 005efb0c with catch @ 005efb48 */
        plVar22 = (long *)*plVar22;
        bVar13 = bVar13 | *pbVar1;
                    /* catch() { ... } // from try @ 005efac4 with catch @ 005efb50 */
      } while (plVar22 != (long *)0x0);
    }
                    /* catch() { ... } // from try @ 005f06b8 with catch @ 005f0714 */
    FUN_00600968(param_1,"no loop to break");
    plVar22 = (long *)0x0;
LAB_005f071c:
                    /* catch() { ... } // from try @ 005f059c with catch @ 005f071c */
    if (bVar13 != 0) {
      FUN_005fdb84(lVar15,0x23,*(undefined1 *)((long)plVar22 + 0xc),0,0);
    }
    uVar10 = FUN_005fdba0(lVar15);
                    /* try { // try from 005f074c to 006f0773 has its CatchHandler @ 005f0790 */
    FUN_005fdc94(lVar15,plVar22 + 1,uVar10);
    uVar11 = 1;
    goto LAB_005f0e34;
  case 0x103:
                    /* try { // try from 005efe80 to 006efe83 has its CatchHandler @ 005efe88 */
    FUN_00600a74(param_1);
                    /* catch() { ... } // from try @ 005efe80 with catch @ 005efe88 */
    FUN_005f0e8c(param_1);
    uVar11 = 0x103;
    break;
  default:
    goto switchD_005efb20_caseD_104;
  case 0x108:
    lVar15 = *(long *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 005efa7c with catch @ 005efb60 */
    local_98 = 0xffffffff;
    local_92 = 1;
    local_94 = *(undefined1 *)(lVar15 + 0x4a);
                    /* catch() { ... } // from try @ 005efa34 with catch @ 005efb70 */
    local_93 = 0;
                    /* catch() { ... } // from try @ 005ef9ec with catch @ 005efb80 */
    local_a0 = *(ulong *)(lVar15 + 0x28);
    *(ulong **)(lVar15 + 0x28) = &local_a0;
    FUN_00600a74(param_1);
                    /* catch() { ... } // from try @ 005ef988 with catch @ 005efb90 */
    if (*(int *)(param_1 + 0x10) != 0x11d) {
      uVar26 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = FUN_0060072c(param_1,0x11d);
      uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
                    /* try { // try from 005efbc4 to 006efd13 has its CatchHandler @ 005efd1c */
      FUN_00600968(param_1,uVar11);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    FUN_00600a74(param_1);
    iVar6 = *(int *)(param_1 + 0x10);
    if ((iVar6 == 0x2c) || (iVar6 == 0x10b)) {
      lVar16 = *(long *)(param_1 + 0x30);
      uVar7 = *(undefined4 *)(lVar16 + 0x3c);
      uVar26 = FUN_00600970(param_1,"(for generator)",0xf);
      FUN_005f21a8(param_1,uVar26,0);
      uVar26 = FUN_00600970(param_1,"(for state)",0xb);
      iVar24 = 1;
      FUN_005f21a8(param_1,uVar26,1);
      uVar26 = FUN_00600970(param_1,"(for control)",0xd);
      FUN_005f21a8(param_1,uVar26,2);
      FUN_005f21a8(param_1,uVar11,3);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 == 0x2c) {
        iVar2 = 4;
        do {
          iVar24 = iVar2;
          FUN_00600a74(param_1);
          if (*(int *)(param_1 + 0x10) != 0x11d) {
            uVar26 = *(undefined8 *)(param_1 + 0x38);
            uVar11 = FUN_0060072c(param_1,0x11d);
            uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
            FUN_00600968(param_1,uVar11);
          }
          uVar11 = *(undefined8 *)(param_1 + 0x18);
          FUN_00600a74(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005f0240 with catch @ 005f0490
                        */
          FUN_005f21a8(param_1,uVar11,iVar24);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005f01d4 with catch @ 005f049c
                        */
          iVar6 = *(int *)(param_1 + 0x10);
          iVar2 = iVar24 + 1;
        } while (iVar6 == 0x2c);
        iVar24 = iVar24 + -2;
      }
      if (iVar6 != 0x10b) {
        uVar26 = *(undefined8 *)(param_1 + 0x38);
                    /* try { // try from 005f04bc to 006f04e3 has its CatchHandler @ 005f04ec */
        uVar11 = FUN_0060072c(param_1,0x10b);
        uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
                    /* try { // try from 005f04e4 to 006f04ef has its CatchHandler @ 005f0114 */
        FUN_00600968(param_1,uVar11);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005f04bc with catch @ 005f04ec
                        */
      FUN_00600a74(param_1);
      uVar9 = *(undefined4 *)(param_1 + 4);
      FUN_005f1154(param_1,&local_88,0);
      iVar6 = 1;
      iVar2 = *(int *)(param_1 + 0x10);
      while (iVar2 == 0x2c) {
        FUN_00600a74(param_1);
        FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),&local_88);
        FUN_005f1154(param_1,&local_88,0);
        iVar6 = iVar6 + 1;
        iVar2 = *(int *)(param_1 + 0x10);
      }
                    /* catch() { ... } // from try @ 005f06e0 with catch @ 005f0554
                       catch() { ... } // from try @ 005f08a0 with catch @ 005f0554 */
      FUN_005f2c18(param_1,3,iVar6,&local_88);
      FUN_005fe030(lVar16,3);
      uVar11 = 0;
LAB_005f0bac:
      FUN_005f28ac(param_1,uVar7,uVar9,iVar24,uVar11);
    }
    else {
      if (iVar6 == 0x3d) {
        lVar16 = *(long *)(param_1 + 0x30);
        uVar7 = *(undefined4 *)(lVar16 + 0x3c);
        uVar26 = FUN_00600970(param_1,"(for index)",0xb);
        FUN_005f21a8(param_1,uVar26,0);
        uVar26 = FUN_00600970(param_1,"(for limit)",0xb);
        FUN_005f21a8(param_1,uVar26,1);
        uVar26 = FUN_00600970(param_1,"(for step)",10);
        FUN_005f21a8(param_1,uVar26,2);
        FUN_005f21a8(param_1,uVar11,3);
        if (*(int *)(param_1 + 0x10) != 0x3d) {
          uVar26 = *(undefined8 *)(param_1 + 0x38);
          uVar11 = FUN_0060072c(param_1,0x3d);
          uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
          FUN_00600968(param_1,uVar11);
        }
        FUN_00600a74(param_1);
        FUN_005f1154(param_1,&local_88,0);
        FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),&local_88);
        if (*(int *)(param_1 + 0x10) != 0x2c) {
          uVar26 = *(undefined8 *)(param_1 + 0x38);
          uVar11 = FUN_0060072c(param_1,0x2c);
          uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
          FUN_00600968(param_1,uVar11);
        }
                    /* try { // try from 005efd14 to 006efd1f has its CatchHandler @ 005ef938 */
        FUN_00600a74(param_1);
                    /* catch() { ... } // from try @ 005efbc4 with catch @ 005efd1c */
                    /* catch() { ... } // from try @ 005efd34 with catch @ 005efd20 */
        FUN_005f1154(param_1,&local_88,0);
                    /* try { // try from 005efd30 to 006efd33 has its CatchHandler @ 005efd44 */
                    /* try { // try from 005efd34 to 006efd57 has its CatchHandler @ 005efd20 */
        FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),&local_88);
        if (*(int *)(param_1 + 0x10) == 0x2c) {
                    /* catch() { ... } // from try @ 005efd30 with catch @ 005efd44 */
          FUN_00600a74(param_1);
          FUN_005f1154(param_1,&local_88,0);
          FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),&local_88);
        }
        else {
          uVar9 = *(undefined4 *)(lVar16 + 0x3c);
                    /* try { // try from 005f0b74 to 006f0bb7 has its CatchHandler @ 005f08ec */
          uVar8 = FUN_005fe2e8(0x3ff0000000000000,lVar16);
          FUN_005fdc7c(lVar16,1,uVar9,uVar8);
          FUN_005fe088(lVar16,1);
        }
        iVar24 = 1;
        uVar11 = 1;
        uVar9 = uVar10;
        goto LAB_005f0bac;
      }
                    /* try { // try from 005f0870 to 006f089f has its CatchHandler @ 005f08a8 */
      FUN_00600968(param_1,"\'=\' or \'in\' expected");
    }
                    /* try { // try from 005f0bb8 to 006f0bcb has its CatchHandler @ 005f2084 */
    FUN_005f1098(param_1,0x106,0x108,uVar10);
    puVar21 = *(undefined8 **)(lVar15 + 0x28);
    *(undefined8 *)(lVar15 + 0x28) = *puVar21;
    plVar22 = *(long **)(*(long *)(lVar15 + 0x18) + 0x30);
    bVar13 = *(byte *)((long)puVar21 + 0xc);
    bVar3 = *(byte *)((long)plVar22 + 0x4a);
    uVar20 = (ulong)bVar3;
                    /* try { // try from 005f0be0 to 006f0c0b has its CatchHandler @ 005f2014 */
    if (bVar13 < bVar3) {
      uVar10 = (undefined4)plVar22[6];
      uVar23 = (bVar3 - 1) - (uint)bVar13;
      lVar16 = *(long *)(*plVar22 + 0x30);
      uVar18 = ((ulong)uVar23 & 0xff) + 1;
      if (1 < uVar18) {
        uVar23 = ~uVar23 & 1;
        lVar19 = uVar18 - uVar23;
        uVar18 = uVar20 - lVar19;
                    /* try { // try from 005f0c24 to 006f0c37 has its CatchHandler @ 005f2010 */
        uVar20 = uVar20 + 0xfe;
        do {
          iVar6 = (int)uVar20;
          uVar4 = *(ushort *)((long)plVar22 + (uVar20 & 0xff) * 2 + 0xc4);
          lVar19 = lVar19 + -2;
                    /* try { // try from 005f0c44 to 006f0c6f has its CatchHandler @ 005f1fd8 */
          uVar20 = uVar20 - 2;
          *(undefined4 *)
           (lVar16 + (ulong)*(ushort *)((long)plVar22 + ((ulong)(iVar6 + 1) & 0xff) * 2 + 0xc4) *
                     0x10 + 0xc) = uVar10;
          *(undefined4 *)(lVar16 + (ulong)uVar4 * 0x10 + 0xc) = uVar10;
        } while (lVar19 != 0);
        uVar20 = uVar18;
        if (uVar23 == 0) goto LAB_005f0dfc;
      }
      do {
        uVar23 = (int)uVar20 - 1;
        *(undefined4 *)
         (lVar16 + (ulong)*(ushort *)((long)plVar22 + (ulong)(byte)uVar23 * 2 + 0xc4) * 0x10 + 0xc)
             = uVar10;
                    /* try { // try from 005f0c80 to 006f0c93 has its CatchHandler @ 005f1fd4 */
        uVar20 = uVar20 - 1;
      } while ((uint)bVar13 < (uVar23 & 0xff));
LAB_005f0dfc:
      *(byte *)((long)plVar22 + 0x4a) = bVar13;
    }
    goto LAB_005f0e00;
  case 0x109:
    FUN_00600a74(param_1);
                    /* try { // try from 005f0060 to 006f0063 has its CatchHandler @ 005f00c0 */
                    /* try { // try from 005f0064 to 006f00df has its CatchHandler @ 005efff4 */
    if (*(int *)(param_1 + 0x10) != 0x11d) {
      uVar26 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = FUN_0060072c(param_1,0x11d);
      uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
      FUN_00600968(param_1,uVar11);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    FUN_00600a74(param_1);
    uVar26 = *(undefined8 *)(param_1 + 0x30);
    iVar6 = FUN_005f2614(uVar26,uVar11,&local_88,1);
                    /* catch() { ... } // from try @ 005f0060 with catch @ 005f00c0 */
    if (iVar6 == 8) {
      local_80 = FUN_005fe100(uVar26,uVar11);
    }
    while (iVar6 = *(int *)(param_1 + 0x10), iVar6 == 0x2e) {
                    /* try { // try from 005f00e0 to 006f0107 has its CatchHandler @ 005f0110 */
      FUN_005f2368(param_1,&local_88);
    }
    if (iVar6 == 0x3a) {
      FUN_005f2368(param_1,&local_88);
                    /* try { // try from 005f0108 to 006f0113 has its CatchHandler @ 005efff4 */
    }
    FUN_005f17e0(param_1,&local_a0,iVar6 == 0x3a,uVar10);
    FUN_005fed28(*(undefined8 *)(param_1 + 0x30),&local_88,&local_a0);
    FUN_006001d0(*(undefined8 *)(param_1 + 0x30),uVar10);
    goto LAB_005f0e30;
  case 0x10a:
    uVar11 = *(undefined8 *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 005f00e0 with catch @ 005f0110 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005f0268 with catch @ 005f0114
                       catch(type#1 @ 00000000) { ... } // from try @ 005f04e4 with catch @ 005f0114
                        */
    local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
    while( true ) {
      FUN_00600a74(param_1);
      FUN_005f1154(param_1,&local_88,0);
      if ((int)local_88 == 1) {
        local_88 = CONCAT44(local_88._4_4_,3);
      }
      FUN_005ff07c(*(undefined8 *)(param_1 + 0x30),&local_88);
      uVar7 = local_78._4_4_;
      if (*(int *)(param_1 + 0x10) != 0x112) {
        uVar25 = *(undefined8 *)(param_1 + 0x38);
        uVar26 = FUN_0060072c(param_1,0x112);
        uVar26 = FUN_005ef3d4(uVar25,"\'%s\' expected",uVar26);
        FUN_00600968(param_1,uVar26);
      }
      FUN_00600a74(param_1);
      FUN_005f0e8c(param_1);
                    /* try { // try from 005f01d4 to 006f01fb has its CatchHandler @ 005f049c */
      if (*(int *)(param_1 + 0x10) != 0x105) break;
      uVar9 = FUN_005fdba0(uVar11);
      FUN_005fdc94(uVar11,&local_a0,uVar9);
      FUN_005fde2c(uVar11,uVar7);
    }
    if (*(int *)(param_1 + 0x10) == 0x104) {
      uVar9 = FUN_005fdba0(uVar11);
      FUN_005fdc94(uVar11,&local_a0,uVar9);
      FUN_005fde2c(uVar11,uVar7);
      FUN_00600a74(param_1);
      FUN_005f0e8c(param_1);
    }
    else {
                    /* try { // try from 005f06b8 to 006f06df has its CatchHandler @ 005f0714 */
      FUN_005fdc94(uVar11,&local_a0,uVar7);
    }
    FUN_005fde2c(uVar11,local_a0 & 0xffffffff);
    uVar11 = 0x10a;
    break;
  case 0x10c:
    FUN_00600a74(param_1);
    if (*(int *)(param_1 + 0x10) != 0x109) {
      uVar20 = 0;
      lVar15 = 1;
      iVar6 = 1;
      uVar23 = 1;
                    /* try { // try from 005f059c to 006f059f has its CatchHandler @ 005f071c */
      if (*(int *)(param_1 + 0x10) == 0x11d) goto LAB_005f05f4;
LAB_005f05a0:
      uVar26 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = FUN_0060072c(param_1,0x11d);
      uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
      FUN_00600968(param_1,uVar11);
                    /* try { // try from 005f05cc to 006f05f3 has its CatchHandler @ 005f07ac */
LAB_005f05f4:
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      FUN_00600a74(param_1);
      FUN_005f21a8(param_1,uVar11,uVar20 & 0xffffffff);
      if (*(int *)(param_1 + 0x10) == 0x2c) goto LAB_005f05d0;
      if (*(int *)(param_1 + 0x10) == 0x3d) {
        FUN_00600a74(param_1);
        FUN_005f1154(param_1,&local_88,0);
        iVar24 = 1;
        iVar2 = *(int *)(param_1 + 0x10);
        while (iVar2 == 0x2c) {
          FUN_00600a74(param_1);
          FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),&local_88);
          FUN_005f1154(param_1,&local_88,0);
          iVar24 = iVar24 + 1;
          iVar2 = *(int *)(param_1 + 0x10);
        }
      }
      else {
        iVar24 = 0;
        local_88 = local_88 & 0xffffffff00000000;
      }
      uVar18 = uVar20 + 1;
      FUN_005f2c18(param_1,uVar18 & 0xffffffff,iVar24,&local_88);
                    /* try { // try from 005f08a0 to 006f08b3 has its CatchHandler @ 005f0554 */
      plVar22 = *(long **)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 005f0870 with catch @ 005f08a8 */
      bVar13 = *(byte *)((long)plVar22 + 0x4a);
                    /* catch() { ... } // from try @ 005f08c8 with catch @ 005f08b4 */
      *(byte *)((long)plVar22 + 0x4a) = bVar13 + (char)uVar20 + '\x01';
      uVar10 = (undefined4)plVar22[6];
      lVar16 = *(long *)(*plVar22 + 0x30);
                    /* try { // try from 005f08c4 to 006f08c7 has its CatchHandler @ 005f08d8 */
      if (uVar18 < 2) {
                    /* try { // try from 005f08c8 to 006f08eb has its CatchHandler @ 005f08b4 */
        lVar19 = (long)(int)uVar18;
LAB_005f0924:
                    /* try { // try from 005f0928 to 006f092b has its CatchHandler @ 005f2108 */
                    /* try { // try from 005f092c to 006f0a27 has its CatchHandler @ 005f08ec */
        iVar6 = -(int)lVar19;
        puVar17 = (ushort *)
                  ((long)plVar22 + (ulong)(byte)(bVar13 + (char)uVar23) * 2 + lVar19 * -2 + 0xc4);
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(lVar16 + (ulong)*puVar17 * 0x10 + 8) = uVar10;
          puVar17 = puVar17 + 1;
        } while (iVar6 != 0);
      }
      else {
                    /* catch() { ... } // from try @ 005f08c4 with catch @ 005f08d8 */
                    /* try { // try from 005f08ec to 006f0927 has its CatchHandler @ 005f08ec
                       catch() { ... } // from try @ 005f08ec with catch @ 005f08ec
                       catch() { ... } // from try @ 005f092c with catch @ 005f08ec
                       catch() { ... } // from try @ 005f0a3c with catch @ 005f08ec
                       catch() { ... } // from try @ 005f0acc with catch @ 005f08ec
                       catch() { ... } // from try @ 005f0b74 with catch @ 005f08ec
                       catch() { ... } // from try @ 005f0d74 with catch @ 005f08ec
                       catch() { ... } // from try @ 005f0eec with catch @ 005f08ec
                       catch() { ... } // from try @ 005f10f0 with catch @ 005f08ec
                       catch() { ... } // from try @ 005f146c with catch @ 005f08ec
                       catch() { ... } // from try @ 005f1c1c with catch @ 005f08ec
                       catch() { ... } // from try @ 005f1e48 with catch @ 005f08ec
                       catch() { ... } // from try @ 005f20c0 with catch @ 005f08ec
                       catch() { ... } // from try @ 005f20fc with catch @ 005f08ec
                       catch() { ... } // from try @ 005f2470 with catch @ 005f08ec
                       catch() { ... } // from try @ 005f250c with catch @ 005f08ec */
        lVar19 = ((ulong)(uVar23 & 1) + (long)iVar6 + -1) - uVar20;
        lVar15 = lVar15 - (ulong)(uVar23 & 1);
        puVar17 = (ushort *)
                  ((long)plVar22 +
                  (((ulong)(bVar13 + uVar23) & 0xff) - (long)(int)uVar18) * 2 + 0xc6);
        do {
          uVar4 = *puVar17;
          lVar15 = lVar15 + -2;
          *(undefined4 *)(lVar16 + (ulong)puVar17[-1] * 0x10 + 8) = uVar10;
          *(undefined4 *)(lVar16 + (ulong)uVar4 * 0x10 + 8) = uVar10;
          puVar17 = puVar17 + 2;
        } while (lVar15 != 0);
        if ((~(uint)uVar20 & 1) != 0) goto LAB_005f0924;
      }
      goto LAB_005f0e30;
    }
    FUN_00600a74(param_1);
    plVar22 = *(long **)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x10) != 0x11d) {
      uVar26 = *(undefined8 *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 005efe54 with catch @ 005efda4 */
      uVar11 = FUN_0060072c(param_1,0x11d);
      uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
                    /* try { // try from 005efdbc to 006efdc3 has its CatchHandler @ 005efe60 */
      FUN_00600968(param_1,uVar11);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    FUN_00600a74(param_1);
    FUN_005f21a8(param_1,uVar11,0);
    local_80 = *(int *)((long)plVar22 + 0x3c);
                    /* try { // try from 005efdf0 to 006efdfb has its CatchHandler @ 005efe08 */
    local_78 = 0xffffffffffffffff;
    local_88 = CONCAT44(local_88._4_4_,6);
    FUN_005fe088(plVar22,1);
                    /* catch() { ... } // from try @ 005efdf0 with catch @ 005efe08 */
    plVar14 = *(long **)(param_1 + 0x30);
    bVar13 = *(char *)((long)plVar14 + 0x4a) + 1;
    *(byte *)((long)plVar14 + 0x4a) = bVar13;
                    /* try { // try from 005efe2c to 006efe53 has its CatchHandler @ 005efe5c */
    *(int *)(*(long *)(*plVar14 + 0x30) +
             (ulong)*(ushort *)((long)plVar14 + (ulong)bVar13 * 2 + 0xc2) * 0x10 + 8) =
         (int)plVar14[6];
    FUN_005f17e0(param_1,&local_a0,0,*(undefined4 *)(param_1 + 4));
                    /* try { // try from 005efe54 to 006efe6f has its CatchHandler @ 005efda4 */
    FUN_005fed28(plVar22,&local_88,&local_a0);
                    /* catch() { ... } // from try @ 005efe2c with catch @ 005efe5c */
                    /* catch() { ... } // from try @ 005efdbc with catch @ 005efe60 */
    uVar11 = 0;
                    /* try { // try from 005efe70 to 006efe7b has its CatchHandler @ 005efe7c */
    *(int *)(*(long *)(*plVar22 + 0x30) +
             (ulong)*(ushort *)((long)plVar22 + (ulong)*(byte *)((long)plVar22 + 0x4a) * 2 + 0xc2) *
             0x10 + 8) = (int)plVar22[6];
                    /* catch() { ... } // from try @ 005efe70 with catch @ 005efe7c */
    goto LAB_005f0e34;
  case 0x110:
    lVar15 = *(long *)(param_1 + 0x30);
    uVar7 = FUN_005fdd58(lVar15);
                    /* catch() { ... } // from try @ 005eff20 with catch @ 005efeb0
                       catch() { ... } // from try @ 005effc4 with catch @ 005efeb0 */
    local_98 = 0xffffffff;
    local_92 = 1;
    local_a4 = *(undefined1 *)(lVar15 + 0x4a);
    local_93 = 0;
    local_a0 = *(ulong *)(lVar15 + 0x28);
    local_a8 = 0xffffffff;
    local_b0 = &local_a0;
    local_a3 = 0;
    *(ulong ***)(lVar15 + 0x28) = &local_b0;
    local_94 = local_a4;
    FUN_00600a74(param_1);
    uVar4 = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + 1;
    *(ushort *)(*(long *)(param_1 + 0x38) + 0x60) = uVar4;
    if (200 < uVar4) {
                    /* try { // try from 005eff1c to 006eff1f has its CatchHandler @ 005eff7c */
                    /* try { // try from 005eff20 to 006eff9b has its CatchHandler @ 005efeb0 */
      FUN_006007a0(param_1,"chunk has too many syntax levels",0);
    }
    do {
      uVar23 = *(int *)(param_1 + 0x10) - 0x104;
      if ((uVar23 < 0x1c) && ((1 << (ulong)(uVar23 & 0x1f) & 0x8010007U) != 0)) break;
      iVar6 = FUN_005efacc(param_1);
      if (*(int *)(param_1 + 0x10) == 0x3b) {
        FUN_00600a74(param_1);
      }
      *(uint *)(*(long *)(param_1 + 0x30) + 0x3c) =
           (uint)*(byte *)(*(long *)(param_1 + 0x30) + 0x4a);
    } while (iVar6 == 0);
                    /* catch() { ... } // from try @ 005eff1c with catch @ 005eff7c */
    *(short *)(*(long *)(param_1 + 0x38) + 0x60) = *(short *)(*(long *)(param_1 + 0x38) + 0x60) + -1
    ;
    FUN_005f1098(param_1,0x114,0x110,uVar10);
                    /* try { // try from 005eff9c to 006effc3 has its CatchHandler @ 005effcc */
    FUN_005f1154(param_1,&local_88,0);
    if ((int)local_88 == 1) {
      local_88 = CONCAT44(local_88._4_4_,3);
    }
                    /* try { // try from 005effc4 to 006effcf has its CatchHandler @ 005efeb0 */
    FUN_005ff07c(*(undefined8 *)(param_1 + 0x30),&local_88);
                    /* catch() { ... } // from try @ 005eff9c with catch @ 005effcc */
    uVar10 = local_78._4_4_;
    if ((char)local_a3 == '\0') {
      puVar21 = *(undefined8 **)(lVar15 + 0x28);
      *(undefined8 *)(lVar15 + 0x28) = *puVar21;
      plVar22 = *(long **)(*(long *)(lVar15 + 0x18) + 0x30);
      bVar13 = *(byte *)((long)puVar21 + 0xc);
      bVar3 = *(byte *)((long)plVar22 + 0x4a);
      uVar20 = (ulong)bVar3;
      if (bVar13 < bVar3) {
        uVar9 = (undefined4)plVar22[6];
        uVar23 = (bVar3 - 1) - (uint)bVar13;
                    /* catch() { ... } // from try @ 005f074c with catch @ 005f0790 */
        lVar16 = *(long *)(*plVar22 + 0x30);
        uVar18 = ((ulong)uVar23 & 0xff) + 1;
        if (uVar18 < 2) {
LAB_005f0cd4:
          do {
            uVar23 = (int)uVar20 - 1;
            *(undefined4 *)
             (lVar16 + (ulong)*(ushort *)((long)plVar22 + (ulong)(byte)uVar23 * 2 + 0xc4) * 0x10 +
             0xc) = uVar9;
            uVar20 = uVar20 - 1;
          } while ((uint)bVar13 < (uVar23 & 0xff));
        }
        else {
          uVar23 = ~uVar23 & 1;
          lVar19 = uVar18 - uVar23;
          uVar18 = uVar20 - lVar19;
          uVar20 = uVar20 + 0xfe;
          do {
            iVar6 = (int)uVar20;
                    /* try { // try from 005f0ca0 to 006f0ccb has its CatchHandler @ 005f1f9c */
            uVar4 = *(ushort *)((long)plVar22 + (uVar20 & 0xff) * 2 + 0xc4);
            lVar19 = lVar19 + -2;
            uVar20 = uVar20 - 2;
            *(undefined4 *)
             (lVar16 + (ulong)*(ushort *)((long)plVar22 + ((ulong)(iVar6 + 1) & 0xff) * 2 + 0xc4) *
                       0x10 + 0xc) = uVar9;
            *(undefined4 *)(lVar16 + (ulong)uVar4 * 0x10 + 0xc) = uVar9;
          } while (lVar19 != 0);
          uVar20 = uVar18;
          if (uVar23 != 0) goto LAB_005f0cd4;
        }
        *(byte *)((long)plVar22 + 0x4a) = bVar13;
      }
      if (*(char *)((long)puVar21 + 0xd) != '\0') {
                    /* try { // try from 005f0d08 to 006f0d13 has its CatchHandler @ 005f1cbc */
        FUN_005fdb84(lVar15,0x23,bVar13,0,0);
      }
      *(uint *)(lVar15 + 0x3c) = (uint)*(byte *)(lVar15 + 0x4a);
      FUN_005fde2c(lVar15,*(undefined4 *)(puVar21 + 1));
      uVar11 = *(undefined8 *)(param_1 + 0x30);
    }
    else {
      lVar16 = *(long *)(param_1 + 0x30);
      plVar22 = *(long **)(lVar16 + 0x28);
      if (plVar22 == (long *)0x0) {
        bVar13 = 0;
      }
      else {
        bVar13 = 0;
        do {
          if (*(char *)((long)plVar22 + 0xe) != '\0') goto LAB_005f0a18;
          pbVar1 = (byte *)((long)plVar22 + 0xd);
                    /* catch() { ... } // from try @ 005f0064 with catch @ 005efff4
                       catch() { ... } // from try @ 005f0108 with catch @ 005efff4 */
          plVar22 = (long *)*plVar22;
          bVar13 = bVar13 | *pbVar1;
        } while (plVar22 != (long *)0x0);
      }
      FUN_00600968(param_1,"no loop to break");
      plVar22 = (long *)0x0;
LAB_005f0a18:
      if (bVar13 != 0) {
                    /* try { // try from 005f0a28 to 006f0a3b has its CatchHandler @ 005f20cc */
        FUN_005fdb84(lVar16,0x23,*(undefined1 *)((long)plVar22 + 0xc),0,0);
      }
                    /* try { // try from 005f0a3c to 006f0ab7 has its CatchHandler @ 005f08ec */
      uVar9 = FUN_005fdba0(lVar16);
      FUN_005fdc94(lVar16,plVar22 + 1,uVar9);
      FUN_005fde2c(*(undefined8 *)(param_1 + 0x30),uVar10);
      puVar21 = *(undefined8 **)(lVar15 + 0x28);
      *(undefined8 *)(lVar15 + 0x28) = *puVar21;
      plVar22 = *(long **)(*(long *)(lVar15 + 0x18) + 0x30);
      bVar13 = *(byte *)((long)puVar21 + 0xc);
      bVar3 = *(byte *)((long)plVar22 + 0x4a);
      uVar20 = (ulong)bVar3;
      if (bVar13 < bVar3) {
        uVar10 = (undefined4)plVar22[6];
        uVar23 = (bVar3 - 1) - (uint)bVar13;
        lVar16 = *(long *)(*plVar22 + 0x30);
        uVar18 = ((ulong)uVar23 & 0xff) + 1;
        if (uVar18 < 2) {
LAB_005f0af8:
          do {
            uVar23 = (int)uVar20 - 1;
            *(undefined4 *)
             (lVar16 + (ulong)*(ushort *)((long)plVar22 + (ulong)(byte)uVar23 * 2 + 0xc4) * 0x10 +
             0xc) = uVar10;
            uVar20 = uVar20 - 1;
          } while ((uint)bVar13 < (uVar23 & 0xff));
        }
        else {
          uVar23 = ~uVar23 & 1;
          lVar19 = uVar18 - uVar23;
                    /* try { // try from 005f0ab8 to 006f0acb has its CatchHandler @ 005f2090 */
          uVar18 = uVar20 - lVar19;
          uVar20 = uVar20 + 0xfe;
          do {
            iVar6 = (int)uVar20;
                    /* try { // try from 005f0acc to 006f0b33 has its CatchHandler @ 005f08ec */
            uVar4 = *(ushort *)((long)plVar22 + (uVar20 & 0xff) * 2 + 0xc4);
            lVar19 = lVar19 + -2;
            uVar20 = uVar20 - 2;
            *(undefined4 *)
             (lVar16 + (ulong)*(ushort *)((long)plVar22 + ((ulong)(iVar6 + 1) & 0xff) * 2 + 0xc4) *
                       0x10 + 0xc) = uVar10;
            *(undefined4 *)(lVar16 + (ulong)uVar4 * 0x10 + 0xc) = uVar10;
          } while (lVar19 != 0);
          uVar20 = uVar18;
          if (uVar23 != 0) goto LAB_005f0af8;
        }
        *(byte *)((long)plVar22 + 0x4a) = bVar13;
      }
      if (*(char *)((long)puVar21 + 0xd) != '\0') {
                    /* try { // try from 005f0b34 to 006f0b73 has its CatchHandler @ 005f1e00 */
        FUN_005fdb84(lVar15,0x23,bVar13,0,0);
      }
      *(uint *)(lVar15 + 0x3c) = (uint)*(byte *)(lVar15 + 0x4a);
      FUN_005fde2c(lVar15,*(undefined4 *)(puVar21 + 1));
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      uVar10 = FUN_005fdba0(lVar15);
    }
    FUN_005fdd68(uVar11,uVar10,uVar7);
    puVar21 = *(undefined8 **)(lVar15 + 0x28);
    *(undefined8 *)(lVar15 + 0x28) = *puVar21;
                    /* try { // try from 005f0d4c to 006f0d73 has its CatchHandler @ 005f2424 */
    plVar22 = *(long **)(*(long *)(lVar15 + 0x18) + 0x30);
    bVar13 = *(byte *)((long)puVar21 + 0xc);
    bVar3 = *(byte *)((long)plVar22 + 0x4a);
    uVar20 = (ulong)bVar3;
    if (bVar13 < bVar3) {
      uVar10 = (undefined4)plVar22[6];
      uVar23 = (bVar3 - 1) - (uint)bVar13;
      lVar16 = *(long *)(*plVar22 + 0x30);
                    /* try { // try from 005f0d74 to 006f0eab has its CatchHandler @ 005f08ec */
      uVar18 = ((ulong)uVar23 & 0xff) + 1;
      if (uVar18 < 2) {
LAB_005f0dd8:
        do {
          uVar23 = (int)uVar20 - 1;
          *(undefined4 *)
           (lVar16 + (ulong)*(ushort *)((long)plVar22 + (ulong)(byte)uVar23 * 2 + 0xc4) * 0x10 + 0xc
           ) = uVar10;
          uVar20 = uVar20 - 1;
        } while ((uint)bVar13 < (uVar23 & 0xff));
      }
      else {
        uVar23 = ~uVar23 & 1;
        lVar19 = uVar18 - uVar23;
        uVar18 = uVar20 - lVar19;
        uVar20 = uVar20 + 0xfe;
        do {
          iVar6 = (int)uVar20;
          uVar4 = *(ushort *)((long)plVar22 + (uVar20 & 0xff) * 2 + 0xc4);
          lVar19 = lVar19 + -2;
          uVar20 = uVar20 - 2;
          *(undefined4 *)
           (lVar16 + (ulong)*(ushort *)((long)plVar22 + ((ulong)(iVar6 + 1) & 0xff) * 2 + 0xc4) *
                     0x10 + 0xc) = uVar10;
          *(undefined4 *)(lVar16 + (ulong)uVar4 * 0x10 + 0xc) = uVar10;
        } while (lVar19 != 0);
        uVar20 = uVar18;
        if (uVar23 != 0) goto LAB_005f0dd8;
      }
      goto LAB_005f0dfc;
    }
LAB_005f0e00:
    if (*(char *)((long)puVar21 + 0xd) != '\0') {
      FUN_005fdb84(lVar15,0x23,bVar13,0,0);
    }
    *(uint *)(lVar15 + 0x3c) = (uint)*(byte *)(lVar15 + 0x4a);
    uVar9 = *(undefined4 *)(puVar21 + 1);
LAB_005f0e2c:
    FUN_005fde2c(lVar15,uVar9);
    goto LAB_005f0e30;
  case 0x111:
    plVar22 = *(long **)(param_1 + 0x30);
    FUN_00600a74(param_1);
    uVar12 = 0;
    uVar23 = *(int *)(param_1 + 0x10) - 0x104;
    if ((uVar23 < 0x1c) && ((1 << (ulong)(uVar23 & 0x1f) & 0x8010007U) != 0)) {
      iVar6 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 005f05cc with catch @ 005f07ac */
      iVar6 = 0;
      if (*(int *)(param_1 + 0x10) != 0x3b) {
        FUN_005f1154(param_1,&local_88,0);
        iVar6 = 1;
        iVar24 = *(int *)(param_1 + 0x10);
        while (iVar24 == 0x2c) {
          FUN_00600a74(param_1);
          FUN_005fe5c0(*(undefined8 *)(param_1 + 0x30),&local_88);
          FUN_005f1154(param_1,&local_88,0);
          iVar6 = iVar6 + 1;
          iVar24 = *(int *)(param_1 + 0x10);
        }
        if ((int)local_88 - 0xdU < 2) {
          FUN_005fe340(plVar22,&local_88,0xffffffff);
          if ((iVar6 == 1) && ((int)local_88 == 0xd)) {
            *(uint *)(*(long *)(*plVar22 + 0x18) + (long)local_80 * 4) =
                 *(uint *)(*(long *)(*plVar22 + 0x18) + (long)local_80 * 4) & 0xffffffc0 | 0x1d;
          }
          uVar12 = (uint)*(byte *)((long)plVar22 + 0x4a);
          iVar6 = -1;
        }
        else if (iVar6 == 1) {
          uVar12 = FUN_005fea48();
        }
        else {
          FUN_005fe5c0(plVar22,&local_88);
          uVar12 = (uint)*(byte *)((long)plVar22 + 0x4a);
        }
      }
    }
    FUN_005fdd3c(plVar22,uVar12,iVar6);
    uVar11 = 1;
    goto LAB_005f0e34;
  case 0x115:
    lVar15 = *(long *)(param_1 + 0x30);
    FUN_00600a74(param_1);
    uVar7 = FUN_005fdd58(lVar15);
    FUN_005f1154(param_1,&local_88,0);
                    /* try { // try from 005f0240 to 006f0267 has its CatchHandler @ 005f0490 */
    if ((int)local_88 == 1) {
      local_88 = CONCAT44(local_88._4_4_,3);
    }
    FUN_005ff07c(*(undefined8 *)(param_1 + 0x30),&local_88);
                    /* try { // try from 005f0268 to 006f04bb has its CatchHandler @ 005f0114 */
    local_80 = -1;
    local_7a = 1;
    local_7c = *(undefined1 *)(lVar15 + 0x4a);
    local_7b = 0;
    uVar9 = local_78._4_4_;
    local_88 = *(ulong *)(lVar15 + 0x28);
    *(ulong **)(lVar15 + 0x28) = &local_88;
    if (*(int *)(param_1 + 0x10) != 0x103) {
      uVar26 = *(undefined8 *)(param_1 + 0x38);
      uVar11 = FUN_0060072c(param_1,0x103);
      uVar11 = FUN_005ef3d4(uVar26,"\'%s\' expected",uVar11);
      FUN_00600968(param_1,uVar11);
    }
    FUN_00600a74(param_1);
    FUN_005f0e8c(param_1);
    uVar8 = FUN_005fdba0(lVar15);
    FUN_005fdd68(lVar15,uVar8,uVar7);
    FUN_005f1098(param_1,0x106,0x115,uVar10);
    puVar21 = *(undefined8 **)(lVar15 + 0x28);
    *(undefined8 *)(lVar15 + 0x28) = *puVar21;
    plVar22 = *(long **)(*(long *)(lVar15 + 0x18) + 0x30);
    bVar13 = *(byte *)((long)puVar21 + 0xc);
    bVar3 = *(byte *)((long)plVar22 + 0x4a);
    uVar20 = (ulong)bVar3;
    if (bVar13 < bVar3) {
      uVar10 = (undefined4)plVar22[6];
      uVar23 = (bVar3 - 1) - (uint)bVar13;
      lVar16 = *(long *)(*plVar22 + 0x30);
      uVar18 = ((ulong)uVar23 & 0xff) + 1;
      if (uVar18 < 2) {
LAB_005f099c:
        do {
          uVar23 = (int)uVar20 - 1;
          *(undefined4 *)
           (lVar16 + (ulong)*(ushort *)((long)plVar22 + (ulong)(byte)uVar23 * 2 + 0xc4) * 0x10 + 0xc
           ) = uVar10;
          uVar20 = uVar20 - 1;
        } while ((uint)bVar13 < (uVar23 & 0xff));
      }
      else {
        uVar23 = ~uVar23 & 1;
        lVar19 = uVar18 - uVar23;
        uVar18 = uVar20 - lVar19;
        uVar20 = uVar20 + 0xfe;
        do {
          iVar6 = (int)uVar20;
          uVar4 = *(ushort *)((long)plVar22 + (uVar20 & 0xff) * 2 + 0xc4);
          lVar19 = lVar19 + -2;
          uVar20 = uVar20 - 2;
          *(undefined4 *)
           (lVar16 + (ulong)*(ushort *)((long)plVar22 + ((ulong)(iVar6 + 1) & 0xff) * 2 + 0xc4) *
                     0x10 + 0xc) = uVar10;
          *(undefined4 *)(lVar16 + (ulong)uVar4 * 0x10 + 0xc) = uVar10;
        } while (lVar19 != 0);
        uVar20 = uVar18;
        if (uVar23 != 0) goto LAB_005f099c;
      }
      *(byte *)((long)plVar22 + 0x4a) = bVar13;
    }
    if (*(char *)((long)puVar21 + 0xd) != '\0') {
      FUN_005fdb84(lVar15,0x23,bVar13,0,0);
    }
    *(uint *)(lVar15 + 0x3c) = (uint)*(byte *)(lVar15 + 0x4a);
    FUN_005fde2c(lVar15,*(undefined4 *)(puVar21 + 1));
    goto LAB_005f0e2c;
  }
                    /* try { // try from 005f06e0 to 006f074b has its CatchHandler @ 005f0554 */
  FUN_005f1098(param_1,0x106,uVar11,uVar10);
LAB_005f0e30:
  uVar11 = 0;
LAB_005f0e34:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
LAB_005f05d0:
  FUN_00600a74(param_1);
  uVar23 = uVar23 + 1;
  iVar6 = iVar6 + 1;
  lVar15 = lVar15 + 1;
  uVar20 = uVar20 + 1;
  if (*(int *)(param_1 + 0x10) != 0x11d) goto LAB_005f05a0;
  goto LAB_005f05f4;
}


