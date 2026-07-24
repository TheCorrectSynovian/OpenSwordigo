/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062f63c
 * Function: FUN_0062f63c
 * Signature: undefined FUN_0062f63c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062f63c(undefined8 *param_1,undefined1 param_2,byte *param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  bVar10 = *param_3;
                    /* try { // try from 0062f640 to 0072f6d3 has its CatchHandler @ 0062f56c */
  lVar11 = 0;
  uVar12 = 0;
  uVar6 = (ulong)bVar10;
  while (lVar8 = (long)param_6 - (long)param_5, (long)uVar6 < lVar8) {
    while( true ) {
      if ((char)bVar10 < '\x01') goto LAB_0062f694;
      param_6 = (undefined8 *)((long)param_6 - uVar6);
      if (param_4 - 1U <= uVar12) break;
      uVar12 = uVar12 + 1;
      lVar8 = (long)param_6 - (long)param_5;
      bVar10 = param_3[uVar12];
      uVar6 = (ulong)bVar10;
      if (lVar8 <= (long)uVar6) goto LAB_0062f694;
    }
    lVar11 = lVar11 + 1;
  }
LAB_0062f694:
  if (param_5 != param_6) {
    puVar1 = (undefined1 *)((long)param_5 + 1);
    puVar2 = (undefined1 *)((long)param_6 + (1 - (long)puVar1));
    if ((puVar2 < (undefined1 *)0x10) || (param_1 < param_5 + 2 && param_5 < param_1 + 2)) {
      lVar5 = 0;
      do {
        *(undefined1 *)((long)param_1 + lVar5) = *(undefined1 *)((long)param_5 + lVar5);
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar8);
    }
    else {
                    /* try { // try from 0062f6d4 to 0072f6e7 has its CatchHandler @ 0062f7d0 */
      uVar6 = ((ulong)((long)param_6 + (-0xf - (long)puVar1)) >> 4) + 1;
                    /* try { // try from 0062f6e8 to 0072f74b has its CatchHandler @ 0062f56c */
      uVar7 = 0;
      puVar9 = (undefined1 *)(uVar6 * 0x10);
      puVar13 = param_1;
      puVar14 = param_5;
      do {
        uVar15 = *puVar14;
        uVar7 = uVar7 + 1;
        puVar13[1] = puVar14[1];
        *puVar13 = uVar15;
        puVar13 = puVar13 + 2;
        puVar14 = puVar14 + 2;
      } while (uVar7 < uVar6);
                    /* try { // try from 0062f74c to 0072f75f has its CatchHandler @ 0062f8c0 */
                    /* try { // try from 0062f760 to 0072f7f3 has its CatchHandler @ 0062f56c */
                    /* catch() { ... } // from try @ 0062f6d4 with catch @ 0062f7d0 */
                    /* try { // try from 0062f7f4 to 0072f90b has its CatchHandler @ 0062f914 */
                    /* catch() { ... } // from try @ 0062f62c with catch @ 0062f820 */
      if ((((((puVar2 != puVar9) &&
             (*(undefined1 *)(param_1 + uVar6 * 2) = *(undefined1 *)(param_5 + uVar6 * 2),
             param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 1)))) &&
            (*(undefined1 *)((long)param_1 + (long)(puVar9 + 1)) =
                  *(undefined1 *)((long)param_5 + (long)(puVar9 + 1)),
            param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 2)))) &&
           ((*(undefined1 *)((long)param_1 + (long)(puVar9 + 2)) =
                  *(undefined1 *)((long)param_5 + (long)(puVar9 + 2)),
            param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 3)) &&
            (*(undefined1 *)((long)param_1 + (long)(puVar9 + 3)) =
                  *(undefined1 *)((long)param_5 + (long)(puVar9 + 3)),
            param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 4)))))) &&
          (*(undefined1 *)((long)param_1 + (long)(puVar9 + 4)) =
                *(undefined1 *)((long)param_5 + (long)(puVar9 + 4)),
          param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 5)))) &&
         (((((*(undefined1 *)((long)param_1 + (long)(puVar9 + 5)) =
                   *(undefined1 *)((long)param_5 + (long)(puVar9 + 5)),
             param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 6)) &&
             (*(undefined1 *)((long)param_1 + (long)(puVar9 + 6)) =
                   *(undefined1 *)((long)param_5 + (long)(puVar9 + 6)),
             param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 7)))) &&
            ((*(undefined1 *)((long)param_1 + (long)(puVar9 + 7)) =
                   *(undefined1 *)((long)param_5 + (long)(puVar9 + 7)),
             param_6 != param_5 + uVar6 * 2 + 1 &&
             (((*(undefined1 *)(param_1 + uVar6 * 2 + 1) = *(undefined1 *)(param_5 + uVar6 * 2 + 1),
               param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 9)) &&
               (*(undefined1 *)((long)param_1 + (long)(puVar9 + 9)) =
                     *(undefined1 *)((long)param_5 + (long)(puVar9 + 9)),
               param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 10)))) &&
              (*(undefined1 *)((long)param_1 + (long)(puVar9 + 10)) =
                    *(undefined1 *)((long)param_5 + (long)(puVar9 + 10)),
              param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 0xb)))))))) &&
           ((*(undefined1 *)((long)param_1 + (long)(puVar9 + 0xb)) =
                  *(undefined1 *)((long)param_5 + (long)(puVar9 + 0xb)),
            param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 0xc)) &&
            (*(undefined1 *)((long)param_1 + (long)(puVar9 + 0xc)) =
                  *(undefined1 *)((long)param_5 + (long)(puVar9 + 0xc)),
            param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 0xd)))))) &&
          (*(undefined1 *)((long)param_1 + (long)(puVar9 + 0xd)) =
                *(undefined1 *)((long)param_5 + (long)(puVar9 + 0xd)),
          param_6 != (undefined8 *)((long)param_5 + (long)(puVar9 + 0xe)))))) {
        *(undefined1 *)((long)param_1 + (long)(puVar9 + 0xe)) =
             *(undefined1 *)((long)param_5 + (long)(puVar9 + 0xe));
      }
    }
    param_1 = (undefined8 *)((long)param_1 + (long)((long)param_6 + (1 - (long)puVar1)));
  }
  while (puVar13 = param_1, lVar11 = lVar11 + -1, lVar11 != -1) {
    *(undefined1 *)puVar13 = param_2;
    param_1 = (undefined8 *)((long)puVar13 + 1);
    bVar10 = param_3[uVar12];
    uVar4 = (uint)bVar10;
    if (uVar4 != 0) {
      if ((param_1 < param_6 + 2 && param_6 < (undefined8 *)((long)puVar13 + 0x11U)) ||
         (uVar4 < 0x10)) {
        lVar8 = 0;
        do {
          lVar5 = lVar8 + 1;
          *(undefined1 *)((long)puVar13 + lVar8 + 1) = *(undefined1 *)((long)param_6 + lVar8);
          lVar8 = lVar5;
        } while (lVar5 != (ulong)(byte)(bVar10 - 1) + 1);
      }
      else {
        uVar15 = *param_6;
        uVar4 = (uVar4 - 0x10 >> 4 & 0xf) + 1;
        uVar6 = (ulong)uVar4 & 0xf;
        lVar8 = uVar6 * 0x10;
        *(undefined8 *)((long)puVar13 + 9) = param_6[1];
        *param_1 = uVar15;
        if (uVar4 != 1) {
          uVar15 = param_6[2];
          *(undefined8 *)((long)puVar13 + 0x19) = param_6[3];
          *(undefined8 *)((long)puVar13 + 0x11U) = uVar15;
          if (uVar4 != 2) {
            uVar15 = param_6[4];
            *(undefined8 *)((long)puVar13 + 0x29) = param_6[5];
            *(undefined8 *)((long)puVar13 + 0x21) = uVar15;
            if (uVar4 != 3) {
              uVar15 = param_6[6];
              *(undefined8 *)((long)puVar13 + 0x39) = param_6[7];
              *(undefined8 *)((long)puVar13 + 0x31) = uVar15;
              if (uVar4 != 4) {
                uVar15 = param_6[8];
                *(undefined8 *)((long)puVar13 + 0x49) = param_6[9];
                *(undefined8 *)((long)puVar13 + 0x41) = uVar15;
                if (uVar4 != 5) {
                  uVar15 = param_6[10];
                  *(undefined8 *)((long)puVar13 + 0x59) = param_6[0xb];
                  *(undefined8 *)((long)puVar13 + 0x51) = uVar15;
                  if (uVar4 != 6) {
                    uVar15 = param_6[0xc];
                    *(undefined8 *)((long)puVar13 + 0x69) = param_6[0xd];
                    *(undefined8 *)((long)puVar13 + 0x61) = uVar15;
                    if (uVar4 != 7) {
                      uVar15 = param_6[0xe];
                      *(undefined8 *)((long)puVar13 + 0x79) = param_6[0xf];
                      *(undefined8 *)((long)puVar13 + 0x71) = uVar15;
                      if (uVar4 != 8) {
                        uVar15 = param_6[0x10];
                        *(undefined8 *)((long)puVar13 + 0x89) = param_6[0x11];
                        *(undefined8 *)((long)puVar13 + 0x81) = uVar15;
                        if (uVar4 != 9) {
                          uVar15 = param_6[0x12];
                          *(undefined8 *)((long)puVar13 + 0x99) = param_6[0x13];
                          *(undefined8 *)((long)puVar13 + 0x91) = uVar15;
                          if (uVar4 != 10) {
                            uVar15 = param_6[0x14];
                            *(undefined8 *)((long)puVar13 + 0xa9) = param_6[0x15];
                            *(undefined8 *)((long)puVar13 + 0xa1) = uVar15;
                            if (uVar4 != 0xb) {
                              uVar15 = param_6[0x16];
                              *(undefined8 *)((long)puVar13 + 0xb9) = param_6[0x17];
                              *(undefined8 *)((long)puVar13 + 0xb1) = uVar15;
                              if (uVar4 != 0xc) {
                                uVar15 = param_6[0x18];
                                *(undefined8 *)((long)puVar13 + 0xc9) = param_6[0x19];
                                *(undefined8 *)((long)puVar13 + 0xc1) = uVar15;
                                if (uVar4 != 0xd) {
                                  uVar15 = param_6[0x1a];
                                  *(undefined8 *)((long)puVar13 + 0xd9) = param_6[0x1b];
                                  *(undefined8 *)((long)puVar13 + 0xd1) = uVar15;
                                  if (uVar4 == 0xf) {
                                    uVar15 = param_6[0x1c];
                                    *(undefined8 *)((long)puVar13 + 0xe9) = param_6[0x1d];
                                    *(undefined8 *)((long)puVar13 + 0xe1) = uVar15;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar4 = (uint)bVar10 - (uint)lVar8;
        if ((uint)bVar10 != (uint)lVar8) {
          *(undefined1 *)(param_1 + uVar6 * 2) = *(undefined1 *)(param_6 + uVar6 * 2);
          if (((uVar4 & 0xff) != 1) &&
             (*(undefined1 *)((long)param_1 + lVar8 + 1) =
                   *(undefined1 *)((long)param_6 + lVar8 + 1), (uVar4 & 0xff) != 2)) {
            uVar3 = uVar4 & 0xff;
            *(undefined1 *)((long)param_1 + lVar8 + 2) = *(undefined1 *)((long)param_6 + lVar8 + 2);
                    /* catch() { ... } // from try @ 0062f5b8 with catch @ 0062f870 */
            if ((uVar3 != 3) &&
               (((*(undefined1 *)((long)param_1 + lVar8 + 3) =
                       *(undefined1 *)((long)param_6 + lVar8 + 3), uVar3 != 4 &&
                 (*(undefined1 *)((long)param_1 + lVar8 + 4) =
                       *(undefined1 *)((long)param_6 + lVar8 + 4), uVar3 != 5)) &&
                (*(undefined1 *)((long)param_1 + lVar8 + 5) =
                      *(undefined1 *)((long)param_6 + lVar8 + 5), uVar3 != 6)))) {
              uVar4 = uVar4 & 0xff;
              *(undefined1 *)((long)param_1 + lVar8 + 6) =
                   *(undefined1 *)((long)param_6 + lVar8 + 6);
                    /* catch() { ... } // from try @ 0062f74c with catch @ 0062f8c0 */
                    /* try { // try from 0062f90c to 0072f917 has its CatchHandler @ 0062f56c */
                    /* catch() { ... } // from try @ 0062f7f4 with catch @ 0062f914 */
              if ((((uVar4 != 7) &&
                   (*(undefined1 *)((long)param_1 + lVar8 + 7) =
                         *(undefined1 *)((long)param_6 + lVar8 + 7), uVar4 != 8)) &&
                  (*(undefined1 *)(param_1 + uVar6 * 2 + 1) =
                        *(undefined1 *)(param_6 + uVar6 * 2 + 1), uVar4 != 9)) &&
                 (((*(undefined1 *)((long)param_1 + lVar8 + 9) =
                         *(undefined1 *)((long)param_6 + lVar8 + 9), uVar4 != 10 &&
                   (*(undefined1 *)((long)param_1 + lVar8 + 10) =
                         *(undefined1 *)((long)param_6 + lVar8 + 10), uVar4 != 0xb)) &&
                  ((*(undefined1 *)((long)param_1 + lVar8 + 0xb) =
                         *(undefined1 *)((long)param_6 + lVar8 + 0xb), uVar4 != 0xc &&
                   ((*(undefined1 *)((long)param_1 + lVar8 + 0xc) =
                          *(undefined1 *)((long)param_6 + lVar8 + 0xc), uVar4 != 0xd &&
                    (*(undefined1 *)((long)param_1 + lVar8 + 0xd) =
                          *(undefined1 *)((long)param_6 + lVar8 + 0xd), uVar4 != 0xe)))))))) {
                *(undefined1 *)((long)param_1 + lVar8 + 0xe) =
                     *(undefined1 *)((long)param_6 + lVar8 + 0xe);
              }
            }
          }
        }
      }
      lVar8 = (ulong)(byte)(bVar10 - 1) + 1;
      param_6 = (undefined8 *)((long)param_6 + lVar8);
      param_1 = (undefined8 *)((long)param_1 + lVar8);
    }
  }
  while (puVar14 = puVar13, uVar12 = uVar12 - 1, uVar12 != 0xffffffffffffffff) {
    *(undefined1 *)puVar14 = param_2;
    puVar13 = (undefined8 *)((long)puVar14 + 1);
    bVar10 = param_3[uVar12];
    uVar4 = (uint)bVar10;
    if (uVar4 != 0) {
                    /* try { // try from 0062fc38 to 0072fc5f has its CatchHandler @ 0062ff2c */
      if ((puVar13 < param_6 + 2 && param_6 < (undefined8 *)((long)puVar14 + 0x11U)) ||
         (uVar4 < 0x10)) {
        lVar11 = 0;
        do {
                    /* try { // try from 0062fde8 to 0072fe0f has its CatchHandler @ 0062fecc */
          lVar8 = lVar11 + 1;
          *(undefined1 *)((long)puVar14 + lVar11 + 1) = *(undefined1 *)((long)param_6 + lVar11);
          lVar11 = lVar8;
        } while (lVar8 != (ulong)(byte)(bVar10 - 1) + 1);
      }
      else {
        uVar15 = *param_6;
        uVar4 = (uVar4 - 0x10 >> 4 & 0xf) + 1;
        uVar6 = (ulong)uVar4 & 0xf;
        lVar11 = uVar6 * 0x10;
        *(undefined8 *)((long)puVar14 + 9) = param_6[1];
        *puVar13 = uVar15;
        if (uVar4 != 1) {
          uVar15 = param_6[2];
          *(undefined8 *)((long)puVar14 + 0x19) = param_6[3];
          *(undefined8 *)((long)puVar14 + 0x11U) = uVar15;
          if (uVar4 != 2) {
                    /* try { // try from 0062fc80 to 0072fca7 has its CatchHandler @ 0062ff1c */
            uVar15 = param_6[4];
            *(undefined8 *)((long)puVar14 + 0x29) = param_6[5];
            *(undefined8 *)((long)puVar14 + 0x21) = uVar15;
            if (uVar4 != 3) {
              uVar15 = param_6[6];
              *(undefined8 *)((long)puVar14 + 0x39) = param_6[7];
              *(undefined8 *)((long)puVar14 + 0x31) = uVar15;
              if (uVar4 != 4) {
                uVar15 = param_6[8];
                *(undefined8 *)((long)puVar14 + 0x49) = param_6[9];
                *(undefined8 *)((long)puVar14 + 0x41) = uVar15;
                if (uVar4 != 5) {
                    /* try { // try from 0062fcc8 to 0072fcef has its CatchHandler @ 0062ff0c */
                  uVar15 = param_6[10];
                  *(undefined8 *)((long)puVar14 + 0x59) = param_6[0xb];
                  *(undefined8 *)((long)puVar14 + 0x51) = uVar15;
                  if (uVar4 != 6) {
                    uVar15 = param_6[0xc];
                    *(undefined8 *)((long)puVar14 + 0x69) = param_6[0xd];
                    *(undefined8 *)((long)puVar14 + 0x61) = uVar15;
                    if (uVar4 != 7) {
                      uVar15 = param_6[0xe];
                      *(undefined8 *)((long)puVar14 + 0x79) = param_6[0xf];
                      *(undefined8 *)((long)puVar14 + 0x71) = uVar15;
                      if (uVar4 != 8) {
                    /* try { // try from 0062fd10 to 0072fd37 has its CatchHandler @ 0062fefc */
                        uVar15 = param_6[0x10];
                        *(undefined8 *)((long)puVar14 + 0x89) = param_6[0x11];
                        *(undefined8 *)((long)puVar14 + 0x81) = uVar15;
                        if (uVar4 != 9) {
                          uVar15 = param_6[0x12];
                          *(undefined8 *)((long)puVar14 + 0x99) = param_6[0x13];
                          *(undefined8 *)((long)puVar14 + 0x91) = uVar15;
                          if (uVar4 != 10) {
                            uVar15 = param_6[0x14];
                            *(undefined8 *)((long)puVar14 + 0xa9) = param_6[0x15];
                            *(undefined8 *)((long)puVar14 + 0xa1) = uVar15;
                            if (uVar4 != 0xb) {
                    /* try { // try from 0062fd58 to 0072fd7f has its CatchHandler @ 0062feec */
                              uVar15 = param_6[0x16];
                              *(undefined8 *)((long)puVar14 + 0xb9) = param_6[0x17];
                              *(undefined8 *)((long)puVar14 + 0xb1) = uVar15;
                              if (uVar4 != 0xc) {
                                uVar15 = param_6[0x18];
                                *(undefined8 *)((long)puVar14 + 0xc9) = param_6[0x19];
                                *(undefined8 *)((long)puVar14 + 0xc1) = uVar15;
                                if (uVar4 != 0xd) {
                                  uVar15 = param_6[0x1a];
                                  *(undefined8 *)((long)puVar14 + 0xd9) = param_6[0x1b];
                                  *(undefined8 *)((long)puVar14 + 0xd1) = uVar15;
                                  if (uVar4 == 0xf) {
                    /* try { // try from 0062fda0 to 0072fdc7 has its CatchHandler @ 0062fedc */
                                    uVar15 = param_6[0x1c];
                                    *(undefined8 *)((long)puVar14 + 0xe9) = param_6[0x1d];
                                    *(undefined8 *)((long)puVar14 + 0xe1) = uVar15;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar4 = (uint)bVar10 - (uint)lVar11;
        if ((uint)bVar10 != (uint)lVar11) {
          *(undefined1 *)(puVar13 + uVar6 * 2) = *(undefined1 *)(param_6 + uVar6 * 2);
          if (((uVar4 & 0xff) != 1) &&
             (*(undefined1 *)((long)puVar13 + lVar11 + 1) =
                   *(undefined1 *)((long)param_6 + lVar11 + 1), (uVar4 & 0xff) != 2)) {
            uVar3 = uVar4 & 0xff;
            *(undefined1 *)((long)puVar13 + lVar11 + 2) =
                 *(undefined1 *)((long)param_6 + lVar11 + 2);
            if ((uVar3 != 3) &&
               (((*(undefined1 *)((long)puVar13 + lVar11 + 3) =
                       *(undefined1 *)((long)param_6 + lVar11 + 3), uVar3 != 4 &&
                 (*(undefined1 *)((long)puVar13 + lVar11 + 4) =
                       *(undefined1 *)((long)param_6 + lVar11 + 4), uVar3 != 5)) &&
                (*(undefined1 *)((long)puVar13 + lVar11 + 5) =
                      *(undefined1 *)((long)param_6 + lVar11 + 5), uVar3 != 6)))) {
              uVar4 = uVar4 & 0xff;
              *(undefined1 *)((long)puVar13 + lVar11 + 6) =
                   *(undefined1 *)((long)param_6 + lVar11 + 6);
              if ((((uVar4 != 7) &&
                   (*(undefined1 *)((long)puVar13 + lVar11 + 7) =
                         *(undefined1 *)((long)param_6 + lVar11 + 7), uVar4 != 8)) &&
                  (*(undefined1 *)(puVar13 + uVar6 * 2 + 1) =
                        *(undefined1 *)(param_6 + uVar6 * 2 + 1), uVar4 != 9)) &&
                 (((*(undefined1 *)((long)puVar13 + lVar11 + 9) =
                         *(undefined1 *)((long)param_6 + lVar11 + 9), uVar4 != 10 &&
                   (*(undefined1 *)((long)puVar13 + lVar11 + 10) =
                         *(undefined1 *)((long)param_6 + lVar11 + 10), uVar4 != 0xb)) &&
                  ((*(undefined1 *)((long)puVar13 + lVar11 + 0xb) =
                         *(undefined1 *)((long)param_6 + lVar11 + 0xb), uVar4 != 0xc &&
                   ((*(undefined1 *)((long)puVar13 + lVar11 + 0xc) =
                          *(undefined1 *)((long)param_6 + lVar11 + 0xc), uVar4 != 0xd &&
                    (*(undefined1 *)((long)puVar13 + lVar11 + 0xd) =
                          *(undefined1 *)((long)param_6 + lVar11 + 0xd), uVar4 != 0xe)))))))) {
                *(undefined1 *)((long)puVar13 + lVar11 + 0xe) =
                     *(undefined1 *)((long)param_6 + lVar11 + 0xe);
              }
            }
          }
        }
      }
                    /* catch() { ... } // from try @ 0062fea0 with catch @ 0062fbf4
                       catch() { ... } // from try @ 00630178 with catch @ 0062fbf4 */
      lVar11 = (ulong)(byte)(bVar10 - 1) + 1;
      param_6 = (undefined8 *)((long)param_6 + lVar11);
      puVar13 = (undefined8 *)((long)puVar13 + lVar11);
    }
  }
  return;
}


