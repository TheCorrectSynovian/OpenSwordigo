/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00610538
 * Function: FUN_00610538
 * Signature: undefined FUN_00610538(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00610538(uint *param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulong uVar26;
  ulong uVar27;
  void *pvVar28;
  undefined8 uVar29;
  long lVar30;
  uint *puVar31;
  undefined8 *puVar32;
  uint *puVar33;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  uint *puVar37;
  SPODMesh *pSVar38;
  long lVar39;
  long lVar40;
  uint *puVar41;
  undefined8 *puVar42;
  uint uVar43;
  uint *puVar44;
  uint uVar45;
  uint local_9c;
  uint uStack_98;
  uint local_6c;
  long local_68;
  
                    /* try { // try from 00610550 to 0071055b has its CatchHandler @ 006110ec */
  lVar8 = tpidr_el0;
                    /* try { // try from 0061055c to 00710567 has its CatchHandler @ 0061109c */
  local_68 = *(long *)(lVar8 + 0x28);
  uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
  uVar22 = _UNK_0069b468;
  uVar21 = _DAT_0069b460;
  if ((uVar26 & 1) == 0) {
LAB_00612808:
    bVar25 = false;
LAB_0061280c:
                    /* try { // try from 0061280c to 00712833 has its CatchHandler @ 00612868 */
    if (*(long *)(lVar8 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar25);
  }
                    /* try { // try from 00610588 to 007105af has its CatchHandler @ 006110ec */
  uVar45 = 0;
  uVar7 = 0;
  local_9c = 0;
  uStack_98 = 0;
  uVar10 = 0;
  uVar12 = 0;
LAB_006105b4:
  uVar9 = local_6c;
  uVar43 = local_6c >> 0x10;
  uVar6 = local_6c >> 8;
  uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
  if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* try { // try from 006105e8 to 007105ef has its CatchHandler @ 00611010 */
  uVar43 = uVar9 & 0xff000000 | (uVar43 & 0xff) << 0x10 | (uVar6 & 0xff) << 8 | uVar9 & 0xff;
                    /* try { // try from 006105f8 to 007105ff has its CatchHandler @ 00610fac */
  switch(uVar43) {
  case 2000:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    bVar25 = (uVar26 & 1) != 0;
    if (bVar25) {
      *param_1 = local_6c;
    }
                    /* catch() { ... } // from try @ 00612514 with catch @ 006125d8 */
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    bVar5 = (uVar26 & 1) != 0;
    if (bVar5) {
                    /* catch() { ... } // from try @ 006124c4 with catch @ 006125e0 */
                    /* catch() { ... } // from try @ 0061247c with catch @ 006125e8 */
      param_1[1] = local_6c;
    }
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if (((uVar26 & 1) != 0) && (param_1[2] = local_6c, bVar25 && bVar5)) break;
    goto LAB_00612808;
  case 0x7d1:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    bVar25 = (uVar26 & 1) == 0;
    if (!bVar25) {
                    /* try { // try from 00611b38 to 00711b4b has its CatchHandler @ 00611cf0 */
      param_1[3] = local_6c;
    }
                    /* catch() { ... } // from try @ 0061242c with catch @ 006125f8 */
                    /* try { // try from 00612600 to 0071275f has its CatchHandler @ 00612780 */
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* catch() { ... } // from try @ 006124f0 with catch @ 0061260c */
    bVar5 = (uVar26 & 1) == 0;
    if (!bVar5) {
      param_1[4] = local_6c;
                    /* catch() { ... } // from try @ 00612458 with catch @ 0061261c */
    }
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if (((uVar26 & 1) == 0) || (param_1[5] = local_6c, bVar25 || bVar5)) goto LAB_00612808;
    break;
  case 0x7d2:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
    param_1[6] = local_6c;
    if (local_6c != 0) {
                    /* catch() { ... } // from try @ 00610550 with catch @ 006110ec
                       catch() { ... } // from try @ 00610588 with catch @ 006110ec */
      pvVar28 = calloc((ulong)local_6c,0x18);
                    /* catch() { ... } // from try @ 00610868 with catch @ 006110f0 */
      *(void **)(param_1 + 8) = pvVar28;
                    /* catch() { ... } // from try @ 00610854 with catch @ 006110f4 */
      if (pvVar28 == (void *)0x0) {
        bVar25 = false;
                    /* catch() { ... } // from try @ 006107bc with catch @ 006110f8 */
        goto LAB_0061280c;
      }
    }
    break;
  case 0x7d3:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
    param_1[10] = local_6c;
    if (local_6c != 0) {
      pvVar28 = calloc((ulong)local_6c,0x28);
      *(void **)(param_1 + 0xc) = pvVar28;
      if (pvVar28 == (void *)0x0) {
        bVar25 = false;
        goto LAB_0061280c;
      }
    }
    break;
  case 0x7d4:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
    param_1[0xe] = local_6c;
    if (local_6c != 0) {
      pvVar28 = calloc((ulong)local_6c,0x158);
      *(void **)(param_1 + 0x10) = pvVar28;
      if (pvVar28 == (void *)0x0) {
        bVar25 = false;
                    /* catch() { ... } // from try @ 00610050 with catch @ 00610adc */
        goto LAB_0061280c;
      }
    }
    break;
  case 0x7d5:
                    /* try { // try from 00611b4c to 00711c13 has its CatchHandler @ 00611a84 */
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
    param_1[0x12] = local_6c;
    if (local_6c != 0) {
      pvVar28 = calloc((ulong)local_6c,0x60);
      *(void **)(param_1 + 0x14) = pvVar28;
      if (pvVar28 == (void *)0x0) {
        bVar25 = false;
        goto LAB_0061280c;
      }
    }
    break;
  case 0x7d6:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* try { // try from 00612368 to 0071238f has its CatchHandler @ 00612398 */
    param_1[0x13] = local_6c;
    break;
  case 0x7d7:
                    /* try { // try from 00611144 to 0071125f has its CatchHandler @ 0060f050 */
                    /* catch() { ... } // from try @ 00610488 with catch @ 00611148 */
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* catch() { ... } // from try @ 0060f740 with catch @ 00611158 */
    param_1[0x16] = local_6c;
                    /* catch() { ... } // from try @ 006108c0 with catch @ 00611160 */
    if (local_6c != 0) {
                    /* catch() { ... } // from try @ 0060f818 with catch @ 00611164 */
      pvVar28 = calloc((ulong)local_6c,8);
      *(void **)(param_1 + 0x18) = pvVar28;
      if (pvVar28 == (void *)0x0) {
        bVar25 = false;
        goto LAB_0061280c;
      }
    }
    break;
  case 0x7d8:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* try { // try from 00612390 to 0071239b has its CatchHandler @ 0061212c */
    param_1[0x1a] = local_6c;
    if (local_6c != 0) {
                    /* catch() { ... } // from try @ 006122bc with catch @ 00612398
                       catch() { ... } // from try @ 00612368 with catch @ 00612398 */
      pvVar28 = calloc((ulong)local_6c,0xb0);
      *(void **)(param_1 + 0x1c) = pvVar28;
      if (pvVar28 == (void *)0x0) {
        bVar25 = false;
        goto LAB_0061280c;
      }
    }
    break;
  case 0x7d9:
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
    param_1[0x1e] = local_6c;
    break;
  case 0x7da:
    lVar39 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 0061253c with catch @ 006123bc
                       catch() { ... } // from try @ 00612760 with catch @ 006123bc */
    puVar42 = (undefined8 *)(lVar39 + (ulong)uVar12 * 0x18 + 0x10);
    *puVar42 = 0;
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) != 0) {
      uVar43 = uVar12 + 1;
      puVar31 = (uint *)(lVar39 + (ulong)uVar12 * 0x18);
      do {
        uVar9 = local_6c;
        uVar12 = local_6c >> 0x10;
        uVar6 = local_6c >> 8;
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* try { // try from 0061242c to 00712453 has its CatchHandler @ 006125f8 */
        if ((uVar26 & 1) == 0) break;
        uVar6 = uVar9 & 0xff000000 | (uVar12 & 0xff) << 0x10 | (uVar6 & 0xff) << 8 | uVar9 & 0xff;
                    /* try { // try from 00612458 to 0071245b has its CatchHandler @ 0061261c */
        switch(uVar6) {
        case 8000:
                    /* try { // try from 0061247c to 007124a3 has its CatchHandler @ 006125e8 */
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          *puVar31 = local_6c;
          break;
        case 0x1f41:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          puVar31[1] = local_6c;
          break;
        case 0x1f42:
                    /* try { // try from 0061253c to 007125ff has its CatchHandler @ 006123bc */
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          puVar31[2] = local_6c;
          break;
        case 0x1f43:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          puVar31[3] = local_6c;
          break;
        case 0x1f44:
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
                    /* try { // try from 006124c4 to 007124eb has its CatchHandler @ 006125e0 */
            puVar34 = calloc(uVar26,4);
            *puVar42 = puVar34;
            if (puVar34 == (uint *)0x0) goto LAB_006128a4;
            bVar25 = true;
            do {
                    /* try { // try from 006124f0 to 007124f3 has its CatchHandler @ 0061260c */
              uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
              bVar5 = (uVar27 & 1) != 0;
              if (bVar5) {
                *puVar34 = local_6c;
              }
              bVar25 = (bool)(bVar25 & bVar5);
                    /* try { // try from 00612514 to 0071253b has its CatchHandler @ 006125d8 */
              uVar26 = uVar26 - 1;
              puVar34 = puVar34 + 1;
            } while (uVar26 != 0);
            if (!bVar25) goto LAB_00612808;
          }
          break;
        default:
          uVar12 = uVar43;
          if (uVar6 == 0x800007da) goto LAB_006126ec;
          uVar26 = (**(code **)(*param_2 + 0x18))(param_2);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) break;
      } while( true );
    }
    goto LAB_00612808;
  case 0x7db:
    lVar39 = *(long *)(param_1 + 0xc);
                    /* try { // try from 006107bc to 007107c3 has its CatchHandler @ 006110f8 */
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) != 0) {
      uVar43 = uStack_98 + 1;
      puVar31 = (uint *)(lVar39 + (ulong)uStack_98 * 0x28);
                    /* try { // try from 006107e4 to 0071080b has its CatchHandler @ 0061100c */
      do {
        uVar13 = local_6c;
        uVar6 = local_6c >> 0x10;
        uVar9 = local_6c >> 8;
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) break;
                    /* try { // try from 00610854 to 0071085b has its CatchHandler @ 006110f4 */
        uVar6 = uVar13 & 0xff000000 | (uVar6 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar13 & 0xff;
                    /* try { // try from 00610868 to 00710873 has its CatchHandler @ 006110f0 */
        switch(uVar6) {
        case 7000:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          *puVar31 = local_6c;
          break;
        case 0x1b59:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* catch() { ... } // from try @ 0060fe28 with catch @ 0061095c */
          bVar25 = (uVar26 & 1) == 0;
          if (!bVar25) {
                    /* catch() { ... } // from try @ 0060fd98 with catch @ 0061096c */
            puVar31[1] = local_6c;
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar5 = (uVar26 & 1) == 0;
          if (!bVar5) {
            puVar31[2] = local_6c;
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if (((uVar26 & 1) == 0) || (puVar31[3] = local_6c, bVar25 || bVar5)) goto LAB_00612808;
          break;
        case 0x1b5a:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          puVar31[4] = local_6c;
          break;
        case 0x1b5b:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* try { // try from 00610990 to 00710b0b has its CatchHandler @ 0061142c */
          puVar31[5] = local_6c;
          break;
        case 0x1b5c:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          puVar31[6] = local_6c;
          break;
        case 0x1b5d:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          puVar31[7] = local_6c;
          break;
        case 0x1b5e:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* catch() { ... } // from try @ 0061017c with catch @ 00610a10 */
                    /* catch() { ... } // from try @ 00610160 with catch @ 00610a14 */
          puVar31[8] = local_6c;
          break;
        case 0x1b5f:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* catch() { ... } // from try @ 006101d4 with catch @ 006109bc */
                    /* catch() { ... } // from try @ 0060fad0 with catch @ 006109c0 */
          puVar31[9] = local_6c;
          break;
        default:
          uStack_98 = uVar43;
          if (uVar6 == 0x800007db) goto LAB_006126ec;
                    /* try { // try from 006108c0 to 007108d7 has its CatchHandler @ 00611160 */
                    /* try { // try from 006108d8 to 0071098f has its CatchHandler @ 0060f050 */
          uVar26 = (**(code **)(*param_2 + 0x18))
                             (param_2,local_6c & 0xff000000 | (local_6c >> 0x10 & 0xff) << 0x10 |
                                      (local_6c >> 8 & 0xff) << 8 | local_6c & 0xff);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
        }
                    /* catch() { ... } // from try @ 00610144 with catch @ 00610a88 */
                    /* catch() { ... } // from try @ 006100c0 with catch @ 00610a8c */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) break;
      } while( true );
    }
    goto LAB_00612808;
  case 0x7dc:
    lVar39 = *(long *)(param_1 + 0x10);
                    /* try { // try from 00610b0c to 00710b3b has its CatchHandler @ 0060f050 */
    pSVar38 = (SPODMesh *)(lVar39 + (ulong)uVar45 * 0x158);
                    /* catch() { ... } // from try @ 0060fe84 with catch @ 00610b18 */
    PVRTMatrixIdentityF((PVRTMATRIXf *)(pSVar38 + 0x114));
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) != 0) {
                    /* try { // try from 00610b3c to 00710c47 has its CatchHandler @ 0061142c */
                    /* catch() { ... } // from try @ 0060fe5c with catch @ 00610b48 */
      lVar39 = lVar39 + (ulong)uVar45 * 0x158;
                    /* catch() { ... } // from try @ 0060fc90 with catch @ 00610b4c */
                    /* catch() { ... } // from try @ 0060fc3c with catch @ 00610b50 */
                    /* catch() { ... } // from try @ 0060fa0c with catch @ 00610ba0 */
                    /* catch() { ... } // from try @ 0060f9ac with catch @ 00610ba4 */
      uVar43 = 0;
      plVar1 = (long *)(lVar39 + 0xe8);
LAB_00610be4:
      uVar13 = local_6c;
      uVar6 = local_6c >> 0x10;
      uVar9 = local_6c >> 8;
                    /* catch() { ... } // from try @ 0060f95c with catch @ 00610bf4 */
      uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
      uVar14 = local_6c;
      if ((uVar26 & 1) == 0) goto LAB_00612808;
                    /* catch() { ... } // from try @ 0060f8ec with catch @ 00610c1c */
      uVar6 = uVar13 & 0xff000000 | (uVar6 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar13 & 0xff;
                    /* try { // try from 00610c48 to 00710cff has its CatchHandler @ 0060f050 */
      switch(uVar6) {
      case 6000:
                    /* catch() { ... } // from try @ 0060f8c4 with catch @ 00610c4c */
                    /* catch() { ... } // from try @ 0060f84c with catch @ 00610c50 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* catch() { ... } // from try @ 0060fe70 with catch @ 00610c64
                       catch() { ... } // from try @ 0060feb0 with catch @ 00610c64 */
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        *(uint *)pSVar38 = local_6c;
        break;
      case 0x1771:
                    /* catch() { ... } // from try @ 0060fcd0 with catch @ 00610d2c */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        *(uint *)(lVar39 + 4) = local_6c;
        break;
      case 0x1772:
                    /* catch() { ... } // from try @ 0060f504 with catch @ 00610d64 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        *(uint *)(lVar39 + 8) = local_6c;
        if (local_6c != 0) {
          pvVar28 = calloc((ulong)local_6c,0x18);
          *(long *)(lVar39 + 0x98) = (long)pvVar28;
          if (pvVar28 == (void *)0x0) goto LAB_006128a4;
        }
        break;
      case 0x1773:
        uVar29 = 0x1773;
        bVar25 = true;
        lVar40 = lVar39 + 0x10;
        goto LAB_00610f58;
      case 0x1774:
        uVar26 = (ulong)(local_6c >> 2);
        if (local_6c >> 2 != 0) {
                    /* catch() { ... } // from try @ 0060f48c with catch @ 00610db4 */
          puVar31 = calloc(uVar26,4);
          *(uint **)(lVar39 + 0x28) = puVar31;
          if (puVar31 != (uint *)0x0) {
            bVar25 = true;
            do {
              uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
              bVar5 = (uVar27 & 1) != 0;
              if (bVar5) {
                *puVar31 = local_6c;
              }
                    /* catch() { ... } // from try @ 0060f404 with catch @ 00610e04 */
              bVar25 = (bool)(bVar25 & bVar5);
              uVar26 = uVar26 - 1;
              puVar31 = puVar31 + 1;
            } while (uVar26 != 0);
            goto LAB_00611048;
          }
          goto LAB_006128a4;
        }
        break;
      case 0x1775:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        *(uint *)(lVar39 + 0x30) = local_6c;
        break;
      case 0x1776:
        lVar30 = *plVar1;
                    /* catch() { ... } // from try @ 0060f290 with catch @ 00610ef4 */
        uVar29 = 0x1776;
        lVar40 = lVar39 + 0x38;
        goto LAB_00610f50;
      case 0x1777:
        lVar30 = *plVar1;
        uVar29 = 0x1777;
        lVar40 = lVar39 + 0x50;
        goto LAB_00610f50;
      case 0x1778:
        lVar30 = *plVar1;
        uVar29 = 0x1778;
        lVar40 = lVar39 + 0x68;
        goto LAB_00610f50;
      case 0x1779:
        lVar30 = *plVar1;
        uVar29 = 0x1779;
        lVar40 = lVar39 + 0x80;
        goto LAB_00610f50;
      case 0x177a:
        uVar26 = FUN_006128b0(*(long *)(lVar39 + 0x98) + (ulong)uVar43 * 0x18,param_2,0x177a,
                              *plVar1 == 0);
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        uVar43 = uVar43 + 1;
        break;
      case 0x177b:
        lVar30 = *plVar1;
        uVar29 = 0x177b;
        lVar40 = lVar39 + 0xa0;
        goto LAB_00610f50;
      case 0x177c:
        lVar30 = *plVar1;
        uVar29 = 0x177c;
        lVar40 = lVar39 + 0xb8;
                    /* catch() { ... } // from try @ 0060f388 with catch @ 00610e54 */
        goto LAB_00610f50;
      case 0x177d:
                    /* catch() { ... } // from try @ 00610684 with catch @ 00610f44 */
        lVar30 = *plVar1;
                    /* catch() { ... } // from try @ 00610770 with catch @ 00610f4c */
        uVar29 = 0x177d;
        lVar40 = lVar39 + 0xd0;
LAB_00610f50:
        bVar25 = lVar30 == 0;
LAB_00610f58:
        uVar26 = FUN_006128b0(lVar40,param_2,uVar29,bVar25);
joined_r0x00610c98:
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        break;
      case 0x177e:
        if (local_6c == 0) {
          pvVar28 = (void *)*plVar1;
        }
        else {
          pvVar28 = calloc((ulong)local_6c,1);
          *plVar1 = (long)pvVar28;
          if (pvVar28 == (void *)0x0) goto LAB_006128a4;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,pvVar28,uVar14);
        goto joined_r0x00610c98;
      case 0x177f:
        uVar26 = (ulong)(local_6c >> 2);
        if (local_6c >> 2 != 0) {
          puVar31 = calloc(uVar26,4);
          *(uint **)(lVar39 + 0xf0) = puVar31;
          if (puVar31 != (uint *)0x0) {
            bVar25 = true;
            do {
              uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
              bVar5 = (uVar27 & 1) != 0;
              if (bVar5) {
                *puVar31 = local_6c;
                    /* catch() { ... } // from try @ 0060f30c with catch @ 00610ea4 */
              }
              bVar25 = (bool)(bVar25 & bVar5);
              uVar26 = uVar26 - 1;
              puVar31 = puVar31 + 1;
            } while (uVar26 != 0);
            goto LAB_00611048;
          }
          goto LAB_006128a4;
        }
        break;
      case 0x1780:
        uVar26 = (ulong)(local_6c >> 2);
        if (local_6c >> 2 != 0) {
          puVar31 = calloc(uVar26,4);
                    /* catch() { ... } // from try @ 0060fd50 with catch @ 00610cdc
                       catch() { ... } // from try @ 0060fde0 with catch @ 00610cdc */
          *(uint **)(lVar39 + 0xf8) = puVar31;
          if (puVar31 != (uint *)0x0) {
            bVar25 = true;
            do {
              uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* try { // try from 00610d00 to 00711143 has its CatchHandler @ 0061142c */
              bVar5 = (uVar27 & 1) != 0;
              if (bVar5) {
                *puVar31 = local_6c;
              }
              bVar25 = (bool)(bVar25 & bVar5);
              uVar26 = uVar26 - 1;
              puVar31 = puVar31 + 1;
            } while (uVar26 != 0);
            goto LAB_00611048;
          }
          goto LAB_006128a4;
        }
        break;
      case 0x1781:
        uVar26 = (ulong)(local_6c >> 2);
        if (local_6c >> 2 != 0) {
          puVar31 = calloc(uVar26,4);
          *(uint **)(lVar39 + 0x100) = puVar31;
          if (puVar31 != (uint *)0x0) {
            bVar25 = true;
            do {
              uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* catch() { ... } // from try @ 00610758 with catch @ 00610fa8 */
              bVar5 = (uVar27 & 1) != 0;
              if (bVar5) {
                    /* catch() { ... } // from try @ 006105f8 with catch @ 00610fac */
                *puVar31 = local_6c;
              }
              bVar25 = (bool)(bVar25 & bVar5);
              uVar26 = uVar26 - 1;
              puVar31 = puVar31 + 1;
            } while (uVar26 != 0);
            goto LAB_00611048;
          }
          goto LAB_006128a4;
        }
        break;
      case 0x1782:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        *(uint *)(lVar39 + 0x108) = local_6c;
        break;
      case 0x1783:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) goto LAB_00612808;
        *(uint *)(lVar39 + 0x10c) = local_6c;
        break;
      case 0x1784:
        lVar40 = 0;
        bVar25 = true;
        do {
                    /* catch() { ... } // from try @ 006107e4 with catch @ 0061100c */
                    /* catch() { ... } // from try @ 006105e8 with catch @ 00611010 */
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar5 = (uVar26 & 1) != 0;
          if (bVar5) {
            *(uint *)(lVar39 + 0x114 + lVar40) = local_6c;
          }
          lVar40 = lVar40 + 4;
          bVar25 = (bool)(bVar25 & bVar5);
        } while (lVar40 != 0x40);
LAB_00611048:
        if (!bVar25) goto LAB_00612808;
        break;
      default:
        if (uVar6 != 0x800007dc) {
          uVar26 = (**(code **)(*param_2 + 0x18))(param_2,local_6c);
          goto joined_r0x00610c98;
        }
        if (uVar43 == *(uint *)(lVar39 + 8)) {
          PVRTFixInterleavedEndianness(pSVar38);
          uVar45 = uVar45 + 1;
          goto LAB_006126ec;
        }
        goto LAB_00612808;
      }
                    /* catch() { ... } // from try @ 0061055c with catch @ 0061109c */
      uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
      if ((uVar26 & 1) == 0) goto LAB_00612808;
      goto LAB_00610be4;
    }
    goto LAB_00612808;
  case 0x7dd:
    lVar39 = *(long *)(param_1 + 0x14);
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) != 0) {
      uVar17 = 0;
      uVar14 = 0;
      uVar6 = 0;
      uVar43 = uVar7 + 1;
      uVar20 = 0x3f800000;
      uVar19 = 0x3f800000;
      uVar16 = 0x3f800000;
      puVar37 = (uint *)(lVar39 + (ulong)uVar7 * 0x60);
      puVar31 = puVar37 + 6;
      puVar34 = puVar37 + 10;
                    /* try { // try from 00611c14 to 00711c27 has its CatchHandler @ 00611ca0 */
      puVar35 = puVar37 + 0xe;
                    /* try { // try from 00611c28 to 00711cc3 has its CatchHandler @ 00611a84 */
      puVar36 = puVar37 + 0x12;
      uVar18 = 0;
      uVar15 = 0;
      uVar9 = 0;
      bVar5 = false;
      uVar13 = 0x3f800000;
      do {
        uVar23 = local_6c;
        uVar7 = local_6c >> 0x10;
        uVar11 = local_6c >> 8;
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar24 = local_6c;
        if ((uVar26 & 1) == 0) break;
        uVar7 = uVar23 & 0xff000000 | (uVar7 & 0xff) << 0x10 | (uVar11 & 0xff) << 8 | uVar23 & 0xff;
                    /* catch() { ... } // from try @ 00611c14 with catch @ 00611ca0 */
        switch(uVar7) {
        case 5000:
                    /* try { // try from 00611cc4 to 00711d3b has its CatchHandler @ 00611d44 */
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if ((uVar26 & 1) == 0) goto LAB_00612808;
          *puVar37 = local_6c;
          break;
        case 0x1389:
          if (local_6c == 0) {
            pvVar28 = *(void **)(puVar37 + 2);
          }
          else {
                    /* try { // try from 00611ec8 to 00711f87 has its CatchHandler @ 00611d94 */
            pvVar28 = calloc((ulong)local_6c,1);
            *(void **)(puVar37 + 2) = pvVar28;
            if (pvVar28 == (void *)0x0) {
              bVar25 = false;
              goto LAB_0061280c;
            }
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,pvVar28,uVar24);
          goto joined_r0x00611d0c;
        case 0x138a:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          puVar41 = puVar37 + 4;
          goto joined_r0x00612084;
        case 0x138b:
                    /* catch() { ... } // from try @ 00611f88 with catch @ 00612080 */
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          puVar41 = puVar37 + 5;
joined_r0x00612084:
          if ((uVar26 & 1) == 0) goto LAB_00612808;
LAB_00612124:
          *puVar41 = local_6c;
          break;
        case 0x138c:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar25 = (uVar26 & 1) != 0;
          if (bVar25) {
            uVar6 = local_6c;
          }
                    /* try { // try from 006121b4 to 007121bb has its CatchHandler @ 00612344 */
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar5 = (uVar26 & 1) != 0;
          if (bVar5) {
            uVar14 = local_6c;
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if (((uVar26 & 1) != 0) && (uVar17 = local_6c, bVar25 && bVar5)) goto LAB_006122f8;
          goto LAB_00612808;
        case 0x138d:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar25 = (uVar26 & 1) != 0;
          if (bVar25) {
            uVar9 = local_6c;
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar5 = (uVar26 & 1) != 0;
          if (bVar5) {
            uVar15 = local_6c;
                    /* try { // try from 006121ec to 007121f3 has its CatchHandler @ 006122e8 */
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar3 = (uVar26 & 1) != 0;
          if (bVar3) {
            uVar18 = local_6c;
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* catch() { ... } // from try @ 006121ec with catch @ 006122e8 */
          if (((uVar26 & 1) != 0) && (uVar20 = local_6c, (bVar25 && bVar5) && bVar3))
          goto LAB_006122f8;
          goto LAB_00612808;
        case 0x138e:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar25 = (uVar26 & 1) == 0;
          if (!bVar25) {
            uVar13 = local_6c;
                    /* try { // try from 00611f88 to 00711f93 has its CatchHandler @ 00612080 */
          }
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          bVar5 = (uVar26 & 1) == 0;
          if (!bVar5) {
            uVar16 = local_6c;
                    /* try { // try from 00612224 to 0071222b has its CatchHandler @ 00612298 */
          }
                    /* catch() { ... } // from try @ 00612224 with catch @ 00612298 */
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
          if (((uVar26 & 1) == 0) || (uVar19 = local_6c, bVar25 || bVar5)) goto LAB_00612808;
LAB_006122f8:
          bVar5 = true;
          break;
        case 0x138f:
                    /* try { // try from 00611f94 to 00712053 has its CatchHandler @ 00611d94 */
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
            *(uint **)puVar34 = puVar41;
            bVar25 = false;
            if (puVar41 == (uint *)0x0) goto LAB_0061280c;
            bVar25 = true;
            do {
              uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
              bVar3 = (uVar27 & 1) != 0;
              if (bVar3) {
                *puVar41 = local_6c;
              }
              bVar25 = (bool)(bVar25 & bVar3);
              uVar26 = uVar26 - 1;
              puVar41 = puVar41 + 1;
            } while (uVar26 != 0);
LAB_00612194:
            if (!bVar25) goto LAB_00612808;
          }
          break;
        case 0x1390:
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
            *(uint **)puVar35 = puVar41;
            bVar25 = false;
            if (puVar41 != (uint *)0x0) {
              bVar25 = true;
              do {
                    /* catch() { ... } // from try @ 00611e20 with catch @ 006120d0 */
                uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                bVar3 = (uVar27 & 1) != 0;
                if (bVar3) {
                  *puVar41 = local_6c;
                }
                bVar25 = (bool)(bVar25 & bVar3);
                uVar26 = uVar26 - 1;
                puVar41 = puVar41 + 1;
              } while (uVar26 != 0);
              goto LAB_00612194;
            }
            goto LAB_0061280c;
          }
          break;
        case 0x1391:
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
                    /* catch() { ... } // from try @ 00611e48 with catch @ 00611d94
                       catch() { ... } // from try @ 00611ec8 with catch @ 00611d94
                       catch() { ... } // from try @ 00611f94 with catch @ 00611d94
                       catch() { ... } // from try @ 00612118 with catch @ 00611d94 */
            *(uint **)puVar36 = puVar41;
            bVar25 = false;
            if (puVar41 != (uint *)0x0) {
              bVar25 = true;
              do {
                uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                bVar3 = (uVar27 & 1) != 0;
                if (bVar3) {
                  *puVar41 = local_6c;
                }
                bVar25 = (bool)(bVar25 & bVar3);
                uVar26 = uVar26 - 1;
                puVar41 = puVar41 + 1;
              } while (uVar26 != 0);
              goto LAB_00612194;
            }
            goto LAB_0061280c;
          }
          break;
        case 0x1392:
          goto switchD_00611cbc_caseD_1392;
        case 0x1393:
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
            *(uint **)(puVar37 + 0x16) = puVar41;
            bVar25 = false;
            if (puVar41 != (uint *)0x0) {
              bVar25 = true;
              do {
                    /* try { // try from 00611e20 to 00711e47 has its CatchHandler @ 006120d0 */
                uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                bVar3 = (uVar27 & 1) != 0;
                if (bVar3) {
                  *puVar41 = local_6c;
                }
                bVar25 = (bool)(bVar25 & bVar3);
                    /* try { // try from 00611e48 to 00711ebf has its CatchHandler @ 00611d94 */
                uVar26 = uVar26 - 1;
                puVar41 = puVar41 + 1;
              } while (uVar26 != 0);
              goto LAB_00612194;
            }
            goto LAB_0061280c;
          }
          break;
        case 0x1394:
          uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* try { // try from 00612118 to 00712123 has its CatchHandler @ 00611d94 */
          puVar41 = puVar31;
          if ((uVar26 & 1) != 0) goto LAB_00612124;
          goto LAB_00612808;
        case 0x1395:
                    /* catch() { ... } // from try @ 0061222c with catch @ 0061212c
                       catch() { ... } // from try @ 00612334 with catch @ 0061212c
                       catch() { ... } // from try @ 00612390 with catch @ 0061212c */
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
            *(uint **)(puVar37 + 8) = puVar41;
            bVar25 = false;
            if (puVar41 != (uint *)0x0) {
              bVar25 = true;
              do {
                uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                bVar3 = (uVar27 & 1) != 0;
                if (bVar3) {
                    /* try { // try from 00612170 to 00712183 has its CatchHandler @ 00612338 */
                  *puVar41 = local_6c;
                }
                bVar25 = (bool)(bVar25 & bVar3);
                uVar26 = uVar26 - 1;
                puVar41 = puVar41 + 1;
              } while (uVar26 != 0);
              goto LAB_00612194;
            }
            goto LAB_0061280c;
          }
          break;
        case 0x1396:
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
            *(uint **)(puVar37 + 0xc) = puVar41;
            bVar25 = false;
            if (puVar41 != (uint *)0x0) {
              bVar25 = true;
              do {
                    /* catch() { ... } // from try @ 00611ec0 with catch @ 00612030 */
                uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                bVar3 = (uVar27 & 1) != 0;
                if (bVar3) {
                  *puVar41 = local_6c;
                }
                bVar25 = (bool)(bVar25 & bVar3);
                uVar26 = uVar26 - 1;
                puVar41 = puVar41 + 1;
              } while (uVar26 != 0);
              goto LAB_00612194;
            }
            goto LAB_0061280c;
          }
          break;
        case 0x1397:
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
            *(uint **)(puVar37 + 0x10) = puVar41;
            bVar25 = false;
            if (puVar41 != (uint *)0x0) {
              bVar25 = true;
              do {
                uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                bVar3 = (uVar27 & 1) != 0;
                if (bVar3) {
                  *puVar41 = local_6c;
                }
                bVar25 = (bool)(bVar25 & bVar3);
                uVar26 = uVar26 - 1;
                puVar41 = puVar41 + 1;
              } while (uVar26 != 0);
              goto LAB_00612194;
            }
            goto LAB_0061280c;
          }
          break;
        case 0x1398:
          uVar26 = (ulong)(local_6c >> 2);
          if (local_6c >> 2 != 0) {
            puVar41 = calloc(uVar26,4);
            *(uint **)(puVar37 + 0x14) = puVar41;
            bVar25 = false;
            if (puVar41 != (uint *)0x0) {
              bVar25 = true;
              do {
                    /* try { // try from 00611d3c to 00711d47 has its CatchHandler @ 00611a84 */
                    /* catch() { ... } // from try @ 00611cc4 with catch @ 00611d44 */
                uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                bVar3 = (uVar27 & 1) != 0;
                if (bVar3) {
                  *puVar41 = local_6c;
                }
                bVar25 = (bool)(bVar25 & bVar3);
                uVar26 = uVar26 - 1;
                puVar41 = puVar41 + 1;
              } while (uVar26 != 0);
              goto LAB_00612194;
            }
            goto LAB_0061280c;
          }
          break;
        default:
                    /* catch() { ... } // from try @ 00611b38 with catch @ 00611cf0 */
          if (uVar7 == 0x800007dd) goto LAB_0061270c;
switchD_00611cbc_caseD_1392:
          uVar26 = (**(code **)(*param_2 + 0x18))(param_2,local_6c);
joined_r0x00611d0c:
          if ((uVar26 & 1) == 0) goto LAB_00612808;
        }
                    /* try { // try from 00612334 to 00712367 has its CatchHandler @ 0061212c */
                    /* catch() { ... } // from try @ 00612170 with catch @ 00612338 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) == 0) break;
      } while( true );
    }
    goto LAB_00612808;
  case 0x7de:
    lVar39 = *(long *)(param_1 + 0x18);
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) != 0) {
                    /* try { // try from 006106c8 to 00710747 has its CatchHandler @ 006112cc */
      uVar43 = local_9c + 1;
      uVar26 = (ulong)local_9c;
      do {
        uVar13 = local_6c;
        uVar6 = local_6c >> 0x10;
        uVar9 = local_6c >> 8;
        uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar14 = local_6c;
        if ((uVar27 & 1) == 0) break;
        uVar6 = uVar13 & 0xff000000 | (uVar6 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar13 & 0xff;
        if (uVar6 == 4000) {
          if (local_6c == 0) {
            pvVar28 = *(void **)(lVar39 + uVar26 * 8);
          }
          else {
            pvVar28 = calloc((ulong)local_6c,1);
                    /* try { // try from 00610758 to 0071076b has its CatchHandler @ 00610fa8 */
            *(void **)(lVar39 + uVar26 * 8) = pvVar28;
            if (pvVar28 == (void *)0x0) {
              bVar25 = false;
              goto LAB_0061280c;
            }
          }
                    /* try { // try from 00610770 to 00710777 has its CatchHandler @ 00610f4c */
          uVar27 = (**(code **)(*param_2 + 0x10))(param_2,pvVar28,uVar14);
        }
        else {
          local_9c = uVar43;
          if (uVar6 == 0x800007de) goto LAB_006126ec;
          uVar27 = (**(code **)(*param_2 + 0x18))(param_2,local_6c);
        }
        if (((uVar27 & 1) == 0) ||
           (uVar27 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4), (uVar27 & 1) == 0)) break;
      } while( true );
    }
    goto LAB_00612808;
  case 0x7df:
    lVar39 = *(long *)(param_1 + 0x1c);
    lVar40 = lVar39 + (ulong)uVar10 * 0xb0;
    puVar41 = (uint *)(lVar40 + 8);
    puVar41[0] = 0xffffffff;
    puVar41[1] = 0xffffffff;
    puVar31 = (uint *)(lVar40 + 0x10);
    puVar31[0] = 0xffffffff;
    puVar31[1] = 0xffffffff;
    puVar34 = (uint *)(lVar40 + 0x18);
    puVar34[0] = 0xffffffff;
    puVar34[1] = 0xffffffff;
    puVar35 = (uint *)(lVar40 + 0x20);
    puVar35[0] = 0xffffffff;
    puVar35[1] = 0xffffffff;
    puVar36 = (uint *)(lVar40 + 0x28);
    puVar36[0] = 0xffffffff;
    puVar36[1] = 0xffffffff;
                    /* catch() { ... } // from try @ 0060f804 with catch @ 006111cc */
                    /* catch() { ... } // from try @ 0060f6b4 with catch @ 006111d8 */
    *(undefined8 *)(lVar40 + 0x78) = uVar22;
    *(undefined8 *)(lVar40 + 0x70) = uVar21;
    puVar44 = (uint *)(lVar40 + 0x80);
    puVar44[0] = 0x8006;
    puVar44[1] = 0x8006;
    puVar37 = (uint *)(lVar40 + 0x88);
    puVar37[0] = 0;
    puVar37[1] = 0;
    *(uint *)(lVar40 + 0xa8) = 0;
    *(undefined8 *)(lVar40 + 0x98) = 0;
    *(undefined8 *)(lVar40 + 0xa0) = 0;
    *(undefined8 *)(lVar40 + 0x90) = 0;
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) != 0) {
                    /* catch() { ... } // from try @ 0060f6a4 with catch @ 00611240 */
      uVar43 = uVar10 + 1;
                    /* try { // try from 00611260 to 007112c7 has its CatchHandler @ 0061142c */
      puVar42 = (undefined8 *)(lVar39 + (ulong)uVar10 * 0xb0);
                    /* try { // try from 006112c8 to 007113fb has its CatchHandler @ 0060f050 */
                    /* catch() { ... } // from try @ 0061047c with catch @ 006112cc
                       catch() { ... } // from try @ 00610490 with catch @ 006112cc
                       catch() { ... } // from try @ 006106c8 with catch @ 006112cc */
LAB_00611314:
      uVar9 = local_6c;
      uVar10 = local_6c >> 0x10;
      uVar6 = local_6c >> 8;
      uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
      uVar13 = local_6c;
      if ((uVar26 & 1) == 0) goto LAB_00612808;
      uVar6 = uVar9 & 0xff000000 | (uVar10 & 0xff) << 0x10 | (uVar6 & 0xff) << 8 | uVar9 & 0xff;
      switch(uVar6) {
      case 3000:
        if (local_6c != 0) {
          pvVar28 = calloc((ulong)local_6c,1);
          *puVar42 = pvVar28;
          if (pvVar28 != (void *)0x0) goto LAB_00611af8;
          bVar25 = false;
          goto LAB_0061280c;
        }
        pvVar28 = (void *)*puVar42;
        goto LAB_00611af8;
      case 0xbb9:
                    /* try { // try from 00611598 to 007115bf has its CatchHandler @ 006115c4 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) != 0) {
          *puVar41 = local_6c;
          goto LAB_0061181c;
        }
        goto LAB_00612808;
      case 0xbba:
                    /* try { // try from 00611424 to 00711443 has its CatchHandler @ 0060f050 */
                    /* catch() { ... } // from try @ 00610990 with catch @ 0061142c
                       catch() { ... } // from try @ 00610b3c with catch @ 0061142c
                       catch() { ... } // from try @ 00610d00 with catch @ 0061142c
                       catch() { ... } // from try @ 00611260 with catch @ 0061142c
                       catch() { ... } // from try @ 006113fc with catch @ 0061142c */
                    /* catch() { ... } // from try @ 0060f14c with catch @ 00611430 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(puVar42 + 6);
        break;
      case 0xbbb:
                    /* try { // try from 006115c0 to 0071163f has its CatchHandler @ 00611444 */
                    /* catch() { ... } // from try @ 00611598 with catch @ 006115c4 */
                    /* catch() { ... } // from try @ 006114a4 with catch @ 006115c8 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar2 = (uVar26 & 1) != 0;
        if ((bool)uVar2) {
          *(uint *)((long)puVar42 + 0x34) = local_6c;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar4 = (uVar26 & 1) != 0;
        if ((bool)uVar4) {
          *(uint *)(puVar42 + 7) = local_6c;
        }
                    /* try { // try from 00611a84 to 00711b37 has its CatchHandler @ 00611a84
                       catch() { ... } // from try @ 00611a84 with catch @ 00611a84
                       catch() { ... } // from try @ 00611b4c with catch @ 00611a84
                       catch() { ... } // from try @ 00611c28 with catch @ 00611a84
                       catch() { ... } // from try @ 00611d3c with catch @ 00611a84 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)((long)puVar42 + 0x3c);
        goto joined_r0x00611ac0;
      case 0xbbc:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar2 = (uVar26 & 1) != 0;
        if ((bool)uVar2) {
          *(uint *)(puVar42 + 8) = local_6c;
        }
                    /* catch() { ... } // from try @ 006116f4 with catch @ 00611880
                       catch() { ... } // from try @ 00611768 with catch @ 00611880
                       catch() { ... } // from try @ 006117d0 with catch @ 00611880 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar4 = (uVar26 & 1) != 0;
        if ((bool)uVar4) {
                    /* catch() { ... } // from try @ 0061173c with catch @ 0061188c
                       catch() { ... } // from try @ 006117a4 with catch @ 0061188c
                       catch() { ... } // from try @ 0061180c with catch @ 0061188c */
          *(uint *)((long)puVar42 + 0x44) = local_6c;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(puVar42 + 9);
        goto joined_r0x00611ac0;
      case 0xbbd:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar2 = (uVar26 & 1) != 0;
        if ((bool)uVar2) {
          *(uint *)((long)puVar42 + 0x4c) = local_6c;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        uVar4 = (uVar26 & 1) != 0;
        if ((bool)uVar4) {
          *(uint *)(puVar42 + 10) = local_6c;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)((long)puVar42 + 0x54);
joined_r0x00611ac0:
        if (((uVar26 & 1) != 0) && (*puVar33 = local_6c, (bool)(uVar2 & uVar4))) goto LAB_0061181c;
        goto LAB_00612808;
      case 0xbbe:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
                    /* catch() { ... } // from try @ 00611490 with catch @ 0061163c */
        puVar33 = (uint *)(puVar42 + 0xb);
        goto joined_r0x0061149c;
      case 0xbbf:
        if (local_6c != 0) {
          pvVar28 = calloc((ulong)local_6c,1);
          puVar32 = puVar42 + 0xc;
LAB_00611680:
          *puVar32 = pvVar28;
          if (pvVar28 != (void *)0x0) goto LAB_00611af8;
          bVar25 = false;
          goto LAB_0061280c;
        }
        pvVar28 = (void *)puVar42[0xc];
        goto LAB_00611af8;
      case 0xbc0:
        if (local_6c != 0) {
          pvVar28 = calloc((ulong)local_6c,1);
          puVar32 = puVar42 + 0xd;
          goto LAB_00611680;
        }
        pvVar28 = (void *)puVar42[0xd];
LAB_00611af8:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,pvVar28,uVar13);
joined_r0x006113c4:
        if ((uVar26 & 1) != 0) goto LAB_0061181c;
        goto LAB_00612808;
      case 0xbc1:
                    /* try { // try from 00611490 to 007114a3 has its CatchHandler @ 0061163c */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0xc);
joined_r0x0061149c:
        if ((uVar26 & 1) != 0) goto LAB_00611818;
        goto LAB_00612808;
      case 0xbc2:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = puVar31;
        break;
      case 0xbc3:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x14);
        break;
      case 0xbc4:
                    /* try { // try from 006114dc to 007114df has its CatchHandler @ 00611574 */
                    /* try { // try from 006114e0 to 00711597 has its CatchHandler @ 00611444 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = puVar34;
        break;
      case 0xbc5:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x1c);
        break;
      case 0xbc6:
                    /* catch() { ... } // from try @ 0060f1f8 with catch @ 006113d8 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = puVar35;
        break;
      case 0xbc7:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x24);
        break;
      case 0xbc8:
                    /* try { // try from 006113fc to 00711423 has its CatchHandler @ 0061142c */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = puVar36;
        break;
      case 0xbc9:
                    /* try { // try from 006116f4 to 0071171b has its CatchHandler @ 00611880 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x2c);
        break;
      case 0xbca:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) != 0) {
          *(uint *)(lVar40 + 0x70) = local_6c;
                    /* try { // try from 0061173c to 0071173f has its CatchHandler @ 0061188c */
          goto LAB_0061181c;
        }
        goto LAB_00612808;
      case 0xbcb:
                    /* try { // try from 006117d0 to 007117f7 has its CatchHandler @ 00611880 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x74);
        break;
      case 0xbcc:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x78);
        break;
      case 0xbcd:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x7c);
        break;
      case 0xbce:
                    /* try { // try from 006117a4 to 007117a7 has its CatchHandler @ 0061188c */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) != 0) {
          *puVar44 = local_6c;
          goto LAB_0061181c;
        }
        goto LAB_00612808;
      case 0xbcf:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)(lVar40 + 0x84);
        break;
      case 0xbd0:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        bVar25 = (uVar26 & 1) == 0;
        if (!bVar25) {
          *puVar37 = local_6c;
        }
                    /* try { // try from 006118ac to 007118d3 has its CatchHandler @ 006118dc */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        bVar5 = (uVar26 & 1) == 0;
        if (!bVar5) {
          *(uint *)((long)puVar42 + 0x8c) = local_6c;
                    /* try { // try from 006118d4 to 007118df has its CatchHandler @ 00611640 */
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        bVar3 = (uVar26 & 1) == 0;
        if (!bVar3) {
          *(uint *)(puVar42 + 0x12) = local_6c;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)((long)puVar42 + 0x94);
        goto joined_r0x006119ec;
      case 0xbd1:
                    /* catch() { ... } // from try @ 006114dc with catch @ 00611574 */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        bVar25 = (uVar26 & 1) == 0;
        if (!bVar25) {
          *(uint *)(puVar42 + 0x13) = local_6c;
        }
                    /* catch() { ... } // from try @ 006118ac with catch @ 006118dc */
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        bVar5 = (uVar26 & 1) == 0;
        if (!bVar5) {
          *(uint *)((long)puVar42 + 0x9c) = local_6c;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        bVar3 = (uVar26 & 1) == 0;
        if (!bVar3) {
          *(uint *)(puVar42 + 0x14) = local_6c;
        }
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        puVar33 = (uint *)((long)puVar42 + 0xa4);
joined_r0x006119ec:
        if (((uVar26 & 1) != 0) && (*puVar33 = local_6c, (!bVar25 && !bVar5) && !bVar3))
        goto LAB_0061181c;
        goto LAB_00612808;
      case 0xbd2:
        uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
        if ((uVar26 & 1) != 0) {
          *(uint *)(lVar40 + 0xa8) = local_6c;
          goto LAB_0061181c;
        }
        goto LAB_00612808;
      default:
        uVar10 = uVar43;
        if (uVar6 != 0x800007df) {
          uVar26 = (**(code **)(*param_2 + 0x18))(param_2,local_6c);
          goto joined_r0x006113c4;
        }
        goto LAB_006126ec;
      }
                    /* try { // try from 0061180c to 0071180f has its CatchHandler @ 0061188c */
      if ((uVar26 & 1) == 0) goto LAB_00612808;
LAB_00611818:
      *puVar33 = local_6c;
LAB_0061181c:
      uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
      if ((uVar26 & 1) == 0) goto LAB_00612808;
      goto LAB_00611314;
    }
    goto LAB_00612808;
  case 0x7e0:
                    /* try { // try from 00610684 to 007106ab has its CatchHandler @ 00610f44 */
    uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
    param_1[0x1f] = local_6c;
    break;
  default:
    if (uVar43 == 0x800003e9) {
      bVar25 = false;
                    /* catch() { ... } // from try @ 0061280c with catch @ 00612868 */
      if ((((uVar12 == param_1[6]) && (uStack_98 == param_1[10])) && (uVar10 == param_1[0x1a])) &&
         ((uVar45 == param_1[0xe] && (local_9c == param_1[0x16])))) {
                    /* try { // try from 00612898 to 007128bf has its CatchHandler @ 006128dc */
        bVar25 = uVar7 == param_1[0x12];
      }
      goto LAB_0061280c;
    }
    uVar26 = (**(code **)(*param_2 + 0x18))
                       (param_2,local_6c & 0xff000000 | (local_6c >> 0x10 & 0xff) << 0x10 |
                                (local_6c >> 8 & 0xff) << 8 | local_6c & 0xff);
    if ((uVar26 & 1) == 0) goto LAB_00612808;
  }
