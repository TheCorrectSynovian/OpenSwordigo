/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006043ec
 * Function: PVRTModelPODCopyNode
 * Signature: undefined __cdecl PVRTModelPODCopyNode(SPODNode * param_1, SPODNode * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCopyNode(SPODNode const&, SPODNode&, int) */

void PVRTModelPODCopyNode(SPODNode *param_1,SPODNode *param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  size_t sVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  char *__s;
  ulong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar11 = (ulong)(uint)param_3;
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  __s = *(char **)(param_1 + 8);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    if (sVar3 + 1 == 0) {
      pvVar4 = *(void **)(param_2 + 8);
    }
    else {
      pvVar4 = calloc(sVar3 + 1,1);
      *(void **)(param_2 + 8) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_00604474;
      __s = *(char **)(param_1 + 8);
    }
    sVar3 = strlen(__s);
    memcpy(pvVar4,__s,sVar3 + 1);
  }
LAB_00604474:
                    /* catch() { ... } // from try @ 0060352c with catch @ 00604478
                       catch() { ... } // from try @ 0060436c with catch @ 00604478 */
  pvVar4 = *(void **)(param_1 + 0x20);
  if (((byte)param_1[0x18] & 1) == 0) {
    sVar3 = 0xc;
                    /* catch() { ... } // from try @ 00604304 with catch @ 00604484 */
    if (pvVar4 == (void *)0x0) goto LAB_0060451c;
LAB_00604488:
    uVar12 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
    if (param_3 == 0) {
      pvVar5 = *(void **)(param_2 + 0x20);
    }
    else {
      pvVar5 = calloc(uVar12,4);
      *(void **)(param_2 + 0x20) = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_0060451c;
      pvVar4 = *(void **)(param_1 + 0x20);
    }
    memcpy(pvVar5,pvVar4,uVar12);
    pvVar4 = *(void **)(param_1 + 0x28);
  }
  else {
    if (pvVar4 == (void *)0x0) {
      sVar3 = -(ulong)((uint)(param_3 * 3) >> 0x1f) & 0xfffffffc00000000 |
              (ulong)(uint)(param_3 * 3) << 2;
    }
    else {
      if (param_3 == 0) {
        uVar13 = 0;
      }
      else {
        if ((uint)param_3 < 8) {
          uVar7 = 0;
          uVar13 = 0;
        }
        else {
          uVar7 = uVar11 & 0xfffffff8;
          pauVar10 = (undefined1 (*) [16])((long)pvVar4 + 0x10);
          auVar14 = ZEXT816(0);
          auVar15 = ZEXT816(0);
          uVar12 = uVar7;
          do {
            pauVar1 = pauVar10 + -1;
            auVar2 = *pauVar10;
            uVar12 = uVar12 - 8;
            pauVar10 = pauVar10 + 2;
            auVar14 = NEON_umax(auVar14,*pauVar1,4);
            auVar15 = NEON_umax(auVar15,auVar2,4);
          } while (uVar12 != 0);
          auVar14 = NEON_umax(auVar14,auVar15,4);
          uVar13 = NEON_umaxv(auVar14,4);
          if (uVar7 == uVar11) goto LAB_006047dc;
        }
        lVar6 = uVar11 - uVar7;
        puVar8 = (uint *)((long)pvVar4 + uVar7 * 4);
        uVar9 = uVar13;
        do {
          uVar13 = *puVar8;
          if (*puVar8 <= uVar9) {
            uVar13 = uVar9;
          }
          lVar6 = lVar6 + -1;
          puVar8 = puVar8 + 1;
          uVar9 = uVar13;
        } while (lVar6 != 0);
      }
LAB_006047dc:
      sVar3 = -(ulong)(uVar13 + 3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar13 + 3) << 2;
      if (pvVar4 != (void *)0x0) goto LAB_00604488;
    }
LAB_0060451c:
    pvVar4 = *(void **)(param_1 + 0x28);
  }
                    /* try { // try from 00604520 to 00704877 has its CatchHandler @ 00604520
                       catch() { ... } // from try @ 00604520 with catch @ 00604520
                       catch() { ... } // from try @ 006048d8 with catch @ 00604520
                       catch() { ... } // from try @ 0060499c with catch @ 00604520 */
  if (pvVar4 != (void *)0x0) {
    if (sVar3 == 0) {
      pvVar5 = *(void **)(param_2 + 0x28);
    }
    else {
      pvVar5 = calloc(sVar3,4);
      *(void **)(param_2 + 0x28) = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_00604524;
      pvVar4 = *(void **)(param_1 + 0x28);
    }
    memcpy(pvVar5,pvVar4,sVar3);
  }
LAB_00604524:
  pvVar4 = *(void **)(param_1 + 0x30);
  if (((byte)param_1[0x18] >> 1 & 1) == 0) {
    sVar3 = 0x10;
    if (pvVar4 == (void *)0x0) goto LAB_006045cc;
LAB_00604538:
    uVar12 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
    if (param_3 == 0) {
      pvVar5 = *(void **)(param_2 + 0x30);
    }
    else {
      pvVar5 = calloc(uVar12,4);
      *(void **)(param_2 + 0x30) = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_006045cc;
      pvVar4 = *(void **)(param_1 + 0x30);
    }
    memcpy(pvVar5,pvVar4,uVar12);
    pvVar4 = *(void **)(param_1 + 0x38);
  }
  else {
    if (pvVar4 == (void *)0x0) {
      sVar3 = -(ulong)((param_3 & 0x3fffffffU) >> 0x1d) & 0xfffffffc00000000 |
              (ulong)(uint)(param_3 << 2) << 2;
    }
    else {
      if (param_3 == 0) {
        uVar13 = 0;
      }
      else {
        if ((uint)param_3 < 8) {
          uVar7 = 0;
          uVar13 = 0;
        }
        else {
          uVar7 = uVar11 & 0xfffffff8;
          pauVar10 = (undefined1 (*) [16])((long)pvVar4 + 0x10);
          auVar14 = ZEXT816(0);
          auVar15 = ZEXT816(0);
          uVar12 = uVar7;
          do {
            pauVar1 = pauVar10 + -1;
            auVar2 = *pauVar10;
            uVar12 = uVar12 - 8;
            pauVar10 = pauVar10 + 2;
            auVar14 = NEON_umax(auVar14,*pauVar1,4);
            auVar15 = NEON_umax(auVar15,auVar2,4);
          } while (uVar12 != 0);
          auVar14 = NEON_umax(auVar14,auVar15,4);
          uVar13 = NEON_umaxv(auVar14,4);
          if (uVar7 == uVar11) goto LAB_00604848;
        }
        lVar6 = uVar11 - uVar7;
        puVar8 = (uint *)((long)pvVar4 + uVar7 * 4);
        uVar9 = uVar13;
        do {
          uVar13 = *puVar8;
          if (*puVar8 <= uVar9) {
            uVar13 = uVar9;
          }
          lVar6 = lVar6 + -1;
          puVar8 = puVar8 + 1;
          uVar9 = uVar13;
        } while (lVar6 != 0);
      }
LAB_00604848:
      sVar3 = -(ulong)(uVar13 + 4 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar13 + 4) << 2;
      if (pvVar4 != (void *)0x0) goto LAB_00604538;
    }
LAB_006045cc:
    pvVar4 = *(void **)(param_1 + 0x38);
  }
  if (pvVar4 != (void *)0x0) {
    if (sVar3 == 0) {
      pvVar5 = *(void **)(param_2 + 0x38);
    }
    else {
      pvVar5 = calloc(sVar3,4);
      *(void **)(param_2 + 0x38) = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_006045d4;
      pvVar4 = *(void **)(param_1 + 0x38);
    }
    memcpy(pvVar5,pvVar4,sVar3);
  }
LAB_006045d4:
  pvVar4 = *(void **)(param_1 + 0x40);
  if (((byte)param_1[0x18] >> 2 & 1) == 0) {
    sVar3 = 0x1c;
    if (pvVar4 == (void *)0x0) goto LAB_00604680;
LAB_006045e8:
    uVar12 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
    if (param_3 == 0) {
      pvVar5 = *(void **)(param_2 + 0x40);
    }
    else {
      pvVar5 = calloc(uVar12,4);
      *(void **)(param_2 + 0x40) = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_00604680;
      pvVar4 = *(void **)(param_1 + 0x40);
    }
    memcpy(pvVar5,pvVar4,uVar12);
    pvVar4 = *(void **)(param_1 + 0x48);
  }
  else {
    if (pvVar4 == (void *)0x0) {
      sVar3 = -(ulong)((uint)(param_3 * 7) >> 0x1f) & 0xfffffffc00000000 |
              (ulong)(uint)(param_3 * 7) << 2;
    }
    else {
      if (param_3 == 0) {
        uVar13 = 0;
      }
      else {
        if ((uint)param_3 < 8) {
          uVar7 = 0;
          uVar13 = 0;
        }
        else {
          uVar7 = uVar11 & 0xfffffff8;
          pauVar10 = (undefined1 (*) [16])((long)pvVar4 + 0x10);
          auVar14 = ZEXT816(0);
          auVar15 = ZEXT816(0);
          uVar12 = uVar7;
          do {
            pauVar1 = pauVar10 + -1;
            auVar2 = *pauVar10;
            uVar12 = uVar12 - 8;
            pauVar10 = pauVar10 + 2;
                    /* try { // try from 00604878 to 00704883 has its CatchHandler @ 00604948 */
            auVar14 = NEON_umax(auVar14,*pauVar1,4);
            auVar15 = NEON_umax(auVar15,auVar2,4);
          } while (uVar12 != 0);
                    /* try { // try from 00604884 to 007048af has its CatchHandler @ 00604954 */
          auVar14 = NEON_umax(auVar14,auVar15,4);
          uVar13 = NEON_umaxv(auVar14,4);
          if (uVar7 == uVar11) goto LAB_006048b4;
        }
        lVar6 = uVar11 - uVar7;
        puVar8 = (uint *)((long)pvVar4 + uVar7 * 4);
        uVar9 = uVar13;
        do {
          uVar13 = *puVar8;
          if (*puVar8 <= uVar9) {
            uVar13 = uVar9;
          }
          lVar6 = lVar6 + -1;
          puVar8 = puVar8 + 1;
          uVar9 = uVar13;
        } while (lVar6 != 0);
      }
LAB_006048b4:
      sVar3 = -(ulong)(uVar13 + 7 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar13 + 7) << 2;
      if (pvVar4 != (void *)0x0) goto LAB_006045e8;
    }
LAB_00604680:
    pvVar4 = *(void **)(param_1 + 0x48);
  }
  if (pvVar4 != (void *)0x0) {
    if (sVar3 == 0) {
      pvVar5 = *(void **)(param_2 + 0x48);
    }
    else {
      pvVar5 = calloc(sVar3,4);
      *(void **)(param_2 + 0x48) = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_00604688;
      pvVar4 = *(void **)(param_1 + 0x48);
    }
    memcpy(pvVar5,pvVar4,sVar3);
  }
LAB_00604688:
  pvVar4 = *(void **)(param_1 + 0x50);
  if (((byte)param_1[0x18] >> 3 & 1) == 0) {
    sVar3 = 0x40;
joined_r0x00604778:
    if (pvVar4 != (void *)0x0) {
      uVar11 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
      if (param_3 == 0) {
        pvVar5 = *(void **)(param_2 + 0x50);
      }
      else {
        pvVar5 = calloc(uVar11,4);
        *(void **)(param_2 + 0x50) = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_0060473c;
        pvVar4 = *(void **)(param_1 + 0x50);
      }
      memcpy(pvVar5,pvVar4,uVar11);
      pvVar4 = *(void **)(param_1 + 0x58);
      goto joined_r0x00604740;
    }
  }
  else {
    if (pvVar4 != (void *)0x0) {
      if (param_3 == 0) {
        sVar3 = 0x40;
        goto joined_r0x00604778;
      }
      if ((uint)param_3 < 8) {
        uVar7 = 0;
        uVar13 = 0;
LAB_00604904:
        lVar6 = uVar11 - uVar7;
        puVar8 = (uint *)((long)pvVar4 + uVar7 * 4);
        uVar9 = uVar13;
        do {
          uVar13 = *puVar8;
          if (*puVar8 <= uVar9) {
            uVar13 = uVar9;
          }
          lVar6 = lVar6 + -1;
          puVar8 = puVar8 + 1;
          uVar9 = uVar13;
        } while (lVar6 != 0);
      }
      else {
        uVar7 = uVar11 & 0xfffffff8;
        pauVar10 = (undefined1 (*) [16])((long)pvVar4 + 0x10);
                    /* try { // try from 006048cc to 007048d7 has its CatchHandler @ 0060493c */
        auVar14 = ZEXT816(0);
        auVar15 = ZEXT816(0);
        uVar12 = uVar7;
        do {
                    /* try { // try from 006048d8 to 00704973 has its CatchHandler @ 00604520 */
          pauVar1 = pauVar10 + -1;
          auVar2 = *pauVar10;
          uVar12 = uVar12 - 8;
          pauVar10 = pauVar10 + 2;
          auVar14 = NEON_umax(auVar14,*pauVar1,4);
          auVar15 = NEON_umax(auVar15,auVar2,4);
        } while (uVar12 != 0);
        auVar14 = NEON_umax(auVar14,auVar15,4);
        uVar13 = NEON_umaxv(auVar14,4);
        if (uVar7 != uVar11) goto LAB_00604904;
      }
      sVar3 = -(ulong)(uVar13 + 0x10 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar13 + 0x10) << 2;
      goto joined_r0x00604778;
    }
    sVar3 = -(ulong)((param_3 & 0xfffffffU) >> 0x1b) & 0xfffffffc00000000 |
            (ulong)(uint)(param_3 << 4) << 2;
  }
LAB_0060473c:
  pvVar4 = *(void **)(param_1 + 0x58);
joined_r0x00604740:
  if (pvVar4 == (void *)0x0) {
    return;
  }
  if (sVar3 == 0) {
    pvVar5 = *(void **)(param_2 + 0x58);
  }
  else {
    pvVar5 = calloc(sVar3,4);
    *(void **)(param_2 + 0x58) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    pvVar4 = *(void **)(param_1 + 0x58);
  }
  memcpy(pvVar5,pvVar4,sVar3);
  return;
}


