/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f6b64
 * Function: FUN_005f6b64
 * Signature: undefined FUN_005f6b64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f6b64(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  char *pcVar13;
  int iVar14;
  double *pdVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  double *pdVar20;
  uint uVar21;
  double *pdVar22;
  long lVar23;
  uint *puVar24;
  ulong uVar25;
  int *piVar26;
  undefined8 *puVar27;
  long lVar28;
  char *__s2;
  ulong uVar29;
  double *pdVar30;
  size_t sVar31;
  long *plVar32;
  double dVar33;
  size_t sVar34;
  long lVar35;
  double *pdVar36;
  uint *puVar37;
  uint *puVar38;
  int local_a4;
  double local_90;
  undefined4 local_88;
  double local_80;
  undefined4 local_78;
  double local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_a4 = param_2;
LAB_005f6bb4:
  lVar28 = *(long *)(param_1 + 0x18);
  lVar16 = **(long **)(*(long *)(param_1 + 0x28) + 8);
  lVar35 = *(long *)(*(long *)(lVar16 + 0x20) + 0x10);
  puVar38 = *(uint **)(param_1 + 0x30);
                    /* try { // try from 005f6bd0 to 006f6bdb has its CatchHandler @ 005f7014 */
LAB_005f6c00:
  do {
    puVar37 = puVar38;
    puVar38 = puVar37 + 1;
    uVar8 = *puVar37;
    bVar2 = *(byte *)(param_1 + 100);
    if ((bVar2 & 0xc) != 0) {
      iVar5 = *(int *)(param_1 + 0x6c) + -1;
      *(int *)(param_1 + 0x6c) = iVar5;
      if (((bVar2 >> 2 & 1) != 0) || (iVar5 == 0)) {
        puVar24 = *(uint **)(param_1 + 0x30);
        *(uint **)(param_1 + 0x30) = puVar38;
        if (((bVar2 >> 3 & 1) != 0) && (iVar5 == 0)) {
          *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
          FUN_005ebbd4(param_1,3,0xffffffff);
        }
        if ((bVar2 >> 2 & 1) == 0) goto LAB_005f6cd8;
                    /* try { // try from 005f6c60 to 006f6c87 has its CatchHandler @ 005f75f8 */
        lVar19 = *(long *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x20);
        lVar28 = *(long *)(lVar19 + 0x18);
        lVar19 = *(long *)(lVar19 + 0x28);
        iVar5 = (int)((ulong)((long)puVar38 - lVar28) >> 2) + -1;
        if (lVar19 == 0) {
          iVar14 = 0;
          if (puVar24 < puVar38) goto LAB_005f6c88;
LAB_005f6ccc:
          FUN_005ebbd4(param_1,2);
        }
        else {
          iVar14 = *(int *)(lVar19 + (long)iVar5 * 4);
          if (puVar38 <= puVar24) goto LAB_005f6ccc;
LAB_005f6c88:
                    /* try { // try from 005f6c88 to 006f6e83 has its CatchHandler @ 005f5d10 */
          if (iVar5 == 0) goto LAB_005f6ccc;
          if (lVar19 == 0) {
            if (iVar14 != 0) goto LAB_005f6ccc;
          }
          else if (iVar14 != *(int *)(lVar19 + (((long)puVar24 - lVar28) * 0x40000000 + -0x100000000
                                               >> 0x1e))) goto LAB_005f6ccc;
        }
LAB_005f6cd8:
        if (*(char *)(param_1 + 10) == '\x01') {
          *(uint **)(param_1 + 0x30) = puVar37;
          goto LAB_005f8608;
        }
        lVar28 = *(long *)(param_1 + 0x18);
      }
    }
  } while (0x25 < (uVar8 & 0x3f));
  uVar21 = uVar8 >> 6 & 0xff;
  uVar25 = (ulong)uVar21;
  pdVar15 = (double *)(lVar28 + uVar25 * 0x10);
  lVar19 = lVar28;
  switch(uVar8 & 0x3f) {
  case 0:
    pdVar20 = (double *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
    goto LAB_005f732c;
  case 1:
    pdVar20 = (double *)(lVar35 + (ulong)(uVar8 >> 0xe) * 0x10);
    goto LAB_005f732c;
  case 2:
                    /* catch() { ... } // from try @ 005f6244 with catch @ 005f723c */
                    /* catch() { ... } // from try @ 005f61f4 with catch @ 005f7240 */
    *(uint *)pdVar15 = uVar8 >> 0x17;
    *(undefined4 *)(lVar28 + uVar25 * 0x10 + 8) = 1;
    if ((uVar8 & 0x7fc000) != 0) {
      puVar38 = puVar37 + 2;
    }
    goto LAB_005f6c00;
  case 3:
    pdVar20 = (double *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
    do {
      pdVar36 = pdVar20 + -2;
      *(uint *)(pdVar20 + 1) = 0;
      pdVar20 = pdVar36;
    } while (pdVar15 <= pdVar36);
    goto LAB_005f6c00;
  case 4:
    pdVar20 = *(double **)(*(long *)(lVar16 + (ulong)(uVar8 >> 0x17) * 8 + 0x28) + 0x10);
                    /* catch() { ... } // from try @ 005f6bd0 with catch @ 005f7014 */
LAB_005f732c:
    *pdVar15 = *pdVar20;
    uVar6 = *(undefined4 *)(pdVar20 + 1);
LAB_005f7c58:
    *(undefined4 *)(lVar28 + uVar25 * 0x10 + 8) = uVar6;
    goto LAB_005f6c00;
  case 5:
    lVar28 = lVar35 + (ulong)(uVar8 >> 0xe) * 0x10;
    local_80 = *(double *)(lVar16 + 0x18);
    local_78 = 5;
    pdVar20 = &local_80;
    goto LAB_005f7598;
  case 6:
    pdVar20 = (double *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      lVar28 = lVar35;
    }
    lVar28 = lVar28 + (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe) * 0x10;
LAB_005f7598:
    *(uint **)(param_1 + 0x30) = puVar38;
LAB_005f759c:
    FUN_005f6020(param_1,pdVar20,lVar28,pdVar15);
    lVar28 = *(long *)(param_1 + 0x18);
    goto LAB_005f6c00;
  case 7:
    lVar19 = lVar35 + (ulong)(uVar8 >> 0xe) * 0x10;
    local_80 = *(double *)(lVar16 + 0x18);
    pdVar20 = &local_80;
                    /* catch() { ... } // from try @ 005f5f08 with catch @ 005f7308 */
    local_78 = 5;
    *(uint **)(param_1 + 0x30) = puVar38;
    goto LAB_005f7318;
  case 8:
    lVar23 = *(long *)(lVar16 + (ulong)(uVar8 >> 0x17) * 8 + 0x28);
    pdVar20 = *(double **)(lVar23 + 0x10);
    *pdVar20 = *pdVar15;
                    /* catch() { ... } // from try @ 005f5fc8 with catch @ 005f75f8
                       catch() { ... } // from try @ 005f6c60 with catch @ 005f75f8 */
    lVar19 = lVar28 + uVar25 * 0x10;
                    /* catch() { ... } // from try @ 005f6068 with catch @ 005f75fc
                       catch() { ... } // from try @ 005f610c with catch @ 005f75fc */
                    /* catch() { ... } // from try @ 005f5e58 with catch @ 005f7600
                       catch() { ... } // from try @ 005f5e6c with catch @ 005f7600 */
    *(undefined4 *)(pdVar20 + 1) = *(undefined4 *)(lVar19 + 8);
                    /* catch() { ... } // from try @ 005f5fe8 with catch @ 005f760c
                       catch() { ... } // from try @ 005f5ffc with catch @ 005f760c
                       catch() { ... } // from try @ 005f6170 with catch @ 005f760c
                       catch() { ... } // from try @ 005f6864 with catch @ 005f760c */
    if (((3 < *(int *)(lVar19 + 8)) && ((*(byte *)((long)*pdVar15 + 9) & 3) != 0)) &&
       ((*(byte *)(lVar23 + 9) >> 2 & 1) != 0)) {
      FUN_005ee334(param_1);
    }
    goto LAB_005f6c00;
  case 9:
    lVar19 = lVar35;
    uVar21 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar19 = lVar28;
      uVar21 = uVar8 >> 0x17;
    }
                    /* catch() { ... } // from try @ 005f6a5c with catch @ 005f70a0 */
                    /* catch() { ... } // from try @ 005f6914 with catch @ 005f70a4 */
    lVar19 = lVar19 + (ulong)uVar21 * 0x10;
                    /* catch() { ... } // from try @ 005f690c with catch @ 005f70a8 */
                    /* catch() { ... } // from try @ 005f68bc with catch @ 005f70ac */
    if ((uVar8 & 0x400000) != 0) {
      lVar28 = lVar35;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    pdVar20 = pdVar15;
    pdVar15 = (double *)
              (lVar28 + (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe) * 0x10);
LAB_005f7318:
    FUN_005f61e8(param_1,pdVar20,lVar19,pdVar15);
    lVar28 = *(long *)(param_1 + 0x18);
    goto LAB_005f6c00;
  case 10:
    uVar6 = FUN_005eee30(uVar8 >> 0x17);
    uVar7 = FUN_005eee30(uVar8 >> 0xe & 0x1ff);
    dVar9 = (double)FUN_005f3db4(param_1,uVar6,uVar7);
    *pdVar15 = dVar9;
    *(undefined4 *)(lVar28 + uVar25 * 0x10 + 8) = 5;
    *(uint **)(param_1 + 0x30) = puVar38;
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78)
       ) {
      FUN_005edcb0(param_1);
    }
    lVar28 = *(long *)(param_1 + 0x18);
    goto LAB_005f6c00;
  case 0xb:
    pdVar20 = (double *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
    pdVar15[2] = *pdVar20;
    if ((uVar8 & 0x400000) != 0) {
      lVar28 = lVar35;
    }
    *(uint *)(pdVar15 + 3) = *(uint *)(pdVar20 + 1);
    *(uint **)(param_1 + 0x30) = puVar38;
    lVar28 = lVar28 + (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe) * 0x10;
    goto LAB_005f759c;
  case 0xc:
    lVar23 = lVar35;
    uVar21 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar23 = lVar28;
      uVar21 = uVar8 >> 0x17;
    }
    pdVar20 = (double *)(lVar23 + (ulong)uVar21 * 0x10);
    pdVar36 = pdVar20 + 1;
    iVar5 = *(int *)pdVar36;
    if ((uVar8 & 0x400000) != 0) {
      lVar19 = lVar35;
    }
    uVar29 = (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe);
    pdVar30 = (double *)(lVar19 + uVar29 * 0x10);
    if (iVar5 == 3) {
                    /* catch() { ... } // from try @ 005f6aac with catch @ 005f7068 */
      if (*(int *)(lVar19 + uVar29 * 0x10 + 8) != 3) {
        *(uint **)(param_1 + 0x30) = puVar38;
        pdVar22 = pdVar20;
LAB_005f7dbc:
        iVar5 = *(int *)(lVar19 + uVar29 * 0x10 + 8);
        if (iVar5 != 3) {
                    /* try { // try from 005f7ddc to 006f7e3f has its CatchHandler @ 005f81c4 */
          if ((iVar5 != 4) || (iVar5 = FUN_005eeefc((long)*pdVar30 + 0x18,&local_70), iVar5 == 0))
          goto LAB_005f7e1c;
          pdVar30 = &local_90;
          local_88 = 3;
          local_90 = local_70;
        }
        lVar28 = lVar28 + uVar25 * 0x10;
        dVar9 = *pdVar22 + *pdVar30;
LAB_005f7fbc:
        *pdVar15 = dVar9;
        *(undefined4 *)(lVar28 + 8) = 3;
        goto LAB_005f6bd8;
      }
      lVar19 = lVar28 + uVar25 * 0x10;
      dVar9 = *pdVar20 + *pdVar30;
LAB_005f755c:
      *pdVar15 = dVar9;
LAB_005f7560:
      *(undefined4 *)(lVar19 + 8) = 3;
      goto LAB_005f6c00;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    if ((iVar5 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_70), iVar5 != 0)) {
      pdVar22 = &local_80;
      local_78 = 3;
      local_80 = local_70;
      goto LAB_005f7dbc;
    }
LAB_005f7e1c:
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,5);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 == 0) {
      uVar10 = 5;
      goto LAB_005f7fe8;
    }
    break;
  case 0xd:
    lVar23 = lVar35;
    uVar21 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar23 = lVar28;
      uVar21 = uVar8 >> 0x17;
    }
    pdVar20 = (double *)(lVar23 + (ulong)uVar21 * 0x10);
    pdVar36 = pdVar20 + 1;
    iVar5 = *(int *)pdVar36;
    if ((uVar8 & 0x400000) != 0) {
      lVar19 = lVar35;
    }
    uVar29 = (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe);
    pdVar30 = (double *)(lVar19 + uVar29 * 0x10);
    if (iVar5 == 3) {
      if (*(int *)(lVar19 + uVar29 * 0x10 + 8) == 3) {
        dVar9 = *pdVar20;
                    /* catch() { ... } // from try @ 005f6278 with catch @ 005f754c
                       catch() { ... } // from try @ 005f6308 with catch @ 005f754c */
        dVar33 = *pdVar30;
LAB_005f7558:
        lVar19 = lVar28 + uVar25 * 0x10;
        dVar9 = dVar9 - dVar33;
        goto LAB_005f755c;
      }
      *(uint **)(param_1 + 0x30) = puVar38;
      pdVar22 = pdVar20;
LAB_005f7f60:
      iVar5 = *(int *)(lVar19 + uVar29 * 0x10 + 8);
      if (iVar5 != 3) {
        if ((iVar5 != 4) || (iVar5 = FUN_005eeefc((long)*pdVar30 + 0x18,&local_70), iVar5 == 0))
        goto LAB_005f7fc8;
        pdVar30 = &local_90;
        local_88 = 3;
        local_90 = local_70;
      }
      dVar9 = *pdVar22;
      dVar33 = *pdVar30;
LAB_005f7fb8:
      lVar28 = lVar28 + uVar25 * 0x10;
      dVar9 = dVar9 - dVar33;
      goto LAB_005f7fbc;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
                    /* try { // try from 005f7984 to 006f79f3 has its CatchHandler @ 005f5d10 */
    if ((iVar5 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_70), iVar5 != 0)) {
      pdVar22 = &local_80;
      local_78 = 3;
      local_80 = local_70;
                    /* catch() { ... } // from try @ 005f6e84 with catch @ 005f79a4
                       catch() { ... } // from try @ 005f7760 with catch @ 005f79a4 */
      goto LAB_005f7f60;
    }
