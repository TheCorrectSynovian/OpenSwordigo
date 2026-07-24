/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eab24
 * Function: FUN_005eab24
 * Signature: undefined FUN_005eab24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_005eab24(long param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  
                    /* try { // try from 005eab30 to 006eac2f has its CatchHandler @ 005ea940 */
  bVar4 = *(byte *)(param_1 + 0x73);
  if (bVar4 < 0xfb) {
    bVar5 = *(byte *)(param_1 + 0x72);
    if ((bVar5 & 5) == 4) {
      return 0;
    }
    uVar15 = (uint)bVar4;
    if (uVar15 < (bVar5 & 1) + (uint)*(byte *)(param_1 + 0x71)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x48) <= (int)(uint)*(byte *)(param_1 + 0x70)) {
      iVar2 = *(int *)(param_1 + 0x50);
      iVar7 = iVar2 + -1;
      if (iVar2 < 1) {
        return 0;
      }
      if (*(int *)(param_1 + 0x54) != 0 && *(int *)(param_1 + 0x54) != iVar2) {
        return 0;
      }
      lVar19 = *(long *)(param_1 + 0x18);
      uVar3 = *(uint *)(lVar19 + (long)iVar7 * 4);
      if ((uVar3 & 0x3f) == 0x1e) {
        if (param_2 < 1) {
          return uVar3;
        }
        iVar20 = 0;
                    /* catch() { ... } // from try @ 005eab08 with catch @ 005eabfc */
                    /* catch() { ... } // from try @ 005eaa74 with catch @ 005eac00
                       catch() { ... } // from try @ 005eaab8 with catch @ 005eac00 */
                    /* catch() { ... } // from try @ 005eaa94 with catch @ 005eac10 */
        iVar21 = iVar7;
        do {
          uVar3 = *(uint *)(lVar19 + (long)iVar20 * 4);
          if (0x25 < (uVar3 & 0x3f)) {
            return 0;
          }
          uVar8 = uVar3 >> 6 & 0xff;
                    /* try { // try from 005eac30 to 006eac9f has its CatchHandler @ 005eaca4 */
          if (uVar15 <= uVar8) {
            return 0;
          }
          bVar6 = (&DAT_00699dd1)[uVar3 & 0x3f];
          uVar16 = (uint)bVar4;
          if ((bVar6 & 3) == 2) {
            uVar22 = (uVar3 >> 0xe) - 0x1ffff;
            if ((bVar6 & 0x30) == 0x20) {
              iVar1 = iVar20 + uVar22 + 1;
              if (iVar1 < 0) {
                return 0;
              }
              if (iVar2 <= iVar1) {
                return 0;
              }
                    /* try { // try from 005eaca0 to 006ead7b has its CatchHandler @ 005ea940 */
                    /* catch() { ... } // from try @ 005eac30 with catch @ 005eaca4 */
              if (0 < iVar1) {
                    /* catch() { ... } // from try @ 005eaa2c with catch @ 005eaca8 */
                uVar23 = 0;
                iVar13 = uVar22 + iVar20;
                do {
                  if ((*(uint *)(lVar19 + (long)iVar13 * 4) & 0x7fc03f) != 0x22) break;
                  uVar23 = uVar23 + 1;
                  iVar13 = iVar13 + -1;
                } while ((long)uVar23 < (long)iVar1);
                uVar18 = 0;
                if ((uVar23 & 1) != 0) {
                  return 0;
                }
                goto LAB_005ead84;
              }
            }
            uVar18 = 0;
          }
          else if ((bVar6 & 3) == 1) {
            uVar22 = uVar3 >> 0xe;
            uVar18 = 0;
            if (((~(uint)bVar6 & 0x30) == 0) && (*(int *)(param_1 + 0x4c) <= (int)uVar22)) {
              return 0;
            }
          }
          else if ((bVar6 & 3) == 0) {
            bVar9 = bVar6 >> 4 & 3;
            uVar22 = uVar3 >> 0x17;
            if (bVar9 == 3) {
              if (-1 < (int)uVar3) goto LAB_005ead24;
              if (*(int *)(param_1 + 0x4c) <= (int)(uVar3 >> 0x17 & 0xff)) {
                return 0;
              }
            }
            else if (bVar9 == 2) {
LAB_005ead24:
              if (uVar15 <= uVar22) {
                return 0;
              }
            }
            else if ((bVar9 == 0) && (uVar22 != 0)) {
              return 0;
            }
            uVar17 = bVar6 >> 2 & 3;
            uVar18 = uVar3 >> 0xe & 0x1ff;
            if (uVar17 == 3) {
              if ((uVar3 >> 0x16 & 1) == 0) goto LAB_005ead58;
                    /* catch() { ... } // from try @ 005eaa04 with catch @ 005ead78 */
                    /* try { // try from 005ead7c to 006eadb3 has its CatchHandler @ 005ead7c
                       catch() { ... } // from try @ 005ead7c with catch @ 005ead7c
                       catch() { ... } // from try @ 005eadbc with catch @ 005ead7c */
              if (*(int *)(param_1 + 0x4c) <= (int)(uVar3 >> 0xe & 0xff)) {
                return 0;
              }
            }
            else if (uVar17 == 2) {
LAB_005ead58:
              if (uVar16 <= uVar18) {
                return 0;
              }
            }
            else if (((bVar6 >> 2 & 3) == 0) && (bVar11 = uVar18 != 0, uVar18 = 0, bVar11)) {
              return uVar17;
            }
          }
          else {
                    /* catch() { ... } // from try @ 005eaa18 with catch @ 005ead0c */
            uVar18 = 0;
            uVar22 = 0;
          }
LAB_005ead84:
          lVar14 = (long)iVar20;
          iVar1 = iVar20;
          if (((uint)(uVar8 == param_3) & (bVar6 & 0x40) >> 6) == 0) {
            iVar1 = iVar21;
          }
          if ((char)bVar6 < '\0') {
            if (iVar2 <= iVar20 + 2) {
              return 0;
            }
                    /* try { // try from 005eadb4 to 006eadbb has its CatchHandler @ 005eaeb0 */
                    /* try { // try from 005eadbc to 006eaf1f has its CatchHandler @ 005ead7c */
            if ((*(uint *)(lVar19 + lVar14 * 4 + 4) & 0x3f) != 0x16) {
              return 0;
            }
          }
          iVar21 = iVar1;
          if (0x23 < (uVar3 & 0x3f) - 2) goto switchD_005eaddc_caseD_6;
          uVar17 = (uint)bVar4;
          switch(uVar3 & 0x3f) {
          case 2:
            if (uVar18 == 1) {
              if (iVar2 <= iVar20 + 2) {
                return 0;
              }
              if ((*(uint *)(lVar19 + lVar14 * 4 + 4) & 0x7fc03f) == 0x22) {
                return 0;
              }
            }
            break;
          case 3:
            bVar11 = (int)param_3 <= (int)uVar22;
            bVar10 = bVar11 && SBORROW4(uVar8,param_3);
            bVar12 = bVar11 && uVar8 == param_3;
            bVar11 = bVar11 && (int)(uVar8 - param_3) < 0;
            goto LAB_005eafc8;
          case 4:
          case 8:
            uVar18 = (uint)*(byte *)(param_1 + 0x70);
            goto joined_r0x005eaeb0;
          case 5:
          case 7:
            if (*(int *)(*(long *)(param_1 + 0x10) + (long)(int)uVar22 * 0x10 + 8) != 4) {
              return 0;
            }
            break;
          case 0xb:
            if (uVar17 <= uVar8 + 1) {
              return 0;
            }
            iVar21 = iVar20;
            if (uVar8 + 1 != param_3) {
              iVar21 = iVar1;
            }
            break;
          case 0x15:
joined_r0x005eaeb0:
                    /* catch() { ... } // from try @ 005eadb4 with catch @ 005eaeb0 */
            if ((int)uVar18 <= (int)uVar22) {
              return 0;
            }
            break;
          case 0x1c:
          case 0x1d:
            if ((uVar22 != 0) && ((int)uVar17 < (int)(uVar22 + uVar8))) {
              return 0;
            }
            if (uVar18 == 0) {
              uVar3 = *(uint *)(lVar19 + lVar14 * 4 + 4);
              if (0x22 < (uVar3 & 0x3f)) {
                return 0;
              }
                    /* try { // try from 005eafb0 to 006eafc3 has its CatchHandler @ 005eb1ec */
              if ((1L << (uVar3 & 0x3f) & 0x470000000U) == 0) {
                return 0;
              }
              if (uVar3 >> 0x17 != 0) {
                return 0;
              }
            }
            else if ((uVar18 - 1 != 0) && ((int)uVar17 < (int)((uVar18 - 1) + uVar8))) {
              return 0;
            }
                    /* try { // try from 005eafc4 to 006eafcf has its CatchHandler @ 005eb190 */
            bVar10 = SBORROW4(uVar8,param_3);
            bVar11 = (int)(uVar8 - param_3) < 0;
            bVar12 = uVar8 == param_3;
            goto LAB_005eafc8;
          case 0x1e:
            if ((1 < (int)uVar22) && ((int)uVar17 < (int)(uVar8 + uVar22 + -1))) {
              return 0;
            }
            break;
          case 0x1f:
          case 0x20:
            if (uVar17 <= uVar8 + 3) {
              return 0;
            }
          case 0x16:
            iVar1 = iVar20 + uVar22 + 1;
            uVar3 = 0;
            if ((iVar20 < iVar1 && param_3 != 0xff) && iVar1 <= param_2) {
              uVar3 = uVar22;
            }
            iVar20 = uVar3 + iVar20;
            break;
          case 0x21:
            if (uVar18 == 0) {
              return 0;
            }
            uVar8 = uVar8 + 2;
            if (uVar16 <= uVar18 + uVar8) {
              return 0;
            }
            bVar10 = SBORROW4(uVar8,param_3);
            bVar11 = (int)(uVar8 - param_3) < 0;
            bVar12 = uVar8 == param_3;
LAB_005eafc8:
            if (bVar12 || bVar11 != bVar10) {
              iVar21 = iVar20;
            }
            break;
          case 0x22:
            if ((0 < (int)uVar22) && ((int)uVar16 <= (int)(uVar22 + uVar8))) {
              return 0;
            }
            if ((uVar18 == 0) && (iVar20 = iVar20 + 1, iVar7 <= iVar20)) {
              return 0;
            }
            break;
          case 0x24:
                    /* try { // try from 005eaf20 to 006eaf6b has its CatchHandler @ 005eaf20
                       catch() { ... } // from try @ 005eaf20 with catch @ 005eaf20
                       catch() { ... } // from try @ 005eaf80 with catch @ 005eaf20
                       catch() { ... } // from try @ 005eafd0 with catch @ 005eaf20
                       catch() { ... } // from try @ 005eb09c with catch @ 005eaf20 */
            if (*(int *)(param_1 + 0x58) <= (int)uVar22) {
              return 0;
            }
            bVar6 = *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar22 * 8) + 0x70);
            iVar1 = iVar20 + (uint)bVar6;
            if (iVar2 <= iVar1) {
              return 0;
            }
            if (bVar6 != 0) {
              uVar23 = 0;
              do {
                if ((*(uint *)(lVar19 + 4 + lVar14 * 4 + uVar23 * 4) & 0x3f | 4) != 4) {
                  return 0;
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 < bVar6);
            }
                    /* try { // try from 005eaf6c to 006eaf7f has its CatchHandler @ 005eb248 */
            if (param_3 != 0xff) {
              iVar20 = iVar1;
            }
            break;
          case 0x25:
            if ((bVar5 & 6) != 2) {
              return 0;
            }
                    /* try { // try from 005eaf80 to 006eafaf has its CatchHandler @ 005eaf20 */
            if (uVar22 == 0) {
              uVar3 = *(uint *)(lVar19 + lVar14 * 4 + 4);
              if (0x22 < (uVar3 & 0x3f)) {
                return 0;
              }
              if ((1L << (uVar3 & 0x3f) & 0x470000000U) == 0) {
                return 0;
              }
              if ((int)uVar16 < (int)(uVar8 - 1)) {
                return 0;
              }
              if (uVar3 >> 0x17 != 0) {
                return 0;
              }
            }
            else if ((int)uVar16 < (int)((uVar22 - 1) + uVar8)) {
              return 0;
            }
          }
switchD_005eaddc_caseD_6:
          iVar20 = iVar20 + 1;
                    /* try { // try from 005eafd0 to 006eb08f has its CatchHandler @ 005eaf20 */
          if (param_2 <= iVar20) {
            return *(uint *)(lVar19 + (long)iVar21 * 4);
          }
        } while( true );
      }
    }
  }
  return 0;
}


