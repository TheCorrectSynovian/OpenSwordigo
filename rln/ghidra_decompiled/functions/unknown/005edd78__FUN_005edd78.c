/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005edd78
 * Function: FUN_005edd78
 * Signature: undefined FUN_005edd78(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005edd78(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  plVar14 = *(long **)(param_1 + 0x20);
  switch(*(undefined1 *)((long)plVar14 + 0x21)) {
  case 0:
    FUN_005ee294(param_1);
  default:
    uVar5 = 0;
    break;
  case 1:
    if (plVar14[7] != 0) {
      uVar5 = FUN_005ee534(plVar14);
      return uVar5;
    }
    plVar6 = (long *)plVar14[0x1b];
    if (plVar6 != plVar14 + 0x17) {
      do {
        if ((((*(byte *)((long)plVar6 + 9) & 7) == 0) && (3 < (int)((long *)plVar6[2])[1])) &&
           ((*(byte *)(*(long *)plVar6[2] + 9) & 3) != 0)) {
          FUN_005ee364(plVar14);
        }
        plVar6 = (long *)plVar6[4];
                    /* try { // try from 005edf3c to 006edf47 has its CatchHandler @ 005ee788 */
      } while (plVar6 != plVar14 + 0x17);
      while (plVar14[7] != 0) {
        FUN_005ee534(plVar14);
      }
    }
    lVar16 = plVar14[9];
    plVar14[9] = 0;
    plVar14[7] = lVar16;
                    /* try { // try from 005edf68 to 006edf8f has its CatchHandler @ 005ee678 */
    if ((*(byte *)(param_1 + 9) & 3) != 0) {
      FUN_005ee364(plVar14,param_1);
    }
    FUN_005eeb50(plVar14);
    lVar16 = plVar14[7];
    while (lVar16 != 0) {
      FUN_005ee534(plVar14);
                    /* try { // try from 005edf94 to 006edfa7 has its CatchHandler @ 005ee784 */
      lVar16 = plVar14[7];
    }
    lVar16 = plVar14[8];
    plVar14[7] = lVar16;
    plVar14[8] = 0;
    while (lVar16 != 0) {
                    /* try { // try from 005edfa8 to 006edfb3 has its CatchHandler @ 005ee74c */
      FUN_005ee534(plVar14);
      lVar16 = plVar14[7];
    }
    lVar16 = FUN_005ed86c(param_1,0);
    plVar6 = (long *)plVar14[10];
    if (plVar6 != (long *)0x0) {
      do {
        plVar6 = (long *)*plVar6;
        *(byte *)((long)plVar6 + 9) =
             *(byte *)((long)plVar6 + 9) & 0xf8 | *(byte *)(plVar14 + 4) & 3;
        FUN_005ee364(plVar14,plVar6);
      } while (plVar6 != (long *)plVar14[10]);
    }
    if (plVar14[7] == 0) {
      lVar17 = 0;
      lVar7 = plVar14[9];
    }
    else {
      lVar17 = 0;
      do {
        lVar7 = FUN_005ee534(plVar14);
        lVar17 = lVar7 + lVar17;
      } while (plVar14[7] != 0);
      lVar7 = plVar14[9];
    }
    for (; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x30)) {
      if (((*(byte *)(lVar7 + 9) >> 4 & 1) != 0) && (iVar9 = *(int *)(lVar7 + 0x38), iVar9 != 0)) {
                    /* try { // try from 005ee05c to 006ee063 has its CatchHandler @ 005ee748 */
        lVar10 = (long)iVar9 << 4;
        do {
                    /* try { // try from 005ee064 to 006ee077 has its CatchHandler @ 005ee744 */
          lVar1 = *(long *)(lVar7 + 0x18) + lVar10;
          iVar11 = *(int *)(lVar1 + -8);
          if (3 < iVar11) {
                    /* try { // try from 005ee078 to 006ee08b has its CatchHandler @ 005ee900 */
            bVar4 = *(byte *)(*(long *)(lVar1 + -0x10) + 9);
            if (iVar11 == 4) {
                    /* try { // try from 005ee08c to 006ee093 has its CatchHandler @ 005ee734 */
              *(byte *)(*(long *)(lVar1 + -0x10) + 9) = bVar4 & 0xfc;
            }
            else {
                    /* try { // try from 005ee094 to 006ee0a7 has its CatchHandler @ 005ee730 */
              if (((bVar4 & 3) != 0) || ((iVar11 == 7 && ((bVar4 >> 3 & 1) != 0)))) {
                    /* try { // try from 005ee0a8 to 006ee0bb has its CatchHandler @ 005ee8f8 */
                *(undefined4 *)(lVar1 + -8) = 0;
              }
            }
          }
          iVar9 = iVar9 + -1;
          lVar10 = lVar10 + -0x10;
        } while (iVar9 != 0);
      }
                    /* try { // try from 005ee0bc to 006ee0cb has its CatchHandler @ 005ee960 */
      iVar9 = 1 << (ulong)(*(byte *)(lVar7 + 0xb) & 0x1f);
      lVar10 = (long)iVar9 * 0x28;
      do {
        lVar12 = *(long *)(lVar7 + 0x20);
        lVar1 = lVar12 + lVar10;
        iVar11 = *(int *)(lVar1 + -0x20);
        if (iVar11 != 0) {
          if (*(int *)(lVar1 + -0x10) < 4) {
LAB_005ee114:
            if (3 < iVar11) {
LAB_005ee11c:
              lVar12 = *(long *)(lVar12 + lVar10 + -0x28);
              bVar4 = *(byte *)(lVar12 + 9);
              if (iVar11 == 4) {
                *(byte *)(lVar12 + 9) = bVar4 & 0xfc;
              }
              else {
                    /* try { // try from 005ee14c to 006ee173 has its CatchHandler @ 005ee960 */
                if (((bVar4 & 3) != 0) || ((iVar11 == 7 && ((bVar4 >> 3 & 1) != 0))))
                goto LAB_005ee150;
              }
            }
          }
          else {
            lVar13 = *(long *)(lVar12 + lVar10 + -0x18);
            bVar4 = *(byte *)(lVar13 + 9);
            if (*(int *)(lVar1 + -0x10) == 4) {
              *(byte *)(lVar13 + 9) = bVar4 & 0xfc;
              iVar11 = *(int *)(lVar1 + -0x20);
                    /* try { // try from 005ee104 to 006ee12b has its CatchHandler @ 005ee628 */
              if (iVar11 < 4) goto LAB_005ee164;
              goto LAB_005ee11c;
            }
            if ((bVar4 & 3) == 0) goto LAB_005ee114;
LAB_005ee150:
            *(undefined4 *)(lVar1 + -0x20) = 0;
            if (3 < *(int *)(lVar1 + -0x10)) {
              *(undefined4 *)(lVar1 + -0x10) = 0xb;
            }
          }
        }
LAB_005ee164:
        iVar9 = iVar9 + -1;
        lVar10 = lVar10 + -0x28;
      } while (iVar9 != 0);
    }
    plVar14[6] = (long)(plVar14 + 5);
                    /* try { // try from 005ee194 to 006ee197 has its CatchHandler @ 005ee8f8 */
    uVar5 = 0;
    *(undefined4 *)((long)plVar14 + 0x24) = 0;
    *(undefined1 *)((long)plVar14 + 0x21) = 2;
    *(byte *)(plVar14 + 4) = *(byte *)(plVar14 + 4) ^ 3;
    plVar14[0x10] = plVar14[0xf] - (lVar17 + lVar16);
    break;
  case 2:
                    /* try { // try from 005edde4 to 006eddf7 has its CatchHandler @ 005ee890 */
    iVar9 = *(int *)((long)plVar14 + 0x24);
    lVar16 = plVar14[0xf];
                    /* try { // try from 005eddf8 to 006ede03 has its CatchHandler @ 005ee82c */
    *(int *)((long)plVar14 + 0x24) = iVar9 + 1;
    FUN_005edb10(param_1,*plVar14 + (long)iVar9 * 8,0xfffffffffffffffd);
    if (*(int *)((long)plVar14 + 0xc) <= *(int *)((long)plVar14 + 0x24)) {
      *(undefined1 *)((long)plVar14 + 0x21) = 3;
    }
    lVar17 = plVar14[0x10];
    uVar5 = 10;
    lVar16 = plVar14[0xf] - lVar16;
    goto LAB_005ee1d4;
  case 3:
    lVar16 = plVar14[0xf];
    plVar6 = (long *)FUN_005edb10(param_1,plVar14[6],0x28);
                    /* try { // try from 005ede44 to 006ede4f has its CatchHandler @ 005ee7dc */
    plVar14[6] = (long)plVar6;
    if (*plVar6 == 0) {
      lVar17 = *(long *)(param_1 + 0x20);
      uVar3 = *(uint *)(lVar17 + 0xc);
      uVar2 = uVar3 + 3;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
                    /* try { // try from 005ede70 to 006ede97 has its CatchHandler @ 005ee67c */
      if ((0x40 < (int)uVar3) && (*(uint *)(lVar17 + 8) < (uint)((int)uVar2 >> 2))) {
        FUN_005f3464(param_1,uVar3 >> 1);
      }
      uVar8 = *(ulong *)(lVar17 + 0x68);
      if (0x40 < uVar8) {
        uVar15 = uVar8 >> 1;
                    /* try { // try from 005ede98 to 006edea3 has its CatchHandler @ 005eea60 */
        if (uVar15 + 1 < 0xfffffffffffffffe) {
                    /* try { // try from 005edea4 to 006edeab has its CatchHandler @ 005ee7d8 */
                    /* try { // try from 005edeac to 006edf13 has its CatchHandler @ 005eea60 */
          uVar5 = FUN_005eed74(param_1,*(undefined8 *)(lVar17 + 0x58),uVar8,uVar15);
        }
        else {
          uVar5 = FUN_005eede0(param_1);
        }
        *(undefined8 *)(lVar17 + 0x58) = uVar5;
        *(ulong *)(lVar17 + 0x68) = uVar15;
      }
      *(undefined1 *)((long)plVar14 + 0x21) = 4;
    }
                    /* try { // try from 005ee1c8 to 006ee1cb has its CatchHandler @ 005ee900 */
    lVar17 = plVar14[0x10];
    uVar5 = 400;
    lVar16 = plVar14[0xf] - lVar16;
LAB_005ee1d4:
    plVar14[0x10] = lVar16 + lVar17;
    break;
  case 4:
    if (plVar14[10] == 0) {
      uVar5 = 0;
      *(undefined1 *)((long)plVar14 + 0x21) = 0;
      plVar14[0x11] = 0;
    }
    else {
      FUN_005ed9a0(param_1);
      if ((ulong)plVar14[0x10] < 0x65) {
                    /* try { // try from 005ee02c to 006ee05b has its CatchHandler @ 005eea60 */
        uVar5 = 100;
      }
      else {
        plVar14[0x10] = plVar14[0x10] - 100;
        uVar5 = 100;
      }
    }
  }
  return uVar5;
}