LAB_005f7fc8:
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,6);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 == 0) {
      uVar10 = 6;
      goto LAB_005f7fe8;
    }
    break;
  case 0xe:
                    /* catch() { ... } // from try @ 005f648c with catch @ 005f6f60 */
    lVar23 = lVar35;
    uVar21 = uVar8 >> 0x17 & 0xff;
                    /* catch() { ... } // from try @ 005f62c0 with catch @ 005f6f64 */
    if (-1 < (int)uVar8) {
      lVar23 = lVar28;
      uVar21 = uVar8 >> 0x17;
    }
    pdVar20 = (double *)(lVar23 + (ulong)uVar21 * 0x10);
    pdVar36 = pdVar20 + 1;
    iVar5 = *(int *)pdVar36;
    if ((uVar8 & 0x400000) != 0) {
      lVar19 = lVar35;
    }
    uVar29 = (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe);
    pdVar30 = (double *)(lVar19 + uVar29 * 0x10);
    if (iVar5 == 3) {
      if (*(int *)(lVar19 + uVar29 * 0x10 + 8) == 3) {
        lVar19 = lVar28 + uVar25 * 0x10;
                    /* catch() { ... } // from try @ 005f621c with catch @ 005f6fb8 */
                    /* catch() { ... } // from try @ 005f5fa0 with catch @ 005f6fbc */
        dVar9 = *pdVar20 * *pdVar30;
                    /* catch() { ... } // from try @ 005f60bc with catch @ 005f6fc0 */
        goto LAB_005f755c;
      }
      *(uint **)(param_1 + 0x30) = puVar38;
      pdVar22 = pdVar20;
LAB_005f7d30:
      iVar5 = *(int *)(lVar19 + uVar29 * 0x10 + 8);
      if (iVar5 != 3) {
                    /* try { // try from 005f7d48 to 006f7d53 has its CatchHandler @ 005f7ad0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005f7d20 with catch @ 005f7d50
                        */
                    /* try { // try from 005f7d54 to 006f7ddb has its CatchHandler @ 005f7d54
                       catch() { ... } // from try @ 005f7d54 with catch @ 005f7d54
                       catch() { ... } // from try @ 005f7e54 with catch @ 005f7d54
                       catch() { ... } // from try @ 005f7f28 with catch @ 005f7d54
                       catch() { ... } // from try @ 005f80ac with catch @ 005f7d54 */
        if ((iVar5 != 4) || (iVar5 = FUN_005eeefc((long)*pdVar30 + 0x18,&local_70), iVar5 == 0))
        goto LAB_005f7d90;
        pdVar30 = &local_90;
        local_88 = 3;
        local_90 = local_70;
      }
      lVar28 = lVar28 + uVar25 * 0x10;
      dVar9 = *pdVar22 * *pdVar30;
      goto LAB_005f7fbc;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    if ((iVar5 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_70), iVar5 != 0)) {
      pdVar22 = &local_80;
      local_78 = 3;
      local_80 = local_70;
      goto LAB_005f7d30;
    }
