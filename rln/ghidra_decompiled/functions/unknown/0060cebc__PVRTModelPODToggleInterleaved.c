/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060cebc
 * Function: PVRTModelPODToggleInterleaved
 * Signature: undefined __cdecl PVRTModelPODToggleInterleaved(SPODMesh * param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODToggleInterleaved(SPODMesh&, unsigned int) */

void PVRTModelPODToggleInterleaved(SPODMesh *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  
                    /* try { // try from 0060ced0 to 0070cef7 has its CatchHandler @ 0060cfb4 */
  uVar12 = *(uint *)param_1;
  uVar15 = (ulong)uVar12;
  if (uVar12 != 0) {
    lVar17 = *(long *)(param_1 + 0xe8);
    if (lVar17 == 0) {
                    /* try { // try from 0060cf18 to 0070cf3f has its CatchHandler @ 0060cfa4 */
      iVar14 = *(int *)(param_1 + 0x38);
      if (iVar14 - 1U < 0xe) {
        lVar17 = *(long *)(&DAT_0069b8a0 + (long)(int)(iVar14 - 1U) * 8);
      }
      else {
        lVar17 = 0;
      }
                    /* try { // try from 0060cf88 to 0070d017 has its CatchHandler @ 0060cd64 */
      if (*(int *)(param_1 + 0x50) - 1U < 0xe) {
        lVar7 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x50) - 1U) * 8);
      }
      else {
                    /* catch() { ... } // from try @ 0060cf60 with catch @ 0060cf9c */
        lVar7 = 0;
      }
                    /* catch() { ... } // from try @ 0060cf18 with catch @ 0060cfa4 */
                    /* catch() { ... } // from try @ 0060ced0 with catch @ 0060cfb4 */
      if (*(int *)(param_1 + 0x68) - 1U < 0xe) {
        lVar9 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x68) - 1U) * 8);
                    /* catch() { ... } // from try @ 0060ce88 with catch @ 0060cfc4 */
      }
      else {
        lVar9 = 0;
      }
                    /* catch() { ... } // from try @ 0060ce40 with catch @ 0060cfd4 */
      if (*(int *)(param_1 + 0x80) - 1U < 0xe) {
                    /* catch() { ... } // from try @ 0060cdf8 with catch @ 0060cfe4 */
        lVar16 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x80) - 1U) * 8);
      }
      else {
                    /* catch() { ... } // from try @ 0060cdb0 with catch @ 0060cff4 */
        lVar16 = 0;
      }
      lVar17 = lVar17 * (ulong)*(uint *)(param_1 + 0x3c) + lVar7 * (ulong)*(uint *)(param_1 + 0x54)
               + lVar9 * (ulong)*(uint *)(param_1 + 0x6c) +
               lVar16 * (ulong)*(uint *)(param_1 + 0x84);
      if (*(uint *)(param_1 + 8) != 0) {
        uVar18 = 0;
                    /* try { // try from 0060d018 to 0070d1af has its CatchHandler @ 0060d1b8 */
        puVar13 = (uint *)(*(long *)(param_1 + 0x98) + 4);
        do {
          if (puVar13[-1] - 1 < 0xe) {
            lVar7 = *(long *)(&DAT_0069b8a0 + (long)(int)(puVar13[-1] - 1) * 8);
          }
          else {
            lVar7 = 0;
          }
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + lVar7 * (ulong)*puVar13;
          puVar13 = puVar13 + 6;
        } while (uVar18 < *(uint *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 0xa0) - 1U < 0xe) {
        lVar7 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xa0) - 1U) * 8);
      }
      else {
        lVar7 = 0;
      }
      if (*(int *)(param_1 + 0xb8) - 1U < 0xe) {
        lVar9 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xb8) - 1U) * 8);
      }
      else {
        lVar9 = 0;
      }
      if (*(int *)(param_1 + 0xd0) - 1U < 0xe) {
        lVar16 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xd0) - 1U) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar18 = lVar17 + lVar7 * (ulong)*(uint *)(param_1 + 0xa4) +
               lVar9 * (ulong)*(uint *)(param_1 + 0xbc) + lVar16 * (ulong)*(uint *)(param_1 + 0xd4);
      if (1 < param_2) {
        uVar10 = (ulong)param_2;
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar18 / uVar10;
        }
        uVar8 = uVar10 - (uVar18 - uVar11 * uVar10);
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar8 / uVar10;
        }
        uVar18 = (uVar8 - uVar11 * uVar10) + uVar18;
      }
      if (uVar18 * uVar15 != 0) {
        pvVar4 = calloc(uVar18 * uVar15,1);
        *(void **)(param_1 + 0xe8) = pvVar4;
      }
      lVar17 = 0;
      uVar15 = 4;
      do {
        uVar12 = (uint)uVar18;
        if (iVar14 - 1U < 0xe) {
          if (*(ulong *)(&DAT_0069b8a0 + (long)(int)(iVar14 - 1U) * 8) == uVar15) {
LAB_0060d144:
            if (*(uint *)(param_1 + 0x40) != 0) {
              uVar6 = *(uint *)param_1;
              if (0 < (int)uVar6) {
                lVar7 = *(long *)(param_1 + 0xe8);
                memcpy((void *)(lVar7 + lVar17),*(void **)(param_1 + 0x48),
                       (ulong)*(uint *)(param_1 + 0x40));
                if (uVar6 != 1) {
                  pvVar4 = (void *)(lVar7 + uVar18 + lVar17);
                  uVar11 = 1;
                  do {
                    memcpy(pvVar4,(void *)(*(long *)(param_1 + 0x48) +
                                          (ulong)(*(uint *)(param_1 + 0x40) * (int)uVar11)),
                           (ulong)*(uint *)(param_1 + 0x40));
                    uVar11 = uVar11 + 1;
                    pvVar4 = (void *)((long)pvVar4 + uVar18);
                  } while (uVar6 != uVar11);
                }
              }
              if (*(void **)(param_1 + 0x48) != (void *)0x0) {
                free(*(void **)(param_1 + 0x48));
                    /* try { // try from 0060d1b0 to 0070d1bb has its CatchHandler @ 0060cd64 */
                *(undefined8 *)(param_1 + 0x48) = 0;
              }
                    /* catch() { ... } // from try @ 0060d018 with catch @ 0060d1b8 */
              *(uint *)(param_1 + 0x40) = uVar12;
                    /* catch() { ... } // from try @ 0060d1d0 with catch @ 0060d1bc */
              *(long *)(param_1 + 0x48) = lVar17;
              if (*(int *)(param_1 + 0x38) - 1U < 0xe) {
                    /* try { // try from 0060d1cc to 0070d1cf has its CatchHandler @ 0060d1e0 */
                    /* try { // try from 0060d1d0 to 0070d1f3 has its CatchHandler @ 0060d1bc */
                lVar7 = *(long *)(&DAT_0069b830 + (long)(int)(*(int *)(param_1 + 0x38) - 1U) * 8);
              }
              else {
                lVar7 = 0;
              }
                    /* catch() { ... } // from try @ 0060d214 with catch @ 0060d1f4
                       catch() { ... } // from try @ 0060d294 with catch @ 0060d1f4 */
              lVar17 = lVar17 + ((long)(lVar7 * (ulong)*(uint *)(param_1 + 0x3c)) >> 0x20);
            }
          }
        }
        else {
                    /* catch() { ... } // from try @ 0060d1cc with catch @ 0060d1e0 */
          if (uVar15 == 0) goto LAB_0060d144;
        }
        if (*(int *)(param_1 + 0x50) - 1U < 0xe) {
                    /* try { // try from 0060d20c to 0070d213 has its CatchHandler @ 0060d244 */
                    /* try { // try from 0060d214 to 0070d26b has its CatchHandler @ 0060d1f4 */
          if (*(ulong *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x50) - 1U) * 8) == uVar15)
          {
LAB_0060d220:
            if (*(uint *)(param_1 + 0x58) != 0) {
              uVar6 = *(uint *)param_1;
              if (0 < (int)uVar6) {
                lVar7 = *(long *)(param_1 + 0xe8);
                memcpy((void *)(lVar7 + lVar17),*(void **)(param_1 + 0x60),
                       (ulong)*(uint *)(param_1 + 0x58));
                    /* catch() { ... } // from try @ 0060d20c with catch @ 0060d244 */
                if (uVar6 != 1) {
                  pvVar4 = (void *)(lVar7 + uVar18 + lVar17);
                  uVar11 = 1;
                  do {
                    /* try { // try from 0060d26c to 0070d26f has its CatchHandler @ 0060d27c */
                    memcpy(pvVar4,(void *)(*(long *)(param_1 + 0x60) +
                                          (ulong)(*(uint *)(param_1 + 0x58) * (int)uVar11)),
                           (ulong)*(uint *)(param_1 + 0x58));
                    uVar11 = uVar11 + 1;
                    /* try { // try from 0060d278 to 0070d27b has its CatchHandler @ 0060d28c */
                    pvVar4 = (void *)((long)pvVar4 + uVar18);
                    /* catch() { ... } // from try @ 0060d26c with catch @ 0060d27c */
                  } while (uVar6 != uVar11);
                }
              }
              if (*(void **)(param_1 + 0x60) != (void *)0x0) {
                free(*(void **)(param_1 + 0x60));
                    /* catch() { ... } // from try @ 0060d278 with catch @ 0060d28c */
                *(undefined8 *)(param_1 + 0x60) = 0;
              }
                    /* try { // try from 0060d290 to 0070d293 has its CatchHandler @ 0060d29c */
                    /* try { // try from 0060d294 to 0070d29f has its CatchHandler @ 0060d1f4 */
              *(uint *)(param_1 + 0x58) = uVar12;
              *(long *)(param_1 + 0x60) = lVar17;
                    /* catch() { ... } // from try @ 0060d290 with catch @ 0060d29c */
                    /* catch() { ... } // from try @ 0060d2dc with catch @ 0060d2a4 */
              if (*(int *)(param_1 + 0x50) - 1U < 0xe) {
                lVar7 = *(long *)(&DAT_0069b830 + (long)(int)(*(int *)(param_1 + 0x50) - 1U) * 8);
              }
              else {
                lVar7 = 0;
              }
              lVar17 = lVar17 + ((long)(lVar7 * (ulong)*(uint *)(param_1 + 0x54)) >> 0x20);
            }
          }
        }
        else if (uVar15 == 0) goto LAB_0060d220;
                    /* try { // try from 0060d2d8 to 0070d2db has its CatchHandler @ 0060d2f8 */
                    /* try { // try from 0060d2dc to 0070d30b has its CatchHandler @ 0060d2a4 */
        if (*(int *)(param_1 + 0x68) - 1U < 0xe) {
                    /* catch() { ... } // from try @ 0060d2d8 with catch @ 0060d2f8 */
          if (*(ulong *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x68) - 1U) * 8) == uVar15)
          {
LAB_0060d2fc:
            if (*(uint *)(param_1 + 0x70) != 0) {
              uVar6 = *(uint *)param_1;
              if (0 < (int)uVar6) {
                lVar7 = *(long *)(param_1 + 0xe8);
                    /* catch() { ... } // from try @ 0060d3c4 with catch @ 0060d314 */
                memcpy((void *)(lVar7 + lVar17),*(void **)(param_1 + 0x78),
                       (ulong)*(uint *)(param_1 + 0x70));
                if (uVar6 != 1) {
                    /* try { // try from 0060d32c to 0070d333 has its CatchHandler @ 0060d3d0 */
                  pvVar4 = (void *)(lVar7 + uVar18 + lVar17);
                  uVar11 = 1;
                  do {
                    memcpy(pvVar4,(void *)(*(long *)(param_1 + 0x78) +
                                          (ulong)(*(uint *)(param_1 + 0x70) * (int)uVar11)),
                           (ulong)*(uint *)(param_1 + 0x70));
                    uVar11 = uVar11 + 1;
                    pvVar4 = (void *)((long)pvVar4 + uVar18);
                  } while (uVar6 != uVar11);
                }
              }
                    /* try { // try from 0060d360 to 0070d36b has its CatchHandler @ 0060d378 */
              if (*(void **)(param_1 + 0x78) != (void *)0x0) {
                free(*(void **)(param_1 + 0x78));
                *(undefined8 *)(param_1 + 0x78) = 0;
              }
              *(uint *)(param_1 + 0x70) = uVar12;
              *(long *)(param_1 + 0x78) = lVar17;
                    /* catch() { ... } // from try @ 0060d360 with catch @ 0060d378 */
              if (*(int *)(param_1 + 0x68) - 1U < 0xe) {
                lVar7 = *(long *)(&DAT_0069b830 + (long)(int)(*(int *)(param_1 + 0x68) - 1U) * 8);
              }
              else {
                lVar7 = 0;
              }
              lVar17 = lVar17 + ((long)(lVar7 * (ulong)*(uint *)(param_1 + 0x6c)) >> 0x20);
            }
          }
        }
        else {
                    /* try { // try from 0060d39c to 0070d3c3 has its CatchHandler @ 0060d3cc */
          if (uVar15 == 0) goto LAB_0060d2fc;
        }
        if (*(int *)(param_1 + 0x80) - 1U < 0xe) {
                    /* try { // try from 0060d3c4 to 0070d3df has its CatchHandler @ 0060d314 */
                    /* catch() { ... } // from try @ 0060d39c with catch @ 0060d3cc */
                    /* catch() { ... } // from try @ 0060d32c with catch @ 0060d3d0 */
          if (*(ulong *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x80) - 1U) * 8) == uVar15)
          {
LAB_0060d3d8:
            if (*(uint *)(param_1 + 0x88) != 0) {
                    /* try { // try from 0060d3e0 to 0070d3eb has its CatchHandler @ 0060d3ec */
              uVar6 = *(uint *)param_1;
              if (0 < (int)uVar6) {
                    /* catch() { ... } // from try @ 0060d3e0 with catch @ 0060d3ec */
                lVar7 = *(long *)(param_1 + 0xe8);
                    /* try { // try from 0060d3f0 to 0070d3f3 has its CatchHandler @ 0060d3f8 */
                    /* catch() { ... } // from try @ 0060d3f0 with catch @ 0060d3f8 */
                memcpy((void *)(lVar7 + lVar17),*(void **)(param_1 + 0x90),
                       (ulong)*(uint *)(param_1 + 0x88));
                if (uVar6 != 1) {
                  pvVar4 = (void *)(lVar7 + uVar18 + lVar17);
                  uVar11 = 1;
                  do {
                    /* catch() { ... } // from try @ 0060d490 with catch @ 0060d420
                       catch() { ... } // from try @ 0060d534 with catch @ 0060d420 */
                    memcpy(pvVar4,(void *)(*(long *)(param_1 + 0x90) +
                                          (ulong)(*(uint *)(param_1 + 0x88) * (int)uVar11)),
                           (ulong)*(uint *)(param_1 + 0x88));
                    uVar11 = uVar11 + 1;
                    pvVar4 = (void *)((long)pvVar4 + uVar18);
                  } while (uVar6 != uVar11);
                }
              }
              if (*(void **)(param_1 + 0x90) != (void *)0x0) {
                free(*(void **)(param_1 + 0x90));
                *(undefined8 *)(param_1 + 0x90) = 0;
              }
              *(uint *)(param_1 + 0x88) = uVar12;
              *(long *)(param_1 + 0x90) = lVar17;
              if (*(int *)(param_1 + 0x80) - 1U < 0xe) {
                lVar7 = *(long *)(&DAT_0069b830 + (long)(int)(*(int *)(param_1 + 0x80) - 1U) * 8);
              }
              else {
                lVar7 = 0;
              }
                    /* try { // try from 0060d48c to 0070d48f has its CatchHandler @ 0060d4ec */
              lVar17 = lVar17 + ((long)(lVar7 * (ulong)*(uint *)(param_1 + 0x84)) >> 0x20);
            }
          }
        }
        else if (uVar15 == 0) goto LAB_0060d3d8;
                    /* try { // try from 0060d490 to 0070d50b has its CatchHandler @ 0060d420 */
        if (*(int *)(param_1 + 0xa0) - 1U < 0xe) {
          if (*(ulong *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xa0) - 1U) * 8) == uVar15)
          {
LAB_0060d4b4:
            if (*(uint *)(param_1 + 0xa8) != 0) {
              uVar6 = *(uint *)param_1;
              if (0 < (int)uVar6) {
                lVar7 = *(long *)(param_1 + 0xe8);
                memcpy((void *)(lVar7 + lVar17),*(void **)(param_1 + 0xb0),
                       (ulong)*(uint *)(param_1 + 0xa8));
                if (uVar6 != 1) {
                  pvVar4 = (void *)(lVar7 + uVar18 + lVar17);
                  uVar11 = 1;
                  do {
                    /* catch() { ... } // from try @ 0060d48c with catch @ 0060d4ec */
                    memcpy(pvVar4,(void *)(*(long *)(param_1 + 0xb0) +
                                          (ulong)(*(uint *)(param_1 + 0xa8) * (int)uVar11)),
                           (ulong)*(uint *)(param_1 + 0xa8));
                    uVar11 = uVar11 + 1;
                    /* try { // try from 0060d50c to 0070d533 has its CatchHandler @ 0060d53c */
                    pvVar4 = (void *)((long)pvVar4 + uVar18);
                  } while (uVar6 != uVar11);
                }
              }
              if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
                free(*(void **)(param_1 + 0xb0));
                *(undefined8 *)(param_1 + 0xb0) = 0;
              }
              *(uint *)(param_1 + 0xa8) = uVar12;
              *(long *)(param_1 + 0xb0) = lVar17;
                    /* try { // try from 0060d534 to 0070d53f has its CatchHandler @ 0060d420 */
              if (*(int *)(param_1 + 0xa0) - 1U < 0xe) {
                    /* catch() { ... } // from try @ 0060d50c with catch @ 0060d53c */
                lVar7 = *(long *)(&DAT_0069b830 + (long)(int)(*(int *)(param_1 + 0xa0) - 1U) * 8);
              }
              else {
                lVar7 = 0;
              }
              lVar17 = lVar17 + ((long)(lVar7 * (ulong)*(uint *)(param_1 + 0xa4)) >> 0x20);
            }
          }
        }
        else if (uVar15 == 0) goto LAB_0060d4b4;
        uVar6 = *(uint *)(param_1 + 8);
        if (uVar6 != 0) {
          uVar11 = 0;
          do {
            lVar7 = *(long *)(param_1 + 0x98);
            piVar19 = (int *)(lVar7 + uVar11 * 0x18);
            uVar2 = *piVar19 - 1;
            if (uVar2 < 0xe) {
              if (*(ulong *)(&DAT_0069b8a0 + (long)(int)uVar2 * 8) == uVar15) {
LAB_0060d5c0:
                lVar9 = *(long *)(param_1 + 0xe8);
                uVar2 = *(uint *)param_1;
                puVar13 = (uint *)(lVar7 + uVar11 * 0x18 + 8);
                if (*puVar13 != 0) {
                  plVar20 = (long *)(lVar7 + uVar11 * 0x18 + 0x10);
                  if ((0 < (int)uVar2) &&
                     (memcpy((void *)(lVar9 + lVar17),(void *)*plVar20,(ulong)*puVar13), uVar2 != 1)
                     ) {
                    pvVar4 = (void *)(lVar9 + uVar18 + lVar17);
                    uVar10 = 1;
                    do {
                      memcpy(pvVar4,(void *)(*plVar20 + (ulong)(*puVar13 * (int)uVar10)),
                             (ulong)*puVar13);
                      uVar10 = uVar10 + 1;
                      pvVar4 = (void *)((long)pvVar4 + uVar18);
                    } while (uVar2 != uVar10);
                  }
                  if ((void *)*plVar20 != (void *)0x0) {
                    free((void *)*plVar20);
                    *plVar20 = 0;
                  }
                    /* try { // try from 0060d64c to 0070d6e7 has its CatchHandler @ 0060d64c
                       catch() { ... } // from try @ 0060d64c with catch @ 0060d64c
                       catch() { ... } // from try @ 0060d6ec with catch @ 0060d64c
                       catch() { ... } // from try @ 0060d7a0 with catch @ 0060d64c
                       catch() { ... } // from try @ 0060d7f8 with catch @ 0060d64c
                       catch() { ... } // from try @ 0060d8e8 with catch @ 0060d64c
                       catch() { ... } // from try @ 0060da30 with catch @ 0060d64c
                       catch() { ... } // from try @ 0060dbf4 with catch @ 0060d64c */
                  *puVar13 = uVar12;
                  *plVar20 = lVar17;
                  uVar6 = *piVar19 - 1;
                  if (uVar6 < 0xe) {
                    lVar9 = *(long *)(&DAT_0069b830 + (long)(int)uVar6 * 8);
                  }
                  else {
                    lVar9 = 0;
                  }
                  uVar6 = *(uint *)(param_1 + 8);
                  lVar17 = lVar17 + ((long)(lVar9 * (ulong)*(uint *)(lVar7 + uVar11 * 0x18 + 4)) >>
                                    0x20);
                }
              }
            }
            else if (uVar15 == 0) goto LAB_0060d5c0;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar6);
        }
        if (*(int *)(param_1 + 0xb8) - 1U < 0xe) {
          uVar11 = *(ulong *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xb8) - 1U) * 8);
        }
        else {
          uVar11 = 0;
        }
        if ((uVar11 == uVar15) && (*(uint *)(param_1 + 0xc0) != 0)) {
          uVar6 = *(uint *)param_1;
                    /* try { // try from 0060d6e8 to 0070d6eb has its CatchHandler @ 0060dc00 */
          if (0 < (int)uVar6) {
                    /* try { // try from 0060d6ec to 0070d793 has its CatchHandler @ 0060d64c */
            lVar7 = *(long *)(param_1 + 0xe8);
            memcpy((void *)(lVar7 + lVar17),*(void **)(param_1 + 200),
                   (ulong)*(uint *)(param_1 + 0xc0));
            if (uVar6 != 1) {
              pvVar4 = (void *)(lVar7 + uVar18 + lVar17);
              uVar11 = 1;
              do {
                memcpy(pvVar4,(void *)(*(long *)(param_1 + 200) +
                                      (ulong)(*(uint *)(param_1 + 0xc0) * (int)uVar11)),
                       (ulong)*(uint *)(param_1 + 0xc0));
                uVar11 = uVar11 + 1;
                pvVar4 = (void *)((long)pvVar4 + uVar18);
              } while (uVar6 != uVar11);
            }
          }
          if (*(void **)(param_1 + 200) != (void *)0x0) {
            free(*(void **)(param_1 + 200));
            *(undefined8 *)(param_1 + 200) = 0;
          }
          *(uint *)(param_1 + 0xc0) = uVar12;
          *(long *)(param_1 + 200) = lVar17;
          if (*(int *)(param_1 + 0xb8) - 1U < 0xe) {
            lVar7 = *(long *)(&DAT_0069b830 + (long)(int)(*(int *)(param_1 + 0xb8) - 1U) * 8);
          }
          else {
            lVar7 = 0;
          }
          lVar17 = lVar17 + ((long)(lVar7 * (ulong)*(uint *)(param_1 + 0xbc)) >> 0x20);
        }
        if (*(int *)(param_1 + 0xd0) - 1U < 0xe) {
                    /* try { // try from 0060d794 to 0070d79f has its CatchHandler @ 0060dba8 */
                    /* try { // try from 0060d7a0 to 0070d7f3 has its CatchHandler @ 0060d64c */
          if (*(ulong *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xd0) - 1U) * 8) == uVar15)
          {
LAB_0060d7a8:
            if (*(uint *)(param_1 + 0xd8) != 0) {
              uVar6 = *(uint *)param_1;
              if (0 < (int)uVar6) {
                lVar7 = *(long *)(param_1 + 0xe8);
                memcpy((void *)(lVar7 + lVar17),*(void **)(param_1 + 0xe0),
                       (ulong)*(uint *)(param_1 + 0xd8));
                if (uVar6 != 1) {
                  pvVar4 = (void *)(lVar7 + uVar18 + lVar17);
                  uVar11 = 1;
                  do {
                    memcpy(pvVar4,(void *)(*(long *)(param_1 + 0xe0) +
                                          (ulong)(*(uint *)(param_1 + 0xd8) * (int)uVar11)),
                           (ulong)*(uint *)(param_1 + 0xd8));
                    /* try { // try from 0060d7f4 to 0070d7f7 has its CatchHandler @ 0060dba4 */
                    uVar11 = uVar11 + 1;
                    /* try { // try from 0060d7f8 to 0070d8b7 has its CatchHandler @ 0060d64c */
                    pvVar4 = (void *)((long)pvVar4 + uVar18);
                  } while (uVar6 != uVar11);
                }
              }
              if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
                free(*(void **)(param_1 + 0xe0));
                *(undefined8 *)(param_1 + 0xe0) = 0;
              }
              *(uint *)(param_1 + 0xd8) = uVar12;
              *(long *)(param_1 + 0xe0) = lVar17;
              if (*(int *)(param_1 + 0xd0) - 1U < 0xe) {
                lVar7 = *(long *)(&DAT_0069b830 + (long)(int)(*(int *)(param_1 + 0xd0) - 1U) * 8);
              }
              else {
                lVar7 = 0;
              }
              lVar17 = lVar17 + ((long)(lVar7 * (ulong)*(uint *)(param_1 + 0xd4)) >> 0x20);
            }
          }
        }
        else if (uVar15 == 0) goto LAB_0060d7a8;
        if (uVar15 >> 1 == 0) {
          return;
        }
        uVar15 = uVar15 >> 1;
        iVar14 = *(int *)(param_1 + 0x38);
      } while( true );
    }
    uVar6 = *(uint *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x38) - 1U < 0xe) {
      lVar7 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x38) - 1U) * 8);
    }
    else {
      lVar7 = 0;
    }
    if (uVar6 != 0) {
      lVar9 = *(long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      uVar18 = lVar7 * (ulong)*(uint *)(param_1 + 0x3c);
      uVar2 = uVar12 * (int)uVar18;
      if (uVar2 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
                    /* try { // try from 0060cf60 to 0070cf87 has its CatchHandler @ 0060cf9c */
        pvVar4 = calloc((ulong)uVar2,1);
        *(void **)(param_1 + 0x48) = pvVar4;
      }
      *(int *)(param_1 + 0x40) = (int)uVar18;
      if (0 < (int)uVar12) {
        pvVar5 = (void *)(lVar17 + lVar9);
        uVar11 = uVar18 & 0xffffffff;
        memcpy(pvVar4,pvVar5,uVar11);
        if (uVar12 == 1) {
          uVar15 = 1;
        }
        else {
                    /* try { // try from 0060d8b8 to 0070d8e7 has its CatchHandler @ 0060db04 */
          memcpy((void *)((long)pvVar4 + (uVar18 & 0xffffffff)),
                 (void *)((long)pvVar5 + (ulong)uVar6),uVar11);
          if (uVar12 != 2) {
            uVar10 = uVar18 * 2;
            lVar17 = uVar15 - 2;
            uVar12 = uVar6 << 1;
            do {
              memcpy((void *)(*(long *)(param_1 + 0x48) + (uVar10 & 0xffffffff)),
                     (void *)((long)pvVar5 + (ulong)uVar12),uVar11);
              uVar10 = uVar10 + uVar18;
                    /* try { // try from 0060d8e8 to 0070da23 has its CatchHandler @ 0060d64c */
              lVar17 = lVar17 + -1;
              uVar12 = uVar12 + uVar6;
            } while (lVar17 != 0);
          }
          lVar17 = *(long *)(param_1 + 0xe8);
          uVar15 = (ulong)*(uint *)param_1;
        }
      }
    }
    uVar12 = *(uint *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x50) - 1U < 0xe) {
      lVar7 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x50) - 1U) * 8);
    }
    else {
      lVar7 = 0;
    }
    if (uVar12 != 0) {
      lVar9 = *(long *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
      uVar18 = lVar7 * (ulong)*(uint *)(param_1 + 0x54);
      iVar14 = (int)uVar15;
      uVar6 = iVar14 * (int)uVar18;
      if (uVar6 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = calloc((ulong)uVar6,1);
        *(void **)(param_1 + 0x60) = pvVar4;
      }
      *(int *)(param_1 + 0x58) = (int)uVar18;
      if (0 < iVar14) {
        pvVar5 = (void *)(lVar17 + lVar9);
        uVar11 = uVar18 & 0xffffffff;
        memcpy(pvVar4,pvVar5,uVar11);
        if (iVar14 == 1) {
          uVar15 = 1;
        }
        else {
          memcpy((void *)((long)pvVar4 + (uVar18 & 0xffffffff)),
                 (void *)((long)pvVar5 + (ulong)uVar12),uVar11);
          if (iVar14 != 2) {
            uVar10 = uVar18 * 2;
            lVar17 = uVar15 - 2;
            uVar6 = uVar12 << 1;
            do {
              memcpy((void *)(*(long *)(param_1 + 0x60) + (uVar10 & 0xffffffff)),
                     (void *)((long)pvVar5 + (ulong)uVar6),uVar11);
              uVar10 = uVar10 + uVar18;
              lVar17 = lVar17 + -1;
              uVar6 = uVar6 + uVar12;
            } while (lVar17 != 0);
          }
          lVar17 = *(long *)(param_1 + 0xe8);
          uVar15 = (ulong)*(uint *)param_1;
        }
      }
    }
    uVar6 = (uint)uVar15;
    uVar12 = *(uint *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x68) - 1U < 0xe) {
      lVar7 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x68) - 1U) * 8);
    }
    else {
      lVar7 = 0;
    }
    if (uVar12 != 0) {
      lVar9 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
                    /* try { // try from 0060da24 to 0070da2f has its CatchHandler @ 0060db54 */
      uVar18 = lVar7 * (ulong)*(uint *)(param_1 + 0x6c);
      uVar2 = uVar6 * (int)uVar18;
      if (uVar2 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
                    /* try { // try from 0060da30 to 0070db27 has its CatchHandler @ 0060d64c */
        pvVar4 = calloc((ulong)uVar2,1);
        *(void **)(param_1 + 0x78) = pvVar4;
      }
      *(int *)(param_1 + 0x70) = (int)uVar18;
      if (0 < (int)uVar6) {
        pvVar5 = (void *)(lVar17 + lVar9);
        uVar11 = uVar18 & 0xffffffff;
        memcpy(pvVar4,pvVar5,uVar11);
        if (uVar6 == 1) {
          uVar6 = 1;
        }
        else {
          memcpy((void *)((long)pvVar4 + (uVar18 & 0xffffffff)),
                 (void *)((long)pvVar5 + (ulong)uVar12),uVar11);
          if (uVar6 != 2) {
            uVar10 = uVar18 * 2;
            lVar17 = uVar15 - 2;
            uVar6 = uVar12 << 1;
            do {
              memcpy((void *)(*(long *)(param_1 + 0x78) + (uVar10 & 0xffffffff)),
                     (void *)((long)pvVar5 + (ulong)uVar6),uVar11);
              uVar10 = uVar10 + uVar18;
              lVar17 = lVar17 + -1;
              uVar6 = uVar6 + uVar12;
            } while (lVar17 != 0);
          }
          lVar17 = *(long *)(param_1 + 0xe8);
          uVar6 = *(uint *)param_1;
        }
      }
    }
    uVar12 = *(uint *)(param_1 + 0x88);
    if (*(int *)(param_1 + 0x80) - 1U < 0xe) {
      lVar7 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0x80) - 1U) * 8);
    }
    else {
      lVar7 = 0;
    }
    if (uVar12 != 0) {
                    /* catch() { ... } // from try @ 0060d8b8 with catch @ 0060db04 */
      lVar9 = *(long *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      uVar15 = lVar7 * (ulong)*(uint *)(param_1 + 0x84);
      uVar2 = uVar6 * (int)uVar15;
      if (uVar2 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = calloc((ulong)uVar2,1);
                    /* try { // try from 0060db28 to 0070dbf3 has its CatchHandler @ 0060dbfc */
        *(void **)(param_1 + 0x90) = pvVar4;
      }
      *(int *)(param_1 + 0x88) = (int)uVar15;
      if (0 < (int)uVar6) {
        pvVar5 = (void *)(lVar17 + lVar9);
        uVar18 = uVar15 & 0xffffffff;
                    /* catch() { ... } // from try @ 0060da24 with catch @ 0060db54 */
        memcpy(pvVar4,pvVar5,uVar18);
        if ((uVar6 != 1) &&
           (memcpy((void *)((long)pvVar4 + (uVar15 & 0xffffffff)),
                   (void *)((long)pvVar5 + (ulong)uVar12),uVar18), uVar6 != 2)) {
          uVar11 = uVar15 * 2;
          lVar17 = (ulong)uVar6 - 2;
          uVar6 = uVar12 << 1;
          do {
            memcpy((void *)(*(long *)(param_1 + 0x90) + (uVar11 & 0xffffffff)),
                   (void *)((long)pvVar5 + (ulong)uVar6),uVar18);
            uVar11 = uVar11 + uVar15;
                    /* catch() { ... } // from try @ 0060d7f4 with catch @ 0060dba4 */
            lVar17 = lVar17 + -1;
                    /* catch() { ... } // from try @ 0060d794 with catch @ 0060dba8 */
            uVar6 = uVar6 + uVar12;
          } while (lVar17 != 0);
        }
      }
    }
    uVar12 = *(uint *)(param_1 + 8);
    if (uVar12 != 0) {
      uVar15 = 0;
      do {
        lVar17 = *(long *)(param_1 + 0x98);
        lVar7 = *(long *)(param_1 + 0xe8);
        uVar6 = *(uint *)param_1;
        puVar13 = (uint *)(lVar17 + uVar15 * 0x18 + 8);
        uVar2 = *puVar13;
        uVar3 = *(int *)(lVar17 + uVar15 * 0x18) - 1;
        if (uVar3 < 0xe) {
          lVar9 = *(long *)(&DAT_0069b8a0 + (long)(int)uVar3 * 8);
                    /* try { // try from 0060dbf4 to 0070dc13 has its CatchHandler @ 0060d64c */
        }
        else {
          lVar9 = 0;
        }
                    /* catch() { ... } // from try @ 0060db28 with catch @ 0060dbfc */
        lVar17 = lVar17 + uVar15 * 0x18;
                    /* catch() { ... } // from try @ 0060d6e8 with catch @ 0060dc00 */
        plVar20 = (long *)(lVar17 + 0x10);
        lVar16 = *plVar20;
        if (uVar2 != 0) {
          *plVar20 = 0;
          uVar18 = lVar9 * (ulong)*(uint *)(lVar17 + 4);
                    /* try { // try from 0060dc14 to 0070dc97 has its CatchHandler @ 0060dc14
                       catch() { ... } // from try @ 0060dc14 with catch @ 0060dc14
                       catch() { ... } // from try @ 0060dd1c with catch @ 0060dc14 */
          uVar3 = uVar6 * (uint)uVar18;
          if (uVar3 == 0) {
            pvVar4 = (void *)0x0;
          }
          else {
            pvVar4 = calloc((ulong)uVar3,1);
            *plVar20 = (long)pvVar4;
          }
          *puVar13 = (uint)uVar18;
          if (0 < (int)uVar6) {
            memcpy(pvVar4,(void *)(lVar7 + lVar16),uVar18 & 0xffffffff);
            if (uVar6 != 1) {
              lVar17 = (ulong)uVar6 - 1;
              uVar11 = uVar18;
              uVar12 = uVar2;
              do {
                memcpy((void *)(*plVar20 + (uVar11 & 0xffffffff)),
                       (void *)(lVar7 + lVar16 + (ulong)uVar12),uVar18 & 0xffffffff);
                uVar12 = uVar12 + uVar2;
                lVar17 = lVar17 + -1;
                uVar11 = uVar11 + uVar18;
              } while (lVar17 != 0);
              uVar12 = *(uint *)(param_1 + 8);
            }
          }
        }
                    /* try { // try from 0060dc98 to 0070dccb has its CatchHandler @ 0060dec8 */
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar12);
    }
    pvVar4 = *(void **)(param_1 + 0xe8);
    uVar12 = *(uint *)param_1;
    uVar15 = (ulong)uVar12;
    uVar6 = *(uint *)(param_1 + 0xa8);
    if (*(int *)(param_1 + 0xa0) - 1U < 0xe) {
      lVar17 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xa0) - 1U) * 8);
                    /* try { // try from 0060dccc to 0070dcdf has its CatchHandler @ 0060de0c */
    }
    else {
      lVar17 = 0;
    }
    if (uVar6 != 0) {
      lVar7 = *(long *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      uVar18 = lVar17 * (ulong)*(uint *)(param_1 + 0xa4);
      uVar2 = uVar12 * (int)uVar18;
      if (uVar2 == 0) {
                    /* try { // try from 0060dd0c to 0070dd1b has its CatchHandler @ 0060de14 */
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = calloc((ulong)uVar2,1);
        *(void **)(param_1 + 0xb0) = pvVar5;
      }
      *(int *)(param_1 + 0xa8) = (int)uVar18;
      if (0 < (int)uVar12) {
                    /* try { // try from 0060dd1c to 0070df2f has its CatchHandler @ 0060dc14 */
        pvVar1 = (void *)((long)pvVar4 + lVar7);
        uVar11 = uVar18 & 0xffffffff;
        memcpy(pvVar5,pvVar1,uVar11);
        if (uVar12 == 1) {
          uVar15 = 1;
        }
        else {
          memcpy((void *)((long)pvVar5 + (uVar18 & 0xffffffff)),
                 (void *)((long)pvVar1 + (ulong)uVar6),uVar11);
          if (uVar12 != 2) {
            uVar10 = uVar18 * 2;
            lVar17 = uVar15 - 2;
            uVar12 = uVar6 << 1;
            do {
              memcpy((void *)(*(long *)(param_1 + 0xb0) + (uVar10 & 0xffffffff)),
                     (void *)((long)pvVar1 + (ulong)uVar12),uVar11);
              uVar10 = uVar10 + uVar18;
              lVar17 = lVar17 + -1;
              uVar12 = uVar12 + uVar6;
            } while (lVar17 != 0);
          }
          pvVar4 = *(void **)(param_1 + 0xe8);
          uVar15 = (ulong)*(uint *)param_1;
        }
      }
    }
    uVar6 = (uint)uVar15;
    uVar12 = *(uint *)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0xb8) - 1U < 0xe) {
      lVar17 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xb8) - 1U) * 8);
    }
    else {
      lVar17 = 0;
    }
    if (uVar12 != 0) {
      lVar7 = *(long *)(param_1 + 200);
      *(undefined8 *)(param_1 + 200) = 0;
      uVar18 = lVar17 * (ulong)*(uint *)(param_1 + 0xbc);
      uVar2 = uVar6 * (int)uVar18;
      if (uVar2 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = calloc((ulong)uVar2,1);
        *(void **)(param_1 + 200) = pvVar5;
      }
      *(int *)(param_1 + 0xc0) = (int)uVar18;
      if (0 < (int)uVar6) {
        pvVar1 = (void *)((long)pvVar4 + lVar7);
        uVar11 = uVar18 & 0xffffffff;
                    /* catch() { ... } // from try @ 0060dccc with catch @ 0060de0c */
                    /* catch() { ... } // from try @ 0060dd0c with catch @ 0060de14 */
        memcpy(pvVar5,pvVar1,uVar11);
        if (uVar6 == 1) {
          uVar6 = 1;
        }
        else {
          memcpy((void *)((long)pvVar5 + (uVar18 & 0xffffffff)),
                 (void *)((long)pvVar1 + (ulong)uVar12),uVar11);
          if (uVar6 != 2) {
            uVar10 = uVar18 * 2;
            lVar17 = uVar15 - 2;
            uVar6 = uVar12 << 1;
            do {
              memcpy((void *)(*(long *)(param_1 + 200) + (uVar10 & 0xffffffff)),
                     (void *)((long)pvVar1 + (ulong)uVar6),uVar11);
              uVar10 = uVar10 + uVar18;
              lVar17 = lVar17 + -1;
              uVar6 = uVar6 + uVar12;
            } while (lVar17 != 0);
          }
          pvVar4 = *(void **)(param_1 + 0xe8);
          uVar6 = *(uint *)param_1;
        }
      }
    }
    uVar12 = *(uint *)(param_1 + 0xd8);
    if (*(int *)(param_1 + 0xd0) - 1U < 0xe) {
      lVar17 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)(param_1 + 0xd0) - 1U) * 8);
    }
    else {
      lVar17 = 0;
    }
    if (uVar12 != 0) {
      lVar7 = *(long *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      uVar15 = lVar17 * (ulong)*(uint *)(param_1 + 0xd4);
      uVar2 = uVar6 * (int)uVar15;
      if (uVar2 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
                    /* catch() { ... } // from try @ 0060dc98 with catch @ 0060dec8 */
        pvVar5 = calloc((ulong)uVar2,1);
        *(void **)(param_1 + 0xe0) = pvVar5;
      }
      *(int *)(param_1 + 0xd8) = (int)uVar15;
      if (0 < (int)uVar6) {
        pvVar1 = (void *)((long)pvVar4 + lVar7);
        uVar18 = uVar15 & 0xffffffff;
        memcpy(pvVar5,pvVar1,uVar18);
        if (uVar6 != 1) {
          memcpy((void *)((long)pvVar5 + (uVar15 & 0xffffffff)),
                 (void *)((long)pvVar1 + (ulong)uVar12),uVar18);
          if (uVar6 != 2) {
            uVar11 = uVar15 * 2;
                    /* try { // try from 0060df30 to 0070df6b has its CatchHandler @ 0060df30
                       catch() { ... } // from try @ 0060df30 with catch @ 0060df30
                       catch() { ... } // from try @ 0060df70 with catch @ 0060df30 */
            lVar17 = (ulong)uVar6 - 2;
            uVar6 = uVar12 << 1;
            do {
              memcpy((void *)(*(long *)(param_1 + 0xe0) + (uVar11 & 0xffffffff)),
                     (void *)((long)pvVar1 + (ulong)uVar6),uVar18);
              uVar11 = uVar11 + uVar15;
              lVar17 = lVar17 + -1;
              uVar6 = uVar6 + uVar12;
            } while (lVar17 != 0);
          }
          pvVar4 = *(void **)(param_1 + 0xe8);
        }
      }
    }
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
                    /* try { // try from 0060df6c to 0070df6f has its CatchHandler @ 0060e0d8 */
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
  }
                    /* try { // try from 0060df70 to 0070e0eb has its CatchHandler @ 0060df30 */
  return;
}