LAB_006126ec:
  uVar26 = (**(code **)(*param_2 + 0x10))(param_2,&local_6c,4);
  if ((uVar26 & 1) == 0) goto LAB_00612808;
  goto LAB_006105b4;
LAB_0061270c:
  uVar7 = uVar43;
  if (bVar5) {
    if (*(long *)puVar34 == 0) {
      puVar37 = malloc(0xc);
      *(uint **)puVar34 = puVar37;
      *puVar37 = uVar6;
      puVar37[1] = uVar14;
      puVar37[2] = uVar17;
    }
    else {
      *puVar31 = *puVar31 | 1;
    }
                    /* try { // try from 00612760 to 00712783 has its CatchHandler @ 006123bc */
    if (*(long *)puVar35 == 0) {
                    /* try { // try from 00612794 to 00712797 has its CatchHandler @ 006127a8 */
      puVar34 = malloc(0x10);
                    /* try { // try from 00612798 to 007127bb has its CatchHandler @ 00612784 */
      *(uint **)puVar35 = puVar34;
      *puVar34 = uVar9;
                    /* catch() { ... } // from try @ 00612794 with catch @ 006127a8 */
      puVar34[1] = uVar15;
      puVar34[2] = uVar18;
      puVar34[3] = uVar20;
                    /* catch() { ... } // from try @ 006128c0 with catch @ 006127bc */
      lVar39 = *(long *)puVar36;
    }
    else {
      *puVar31 = *puVar31 | 2;
      lVar39 = *(long *)puVar36;
    }
    if (lVar39 == 0) {
      puVar31 = malloc(0x1c);
      *(uint **)puVar36 = puVar31;
      uVar29 = _DAT_0069b69c;
      *(undefined8 *)(puVar31 + 5) = _UNK_0069b6a4;
      *(undefined8 *)(puVar31 + 3) = uVar29;
      *puVar31 = uVar13;
      puVar31[1] = uVar16;
      puVar31[2] = uVar19;
    }
    else {
                    /* catch() { ... } // from try @ 00612600 with catch @ 00612780 */
                    /* catch() { ... } // from try @ 00612798 with catch @ 00612784 */
      *puVar31 = *puVar31 | 4;
    }
  }
  goto LAB_006126ec;
LAB_006128a4:
  bVar25 = false;
  goto LAB_0061280c;
}