LAB_005f7d90:
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,7);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 == 0) {
      uVar10 = 7;
      goto LAB_005f7fe8;
    }
    break;
  case 0xf:
    lVar23 = lVar35;
    uVar21 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar23 = lVar28;
      uVar21 = uVar8 >> 0x17;
    }
    pdVar20 = (double *)(lVar23 + (ulong)uVar21 * 0x10);
    pdVar36 = pdVar20 + 1;
    iVar5 = *(int *)pdVar36;
    if ((uVar8 & 0x400000) != 0) {
      lVar19 = lVar35;
    }
                    /* catch() { ... } // from try @ 005f61c4 with catch @ 005f7294 */
    uVar29 = (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe);
                    /* catch() { ... } // from try @ 005f5ff4 with catch @ 005f7298 */
    pdVar30 = (double *)(lVar19 + uVar29 * 0x10);
    if (iVar5 == 3) {
      if (*(int *)(lVar19 + uVar29 * 0x10 + 8) == 3) {
                    /* catch() { ... } // from try @ 005f5f74 with catch @ 005f72b4 */
        lVar19 = lVar28 + uVar25 * 0x10;
        dVar9 = *pdVar20 / *pdVar30;
        goto LAB_005f755c;
      }
      *(uint **)(param_1 + 0x30) = puVar38;
      pdVar22 = pdVar20;
LAB_005f7e48:
                    /* try { // try from 005f7e4c to 006f7e53 has its CatchHandler @ 005f8080 */
      iVar5 = *(int *)(lVar19 + uVar29 * 0x10 + 8);
                    /* try { // try from 005f7e54 to 006f7e8f has its CatchHandler @ 005f7d54 */
      if (iVar5 != 3) {
        if ((iVar5 != 4) || (iVar5 = FUN_005eeefc((long)*pdVar30 + 0x18,&local_70), iVar5 == 0))
        goto LAB_005f7ea8;
        pdVar30 = &local_90;
        local_88 = 3;
        local_90 = local_70;
      }
                    /* try { // try from 005f7e90 to 006f7e9b has its CatchHandler @ 005f810c */
      lVar28 = lVar28 + uVar25 * 0x10;
                    /* try { // try from 005f7e9c to 006f7eaf has its CatchHandler @ 005f80b4 */
      dVar9 = *pdVar22 / *pdVar30;
      goto LAB_005f7fbc;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    if ((iVar5 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_70), iVar5 != 0)) {
      pdVar22 = &local_80;
      local_78 = 3;
      local_80 = local_70;
      goto LAB_005f7e48;
    }
LAB_005f7ea8:
                    /* try { // try from 005f7eb0 to 006f7f13 has its CatchHandler @ 005f8114 */
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,8);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 == 0) {
      uVar10 = 8;
      goto LAB_005f7fe8;
    }
    break;
  case 0x10:
    lVar23 = lVar35;
    uVar21 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar23 = lVar28;
      uVar21 = uVar8 >> 0x17;
    }
    pdVar20 = (double *)(lVar23 + (ulong)uVar21 * 0x10);
                    /* catch() { ... } // from try @ 005f66ec with catch @ 005f6f08 */
    pdVar36 = pdVar20 + 1;
                    /* catch() { ... } // from try @ 005f6530 with catch @ 005f6f0c */
    iVar5 = *(int *)pdVar36;
    if ((uVar8 & 0x400000) != 0) {
      lVar19 = lVar35;
    }
    uVar29 = (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe);
    pdVar30 = (double *)(lVar19 + uVar29 * 0x10);
    if (iVar5 == 3) {
      if (*(int *)(lVar19 + uVar29 * 0x10 + 8) == 3) {
        dVar9 = *pdVar20;
        dVar33 = *pdVar30 * (double)(long)(dVar9 / *pdVar30);
        goto LAB_005f7558;
      }
      *(uint **)(param_1 + 0x30) = puVar38;
      pdVar22 = pdVar20;
LAB_005f7c9c:
      iVar5 = *(int *)(lVar19 + uVar29 * 0x10 + 8);
      if (iVar5 != 3) {
        if ((iVar5 != 4) || (iVar5 = FUN_005eeefc((long)*pdVar30 + 0x18,&local_70), iVar5 == 0))
        goto LAB_005f7d04;
        pdVar30 = &local_90;
        local_88 = 3;
        local_90 = local_70;
      }
      dVar9 = *pdVar22;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005f7b38 with catch @ 005f7cfc
                        */
      dVar33 = *pdVar30 * (double)(long)(dVar9 / *pdVar30);
      goto LAB_005f7fb8;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    if ((iVar5 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_70), iVar5 != 0)) {
      pdVar22 = &local_80;
      local_78 = 3;
      local_80 = local_70;
      goto LAB_005f7c9c;
    }
LAB_005f7d04:
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,9);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 != 0) break;
                    /* try { // try from 005f7d20 to 006f7d47 has its CatchHandler @ 005f7d50 */
    uVar10 = 9;
