/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee534
 * Function: FUN_005ee534
 * Signature: undefined FUN_005ee534(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005ee534(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  
  lVar14 = *(long *)(param_1 + 0x38);
  lVar6 = 0;
  *(byte *)(lVar14 + 9) = *(byte *)(lVar14 + 9) | 4;
  switch(*(undefined1 *)(lVar14 + 8)) {
  case 5:
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar14 + 0x30);
    lVar6 = *(long *)(lVar14 + 0x10);
    if (lVar6 == 0) {
LAB_005ee964:
      bVar5 = false;
LAB_005ee968:
      iVar9 = *(int *)(lVar14 + 0x38);
      bVar3 = false;
      if (iVar9 != 0) {
        lVar6 = (long)iVar9 << 4;
        do {
          lVar16 = *(long *)(lVar14 + 0x18) + lVar6;
          if ((3 < *(int *)(lVar16 + -8)) && ((*(byte *)(*(long *)(lVar16 + -0x10) + 9) & 3) != 0))
          {
            FUN_005ee364(param_1);
          }
          iVar9 = iVar9 + -1;
          lVar6 = lVar6 + -0x10;
          bVar3 = false;
        } while (iVar9 != 0);
      }
LAB_005ee9b0:
      iVar9 = 1 << (ulong)(*(byte *)(lVar14 + 0xb) & 0x1f);
      lVar6 = (long)iVar9 * 0x28;
      do {
        lVar11 = *(long *)(lVar14 + 0x20);
        lVar16 = lVar11 + lVar6;
        if (*(int *)(lVar16 + -0x20) == 0) {
          if (3 < *(int *)(lVar16 + -0x10)) {
            *(undefined4 *)(lVar16 + -0x10) = 0xb;
          }
        }
        else {
          if (((!bVar5) && (3 < *(int *)(lVar11 + lVar6 + -0x10))) &&
             ((*(byte *)(*(long *)(lVar11 + lVar6 + -0x18) + 9) & 3) != 0)) {
            FUN_005ee364(param_1);
          }
          if (((!bVar3) && (3 < *(int *)(lVar16 + -0x20))) &&
             ((*(byte *)(*(long *)(lVar11 + lVar6 + -0x28) + 9) & 3) != 0)) {
            FUN_005ee364(param_1);
          }
        }
        iVar9 = iVar9 + -1;
        lVar6 = lVar6 + -0x28;
      } while (iVar9 != 0);
      if (bVar3 || bVar5) goto LAB_005eea58;
    }
    else {
      if ((*(byte *)(lVar6 + 9) & 3) != 0) {
        FUN_005ee364(param_1,lVar6);
        lVar6 = *(long *)(lVar14 + 0x10);
        if (lVar6 == 0) goto LAB_005ee964;
      }
                    /* catch() { ... } // from try @ 005ee2d4 with catch @ 005ee5d4 */
      if ((((*(byte *)(lVar6 + 10) >> 3 & 1) != 0) ||
          (plVar18 = (long *)FUN_005f4e8c(lVar6,3,*(undefined8 *)(param_1 + 0x140)),
          plVar18 == (long *)0x0)) || ((int)plVar18[1] != 4)) goto LAB_005ee964;
      lVar6 = *plVar18;
      pcVar7 = strchr((char *)(lVar6 + 0x18),0x6b);
                    /* try { // try from 005ee5f8 to 006ee9bb has its CatchHandler @ 005eec4c */
      pcVar8 = strchr((char *)(lVar6 + 0x18),0x76);
      bVar5 = pcVar7 != (char *)0x0;
      if (pcVar7 != (char *)0x0 || pcVar8 != (char *)0x0) {
                    /* catch() { ... } // from try @ 005ee250 with catch @ 005ee624 */
                    /* catch() { ... } // from try @ 005ee104 with catch @ 005ee628 */
        *(byte *)(lVar14 + 9) =
             bVar5 << 3 | (pcVar8 != (char *)0x0) << 4 | *(byte *)(lVar14 + 9) & 0xe7;
        *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(param_1 + 0x48);
        *(long *)(param_1 + 0x48) = lVar14;
      }
      if ((pcVar7 == (char *)0x0) || (pcVar8 == (char *)0x0)) {
        if (pcVar8 == (char *)0x0) goto LAB_005ee968;
        bVar3 = true;
        goto LAB_005ee9b0;
      }
LAB_005eea58:
                    /* catch() { ... } // from try @ 005ee360 with catch @ 005eea5c
                       catch() { ... } // from try @ 005ee404 with catch @ 005eea5c */
                    /* catch() { ... } // from try @ 005edc5c with catch @ 005eea60
                       catch() { ... } // from try @ 005edc70 with catch @ 005eea60
                       catch() { ... } // from try @ 005edd54 with catch @ 005eea60
                       catch() { ... } // from try @ 005edd68 with catch @ 005eea60
                       catch() { ... } // from try @ 005ede98 with catch @ 005eea60
                       catch() { ... } // from try @ 005edeac with catch @ 005eea60
                       catch() { ... } // from try @ 005ee02c with catch @ 005eea60
                       catch() { ... } // from try @ 005ee358 with catch @ 005eea60 */
      *(byte *)(lVar14 + 9) = *(byte *)(lVar14 + 9) & 0xfb;
    }
    lVar6 = (long)*(int *)(lVar14 + 0x38) * 0x10 +
            (long)(1 << (ulong)(*(byte *)(lVar14 + 0xb) & 0x1f)) * 0x28 + 0x40;
    break;
  case 6:
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar14 + 0x10);
    if ((*(byte *)(*(long *)(lVar14 + 0x18) + 9) & 3) != 0) {
      FUN_005ee364(param_1);
    }
                    /* catch() { ... } // from try @ 005edf68 with catch @ 005ee678 */
                    /* catch() { ... } // from try @ 005ede70 with catch @ 005ee67c */
    if (*(char *)(lVar14 + 10) == '\0') {
                    /* try { // try from 005eea90 to 006eeab7 has its CatchHandler @ 005eec58 */
      if ((*(byte *)(*(long *)(lVar14 + 0x20) + 9) & 3) != 0) {
        FUN_005ee364(param_1);
      }
      uVar13 = (ulong)*(byte *)(lVar14 + 0xb);
      if (*(byte *)(lVar14 + 0xb) != 0) {
        uVar15 = 0;
        do {
          if ((*(byte *)(*(long *)(lVar14 + 0x28 + uVar15 * 8) + 9) & 3) != 0) {
            FUN_005ee364(param_1);
            uVar13 = (ulong)*(byte *)(lVar14 + 0xb);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar13);
      }
    }
    else {
                    /* catch() { ... } // from try @ 005edd2c with catch @ 005ee680 */
      uVar13 = (ulong)*(byte *)(lVar14 + 0xb);
                    /* catch() { ... } // from try @ 005ee3b4 with catch @ 005ee684 */
      if (*(byte *)(lVar14 + 0xb) != 0) {
        uVar15 = 0;
        piVar17 = (int *)(lVar14 + 0x30);
        do {
          if ((3 < *piVar17) && ((*(byte *)(*(long *)(piVar17 + -2) + 9) & 3) != 0)) {
            FUN_005ee364(param_1);
            uVar13 = (ulong)*(byte *)(lVar14 + 0xb);
          }
          uVar15 = uVar15 + 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 < uVar13);
      }
    }
    lVar6 = 0x38;
                    /* try { // try from 005eeaf4 to 006eec43 has its CatchHandler @ 005eec4c */
    lVar16 = 0x10;
    if (*(char *)(lVar14 + 10) == '\0') {
      lVar16 = 8;
      lVar6 = 0x30;
    }
    lVar6 = lVar6 + ((ulong)*(byte *)(lVar14 + 0xb) - 1) * lVar16;
    break;
  case 8:
                    /* catch() { ... } // from try @ 005ee444 with catch @ 005ee6d4 */
                    /* catch() { ... } // from try @ 005ee278 with catch @ 005ee6d8 */
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar14 + 0xa0);
                    /* catch() { ... } // from try @ 005ee224 with catch @ 005ee6dc */
    *(undefined8 *)(lVar14 + 0xa0) = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar14;
    *(byte *)(lVar14 + 9) = *(byte *)(lVar14 + 9) & 0xfb;
    if ((3 < *(int *)(lVar14 + 0x80)) && ((*(byte *)(*(long *)(lVar14 + 0x78) + 9) & 3) != 0)) {
      FUN_005ee364(param_1);
    }
    uVar13 = *(ulong *)(lVar14 + 0x50);
    plVar10 = *(long **)(lVar14 + 0x10);
    plVar18 = plVar10;
    while (plVar4 = plVar18, uVar13 <= *(ulong *)(lVar14 + 0x28)) {
                    /* catch() { ... } // from try @ 005ee094 with catch @ 005ee730 */
      puVar1 = (undefined8 *)(uVar13 + 0x10);
                    /* catch() { ... } // from try @ 005ee08c with catch @ 005ee734 */
      uVar13 = uVar13 + 0x28;
      plVar18 = (long *)*puVar1;
      if ((long *)*puVar1 <= plVar4) {
        plVar18 = plVar4;
      }
    }
                    /* catch() { ... } // from try @ 005ee05c with catch @ 005ee748 */
    plVar18 = *(long **)(lVar14 + 0x40);
                    /* catch() { ... } // from try @ 005edfa8 with catch @ 005ee74c */
    if (plVar18 < plVar10) {
      do {
        if ((3 < (int)plVar18[1]) && ((*(byte *)(*plVar18 + 9) & 3) != 0)) {
                    /* catch() { ... } // from try @ 005edf94 with catch @ 005ee784 */
          FUN_005ee364(param_1);
                    /* catch() { ... } // from try @ 005edf3c with catch @ 005ee788 */
          plVar10 = *(long **)(lVar14 + 0x10);
        }
        plVar18 = plVar18 + 2;
      } while (plVar18 < plVar10);
    }
    for (; plVar18 <= plVar4; plVar18 = plVar18 + 2) {
      *(undefined4 *)(plVar18 + 1) = 0;
    }
    uVar2 = *(uint *)(lVar14 + 0x5c);
    if ((int)uVar2 < 0x4e21) {
      lVar6 = *(long *)(lVar14 + 0x40);
                    /* catch() { ... } // from try @ 005edea4 with catch @ 005ee7d8 */
                    /* catch() { ... } // from try @ 005ede44 with catch @ 005ee7dc */
      if ((0x10 < (int)uVar2) &&
         ((int)((ulong)(*(long *)(lVar14 + 0x28) - *(long *)(lVar14 + 0x50)) >> 3) * 0x33333334 <
          (int)uVar2)) {
        FUN_005ebb2c(lVar14,uVar2 >> 1);
      }
      uVar2 = *(uint *)(lVar14 + 0x58);
      if (((int)((uint)((ulong)((long)plVar4 - lVar6) >> 2) & 0xfffffffc) < (int)uVar2) &&
         (0x5a < (int)uVar2)) {
        FUN_005eba24(lVar14,uVar2 >> 1);
      }
    }
    lVar6 = (long)*(int *)(lVar14 + 0x5c) * 0x28 + (long)*(int *)(lVar14 + 0x58) * 0x10 + 0xb8;
                    /* catch() { ... } // from try @ 005eddf8 with catch @ 005ee82c */
    break;
  case 9:
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar14 + 0x68);
    lVar6 = *(long *)(lVar14 + 0x40);
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) & 0xfc;
    }
    iVar9 = *(int *)(lVar14 + 0x4c);
    if (0 < iVar9) {
      lVar16 = 0;
      lVar6 = 0;
      do {
        if ((3 < *(int *)(*(long *)(lVar14 + 0x10) + lVar16 + 8)) &&
           ((*(byte *)(*(long *)(*(long *)(lVar14 + 0x10) + lVar16) + 9) & 3) != 0)) {
          FUN_005ee364(param_1);
          iVar9 = *(int *)(lVar14 + 0x4c);
        }
                    /* catch() { ... } // from try @ 005edde4 with catch @ 005ee890 */
        lVar6 = lVar6 + 1;
                    /* catch() { ... } // from try @ 005edd60 with catch @ 005ee894 */
                    /* catch() { ... } // from try @ 005edd00 with catch @ 005ee898 */
        lVar16 = lVar16 + 0x10;
      } while (lVar6 < iVar9);
    }
    iVar9 = *(int *)(lVar14 + 0x48);
    if (0 < iVar9) {
      lVar6 = 0;
      do {
        lVar16 = *(long *)(*(long *)(lVar14 + 0x38) + lVar6 * 8);
        if (lVar16 != 0) {
          *(byte *)(lVar16 + 9) = *(byte *)(lVar16 + 9) & 0xfc;
          iVar9 = *(int *)(lVar14 + 0x48);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar9);
    }
    iVar9 = *(int *)(lVar14 + 0x58);
    if (0 < iVar9) {
      lVar6 = 0;
      do {
                    /* catch() { ... } // from try @ 005edc68 with catch @ 005ee8e8 */
        lVar16 = *(long *)(*(long *)(lVar14 + 0x20) + lVar6 * 8);
                    /* catch() { ... } // from try @ 005ee0a8 with catch @ 005ee8f8
                       catch() { ... } // from try @ 005ee194 with catch @ 005ee8f8 */
        if ((lVar16 != 0) && ((*(byte *)(lVar16 + 9) & 3) != 0)) {
                    /* catch() { ... } // from try @ 005ee078 with catch @ 005ee900
                       catch() { ... } // from try @ 005ee1c8 with catch @ 005ee900 */
          FUN_005ee364(param_1);
                    /* catch() { ... } // from try @ 005ee28c with catch @ 005ee908
                       catch() { ... } // from try @ 005ee31c with catch @ 005ee908 */
          iVar9 = *(int *)(lVar14 + 0x58);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar9);
    }
    iVar12 = *(int *)(lVar14 + 0x5c);
    if (iVar12 < 1) {
      lVar6 = (long)iVar12;
    }
    else {
      lVar11 = 0;
      lVar16 = 0;
      do {
        lVar6 = *(long *)(*(long *)(lVar14 + 0x30) + lVar11);
        if (lVar6 != 0) {
          *(byte *)(lVar6 + 9) = *(byte *)(lVar6 + 9) & 0xfc;
          iVar12 = *(int *)(lVar14 + 0x5c);
        }
        lVar16 = lVar16 + 1;
        lVar6 = (long)iVar12;
        lVar11 = lVar11 + 0x10;
      } while (lVar16 < lVar6);
      iVar9 = *(int *)(lVar14 + 0x58);
                    /* catch() { ... } // from try @ 005ee0bc with catch @ 005ee960
                       catch() { ... } // from try @ 005ee14c with catch @ 005ee960 */
    }
    lVar6 = ((long)*(int *)(lVar14 + 0x54) + (long)*(int *)(lVar14 + 0x50)) * 4 +
            (lVar6 + *(int *)(lVar14 + 0x4c)) * 0x10 +
            ((long)*(int *)(lVar14 + 0x48) + (long)iVar9) * 8 + 0x78;
  }
  return lVar6;
}


