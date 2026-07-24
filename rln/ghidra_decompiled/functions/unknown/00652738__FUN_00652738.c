/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00652738
 * Function: FUN_00652738
 * Signature: undefined FUN_00652738(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00652738(undefined8 param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
            undefined8 *param_6)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined4 *local_40;
  undefined4 local_18 [2];
  undefined *local_10;
  undefined *local_8;
  
  uVar15 = param_3 & 0xff;
  plVar7 = (long *)FUN_0064f6ac(param_4 + 0xd0);
  lVar8 = FUN_0063c4d0(&DAT_007fd2c8);
  lVar16 = *(long *)(*(long *)(param_4 + 0xd0) + 0x18);
  lVar12 = *(long *)(lVar16 + lVar8 * 8);
  if (lVar12 == 0) {
                    /* catch() { ... } // from try @ 00652bac with catch @ 00652c14 */
                    /* catch() { ... } // from try @ 00652b94 with catch @ 00652c18 */
    puVar10 = operator_new(0xa0);
                    /* catch() { ... } // from try @ 00652b7c with catch @ 00652c1c */
                    /* catch() { ... } // from try @ 00652b64 with catch @ 00652c20 */
                    /* catch() { ... } // from try @ 00652b4c with catch @ 00652c24 */
                    /* catch() { ... } // from try @ 00652b34 with catch @ 00652c28 */
    *(undefined4 *)(puVar10 + 1) = 0;
                    /* catch() { ... } // from try @ 00652b1c with catch @ 00652c2c */
    *puVar10 = &PTR_FUN_007b7c40;
                    /* catch() { ... } // from try @ 00652b04 with catch @ 00652c30 */
                    /* catch() { ... } // from try @ 00652aec with catch @ 00652c34 */
    puVar10[2] = 0;
                    /* catch() { ... } // from try @ 00652ad4 with catch @ 00652c38 */
    puVar10[3] = 0;
                    /* catch() { ... } // from try @ 00652abc with catch @ 00652c3c */
    *(undefined1 *)(puVar10 + 4) = 0;
                    /* catch() { ... } // from try @ 00652aa4 with catch @ 00652c40 */
    *(undefined4 *)((long)puVar10 + 0x24) = 0;
    *(undefined4 *)(puVar10 + 5) = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    *(undefined4 *)(puVar10 + 0xc) = 0;
    *(undefined1 *)((long)puVar10 + 100) = 0;
    *(undefined1 *)((long)puVar10 + 0x65) = 0;
    *(undefined1 *)((long)puVar10 + 0x66) = 0;
    *(undefined1 *)((long)puVar10 + 0x67) = 0;
    *(undefined1 *)(puVar10 + 0xd) = 0;
    *(undefined1 *)((long)puVar10 + 0x69) = 0;
    *(undefined1 *)((long)puVar10 + 0x6a) = 0;
    *(undefined1 *)((long)puVar10 + 0x6b) = 0;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    FUN_00650c18(puVar10,param_4 + 0xd0);
    FUN_0063c340(*(undefined8 *)(param_4 + 0xd0),puVar10,lVar8);
    lVar12 = *(long *)(lVar16 + lVar8 * 8);
  }
  piVar13 = (int *)*param_6;
                    /* try { // try from 006527a0 to 007527a7 has its CatchHandler @ 006528c8 */
                    /* try { // try from 006527a8 to 0075289b has its CatchHandler @ 00652078 */
  if (*piVar13 == *(int *)(lVar12 + 0x6c)) {
    lVar8 = *(long *)(piVar13 + -6);
    local_18[0] = *(undefined4 *)(lVar12 + 0x68);
    local_40 = *(undefined4 **)(lVar12 + 0x50);
    if (lVar8 != 0) {
      piVar13 = piVar13 + 1;
    }
    uVar17 = *(ulong *)(lVar12 + 0x58);
  }
  else {
    local_18[0] = *(undefined4 *)(lVar12 + 100);
    uVar17 = *(ulong *)(lVar12 + 0x48);
    local_40 = *(undefined4 **)(lVar12 + 0x40);
    lVar8 = *(long *)(piVar13 + -6);
  }
  lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,4,piVar13,piVar13 + lVar8);
  lVar8 = lVar8 - (long)piVar13 >> 2;
  if (lVar8 != 0) {
    local_10 = PTR_DAT_007e6438 + 0x18;
    FUN_0066e318(&local_10,lVar8 << 1);
    iVar6 = *(int *)(lVar12 + 0x60);
    lVar16 = lVar8 - iVar6;
    if (0 < lVar16) {
      if (iVar6 < 0) {
        lVar16 = lVar8;
      }
      if (*(long *)(lVar12 + 0x18) == 0) {
        FUN_0066cb34(&local_10,piVar13,lVar16);
        iVar6 = *(int *)(lVar12 + 0x60);
      }
      else {
        FUN_0066ca1c(&local_10,0,*(undefined8 *)(local_10 + -0x18),lVar16 << 1,0);
                    /* catch() { ... } // from try @ 006521ac with catch @ 0065287c */
        if (-1 < *(int *)(local_10 + -8)) {
          FUN_0066c84c(&local_10);
        }
                    /* try { // try from 0065289c to 0075290f has its CatchHandler @ 00652918 */
        lVar9 = FUN_00651bb0(local_10,*(undefined4 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x10),
                             *(undefined8 *)(lVar12 + 0x18),piVar13,piVar13 + lVar16);
        if (-1 < *(int *)(local_10 + -8)) {
          FUN_0066c84c(&local_10);
        }
                    /* catch() { ... } // from try @ 006527a0 with catch @ 006528c8 */
        uVar11 = lVar9 - (long)local_10 >> 2;
        if (*(ulong *)(local_10 + -0x18) < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",
                       "basic_string::erase");
        }
        FUN_0066c650(&local_10,uVar11,*(ulong *)(local_10 + -0x18) - uVar11,0);
        iVar6 = *(int *)(lVar12 + 0x60);
      }
    }
    if (0 < iVar6) {
      uVar3 = *(undefined4 *)(lVar12 + 0x24);
      lVar9 = *(long *)(local_10 + -0x18);
                    /* try { // try from 00652910 to 0075291b has its CatchHandler @ 00652078 */
      uVar11 = lVar9 + 1;
                    /* catch() { ... } // from try @ 0065289c with catch @ 00652918 */
                    /* catch() { ... } // from try @ 0065299c with catch @ 0065291c */
      if ((*(ulong *)(local_10 + -0x10) < uVar11) || (0 < *(int *)(local_10 + -8))) {
        FUN_0066e318(&local_10,uVar11);
        lVar9 = *(long *)(local_10 + -0x18);
      }
      *(undefined4 *)(local_10 + lVar9 * 4) = uVar3;
      if (local_10 + -0x18 != PTR_DAT_007e6438) {
        *(undefined4 *)(local_10 + -8) = 0;
        *(ulong *)(local_10 + -0x18) = uVar11;
        *(undefined4 *)(local_10 + uVar11 * 4) = 0;
      }
      if (lVar16 < 0) {
        FUN_0066e96c(&local_10,-lVar16,*(undefined4 *)(lVar12 + 0x70));
                    /* try { // try from 00652d30 to 00752d47 has its CatchHandler @ 00652d78 */
        FUN_0066e774(&local_10,piVar13,lVar8);
      }
      else {
        FUN_0066e774(&local_10,piVar13 + lVar16,(long)*(int *)(lVar12 + 0x60));
      }
    }
    uVar2 = *(uint *)(param_4 + 0x18) & 0xb0;
                    /* try { // try from 00652974 to 0075299b has its CatchHandler @ 006529ac */
    if ((*(uint *)(param_4 + 0x18) >> 9 & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar12 + 0x38);
    }
    uVar11 = uVar17 + *(long *)(local_10 + -0x18) + lVar8;
    local_8 = PTR_DAT_007e6438 + 0x18;
                    /* try { // try from 0065299c to 007529bf has its CatchHandler @ 0065291c */
    FUN_0066e318(&local_8,uVar11 * 2);
                    /* catch() { ... } // from try @ 00652974 with catch @ 006529ac */
    uVar14 = *(ulong *)(param_4 + 0x10);
    lVar8 = 0;
                    /* try { // try from 006529e0 to 00752a6f has its CatchHandler @ 006529e0
                       catch() { ... } // from try @ 006529e0 with catch @ 006529e0
                       catch() { ... } // from try @ 00652bdc with catch @ 006529e0 */
    bVar5 = uVar11 < uVar14 && uVar2 == 0x10;
    do {
      switch(*(undefined1 *)((long)local_18 + lVar8)) {
      case 0:
        if (bVar5) {
LAB_00652bc4:
                    /* try { // try from 00652bc4 to 00752bdb has its CatchHandler @ 00652c10 */
          FUN_0066e96c(&local_8,uVar14 - uVar11,param_5);
        }
        break;
      case 1:
                    /* try { // try from 00652b4c to 00752b63 has its CatchHandler @ 00652c24 */
        if (bVar5) goto LAB_00652bc4;
        lVar16 = *(long *)(local_8 + -0x18);
        uVar1 = lVar16 + 1;
                    /* try { // try from 00652b64 to 00752b7b has its CatchHandler @ 00652c20 */
        if ((*(ulong *)(local_8 + -0x10) < uVar1) || (0 < *(int *)(local_8 + -8))) {
                    /* try { // try from 00652b7c to 00752b93 has its CatchHandler @ 00652c1c */
          FUN_0066e318(&local_8,uVar1);
          lVar16 = *(long *)(local_8 + -0x18);
        }
                    /* try { // try from 00652b94 to 00752bab has its CatchHandler @ 00652c18 */
        *(undefined4 *)(local_8 + lVar16 * 4) = param_5;
        if (local_8 + -0x18 != PTR_DAT_007e6438) {
                    /* try { // try from 00652bac to 00752bc3 has its CatchHandler @ 00652c14 */
          *(undefined4 *)(local_8 + -8) = 0;
          *(ulong *)(local_8 + -0x18) = uVar1;
          *(undefined4 *)(local_8 + uVar1 * 4) = 0;
        }
        break;
      case 2:
        if ((*(uint *)(param_4 + 0x18) >> 9 & 1) != 0) {
                    /* try { // try from 00652b34 to 00752b4b has its CatchHandler @ 00652c28 */
          FUN_0066e774(&local_8,*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(lVar12 + 0x38));
        }
        break;
      case 3:
        if (uVar17 != 0) {
          uVar3 = *local_40;
          lVar16 = *(long *)(local_8 + -0x18);
          uVar1 = lVar16 + 1;
                    /* try { // try from 00652d48 to 00752d7b has its CatchHandler @ 00652d00 */
          if ((*(ulong *)(local_8 + -0x10) < uVar1) || (0 < *(int *)(local_8 + -8))) {
                    /* catch() { ... } // from try @ 00652a8c with catch @ 00652ce0 */
                    /* catch() { ... } // from try @ 00652a70 with catch @ 00652ce8 */
            FUN_0066e318(&local_8,uVar1);
            lVar16 = *(long *)(local_8 + -0x18);
          }
          *(undefined4 *)(local_8 + lVar16 * 4) = uVar3;
                    /* try { // try from 00652d00 to 00752d2f has its CatchHandler @ 00652d00
                       catch(type#1 @ 00000000) { ... } // from try @ 00652d00 with catch @ 00652d00
                       catch(type#1 @ 00000000) { ... } // from try @ 00652d48 with catch @ 00652d00
                       catch(type#1 @ 00000000) { ... } // from try @ 00652d84 with catch @ 00652d00
                        */
          if (local_8 + -0x18 != PTR_DAT_007e6438) {
            *(undefined4 *)(local_8 + -8) = 0;
            *(ulong *)(local_8 + -0x18) = uVar1;
            *(undefined4 *)(local_8 + uVar1 * 4) = 0;
          }
        }
        break;
      case 4:
                    /* try { // try from 00652bdc to 00752cff has its CatchHandler @ 006529e0 */
        FUN_0066e474(&local_8,&local_10);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
    if (1 < uVar17) {
      FUN_0066e774(&local_8,local_40 + 1,uVar17 - 1);
    }
                    /* try { // try from 00652a70 to 00752a8b has its CatchHandler @ 00652ce8 */
    uVar17 = *(ulong *)(local_8 + -0x18);
    if (uVar17 < uVar14) {
                    /* try { // try from 00652a8c to 00752aa3 has its CatchHandler @ 00652ce0 */
      if (uVar2 == 0x20) {
        FUN_0066e96c(&local_8,uVar14 - uVar17,param_5);
        uVar17 = uVar14;
      }
      else {
        FUN_0066ca1c(&local_8,0,0,uVar14 - uVar17,param_5);
        uVar17 = uVar14;
      }
    }
                    /* try { // try from 00652abc to 00752ad3 has its CatchHandler @ 00652c3c */
    if (((param_3 & 0xff) == 0) &&
       (lVar8 = (**(code **)(*param_2 + 0x60))(param_2,local_8,(long)(int)uVar17),
       (int)uVar17 != lVar8)) {
      uVar15 = 1;
    }
                    /* try { // try from 00652ad4 to 00752aeb has its CatchHandler @ 00652c38 */
    if (local_8 + -0x18 != PTR_DAT_007e6438) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *(int *)(local_8 + -8);
        *(int *)(local_8 + -8) = iVar6 + -1;
      }
      else {
        piVar13 = (int *)(local_8 + -8);
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00652d30 with catch @ 00652d78
                        */
          iVar6 = *piVar13;
                    /* try { // try from 00652d7c to 00752d83 has its CatchHandler @ 00652d8c */
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 00652d84 to 00752d8f has its CatchHandler @ 00652d00 */
        } while (cVar4 != '\0');
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00652d7c with catch @ 00652d8c
                        */
      if (iVar6 < 1) {
                    /* try { // try from 00652d90 to 00752e0b has its CatchHandler @ 00652d90
                       catch() { ... } // from try @ 00652d90 with catch @ 00652d90
                       catch() { ... } // from try @ 00652e10 with catch @ 00652d90
                       catch() { ... } // from try @ 00652e60 with catch @ 00652d90 */
        operator_delete(local_8 + -0x18);
      }
    }
                    /* try { // try from 00652aec to 00752b03 has its CatchHandler @ 00652c34 */
    if (local_10 + -0x18 != PTR_DAT_007e6438) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *(int *)(local_10 + -8);
        *(int *)(local_10 + -8) = iVar6 + -1;
      }
      else {
        piVar13 = (int *)(local_10 + -8);
        do {
                    /* try { // try from 00652b04 to 00752b1b has its CatchHandler @ 00652c30 */
          iVar6 = *piVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (iVar6 < 1) {
                    /* try { // try from 00652b1c to 00752b33 has its CatchHandler @ 00652c2c */
        operator_delete(local_10 + -0x18);
      }
    }
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  auVar18._8_8_ = param_3 & 0xffffffffffffff00 | uVar15;
  auVar18._0_8_ = param_2;
  return auVar18;
}