LAB_005f7fe8:
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar30,uVar10);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 != 0) break;
    FUN_005eb578(param_1,pdVar20,pdVar30);
                    /* try { // try from 005f6bfc to 006f6c23 has its CatchHandler @ 005f6e58 */
    goto LAB_005f6bd8;
  case 0x11:
    lVar23 = lVar35;
    uVar21 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar23 = lVar28;
      uVar21 = uVar8 >> 0x17;
    }
    pdVar20 = (double *)(lVar23 + (ulong)uVar21 * 0x10);
                    /* catch() { ... } // from try @ 005f6940 with catch @ 005f73ec
                       catch() { ... } // from try @ 005f69d0 with catch @ 005f73ec */
    pdVar36 = pdVar20 + 1;
    iVar5 = *(int *)pdVar36;
    if ((uVar8 & 0x400000) != 0) {
      lVar19 = lVar35;
    }
    uVar29 = (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe);
    pdVar30 = (double *)(lVar19 + uVar29 * 0x10);
    if (iVar5 == 3) {
      if (*(int *)(lVar19 + uVar29 * 0x10 + 8) == 3) {
        dVar9 = pow(*pdVar20,*pdVar30);
        *pdVar15 = dVar9;
        lVar19 = lVar28 + uVar25 * 0x10;
        goto LAB_005f7560;
      }
      *(uint **)(param_1 + 0x30) = puVar38;
      pdVar22 = pdVar20;
LAB_005f7ed4:
      iVar5 = *(int *)(lVar19 + uVar29 * 0x10 + 8);
      if (iVar5 != 3) {
        if ((iVar5 != 4) || (iVar5 = FUN_005eeefc((long)*pdVar30 + 0x18,&local_70), iVar5 == 0))
        goto LAB_005f7f34;
        pdVar30 = &local_90;
        local_88 = 3;
        local_90 = local_70;
      }
                    /* try { // try from 005f7f20 to 006f7f27 has its CatchHandler @ 005f8050 */
      dVar9 = pow(*pdVar22,*pdVar30);
                    /* try { // try from 005f7f28 to 006f8073 has its CatchHandler @ 005f7d54 */
      lVar28 = lVar28 + uVar25 * 0x10;
      goto LAB_005f7fbc;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    if ((iVar5 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_70), iVar5 != 0)) {
      pdVar22 = &local_80;
      local_78 = 3;
      local_80 = local_70;
      goto LAB_005f7ed4;
    }
LAB_005f7f34:
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,10);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 == 0) {
      uVar10 = 10;
      goto LAB_005f7fe8;
    }
    break;
  case 0x12:
    pdVar20 = (double *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
    pdVar36 = pdVar20 + 1;
    iVar5 = *(int *)pdVar36;
    if (iVar5 == 3) {
      lVar19 = lVar28 + uVar25 * 0x10;
      dVar9 = -*pdVar20;
      goto LAB_005f7b4c;
    }
                    /* catch() { ... } // from try @ 005f7734 with catch @ 005f79a8 */
    *(uint **)(param_1 + 0x30) = puVar38;
                    /* catch() { ... } // from try @ 005f5da4 with catch @ 005f79b4 */
    if ((iVar5 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_90), iVar5 != 0)) {
      local_78 = 3;
      local_80 = local_90;
                    /* try { // try from 005f79f4 to 006f7a1b has its CatchHandler @ 005f7a64 */
      if ((*(int *)pdVar36 == 3) ||
         ((*(int *)pdVar36 == 4 &&
          (iVar5 = FUN_005eeefc((long)*pdVar20 + 0x18,&local_90), iVar5 != 0)))) {
        *pdVar15 = -local_80;
        *(undefined4 *)(lVar28 + uVar25 * 0x10 + 8) = 3;
        lVar28 = *(long *)(param_1 + 0x18);
        goto LAB_005f6c00;
      }
    }
    puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,0xb);
    piVar26 = (int *)(puVar11 + 1);
    if (*piVar26 == 0) {
      puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,0xb);
      piVar26 = (int *)(puVar11 + 1);
      if (*piVar26 == 0) {
        FUN_005eb578(param_1,pdVar20,pdVar20);
        lVar28 = *(long *)(param_1 + 0x18);
        goto LAB_005f6c00;
      }
    }
    puVar27 = *(undefined8 **)(param_1 + 0x10);
    lVar19 = *(long *)(param_1 + 0x40);
    *puVar27 = *puVar11;
    *(int *)(puVar27 + 1) = *piVar26;
    lVar28 = *(long *)(param_1 + 0x10);
    *(double *)(lVar28 + 0x10) = *pdVar20;
    *(int *)(lVar28 + 0x18) = *(int *)pdVar36;
    lVar28 = *(long *)(param_1 + 0x10);
    *(double *)(lVar28 + 0x20) = *pdVar20;
    *(int *)(lVar28 + 0x28) = *(int *)pdVar36;
    lVar28 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x38) - lVar28 < 0x31) {
      FUN_005ebbb8(param_1,3);
      lVar28 = *(long *)(param_1 + 0x10);
    }
    *(long *)(param_1 + 0x10) = lVar28 + 0x30;
    FUN_005ec63c(param_1,lVar28,1);
    lVar28 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar28 + -0x10;
    puVar11 = (undefined8 *)((long)pdVar15 + (*(long *)(param_1 + 0x40) - lVar19));
    *puVar11 = *(undefined8 *)(lVar28 + -0x10);
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(lVar28 + -8);
    lVar28 = *(long *)(param_1 + 0x18);
    goto LAB_005f6c00;
  case 0x13:
    iVar5 = *(int *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10 + 8);
    uVar6 = 1;
    if (iVar5 == 0) {
      uVar8 = 1;
    }
    else if (iVar5 == 1) {
      uVar8 = (uint)(*(int *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10) == 0);
    }
    else {
      uVar8 = 0;
    }
    *(uint *)pdVar15 = uVar8;
    goto LAB_005f7c58;
  case 0x14:
    plVar32 = (long *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
                    /* catch() { ... } // from try @ 005f6734 with catch @ 005f7470
                       catch() { ... } // from try @ 005f67c8 with catch @ 005f7470 */
    iVar5 = (int)plVar32[1];
    if (iVar5 == 4) {
                    /* try { // try from 005f7b38 to 006f7b3b has its CatchHandler @ 005f7cfc */
                    /* try { // try from 005f7b3c to 006f7d1f has its CatchHandler @ 005f7ad0 */
      lVar19 = lVar28 + uVar25 * 0x10;
      dVar9 = (double)NEON_ucvtf(*(undefined8 *)(*plVar32 + 0x10));
    }
    else {
      if (iVar5 != 5) {
        *(uint **)(param_1 + 0x30) = puVar38;
        puVar11 = (undefined8 *)FUN_005f4ed4(param_1,plVar32,0xc);
        piVar26 = (int *)(puVar11 + 1);
        if (*piVar26 == 0) {
          puVar11 = (undefined8 *)FUN_005f4ed4(param_1,&DAT_00699bc8,0xc);
          piVar26 = (int *)(puVar11 + 1);
          if (*piVar26 == 0) {
            FUN_005eb03c(param_1,plVar32,"get length of");
            lVar28 = *(long *)(param_1 + 0x18);
            goto LAB_005f6c00;
          }
        }
        puVar27 = *(undefined8 **)(param_1 + 0x10);
        lVar19 = *(long *)(param_1 + 0x40);
        *puVar27 = *puVar11;
        *(int *)(puVar27 + 1) = *piVar26;
        lVar28 = *(long *)(param_1 + 0x10);
        *(long *)(lVar28 + 0x10) = *plVar32;
        *(int *)(lVar28 + 0x18) = (int)plVar32[1];
        lVar28 = *(long *)(param_1 + 0x10);
        *(undefined8 *)(lVar28 + 0x20) = DAT_00699bc8;
        *(undefined4 *)(lVar28 + 0x28) = DAT_00699bd0;
        lVar28 = *(long *)(param_1 + 0x10);
        if (*(long *)(param_1 + 0x38) - lVar28 < 0x31) {
          FUN_005ebbb8(param_1,3);
          lVar28 = *(long *)(param_1 + 0x10);
        }
        *(long *)(param_1 + 0x10) = lVar28 + 0x30;
        FUN_005ec63c(param_1,lVar28,1);
        lVar28 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar28 + -0x10;
        puVar11 = (undefined8 *)((long)pdVar15 + (*(long *)(param_1 + 0x40) - lVar19));
        *puVar11 = *(undefined8 *)(lVar28 + -0x10);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(lVar28 + -8);
        lVar28 = *(long *)(param_1 + 0x18);
        goto LAB_005f6c00;
      }
      iVar5 = FUN_005f4b90(*plVar32);
      dVar9 = (double)iVar5;
      lVar19 = lVar28 + uVar25 * 0x10;
    }
LAB_005f7b4c:
    *pdVar15 = dVar9;
    *(undefined4 *)(lVar19 + 8) = 3;
    goto LAB_005f6c00;
  case 0x15:
    *(uint **)(param_1 + 0x30) = puVar38;
    FUN_005f67ec(param_1,(1 - (uVar8 >> 0x17)) + (uVar8 >> 0xe & 0x1ff));
                    /* catch() { ... } // from try @ 005f64e8 with catch @ 005f74c8
                       catch() { ... } // from try @ 005f6578 with catch @ 005f74c8 */
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78)
       ) {
      FUN_005edcb0(param_1);
    }
    lVar28 = *(long *)(param_1 + 0x18);
    puVar11 = (undefined8 *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
    puVar27 = (undefined8 *)(lVar28 + uVar25 * 0x10);
    *puVar27 = *puVar11;
    *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar11 + 1);
    goto LAB_005f6c00;
  case 0x16:
    puVar38 = puVar38 + (int)((uVar8 >> 0xe) - 0x1ffff);
                    /* try { // try from 005f76d8 to 006f76ff has its CatchHandler @ 005f7a98 */
    goto LAB_005f6c00;
  case 0x17:
    uVar1 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      uVar1 = uVar8 >> 0x17;
    }
    lVar19 = lVar35;
    if (-1 < (int)uVar8) {
      lVar19 = lVar28;
    }
    if ((uVar8 & 0x400000) != 0) {
      lVar28 = lVar35;
    }
                    /* try { // try from 005f7734 to 006f7737 has its CatchHandler @ 005f79a8 */
    uVar25 = (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe);
    *(uint **)(param_1 + 0x30) = puVar38;
    if (*(int *)(lVar19 + (ulong)uVar1 * 0x10 + 8) == *(int *)(lVar28 + uVar25 * 0x10 + 8)) {
                    /* try { // try from 005f7760 to 006f7983 has its CatchHandler @ 005f79a4 */
      iVar5 = FUN_005f6604(param_1,lVar19 + (ulong)uVar1 * 0x10,lVar28 + uVar25 * 0x10);
      bVar4 = iVar5 != 0;
joined_r0x005f832c:
      uVar8 = (uint)bVar4;
      goto joined_r0x005f8110;
    }
