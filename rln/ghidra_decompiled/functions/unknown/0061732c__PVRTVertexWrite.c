/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061732c
 * Function: PVRTVertexWrite
 * Signature: undefined __cdecl PVRTVertexWrite(void * param_1, EPVRTDataType param_2, int param_3, PVRTVECTOR4f * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTVertexWrite(void*, EPVRTDataType, int, PVRTVECTOR4f const*) */

void PVRTVertexWrite(float *param_1,undefined4 param_2,uint param_3,float *param_4)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  float *pfVar21;
  float *pfVar22;
  undefined1 *puVar23;
  undefined2 *puVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [14];
  undefined1 auVar38 [16];
  float fVar39;
  float local_34;
  int iStack_30;
  int local_2c;
  long local_28;
  
  fVar35 = DAT_0069b984;
  fVar4 = DAT_00683ffc;
                    /* try { // try from 00617334 to 0071733b has its CatchHandler @ 00617a98 */
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar30 = SUB42(DAT_00683ffc,0);
  uVar33 = (undefined2)((uint)DAT_00683ffc >> 0x10);
                    /* try { // try from 0061735c to 00717383 has its CatchHandler @ 006178fc */
  switch(param_2) {
  case 1:
                    /* try { // try from 0061740c to 0071741f has its CatchHandler @ 00617a8c */
    if (0 < (int)param_3) {
      uVar16 = (ulong)param_3;
                    /* try { // try from 00617420 to 00717433 has its CatchHandler @ 00617cfc */
                    /* try { // try from 00617434 to 00717443 has its CatchHandler @ 00617a5c */
      if ((param_3 < 8) || ((param_1 < param_4 + uVar16 && (param_4 < param_1 + uVar16)))) {
        uVar19 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 00616eac with catch @ 00617ba0 */
        uVar19 = uVar16 & 0xfffffff8;
        pfVar21 = param_4 + 4;
        pfVar22 = param_1 + 4;
        uVar18 = uVar19;
        do {
          uVar5 = *(undefined8 *)(pfVar21 + -4);
          pfVar1 = pfVar21 + -2;
          uVar6 = *(undefined8 *)pfVar21;
          uVar12 = *(undefined8 *)(pfVar21 + 2);
          pfVar21 = pfVar21 + 8;
          uVar18 = uVar18 - 8;
          *(undefined8 *)(pfVar22 + -2) = *(undefined8 *)pfVar1;
          *(undefined8 *)(pfVar22 + -4) = uVar5;
          *(undefined8 *)(pfVar22 + 2) = uVar12;
          *(undefined8 *)pfVar22 = uVar6;
          pfVar22 = pfVar22 + 8;
        } while (uVar18 != 0);
        if (uVar19 == uVar16) break;
      }
      lVar17 = uVar16 - uVar19;
      pfVar21 = param_4 + uVar19;
      pfVar22 = param_1 + uVar19;
      do {
        lVar17 = lVar17 + -1;
        *pfVar22 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        pfVar22 = pfVar22 + 1;
      } while (lVar17 != 0);
    }
    break;
  case 2:
                    /* try { // try from 00617464 to 00717467 has its CatchHandler @ 00617cfc */
    if (0 < (int)param_3) {
      uVar16 = (ulong)param_3;
      if (param_3 < 8) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar16 & 0xfffffff8;
        pfVar21 = param_4 + 4;
        pfVar22 = param_1 + 4;
        uVar19 = uVar18;
        do {
          fVar4 = pfVar21[-4];
          fVar35 = pfVar21[-3];
          pfVar1 = pfVar21 + -2;
          fVar36 = pfVar21[-1];
          fVar34 = *pfVar21;
          fVar39 = pfVar21[1];
          fVar10 = pfVar21[2];
          fVar11 = pfVar21[3];
          pfVar21 = pfVar21 + 8;
                    /* try { // try from 00617780 to 00717787 has its CatchHandler @ 006179ac */
          uVar19 = uVar19 - 8;
          pfVar22[-2] = (float)(int)*pfVar1;
          pfVar22[-1] = (float)(int)fVar36;
          pfVar22[-4] = (float)(int)fVar4;
          pfVar22[-3] = (float)(int)fVar35;
          pfVar22[2] = (float)(int)fVar10;
          pfVar22[3] = (float)(int)fVar11;
          *pfVar22 = (float)(int)fVar34;
          pfVar22[1] = (float)(int)fVar39;
          pfVar22 = pfVar22 + 8;
        } while (uVar19 != 0);
        if (uVar18 == uVar16) break;
      }
                    /* try { // try from 006177a8 to 007177cf has its CatchHandler @ 006178f4 */
      lVar17 = uVar16 - uVar18;
      pfVar21 = param_4 + uVar18;
      pfVar22 = param_1 + uVar18;
      do {
        lVar17 = lVar17 + -1;
        *pfVar22 = (float)(int)*pfVar21;
        pfVar21 = pfVar21 + 1;
        pfVar22 = pfVar22 + 1;
      } while (lVar17 != 0);
    }
    break;
  case 3:
    if (0 < (int)param_3) {
      uVar16 = (ulong)param_3;
      if (param_3 < 8) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar16 & 0xfffffff8;
                    /* try { // try from 00617708 to 0071770f has its CatchHandler @ 00617a00 */
        pfVar21 = param_4 + 4;
        pfVar22 = param_1 + 2;
        uVar19 = uVar18;
        do {
          pfVar1 = pfVar21 + -4;
          pfVar7 = pfVar21 + -3;
          pfVar8 = pfVar21 + -2;
          pfVar9 = pfVar21 + -1;
          fVar4 = *pfVar21;
          fVar35 = pfVar21[1];
          fVar36 = pfVar21[2];
          fVar34 = pfVar21[3];
                    /* try { // try from 00617718 to 0071771b has its CatchHandler @ 00617db0 */
          pfVar21 = pfVar21 + 8;
          uVar19 = uVar19 - 8;
          *(ulong *)(pfVar22 + -2) =
               CONCAT26((short)(int)*pfVar9,
                        CONCAT24((short)(int)*pfVar8,
                                 CONCAT22((short)(int)*pfVar7,(short)(int)*pfVar1)));
          *(ulong *)pfVar22 =
               CONCAT26((short)(int)fVar34,
                        CONCAT24((short)(int)fVar36,CONCAT22((short)(int)fVar35,(short)(int)fVar4)))
          ;
          pfVar22 = pfVar22 + 4;
        } while (uVar19 != 0);
        if (uVar18 == uVar16) break;
      }
                    /* try { // try from 0061774c to 00717753 has its CatchHandler @ 006179fc */
      lVar17 = uVar16 - uVar18;
      pfVar21 = param_4 + uVar18;
      puVar24 = (undefined2 *)((long)param_1 + uVar18 * 2);
      do {
        lVar17 = lVar17 + -1;
        *puVar24 = (short)(int)*pfVar21;
        pfVar21 = pfVar21 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar17 != 0);
    }
    break;
  case 4:
    if ((int)param_3 < 1) {
      param_3 = 0;
LAB_006178ac:
      memset((void *)((long)&local_34 + (long)(int)param_3),0,(ulong)(3 - param_3) + 1);
    }
    else {
                    /* try { // try from 00617488 to 0071748f has its CatchHandler @ 00617a58 */
      uVar16 = (ulong)param_3;
      if (param_3 == 1) {
        uVar18 = 0;
LAB_00617854:
        lVar17 = uVar16 - uVar18;
        pfVar21 = param_4 + uVar18;
        puVar23 = (undefined1 *)((long)&local_34 + uVar18);
        do {
          fVar4 = *pfVar21 * DAT_00683ffc;
          fVar35 = fVar4;
          if (fVar4 <= 0.0) {
            fVar35 = 0.0;
          }
          fVar36 = DAT_00683ffc;
          if (fVar35 <= DAT_00683ffc) {
            fVar36 = 0.0;
          }
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar4) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar35) && !NAN(DAT_00683ffc)) {
              bVar13 = fVar35 < DAT_00683ffc;
              bVar14 = fVar35 == DAT_00683ffc;
              bVar15 = false;
            }
          }
          if (bVar14 || bVar13 != bVar15) {
            fVar36 = fVar4;
          }
          lVar17 = lVar17 + -1;
          *puVar23 = (char)(int)fVar36;
          pfVar21 = pfVar21 + 1;
          puVar23 = puVar23 + 1;
        } while (lVar17 != 0);
      }
      else {
                    /* try { // try from 006177d0 to 0071792f has its CatchHandler @ 00616bd0 */
        uVar18 = uVar16 & 0xfffffffe;
        pfVar21 = param_4 + 1;
        puVar23 = (undefined1 *)((ulong)&local_34 | 1);
        uVar19 = uVar18;
        do {
          pfVar22 = pfVar21 + -1;
          fVar35 = *pfVar21;
          pfVar21 = pfVar21 + 2;
          fVar35 = fVar35 * fVar4;
          fVar36 = fVar35;
          if (fVar35 <= 0.0) {
            fVar36 = 0.0;
          }
          fVar34 = fVar4;
          if (fVar36 <= fVar4) {
            fVar34 = 0.0;
          }
          fVar39 = *pfVar22 * fVar4;
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar35) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar36) && !NAN(fVar4)) {
              bVar13 = fVar36 < fVar4;
              bVar14 = fVar36 == fVar4;
              bVar15 = false;
            }
          }
          if (bVar14 || bVar13 != bVar15) {
            fVar34 = fVar35;
          }
          fVar35 = fVar39;
          if (fVar39 <= 0.0) {
            fVar35 = 0.0;
          }
          uVar28 = uVar30;
          uVar31 = uVar33;
          if (fVar35 <= fVar4) {
            uVar28 = 0;
            uVar31 = 0;
          }
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar39) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar35) && !NAN(fVar4)) {
              bVar13 = fVar35 < fVar4;
              bVar14 = fVar35 == fVar4;
              bVar15 = false;
            }
          }
          fVar35 = (float)CONCAT22(uVar31,uVar28);
          if (bVar14 || bVar13 != bVar15) {
            fVar35 = fVar39;
          }
          *puVar23 = (char)(int)fVar34;
          uVar19 = uVar19 - 2;
          puVar23[-1] = (char)(int)fVar35;
          puVar23 = puVar23 + 2;
        } while (uVar19 != 0);
        if (uVar18 != uVar16) goto LAB_00617854;
      }
      if ((int)param_3 < 4) goto LAB_006178ac;
    }
    uVar25 = ((uint)local_34 & 0xff00ff00) >> 8 | ((uint)local_34 & 0xff00ff) << 8;
    *param_1 = (float)(uVar25 >> 0x10 | uVar25 << 0x10);
    break;
  case 5:
  case 6:
    if ((int)param_3 < 1) {
      param_3 = 0;
LAB_00617624:
                    /* try { // try from 00617630 to 00717657 has its CatchHandler @ 00617d9c */
      memset((void *)((long)&local_34 + (long)(int)param_3),0,(ulong)(3 - param_3) + 1);
    }
    else {
      uVar16 = (ulong)param_3;
      if (param_3 == 1) {
        uVar18 = 0;
                    /* try { // try from 00617384 to 0071738f has its CatchHandler @ 00617db0 */
LAB_006175cc:
                    /* try { // try from 006175e0 to 0071760f has its CatchHandler @ 0061790c */
        lVar17 = uVar16 - uVar18;
        pfVar21 = param_4 + uVar18;
        puVar23 = (undefined1 *)((long)&local_34 + uVar18);
        do {
          fVar4 = *pfVar21 * DAT_00683ffc;
          fVar35 = fVar4;
          if (fVar4 <= 0.0) {
            fVar35 = 0.0;
          }
          fVar36 = DAT_00683ffc;
          if (fVar35 <= DAT_00683ffc) {
            fVar36 = 0.0;
          }
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar4) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar35) && !NAN(DAT_00683ffc)) {
              bVar13 = fVar35 < DAT_00683ffc;
              bVar14 = fVar35 == DAT_00683ffc;
              bVar15 = false;
            }
          }
          if (bVar14 || bVar13 != bVar15) {
            fVar36 = fVar4;
          }
          lVar17 = lVar17 + -1;
          *puVar23 = (char)(int)fVar36;
          pfVar21 = pfVar21 + 1;
          puVar23 = puVar23 + 1;
        } while (lVar17 != 0);
      }
      else {
        uVar18 = uVar16 & 0xfffffffe;
        pfVar21 = param_4 + 1;
        puVar23 = (undefined1 *)((ulong)&local_34 | 1);
        uVar19 = uVar18;
        do {
          pfVar22 = pfVar21 + -1;
          fVar35 = *pfVar21;
          pfVar21 = pfVar21 + 2;
          fVar35 = fVar35 * fVar4;
          fVar36 = fVar35;
          if (fVar35 <= 0.0) {
            fVar36 = 0.0;
          }
          fVar34 = fVar4;
          if (fVar36 <= fVar4) {
            fVar34 = 0.0;
          }
          fVar39 = *pfVar22 * fVar4;
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar35) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar36) && !NAN(fVar4)) {
              bVar13 = fVar36 < fVar4;
              bVar14 = fVar36 == fVar4;
              bVar15 = false;
            }
          }
          if (bVar14 || bVar13 != bVar15) {
            fVar34 = fVar35;
          }
                    /* try { // try from 0061758c to 00717597 has its CatchHandler @ 00617d9c */
          fVar35 = fVar39;
          if (fVar39 <= 0.0) {
            fVar35 = 0.0;
          }
          uVar28 = uVar30;
          uVar31 = uVar33;
          if (fVar35 <= fVar4) {
            uVar28 = 0;
            uVar31 = 0;
          }
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar39) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar35) && !NAN(fVar4)) {
              bVar13 = fVar35 < fVar4;
              bVar14 = fVar35 == fVar4;
              bVar15 = false;
            }
          }
          fVar35 = (float)CONCAT22(uVar31,uVar28);
          if (bVar14 || bVar13 != bVar15) {
            fVar35 = fVar39;
          }
          *puVar23 = (char)(int)fVar34;
          uVar19 = uVar19 - 2;
          puVar23[-1] = (char)(int)fVar35;
          puVar23 = puVar23 + 2;
        } while (uVar19 != 0);
        if (uVar18 != uVar16) goto LAB_006175cc;
      }
      if ((int)param_3 < 4) goto LAB_00617624;
    }
    *param_1 = (float)((uint)local_34 & 0xff000000 | ((uint)local_34 & 0xff) << 0x10 |
                       ((uint)local_34 >> 8 & 0xff) << 8 | (uint)local_34 >> 0x10 & 0xff);
    break;
  case 7:
                    /* try { // try from 006174b8 to 007174c3 has its CatchHandler @ 00617a08 */
    if ((int)param_3 < 1) {
      param_3 = 0;
LAB_00617a98:
                    /* catch() { ... } // from try @ 00617334 with catch @ 00617a98 */
      memset((void *)((long)&local_34 + (long)(int)param_3),0,(ulong)(3 - param_3) + 1);
    }
    else {
      uVar16 = (ulong)param_3;
      if (param_3 == 1) {
        uVar18 = 0;
LAB_00617a44:
                    /* catch() { ... } // from try @ 00617488 with catch @ 00617a58 */
        lVar17 = uVar16 - uVar18;
                    /* catch() { ... } // from try @ 00617434 with catch @ 00617a5c */
        pfVar21 = param_4 + uVar18;
        puVar23 = (undefined1 *)((long)&local_34 + uVar18);
        do {
          fVar4 = *pfVar21;
          fVar35 = fVar4;
          if (fVar4 <= 0.0) {
            fVar35 = 0.0;
          }
          fVar36 = DAT_00683ffc;
          if (fVar35 <= DAT_00683ffc) {
            fVar36 = 0.0;
          }
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar4) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar35) && !NAN(DAT_00683ffc)) {
              bVar13 = fVar35 < DAT_00683ffc;
              bVar14 = fVar35 == DAT_00683ffc;
              bVar15 = false;
            }
          }
          uVar30 = SUB42(fVar36,0);
          uVar33 = (undefined2)((uint)fVar36 >> 0x10);
          if (bVar14 || bVar13 != bVar15) {
            uVar30 = SUB42(fVar4,0);
            uVar33 = (undefined2)((uint)fVar4 >> 0x10);
          }
          lVar17 = lVar17 + -1;
          *puVar23 = (char)(int)(float)CONCAT22(uVar33,uVar30);
          pfVar21 = pfVar21 + 1;
          puVar23 = puVar23 + 1;
                    /* catch() { ... } // from try @ 0061740c with catch @ 00617a8c */
        } while (lVar17 != 0);
      }
      else {
        uVar18 = uVar16 & 0xfffffffe;
        pfVar21 = param_4 + 1;
        puVar23 = (undefined1 *)((ulong)&local_34 | 1);
        uVar19 = uVar18;
        do {
          fVar34 = pfVar21[-1];
          fVar35 = *pfVar21;
          pfVar21 = pfVar21 + 2;
          fVar36 = fVar35;
          if (fVar35 <= 0.0) {
            fVar36 = 0.0;
          }
          fVar39 = fVar4;
          if (fVar36 <= fVar4) {
            fVar39 = 0.0;
          }
                    /* catch() { ... } // from try @ 0061774c with catch @ 006179fc */
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar35) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar36) && !NAN(fVar4)) {
              bVar13 = fVar36 < fVar4;
              bVar14 = fVar36 == fVar4;
              bVar15 = false;
            }
          }
                    /* catch() { ... } // from try @ 00617708 with catch @ 00617a00 */
          uVar28 = SUB42(fVar39,0);
          uVar31 = (undefined2)((uint)fVar39 >> 0x10);
          if (bVar14 || bVar13 != bVar15) {
            uVar28 = SUB42(fVar35,0);
            uVar31 = (undefined2)((uint)fVar35 >> 0x10);
          }
                    /* catch() { ... } // from try @ 00617518 with catch @ 00617a04 */
                    /* catch() { ... } // from try @ 006174b8 with catch @ 00617a08 */
          fVar35 = fVar34;
          if (fVar34 <= 0.0) {
            fVar35 = 0.0;
          }
          uVar29 = uVar30;
          uVar32 = uVar33;
          if (fVar35 <= fVar4) {
            uVar29 = 0;
            uVar32 = 0;
          }
          bVar13 = false;
          bVar14 = false;
          bVar15 = false;
          if (0.0 < fVar34) {
            bVar13 = false;
            bVar14 = false;
            bVar15 = true;
            if (!NAN(fVar35) && !NAN(fVar4)) {
              bVar13 = fVar35 < fVar4;
              bVar14 = fVar35 == fVar4;
              bVar15 = false;
            }
          }
          if (bVar14 || bVar13 != bVar15) {
            uVar29 = SUB42(fVar34,0);
            uVar32 = (undefined2)((uint)fVar34 >> 0x10);
          }
          *puVar23 = (char)(int)(float)CONCAT22(uVar31,uVar28);
          uVar19 = uVar19 - 2;
          puVar23[-1] = (char)(int)(float)CONCAT22(uVar32,uVar29);
          puVar23 = puVar23 + 2;
        } while (uVar19 != 0);
        if (uVar18 != uVar16) goto LAB_00617a44;
      }
                    /* catch() { ... } // from try @ 00617404 with catch @ 00617a90 */
                    /* catch() { ... } // from try @ 00617390 with catch @ 00617a94 */
      if ((int)param_3 < 4) goto LAB_00617a98;
    }
    *param_1 = local_34;
    break;
  case 8:
    if ((int)param_3 < 1) {
      param_3 = 0;
LAB_00617988:
      memset(&local_34 + (int)param_3,0,(ulong)(2 - param_3) * 4 + 4);
    }
    else {
      uVar16 = (ulong)param_3;
      if (param_3 < 4) {
        uVar18 = 0;
LAB_00617930:
                    /* try { // try from 00617930 to 00717c5b has its CatchHandler @ 00617de0 */
        lVar17 = uVar16 - uVar18;
        pfVar21 = param_4 + uVar18;
        pfVar22 = &local_34 + uVar18;
        do {
                    /* catch() { ... } // from try @ 00617058 with catch @ 0061795c */
          uVar25 = (uint)(*pfVar21 * DAT_0069b988);
          if ((int)uVar25 < -0x1fe) {
            uVar25 = 0xfffffe01;
          }
          if (0x1fe < (int)uVar25) {
            uVar25 = 0x1ff;
          }
          lVar17 = lVar17 + -1;
          *pfVar22 = (float)(uVar25 & 0x3ff);
          pfVar21 = pfVar21 + 1;
          pfVar22 = pfVar22 + 1;
        } while (lVar17 != 0);
      }
      else {
        uVar18 = uVar16 & 0xfffffffc;
        auVar27._8_4_ = 0x1ff;
        auVar27._0_8_ = 0x1ff000001ff;
        auVar27._12_4_ = 0x1ff;
                    /* catch() { ... } // from try @ 00616d70 with catch @ 006178f0 */
                    /* catch() { ... } // from try @ 006177a8 with catch @ 006178f4 */
                    /* catch() { ... } // from try @ 006174e4 with catch @ 006178f8 */
                    /* catch() { ... } // from try @ 0061735c with catch @ 006178fc */
                    /* catch() { ... } // from try @ 00617208 with catch @ 00617900 */
        pfVar21 = &local_34;
        uVar19 = uVar18;
        pfVar22 = param_4;
        do {
                    /* catch() { ... } // from try @ 00616f5c with catch @ 00617904 */
                    /* catch() { ... } // from try @ 00616dd4 with catch @ 00617908 */
          uVar19 = uVar19 - 4;
                    /* catch() { ... } // from try @ 006175e0 with catch @ 0061790c */
          auVar38._0_4_ = (int)(*pfVar22 * 511.0);
          auVar38._4_4_ = (int)(pfVar22[1] * 511.0);
          auVar38._8_4_ = (int)(pfVar22[2] * 511.0);
          auVar38._12_4_ = (int)(pfVar22[3] * 511.0);
          auVar26._8_2_ = 0xfe01;
          auVar26._0_8_ = 0xfffffe01fffffe01;
          auVar26._10_2_ = 0xffff;
          auVar26._12_2_ = 0xfe01;
          auVar26._14_2_ = 0xffff;
          auVar26 = NEON_smax(auVar38,auVar26,4);
          auVar26 = NEON_smin(auVar26,auVar27,4);
          auVar37._0_8_ =
               CONCAT26(0,CONCAT15(auVar26[5],CONCAT14(auVar26[4],(uint)(auVar26._0_2_ & 0x3ff))) &
                          0x3ffffffffff);
          auVar37[8] = auVar26[8];
          auVar37[9] = auVar26[9] & 3;
          auVar37._10_2_ = 0;
          auVar37[0xc] = auVar26[0xc];
          auVar37[0xd] = auVar26[0xd] & 3;
          *(ulong *)(pfVar21 + 2) = (ulong)auVar37._8_6_;
          *(ulong *)pfVar21 = auVar37._0_8_;
          pfVar21 = pfVar21 + 4;
          pfVar22 = pfVar22 + 4;
        } while (uVar19 != 0);
        if (uVar18 != uVar16) goto LAB_00617930;
      }
      if ((int)param_3 < 3) goto LAB_00617988;
    }
                    /* catch() { ... } // from try @ 00617780 with catch @ 006179ac */
    *param_1 = (float)((uint)local_34 | iStack_30 << 10 | local_2c << 0x14);
    break;
  case 9:
    if (0 < (int)param_3) {
      uVar16 = (ulong)param_3;
      if (param_3 < 8) {
                    /* try { // try from 006174e4 to 0071750b has its CatchHandler @ 006178f8 */
        uVar18 = 0;
      }
      else {
        uVar18 = uVar16 & 0xfffffff8;
        pauVar20 = (undefined1 (*) [16])(param_4 + 4);
        pfVar21 = param_1 + 4;
        uVar19 = uVar18;
        do {
          pauVar2 = pauVar20 + -1;
          auVar27 = *pauVar20;
          pauVar20 = pauVar20 + 2;
          uVar19 = uVar19 - 8;
          auVar26 = NEON_fcvtzs(*pauVar2,0x10,4);
          auVar27 = NEON_fcvtzs(auVar27,0x10,4);
          *(long *)(pfVar21 + -2) = auVar26._8_8_;
          *(long *)(pfVar21 + -4) = auVar26._0_8_;
          *(long *)(pfVar21 + 2) = auVar27._8_8_;
          *(long *)pfVar21 = auVar27._0_8_;
                    /* catch() { ... } // from try @ 00617300 with catch @ 00617ae8 */
          pfVar21 = pfVar21 + 8;
                    /* catch() { ... } // from try @ 0061723c with catch @ 00617aec */
        } while (uVar19 != 0);
                    /* catch() { ... } // from try @ 006171e0 with catch @ 00617af0 */
        if (uVar18 == uVar16) break;
      }
      lVar17 = uVar16 - uVar18;
      pfVar21 = param_4 + uVar18;
      pfVar22 = param_1 + uVar18;
      do {
        lVar17 = lVar17 + -1;
        *pfVar22 = (float)(int)(*pfVar21 * 65536.0);
        pfVar21 = pfVar21 + 1;
        pfVar22 = pfVar22 + 1;
      } while (lVar17 != 0);
    }
    break;
  case 10:
    if (0 < (int)param_3) {
      uVar16 = (ulong)param_3;
      do {
        uVar16 = uVar16 - 1;
        *(char *)param_1 = (char)(int)*param_4;
        param_4 = param_4 + 1;
        param_1 = (float *)((long)param_1 + 1);
      } while (uVar16 != 0);
    }
    break;
  case 0xb:
    if (0 < (int)param_3) {
      uVar16 = (ulong)param_3;
      if (param_3 < 8) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar16 & 0xfffffff8;
        pfVar21 = param_4 + 4;
        pfVar22 = param_1 + 2;
        uVar19 = uVar18;
        do {
          pfVar1 = pfVar21 + -4;
          pfVar7 = pfVar21 + -3;
          pfVar8 = pfVar21 + -2;
          pfVar9 = pfVar21 + -1;
          fVar4 = *pfVar21;
          fVar35 = pfVar21[1];
          fVar36 = pfVar21[2];
          fVar34 = pfVar21[3];
          pfVar21 = pfVar21 + 8;
          uVar19 = uVar19 - 8;
                    /* catch() { ... } // from try @ 006171ac with catch @ 00617b40 */
                    /* catch() { ... } // from try @ 00617184 with catch @ 00617b44 */
                    /* catch() { ... } // from try @ 00616f90 with catch @ 00617b48 */
                    /* catch() { ... } // from try @ 00616f30 with catch @ 00617b4c */
          *(ulong *)(pfVar22 + -2) =
               CONCAT26((short)(int)*pfVar9,
                        CONCAT24((short)(int)*pfVar8,
                                 CONCAT22((short)(int)*pfVar7,(short)(int)*pfVar1)));
          *(ulong *)pfVar22 =
               CONCAT26((short)(int)fVar34,
                        CONCAT24((short)(int)fVar36,CONCAT22((short)(int)fVar35,(short)(int)fVar4)))
          ;
          pfVar22 = pfVar22 + 4;
        } while (uVar19 != 0);
        if (uVar18 == uVar16) break;
      }
      lVar17 = uVar16 - uVar18;
      pfVar21 = param_4 + uVar18;
      puVar24 = (undefined2 *)((long)param_1 + uVar18 * 2);
      do {
        lVar17 = lVar17 + -1;
        *puVar24 = (short)(int)*pfVar21;
        pfVar21 = pfVar21 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar17 != 0);
    }
    break;
  case 0xc:
    if (0 < (int)param_3) {
                    /* try { // try from 00617390 to 00717397 has its CatchHandler @ 00617a94 */
      uVar16 = (ulong)param_3;
                    /* try { // try from 00617398 to 007173ff has its CatchHandler @ 00617db0 */
      if (param_3 < 8) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar16 & 0xfffffff8;
        pfVar21 = param_4 + 4;
        pfVar22 = param_1 + 2;
        uVar19 = uVar18;
        do {
          pfVar1 = pfVar21 + -4;
          pfVar7 = pfVar21 + -3;
          pfVar8 = pfVar21 + -2;
          pfVar9 = pfVar21 + -1;
          uVar6 = *(undefined8 *)(pfVar21 + 2);
          uVar5 = *(undefined8 *)pfVar21;
          pfVar21 = pfVar21 + 8;
          uVar19 = uVar19 - 8;
                    /* try { // try from 006176bc to 007176eb has its CatchHandler @ 00617db0 */
          *(ulong *)(pfVar22 + -2) =
               CONCAT26((short)(int)(*pfVar9 * 32767.0),
                        CONCAT24((short)(int)(*pfVar8 * 32767.0),
                                 CONCAT22((short)(int)(*pfVar7 * 32767.0),
                                          (short)(int)(*pfVar1 * 32767.0))));
          *(ulong *)pfVar22 =
               CONCAT26((short)(int)((float)((ulong)uVar6 >> 0x20) * 32767.0),
                        CONCAT24((short)(int)((float)uVar6 * 32767.0),
                                 CONCAT22((short)(int)((float)((ulong)uVar5 >> 0x20) * 32767.0),
                                          (short)(int)((float)uVar5 * 32767.0))));
          pfVar22 = pfVar22 + 4;
        } while (uVar19 != 0);
        if (uVar18 == uVar16) break;
      }
      fVar4 = DAT_0069b980;
      lVar17 = uVar16 - uVar18;
      pfVar21 = param_4 + uVar18;
      puVar24 = (undefined2 *)((long)param_1 + uVar18 * 2);
      do {
        lVar17 = lVar17 + -1;
        *puVar24 = (short)(int)(*pfVar21 * fVar4);
        pfVar21 = pfVar21 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar17 != 0);
    }
    break;
  case 0xd:
    if (0 < (int)param_3) {
      uVar16 = (ulong)param_3;
      do {
        uVar16 = uVar16 - 1;
        *(char *)param_1 = (char)(int)*param_4;
        param_4 = param_4 + 1;
        param_1 = (float *)((long)param_1 + 1);
      } while (uVar16 != 0);
    }
    break;
  case 0xe:
                    /* try { // try from 0061750c to 00717517 has its CatchHandler @ 00617db0 */
    if (0 < (int)param_3) {
                    /* try { // try from 00617518 to 0071751f has its CatchHandler @ 00617a04 */
      uVar16 = (ulong)param_3;
      do {
                    /* try { // try from 00617520 to 00717587 has its CatchHandler @ 00617db0 */
        uVar16 = uVar16 - 1;
        *(char *)param_1 = (char)(int)(*param_4 * fVar35);
        param_4 = param_4 + 1;
        param_1 = (float *)((long)param_1 + 1);
      } while (uVar16 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00616f00 with catch @ 00617b9c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00616e7c with catch @ 00617bd4 */
  __stack_chk_fail();
}


