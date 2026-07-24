/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061a34c
 * Function: ETCTextureDecompress
 * Signature: undefined __cdecl ETCTextureDecompress(void * param_1, int * param_2, int * param_3, void * param_4, int * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* ETCTextureDecompress(void const*, int const&, int const&, void const*, int const&) */

int ETCTextureDecompress(void *param_1,int *param_2,int *param_3,void *param_4,int *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  
                    /* try { // try from 0061a354 to 0071a3db has its CatchHandler @ 0061a2b4 */
  iVar4 = *param_3;
  if (iVar4 < 1) {
    uVar24 = *param_2;
  }
  else {
    uVar24 = *param_2;
    uVar5 = *(uint *)PTR_ETC_FLIP_007e6658;
    uVar6 = *(uint *)PTR_ETC_DIFF_007e54b0;
    uVar25 = 0;
    iVar27 = 0;
    uVar18 = uVar24;
    if ((int)uVar24 < 5) {
      uVar18 = 4;
    }
                    /* try { // try from 0061a3dc to 0071a3eb has its CatchHandler @ 0061a58c */
                    /* try { // try from 0061a3ec to 0071a443 has its CatchHandler @ 0061a2b4 */
    uVar10 = -(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3;
    do {
      if (0 < (int)uVar24) {
        uVar14 = -(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3;
        lVar13 = 0;
        puVar29 = (ulong *)((long)param_4 + uVar14);
        puVar12 = (ulong *)((long)param_4 + uVar14 + 0x10);
        puVar30 = (ulong *)((long)param_4 + uVar14 + (long)(int)uVar24 * 0x10);
        puVar31 = param_1;
        do {
          uVar14 = *puVar31;
          uVar3 = puVar31[1];
          uVar16 = (uint)uVar14;
          uVar19 = (uint)(uVar14 >> 0x10);
          uVar22 = (uint)(uVar14 >> 8);
                    /* try { // try from 0061a444 to 0071a453 has its CatchHandler @ 0061a698 */
          if ((uVar14 & uVar6) == 0) {
            uVar20 = (uint)(uVar14 >> 0xc);
            uVar1 = (uint)(uVar14 >> 4);
            uVar32 = uVar19 & 0xf0 | uVar19 >> 4 & 0xf;
            uVar33 = uVar16 & 0xf0 | uVar16 >> 4 & 0xf;
            uVar34 = uVar22 & 0xf0 | (uVar22 & 0xffffff) >> 4 & 0xf;
            uVar20 = uVar20 & 0xf0 | (uVar20 & 0xfffff) >> 4 & 0xf;
            uVar19 = uVar1 & 0xf0 | (uVar1 & 0xfffffff) >> 4 & 0xf;
            uVar22 = uVar16 & 0xf | uVar16 << 4;
          }
          else {
                    /* try { // try from 0061a454 to 0071a707 has its CatchHandler @ 0061a2b4 */
            uVar20 = (uVar19 >> 3 & 0x1f) + ((int)(uVar16 << 0xd) >> 0x1d);
            uVar33 = (uVar16 >> 3 & 0x1f) + ((int)(uVar16 << 0x1d) >> 0x1d);
            uVar32 = uVar19 & 0xf8 | uVar19 >> 5 & 7;
            uVar19 = ((uVar22 & 0xffffff) >> 3 & 0x1f) + ((int)(uVar16 << 0x15) >> 0x1d);
            uVar34 = uVar22 & 0xf8 | (uVar22 & 0xffffff) >> 5 & 7;
            uVar22 = (uVar33 >> 2 & 0x3f) + (uVar33 & 0xff) * 8;
            uVar33 = uVar16 & 0xf8 | uVar16 >> 5 & 7;
            uVar19 = (uVar19 >> 2 & 0x3f) + (uVar19 & 0xff) * 8;
            uVar20 = (uVar20 >> 2 & 0x3f) + (uVar20 & 0xff) * 8;
          }
          puVar31 = puVar31 + 2;
          uVar35 = uVar14 >> 0x1d & 7;
          uVar36 = uVar14 >> 0x1a & 7;
          uVar37 = uVar3 << 1;
          uVar22 = uVar22 & 0xff;
          uVar19 = uVar19 & 0xff;
          uVar20 = uVar20 & 0xff;
          if ((uVar14 & uVar5) == 0) {
            uVar14 = 0xc;
            puVar21 = puVar12;
            do {
                    /* catch() { ... } // from try @ 0061a444 with catch @ 0061a698 */
              iVar7 = *(int *)(&UNK_0069c0f0 +
                              (uVar37 >> (uVar14 - 4 & 0x3f) & 2 |
                              uVar3 >> (uVar14 + 0xc & 0x3f) & 1) * 4 + uVar35 * 0x10);
              iVar26 = iVar7 + uVar33;
              if (iVar26 < 0xff) {
                iVar8 = 0;
                if (-1 < iVar26) {
                  iVar8 = iVar26 * 0x10000;
                }
              }
              else {
                iVar8 = 0xff0000;
              }
              iVar26 = iVar7 + uVar34;
              if (iVar26 < 0xff) {
                iVar23 = 0;
                if (-1 < iVar26) {
                  iVar23 = iVar26 * 0x100;
                }
              }
              else {
                iVar23 = 0xff00;
              }
              uVar16 = iVar7 + uVar32;
              uVar1 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar16) {
                uVar1 = 0xff;
              }
                    /* try { // try from 0061a708 to 0071a77f has its CatchHandler @ 0061a708
                       catch() { ... } // from try @ 0061a708 with catch @ 0061a708
                       catch() { ... } // from try @ 0061a790 with catch @ 0061a708
                       catch() { ... } // from try @ 0061a7f8 with catch @ 0061a708 */
              iVar7 = *(int *)(&UNK_0069c0f0 +
                              (uVar37 >> (uVar14 - 0xc & 0x3f) & 2 |
                              uVar3 >> (uVar14 + 4 & 0x3f) & 1) * 4 + uVar36 * 0x10);
              iVar26 = iVar7 + uVar22;
              puVar21[-2] = (ulong)(iVar8 + uVar1 + iVar23 | 0xff000000);
              if (iVar26 < 0xff) {
                iVar8 = 0;
                if (-1 < iVar26) {
                  iVar8 = iVar26 * 0x10000;
                }
              }
              else {
                iVar8 = 0xff0000;
              }
              iVar26 = iVar7 + uVar19;
              if (iVar26 < 0xff) {
                iVar23 = 0;
                if (-1 < iVar26) {
                  iVar23 = iVar26 * 0x100;
                }
              }
              else {
                iVar23 = 0xff00;
              }
              uVar16 = iVar7 + uVar20;
                    /* try { // try from 0061a780 to 0071a78f has its CatchHandler @ 0061a8fc */
              iVar26 = *(int *)(&UNK_0069c0f0 +
                               (uVar37 >> (uVar14 & 0x3f) & 2 | uVar3 >> (uVar14 + 0x10 & 0x3f) & 1)
                               * 4 + uVar35 * 0x10);
              uVar1 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar16) {
                uVar1 = 0xff;
              }
                    /* try { // try from 0061a790 to 0071a7e7 has its CatchHandler @ 0061a708 */
              iVar7 = iVar26 + uVar33;
              *puVar21 = (ulong)(iVar8 + uVar1 + iVar23 | 0xff000000);
              if (iVar7 < 0xff) {
                iVar8 = 0;
                if (-1 < iVar7) {
                  iVar8 = iVar7 * 0x10000;
                }
              }
              else {
                iVar8 = 0xff0000;
              }
              iVar7 = iVar26 + uVar34;
              if (iVar7 < 0xff) {
                iVar23 = 0;
                if (-1 < iVar7) {
                  iVar23 = iVar7 * 0x100;
                }
              }
              else {
                iVar23 = 0xff00;
              }
                    /* try { // try from 0061a7e8 to 0071a7f7 has its CatchHandler @ 0061a8c4 */
                    /* try { // try from 0061a7f8 to 0071a96b has its CatchHandler @ 0061a708 */
              uVar16 = iVar26 + uVar32;
              iVar26 = *(int *)(&UNK_0069c0f0 +
                               (uVar37 >> (uVar14 - 8 & 0x3f) & 2 | uVar3 >> (uVar14 + 8 & 0x3f) & 1
                               ) * 4 + uVar36 * 0x10);
              uVar1 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar16) {
                uVar1 = 0xff;
              }
              iVar7 = iVar26 + uVar22;
              puVar21[-1] = (ulong)(iVar8 + uVar1 + iVar23 | 0xff000000);
              if (iVar7 < 0xff) {
                iVar8 = 0;
                if (-1 < iVar7) {
                  iVar8 = iVar7 * 0x10000;
                }
              }
              else {
                iVar8 = 0xff0000;
              }
              iVar7 = iVar26 + uVar19;
              if (iVar7 < 0xff) {
                iVar23 = 0;
                if (-1 < iVar7) {
                  iVar23 = iVar7 * 0x100;
                }
              }
              else {
                iVar23 = 0xff00;
              }
              uVar16 = iVar26 + uVar20;
              uVar1 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar16) {
                uVar1 = 0xff;
              }
              uVar14 = uVar14 + 1;
              puVar21[1] = (ulong)(iVar8 + uVar1 + iVar23 | 0xff000000);
              puVar21 = (ulong *)((long)puVar21 + uVar10);
            } while (uVar14 != 0x10);
          }
          else {
            lVar9 = 0;
            puVar17 = puVar30;
            puVar21 = puVar29;
            do {
              lVar15 = 0;
              puVar11 = puVar21;
              puVar28 = puVar17;
              do {
                iVar26 = 8;
                lVar2 = 0x18;
                if (7 < (ulong)(lVar9 + lVar15)) {
                  lVar2 = 8;
                  iVar26 = -8;
                }
                iVar7 = *(int *)(&UNK_0069c0f0 +
                                (uVar37 >> ((ulong)(uint)((int)lVar9 + iVar26 + (int)lVar15) & 0x3f)
                                 & 2 | uVar3 >> (lVar9 + lVar2 + lVar15 & 0x3fU) & 1) * 4 +
                                uVar35 * 0x10);
                iVar26 = iVar7 + uVar33;
                if (iVar26 < 0xff) {
                  iVar8 = 0;
                  if (-1 < iVar26) {
                    iVar8 = iVar26 * 0x10000;
                  }
                }
                else {
                  iVar8 = 0xff0000;
                }
                iVar26 = iVar7 + uVar34;
                if (iVar26 < 0xff) {
                  iVar23 = 0;
                  if (-1 < iVar26) {
                    iVar23 = iVar26 * 0x100;
                  }
                }
                else {
                    /* catch() { ... } // from try @ 0061a3dc with catch @ 0061a58c */
                  iVar23 = 0xff00;
                }
                uVar16 = iVar7 + uVar32;
                uVar1 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
                if (0xfe < (int)uVar16) {
                  uVar1 = 0xff;
                }
                iVar26 = 8;
                lVar2 = 0x18;
                if (7 < lVar9 + lVar15 + 2U) {
                  lVar2 = 8;
                  iVar26 = -8;
                }
                    /* catch() { ... } // from try @ 0061a304 with catch @ 0061a5cc */
                    /* catch() { ... } // from try @ 0061a344 with catch @ 0061a5d4 */
                iVar7 = *(int *)(&UNK_0069c0f0 +
                                (uVar37 >> ((ulong)((int)lVar9 + iVar26 + (int)lVar15 + 2) & 0x3f) &
                                 2 | uVar3 >> (lVar9 + lVar2 + lVar15 + 2U & 0x3f) & 1) * 4 +
                                uVar36 * 0x10);
                iVar26 = iVar7 + uVar22;
                *puVar11 = (ulong)(iVar8 + uVar1 + iVar23 | 0xff000000);
                if (iVar26 < 0xff) {
                  iVar8 = 0;
                  if (-1 < iVar26) {
                    iVar8 = iVar26 * 0x10000;
                  }
                }
                else {
                  iVar8 = 0xff0000;
                }
                iVar26 = iVar7 + uVar19;
                if (iVar26 < 0xff) {
                  iVar23 = 0;
                  if (-1 < iVar26) {
                    iVar23 = iVar26 * 0x100;
                  }
                }
                else {
                  iVar23 = 0xff00;
                }
                uVar16 = iVar7 + uVar20;
                uVar1 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
                if (0xfe < (int)uVar16) {
                  uVar1 = 0xff;
                }
                lVar15 = lVar15 + 4;
                *puVar28 = (ulong)(iVar8 + uVar1 + iVar23 | 0xff000000);
                puVar11 = puVar11 + 1;
                puVar28 = puVar28 + 1;
              } while (lVar15 != 0x10);
              lVar9 = lVar9 + 1;
              puVar21 = (ulong *)((long)puVar21 + uVar10);
              puVar17 = (ulong *)((long)puVar17 + uVar10);
            } while (lVar9 != 2);
          }
          lVar13 = lVar13 + 4;
          puVar29 = puVar29 + 4;
          puVar30 = puVar30 + 4;
          puVar12 = puVar12 + 4;
        } while (lVar13 < (int)uVar24);
        param_1 = (void *)((long)param_1 + (ulong)((uVar18 - 1 >> 1 & 0x7ffffffe) + 2) * 8);
      }
                    /* catch() { ... } // from try @ 0061a7e8 with catch @ 0061a8c4 */
      iVar27 = iVar27 + 4;
      uVar25 = (ulong)((int)uVar25 + uVar24 * 4);
    } while (iVar27 < iVar4);
  }
  iVar4 = uVar24 * iVar4;
                    /* catch() { ... } // from try @ 0061a780 with catch @ 0061a8fc */
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  return iVar4 >> 1;
}