joined_r0x005f84d8:
    if (uVar21 == 0) goto LAB_005f8354;
    goto LAB_005f8364;
  case 0x18:
    lVar19 = lVar35;
    uVar1 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar19 = lVar28;
      uVar1 = uVar8 >> 0x17;
    }
                    /* catch() { ... } // from try @ 005f6654 with catch @ 005f7158 */
    if ((uVar8 & 0x400000) != 0) {
      lVar28 = lVar35;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    uVar8 = FUN_005f63fc(param_1,lVar19 + (ulong)uVar1 * 0x10,
                         lVar28 + (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe) * 0x10
                        );
    goto joined_r0x005f8110;
  case 0x19:
    lVar19 = lVar35;
    uVar1 = uVar8 >> 0x17 & 0xff;
    if (-1 < (int)uVar8) {
      lVar19 = lVar28;
      uVar1 = uVar8 >> 0x17;
    }
    pdVar15 = (double *)(lVar19 + (ulong)uVar1 * 0x10);
    if ((uVar8 & 0x400000) != 0) {
      lVar28 = lVar35;
    }
    pdVar20 = (double *)
              (lVar28 + (ulong)(((uVar8 & 0x400000) >> 0xe ^ 0x1ff) & uVar8 >> 0xe) * 0x10);
    *(uint **)(param_1 + 0x30) = puVar38;
    pdVar36 = pdVar15 + 1;
                    /* catch() { ... } // from try @ 005f6714 with catch @ 005f7100 */
                    /* catch() { ... } // from try @ 005f66c4 with catch @ 005f7104 */
    iVar5 = *(int *)pdVar36;
    pdVar30 = pdVar20 + 1;
    if (iVar5 != *(int *)pdVar30) goto LAB_005f8334;
    if (iVar5 == 4) {
      dVar33 = *pdVar15;
      dVar9 = *pdVar20;
      pcVar13 = (char *)((long)dVar33 + 0x18);
      __s2 = (char *)((long)dVar9 + 0x18);
      uVar8 = strcoll(pcVar13,__s2);
      if (uVar8 == 0) {
        sVar31 = *(size_t *)((long)dVar9 + 0x10);
        sVar34 = *(size_t *)((long)dVar33 + 0x10);
        do {
          sVar12 = strlen(pcVar13);
          if (sVar12 == sVar31) {
                    /* try { // try from 005f84f4 to 006f84ff has its CatchHandler @ 005f8668 */
            uVar8 = (uint)(sVar12 != sVar34);
            break;
          }
          if (sVar12 == sVar34) {
            uVar8 = 0xffffffff;
            break;
          }
          lVar28 = sVar12 + 1;
          pcVar13 = pcVar13 + lVar28;
          __s2 = __s2 + lVar28;
          sVar34 = sVar34 - lVar28;
          sVar31 = sVar31 - lVar28;
          uVar8 = strcoll(pcVar13,__s2);
        } while (uVar8 == 0);
      }
      uVar8 = (uint)((int)uVar8 < 1);
                    /* catch() { ... } // from try @ 005f7e90 with catch @ 005f810c */
    }
    else if (iVar5 == 3) {
      uVar8 = (uint)(*pdVar15 <= *pdVar20);
    }
    else {
      puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar15,0xe);
      if (*(int *)(puVar11 + 1) != 0) {
        uVar10 = FUN_005f4ed4(param_1,pdVar20,0xe);
        iVar5 = FUN_005eee84(puVar11,uVar10);
        if (iVar5 == 0) goto LAB_005f8224;
        puVar27 = *(undefined8 **)(param_1 + 0x10);
        lVar19 = *(long *)(param_1 + 0x40);
        *puVar27 = *puVar11;
        *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar11 + 1);
        lVar28 = *(long *)(param_1 + 0x10);
        *(double *)(lVar28 + 0x10) = *pdVar15;
        *(int *)(lVar28 + 0x18) = *(int *)pdVar36;
        lVar28 = *(long *)(param_1 + 0x10);
        *(double *)(lVar28 + 0x20) = *pdVar20;
        *(int *)(lVar28 + 0x28) = *(int *)pdVar30;
        lVar28 = *(long *)(param_1 + 0x10);
        if (*(long *)(param_1 + 0x38) - lVar28 < 0x31) {
          FUN_005ebbb8(param_1,3);
          lVar28 = *(long *)(param_1 + 0x10);
        }
                    /* catch() { ... } // from try @ 005f7ddc with catch @ 005f81c4 */
        *(long *)(param_1 + 0x10) = lVar28 + 0x30;
        FUN_005ec63c(param_1,lVar28,1);
        lVar28 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar28 + -0x10;
        puVar27 = (undefined8 *)((long)puVar27 + (*(long *)(param_1 + 0x40) - lVar19));
        *puVar27 = *(undefined8 *)(lVar28 + -0x10);
        *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(lVar28 + -8);
        iVar5 = (*(int **)(param_1 + 0x10))[2];
        if (iVar5 == 0) goto joined_r0x005f84d8;
        if (iVar5 == 1) {
          uVar8 = (uint)(**(int **)(param_1 + 0x10) != 0);
          goto joined_r0x005f8110;
        }
        if (uVar21 == 1) goto LAB_005f8354;
        goto LAB_005f8364;
      }
LAB_005f8224:
                    /* try { // try from 005f8230 to 006f84f3 has its CatchHandler @ 005f8230
                       catch() { ... } // from try @ 005f8230 with catch @ 005f8230
                       catch() { ... } // from try @ 005f854c with catch @ 005f8230
                       catch() { ... } // from try @ 005f868c with catch @ 005f8230 */
      puVar11 = (undefined8 *)FUN_005f4ed4(param_1,pdVar20,0xd);
      if (*(int *)(puVar11 + 1) != 0) {
        uVar10 = FUN_005f4ed4(param_1,pdVar15,0xd);
        iVar5 = FUN_005eee84(puVar11,uVar10);
        if (iVar5 != 0) {
          puVar27 = *(undefined8 **)(param_1 + 0x10);
          lVar19 = *(long *)(param_1 + 0x40);
          *puVar27 = *puVar11;
          *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar11 + 1);
          lVar28 = *(long *)(param_1 + 0x10);
          *(double *)(lVar28 + 0x10) = *pdVar20;
          *(int *)(lVar28 + 0x18) = *(int *)pdVar30;
          lVar28 = *(long *)(param_1 + 0x10);
          *(double *)(lVar28 + 0x20) = *pdVar15;
          *(int *)(lVar28 + 0x28) = *(int *)pdVar36;
          lVar28 = *(long *)(param_1 + 0x10);
          if (*(long *)(param_1 + 0x38) - lVar28 < 0x31) {
            FUN_005ebbb8(param_1,3);
            lVar28 = *(long *)(param_1 + 0x10);
          }
          *(long *)(param_1 + 0x10) = lVar28 + 0x30;
          uVar8 = 1;
          FUN_005ec63c(param_1,lVar28,1);
          lVar28 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar28 + -0x10;
          puVar27 = (undefined8 *)((long)puVar27 + (*(long *)(param_1 + 0x40) - lVar19));
          *puVar27 = *(undefined8 *)(lVar28 + -0x10);
          *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(lVar28 + -8);
          iVar5 = (*(int **)(param_1 + 0x10))[2];
          if (iVar5 != 0) {
            if (iVar5 == 1) {
              bVar4 = **(int **)(param_1 + 0x10) == 0;
              goto joined_r0x005f832c;
            }
            goto joined_r0x005f84d8;
          }
          goto joined_r0x005f8110;
        }
      }
LAB_005f8334:
      uVar8 = FUN_005eb684(param_1,pdVar15,pdVar20);
    }
joined_r0x005f8110:
    if (uVar8 == uVar21) {
LAB_005f8354:
      puVar38 = puVar38 + (int)((*puVar38 >> 0xe) - 0x1ffff);
    }
LAB_005f8364:
    lVar28 = *(long *)(param_1 + 0x18);
    puVar38 = puVar38 + 1;
    goto LAB_005f6c00;
  case 0x1a:
    iVar5 = *(int *)(lVar28 + uVar25 * 0x10 + 8);
    if (iVar5 == 0) {
      uVar21 = 1;
    }
    else if (iVar5 == 1) {
      uVar21 = (uint)(*(uint *)pdVar15 == 0);
    }
    else {
      uVar21 = 0;
    }
    if ((uVar8 >> 0xe & 0x1ff) != uVar21) {
      puVar38 = puVar38 + (int)((*puVar38 >> 0xe) - 0x1ffff);
    }
    puVar38 = puVar38 + 1;
    goto LAB_005f6c00;
  case 0x1b:
    pdVar20 = (double *)(lVar28 + (ulong)(uVar8 >> 0x17) * 0x10);
    iVar5 = *(int *)(pdVar20 + 1);
    if (iVar5 == 0) {
      uVar21 = 1;
    }
    else if (iVar5 == 1) {
                    /* catch() { ... } // from try @ 005f68e4 with catch @ 005f6eb0 */
                    /* catch() { ... } // from try @ 005f6780 with catch @ 005f6eb4 */
      uVar21 = (uint)(*(int *)pdVar20 == 0);
    }
    else {
      uVar21 = 0;
    }
    if ((uVar8 >> 0xe & 0x1ff) != uVar21) {
      *pdVar15 = *pdVar20;
      *(int *)(lVar28 + uVar25 * 0x10 + 8) = iVar5;
      puVar38 = puVar38 + (int)((*puVar38 >> 0xe) - 0x1ffff);
    }
    puVar38 = puVar38 + 1;
    goto LAB_005f6c00;
  case 0x1c:
    uVar21 = uVar8 >> 0xe & 0x1ff;
    if (uVar8 >> 0x17 != 0) {
      *(double **)(param_1 + 0x10) = pdVar15 + (ulong)(uVar8 >> 0x17) * 2;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    iVar5 = FUN_005ebcf4(param_1,pdVar15,uVar21 - 1);
    if (iVar5 != 1) {
      if (iVar5 != 0) goto LAB_005f8608;
      local_a4 = local_a4 + 1;
      goto LAB_005f6bb4;
    }
    if (uVar21 != 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    }
    lVar28 = *(long *)(param_1 + 0x18);
    goto LAB_005f6c00;
  case 0x1d:
    if (uVar8 >> 0x17 != 0) {
      *(double **)(param_1 + 0x10) = pdVar15 + (ulong)(uVar8 >> 0x17) * 2;
    }
    *(uint **)(param_1 + 0x30) = puVar38;
    iVar5 = FUN_005ebcf4(param_1,pdVar15,0xffffffff);
    if (iVar5 == 1) {
      lVar28 = *(long *)(param_1 + 0x18);
      goto LAB_005f6c00;
    }
    if (iVar5 != 0) goto LAB_005f8608;
    plVar32 = *(long **)(param_1 + 0x28);
    puVar27 = (undefined8 *)plVar32[-4];
    puVar11 = (undefined8 *)plVar32[1];
    puVar18 = puVar27;
    if (*(long *)(param_1 + 0x98) != 0) {
      FUN_005ed5f4(param_1,plVar32[-5]);
      puVar18 = (undefined8 *)plVar32[-4];
    }
    lVar28 = (long)puVar18 + (*plVar32 - (long)puVar11);
    plVar32[-5] = lVar28;
    *(long *)(param_1 + 0x18) = lVar28;
    if (puVar11 < *(undefined8 **)(param_1 + 0x10)) {
      do {
        *puVar27 = *puVar11;
        puVar18 = puVar11 + 1;
        puVar11 = puVar11 + 2;
        *(undefined4 *)(puVar27 + 1) = *(undefined4 *)puVar18;
        puVar27 = puVar27 + 2;
      } while (puVar11 < *(undefined8 **)(param_1 + 0x10));
    }
    *(undefined8 **)(param_1 + 0x10) = puVar27;
    plVar32[-3] = (long)puVar27;
    plVar32[-2] = *(long *)(param_1 + 0x30);
    *(int *)((long)plVar32 + -4) = *(int *)((long)plVar32 + -4) + 1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x28;
    goto LAB_005f6bb4;
  case 0x1e:
    goto switchD_005f6d04_caseD_1e;
  case 0x1f:
    dVar9 = pdVar15[4] + *pdVar15;
    if (pdVar15[4] <= 0.0) {
      if (dVar9 < pdVar15[2]) goto LAB_005f6c00;
    }
    else if (pdVar15[2] < dVar9) goto LAB_005f6c00;
    *pdVar15 = dVar9;
    *(undefined4 *)(lVar28 + uVar25 * 0x10 + 8) = 3;
    pdVar15[6] = dVar9;
    *(uint *)(pdVar15 + 7) = 3;
    puVar38 = puVar38 + (int)((uVar8 >> 0xe) - 0x1ffff);
    goto LAB_005f6c00;
  case 0x20:
    *(uint **)(param_1 + 0x30) = puVar38;
                    /* catch() { ... } // from try @ 005f6604 with catch @ 005f7190 */
    piVar26 = (int *)(lVar28 + uVar25 * 0x10 + 8);
                    /* catch() { ... } // from try @ 005f64bc with catch @ 005f7194 */
                    /* catch() { ... } // from try @ 005f64b4 with catch @ 005f7198 */
    if (*piVar26 == 3) {
LAB_005f71c8:
      if (*(uint *)(pdVar15 + 3) != 3) {
        if ((*(uint *)(pdVar15 + 3) != 4) ||
           (iVar5 = FUN_005eeefc((long)pdVar15[2] + 0x18,&local_80), iVar5 == 0)) {
                    /* try { // try from 005f80ac to 006f822f has its CatchHandler @ 005f7d54 */
          pcVar13 = "\'for\' limit must be a number";
          goto LAB_005f80b0;
        }
                    /* catch() { ... } // from try @ 005f6430 with catch @ 005f71f0 */
                    /* catch() { ... } // from try @ 005f63d8 with catch @ 005f71f4 */
        *(uint *)(pdVar15 + 3) = 3;
        pdVar15[2] = local_80;
      }
      if (*(uint *)(pdVar15 + 5) != 3) {
        if ((*(uint *)(pdVar15 + 5) != 4) ||
           (iVar5 = FUN_005eeefc((long)pdVar15[4] + 0x18,&local_80), iVar5 == 0)) {
                    /* catch() { ... } // from try @ 005f8544 with catch @ 005f863c */
                    /* catch() { ... } // from try @ 005f8520 with catch @ 005f8640 */
          FUN_005eb320(param_1,"\'for\' step must be a number");
          goto LAB_005f864c;
        }
        *(uint *)(pdVar15 + 5) = 3;
        pdVar15[4] = local_80;
                    /* catch() { ... } // from try @ 005f624c with catch @ 005f7238 */
      }
    }
    else {
                    /* catch() { ... } // from try @ 005f6464 with catch @ 005f719c */
      if ((*piVar26 == 4) && (iVar5 = FUN_005eeefc((long)*pdVar15 + 0x18,&local_80), iVar5 != 0)) {
        *pdVar15 = local_80;
        *piVar26 = 3;
        goto LAB_005f71c8;
      }
      pcVar13 = "\'for\' initial value must be a number";
LAB_005f80b0:
                    /* catch() { ... } // from try @ 005f8074 with catch @ 005f80b0 */
                    /* catch() { ... } // from try @ 005f7e9c with catch @ 005f80b4 */
      FUN_005eb320(param_1,pcVar13);
    }
    *pdVar15 = *pdVar15 - pdVar15[4];
    *piVar26 = 3;
    puVar38 = puVar38 + (int)((uVar8 >> 0xe) - 0x1ffff);
    goto LAB_005f6c00;
  case 0x21:
                    /* catch() { ... } // from try @ 005f5ee0 with catch @ 005f733c */
                    /* catch() { ... } // from try @ 005f5ed8 with catch @ 005f7340 */
                    /* catch() { ... } // from try @ 005f5e64 with catch @ 005f7344 */
    pdVar15[10] = pdVar15[4];
    *(uint *)(pdVar15 + 0xb) = *(uint *)(pdVar15 + 5);
                    /* catch() { ... } // from try @ 005f5d98 with catch @ 005f7358 */
    pdVar15[8] = pdVar15[2];
    *(uint *)(pdVar15 + 9) = *(uint *)(pdVar15 + 3);
    pdVar15[6] = *pdVar15;
                    /* catch() { ... } // from try @ 005f6928 with catch @ 005f736c
                       catch() { ... } // from try @ 005f6a3c with catch @ 005f736c */
                    /* catch() { ... } // from try @ 005f64d0 with catch @ 005f7378
                       catch() { ... } // from try @ 005f65e4 with catch @ 005f7378 */
    *(uint *)(pdVar15 + 7) = *(uint *)(lVar28 + uVar25 * 0x10 + 8);
                    /* catch() { ... } // from try @ 005f6260 with catch @ 005f7384
                       catch() { ... } // from try @ 005f6374 with catch @ 005f7384 */
    *(double **)(param_1 + 0x10) = pdVar15 + 0xc;
    *(uint **)(param_1 + 0x30) = puVar38;
    FUN_005ec63c(param_1,pdVar15 + 6,uVar8 >> 0xe & 0x1ff);
                    /* catch() { ... } // from try @ 005f5ef4 with catch @ 005f7390
                       catch() { ... } // from try @ 005f5f38 with catch @ 005f7390 */
    lVar28 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    lVar19 = lVar28 + uVar25 * 0x10;
    if (*(int *)(lVar19 + 0x38) != 0) {
      *(int *)(lVar19 + 0x28) = *(int *)(lVar19 + 0x38);
      *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(lVar19 + 0x30);
      puVar38 = puVar38 + (int)((*puVar38 >> 0xe) - 0x1ffff);
    }
    puVar38 = puVar38 + 1;
    goto LAB_005f6c00;
  case 0x22:
    uVar21 = uVar8 >> 0x17;
    uVar8 = uVar8 >> 0xe & 0x1ff;
    if (uVar21 == 0) {
      uVar21 = (int)((ulong)(*(long *)(param_1 + 0x10) - (long)pdVar15) >> 4) - 1;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    }
    if (uVar8 == 0) {
                    /* try { // try from 005f7a50 to 006f7a53 has its CatchHandler @ 005f7a60 */
      uVar8 = puVar37[1];
      puVar38 = puVar37 + 2;
    }
    if (*(int *)(lVar28 + uVar25 * 0x10 + 8) == 5) {
      dVar9 = *pdVar15;
      iVar5 = uVar21 + uVar8 * 0x32 + -0x32;
      if (*(int *)((long)dVar9 + 0x38) < iVar5) {
        FUN_005f3a34(param_1,dVar9,iVar5);
      }
                    /* catch() { ... } // from try @ 005f6ae0 with catch @ 005f6e10 */
                    /* catch() { ... } // from try @ 005f6688 with catch @ 005f6e14 */
      if (0 < (int)uVar21) {
                    /* catch() { ... } // from try @ 005f640c with catch @ 005f6e18 */
                    /* catch() { ... } // from try @ 005f6a18 with catch @ 005f6e1c */
        lVar19 = (long)(int)uVar21 + 1;
        piVar26 = (int *)(lVar28 + (uVar25 * 4 + (long)(int)uVar21 * 4) * 4 + 8);
        do {
                    /* catch() { ... } // from try @ 005f65c0 with catch @ 005f6e30 */
          puVar11 = (undefined8 *)FUN_005f49e8(param_1,dVar9,iVar5);
                    /* catch() { ... } // from try @ 005f6350 with catch @ 005f6e44 */
          *puVar11 = *(undefined8 *)(piVar26 + -2);
          *(int *)(puVar11 + 1) = *piVar26;
                    /* catch() { ... } // from try @ 005f6bfc with catch @ 005f6e58 */
                    /* catch() { ... } // from try @ 005f6988 with catch @ 005f6e5c */
          if (((3 < *piVar26) && ((*(byte *)(*(long *)(piVar26 + -2) + 9) & 3) != 0)) &&
             ((*(byte *)((long)dVar9 + 9) >> 2 & 1) != 0)) {
            FUN_005ee46c(param_1,dVar9);
          }
                    /* try { // try from 005f6e84 to 006f769b has its CatchHandler @ 005f79a4 */
          lVar19 = lVar19 + -1;
          piVar26 = piVar26 + -4;
          iVar5 = iVar5 + -1;
        } while (1 < lVar19);
      }
    }
    goto LAB_005f6c00;
  case 0x23:
    FUN_005ed5f4(param_1,pdVar15);
    goto LAB_005f6c00;
  case 0x24:
    lVar19 = *(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0x20) + (ulong)(uVar8 >> 0xe) * 8);
    bVar2 = *(byte *)(lVar19 + 0x70);
    uVar29 = (ulong)bVar2;
    dVar9 = (double)FUN_005ed424(param_1,uVar29,*(undefined8 *)(lVar16 + 0x18));
    *(long *)((long)dVar9 + 0x20) = lVar19;
    if (bVar2 != 0) {
      puVar11 = (undefined8 *)((long)dVar9 + 0x28);
      do {
        uVar17 = (ulong)(*puVar38 >> 0x17);
        if ((*puVar38 & 0x3f) == 4) {
          uVar10 = *(undefined8 *)(lVar16 + uVar17 * 8 + 0x28);
        }
        else {
          uVar10 = FUN_005ed504(param_1,lVar28 + uVar17 * 0x10);
        }
        *puVar11 = uVar10;
        uVar29 = uVar29 - 1;
        puVar38 = puVar38 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar29 != 0);
    }
    *pdVar15 = dVar9;
    *(undefined4 *)(lVar28 + uVar25 * 0x10 + 8) = 6;
    *(uint **)(param_1 + 0x30) = puVar38;
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78)
       ) {
      FUN_005edcb0(param_1);
    }
    lVar28 = *(long *)(param_1 + 0x18);
    goto LAB_005f6c00;
  case 0x25:
    plVar32 = *(long **)(param_1 + 0x28);
    uVar29 = (((*plVar32 - plVar32[1]) * 0x10000000 >> 0x20) -
             (ulong)*(byte *)(*(long *)(lVar16 + 0x20) + 0x71)) - 1;
    if (uVar8 >> 0x17 == 0) {
                    /* catch() { ... } // from try @ 005f7a50 with catch @ 005f7a60 */
                    /* catch() { ... } // from try @ 005f79f4 with catch @ 005f7a64 */
      *(uint **)(param_1 + 0x30) = puVar38;
      uVar8 = (uint)uVar29;
      if (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x10) <= (long)(int)(uVar8 << 4)) {
        FUN_005ebbb8(param_1,uVar29 & 0xffffffff);
      }
      lVar28 = *(long *)(param_1 + 0x18);
                    /* try { // try from 005f7a88 to 006f7a8f has its CatchHandler @ 005f7a94 */
      pdVar15 = (double *)(lVar28 + uVar25 * 0x10);
                    /* catch() { ... } // from try @ 005f7a88 with catch @ 005f7a94 */
      *(double **)(param_1 + 0x10) = pdVar15 + (long)(int)uVar8 * 2;
                    /* catch() { ... } // from try @ 005f76d8 with catch @ 005f7a98 */
    }
    else {
      uVar8 = (uVar8 >> 0x17) - 1;
    }
    if (0 < (int)uVar8) {
      uVar25 = 0;
      lVar19 = uVar29 * -0x10;
      pdVar15 = pdVar15 + 1;
      do {
        if ((long)uVar25 < (long)uVar29) {
          lVar23 = *plVar32;
                    /* try { // try from 005f7abc to 006f7ac3 has its CatchHandler @ 005f7acc */
          pdVar15[-1] = *(double *)(lVar23 + lVar19);
          uVar21 = *(uint *)((double *)(lVar23 + lVar19) + 1);
                    /* catch() { ... } // from try @ 005f7abc with catch @ 005f7acc */
        }
        else {
                    /* try { // try from 005f7ad0 to 006f7b37 has its CatchHandler @ 005f7ad0
                       catch(type#1 @ 00000000) { ... } // from try @ 005f7ad0 with catch @ 005f7ad0
                       catch(type#1 @ 00000000) { ... } // from try @ 005f7b3c with catch @ 005f7ad0
                       catch(type#1 @ 00000000) { ... } // from try @ 005f7d48 with catch @ 005f7ad0
                        */
          uVar21 = 0;
        }
        uVar25 = uVar25 + 1;
        *(uint *)pdVar15 = uVar21;
        lVar19 = lVar19 + 0x10;
        pdVar15 = pdVar15 + 2;
      } while (uVar8 != uVar25);
    }
    goto LAB_005f6c00;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x10);
  lVar23 = *(long *)(param_1 + 0x40);
  *puVar27 = *puVar11;
  *(int *)(puVar27 + 1) = *piVar26;
  lVar28 = *(long *)(param_1 + 0x10);
  *(double *)(lVar28 + 0x10) = *pdVar20;
  *(int *)(lVar28 + 0x18) = *(int *)pdVar36;
  lVar28 = *(long *)(param_1 + 0x10);
  *(double *)(lVar28 + 0x20) = *pdVar30;
  *(undefined4 *)(lVar28 + 0x28) = *(undefined4 *)(lVar19 + uVar29 * 0x10 + 8);
  lVar28 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 005f7f20 with catch @ 005f8050 */
  if (*(long *)(param_1 + 0x38) - lVar28 < 0x31) {
    FUN_005ebbb8(param_1,3);
    lVar28 = *(long *)(param_1 + 0x10);
  }
                    /* try { // try from 005f8074 to 006f80ab has its CatchHandler @ 005f80b0 */
  *(long *)(param_1 + 0x10) = lVar28 + 0x30;
  FUN_005ec63c(param_1,lVar28,1);
                    /* catch() { ... } // from try @ 005f7e4c with catch @ 005f8080 */
  lVar28 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar28 + -0x10;
  puVar11 = (undefined8 *)((long)pdVar15 + (*(long *)(param_1 + 0x40) - lVar23));
  *puVar11 = *(undefined8 *)(lVar28 + -0x10);
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(lVar28 + -8);
LAB_005f6bd8:
  lVar28 = *(long *)(param_1 + 0x18);
  goto LAB_005f6c00;
switchD_005f6d04_caseD_1e:
  if (uVar8 >> 0x17 != 0) {
    *(double **)(param_1 + 0x10) = pdVar15 + (ulong)(uVar8 >> 0x17) * 2 + -2;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
                    /* try { // try from 005f8520 to 006f852b has its CatchHandler @ 005f8640 */
    FUN_005ed5f4(param_1,lVar28);
  }
  *(uint **)(param_1 + 0x30) = puVar38;
  iVar5 = FUN_005ec3a4(param_1,pdVar15);
  local_a4 = local_a4 + -1;
                    /* try { // try from 005f8544 to 006f854b has its CatchHandler @ 005f863c */
  if (local_a4 == 0) {
LAB_005f8608:
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
LAB_005f864c:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005f854c to 006f865b has its CatchHandler @ 005f8230 */
  if (iVar5 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  }
  goto LAB_005f6bb4;
}


