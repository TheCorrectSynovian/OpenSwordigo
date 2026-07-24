/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616e34
 * Function: PVRTVertexRead
 * Signature: undefined __cdecl PVRTVertexRead(PVRTVECTOR4f * param_1, void * param_2, EPVRTDataType param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTVertexRead(PVRTVECTOR4f*, void const*, EPVRTDataType, int) */

void PVRTVertexRead(float *param_1,float *param_2,undefined4 param_3,uint param_4)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined1 (*pauVar10) [16];
  short *psVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  
  uVar17 = _DAT_00683800;
  *(undefined8 *)(param_1 + 2) = _UNK_00683808;
  *(undefined8 *)param_1 = uVar17;
  fVar16 = DAT_0069b984;
  switch(param_3) {
  case 1:
                    /* try { // try from 00616e84 to 00716e97 has its CatchHandler @ 00617bd0 */
    if (0 < (int)param_4) {
      uVar5 = (ulong)param_4;
                    /* try { // try from 00616e98 to 00716eab has its CatchHandler @ 00617d34 */
                    /* try { // try from 00616eac to 00716ebb has its CatchHandler @ 00617ba0 */
      if ((param_4 < 8) || ((param_1 < param_2 + uVar5 && (param_2 < param_1 + uVar5)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar5 & 0xfffffff8;
        pfVar12 = param_2 + 4;
        pfVar13 = param_1 + 4;
        uVar8 = uVar7;
        do {
          uVar17 = *(undefined8 *)(pfVar12 + -4);
          pfVar2 = pfVar12 + -2;
          uVar21 = *(undefined8 *)pfVar12;
          uVar3 = *(undefined8 *)(pfVar12 + 2);
          pfVar12 = pfVar12 + 8;
          uVar8 = uVar8 - 8;
                    /* try { // try from 00617300 to 00717307 has its CatchHandler @ 00617ae8 */
          *(undefined8 *)(pfVar13 + -2) = *(undefined8 *)pfVar2;
          *(undefined8 *)(pfVar13 + -4) = uVar17;
          *(undefined8 *)(pfVar13 + 2) = uVar3;
          *(undefined8 *)pfVar13 = uVar21;
          pfVar13 = pfVar13 + 8;
        } while (uVar8 != 0);
        if (uVar7 == uVar5) {
          return;
        }
      }
      lVar6 = uVar5 - uVar7;
      pfVar12 = param_2 + uVar7;
      pfVar13 = param_1 + uVar7;
      do {
        lVar6 = lVar6 + -1;
        *pfVar13 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar13 = pfVar13 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 2:
                    /* try { // try from 00616edc to 00716edf has its CatchHandler @ 00617d34 */
    if (0 < (int)param_4) {
      uVar5 = (ulong)param_4;
      if (param_4 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffff8;
        pauVar10 = (undefined1 (*) [16])(param_2 + 4);
        pfVar12 = param_1 + 4;
        uVar7 = uVar8;
        do {
          pauVar1 = pauVar10 + -1;
          auVar19 = *pauVar10;
          pauVar10 = pauVar10 + 2;
          uVar7 = uVar7 - 8;
          auVar22 = NEON_scvtf(*pauVar1,4);
          auVar19 = NEON_scvtf(auVar19,4);
          *(long *)(pfVar12 + -2) = auVar22._8_8_;
          *(long *)(pfVar12 + -4) = auVar22._0_8_;
          *(long *)(pfVar12 + 2) = auVar19._8_8_;
          *(long *)pfVar12 = auVar19._0_8_;
          pfVar12 = pfVar12 + 8;
        } while (uVar7 != 0);
        if (uVar8 == uVar5) {
          return;
        }
      }
      lVar6 = uVar5 - uVar8;
      pfVar12 = param_2 + uVar8;
      pfVar13 = param_1 + uVar8;
      do {
        lVar6 = lVar6 + -1;
        *pfVar13 = (float)(int)*pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar13 = pfVar13 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 3:
    if (0 < (int)param_4) {
                    /* try { // try from 00616f00 to 00716f07 has its CatchHandler @ 00617b9c */
      uVar5 = (ulong)param_4;
      if (param_4 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffff8;
        pfVar12 = param_2 + 2;
        pfVar13 = param_1 + 4;
        uVar7 = uVar8;
        do {
          uVar17 = *(undefined8 *)(pfVar12 + -2);
          uVar21 = *(undefined8 *)pfVar12;
                    /* try { // try from 00617130 to 0071715f has its CatchHandler @ 00617db0 */
          pfVar12 = pfVar12 + 4;
          uVar7 = uVar7 - 8;
          auVar14._2_2_ = 0;
          auVar14._0_2_ = (ushort)uVar17;
          auVar14._4_2_ = (short)((ulong)uVar17 >> 0x10);
          auVar14._6_2_ = 0;
          auVar14._8_2_ = (short)((ulong)uVar17 >> 0x20);
          auVar14._10_2_ = 0;
          auVar14._12_2_ = (short)((ulong)uVar17 >> 0x30);
          auVar14._14_2_ = 0;
          auVar18._2_2_ = 0;
          auVar18._0_2_ = (ushort)uVar21;
          auVar18._4_2_ = (short)((ulong)uVar21 >> 0x10);
          auVar18._6_2_ = 0;
          auVar18._8_2_ = (short)((ulong)uVar21 >> 0x20);
          auVar18._10_2_ = 0;
          auVar18._12_2_ = (short)((ulong)uVar21 >> 0x30);
          auVar18._14_2_ = 0;
          auVar19 = NEON_ucvtf(auVar14,4);
          auVar22 = NEON_ucvtf(auVar18,4);
          *(long *)(pfVar13 + -2) = auVar19._8_8_;
          *(long *)(pfVar13 + -4) = auVar19._0_8_;
          *(long *)(pfVar13 + 2) = auVar22._8_8_;
          *(long *)pfVar13 = auVar22._0_8_;
          pfVar13 = pfVar13 + 8;
        } while (uVar7 != 0);
        if (uVar8 == uVar5) {
          return;
        }
      }
      lVar6 = uVar5 - uVar8;
      puVar9 = (ushort *)((long)param_2 + uVar8 * 2);
      pfVar12 = param_1 + uVar8;
      do {
        lVar6 = lVar6 + -1;
        *pfVar12 = (float)*puVar9;
        puVar9 = puVar9 + 1;
        pfVar12 = pfVar12 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 4:
    fVar23 = *param_2;
    uVar21 = CONCAT44(fVar23,fVar23);
    fVar16 = (float)((uint)fVar23 >> 8);
                    /* try { // try from 00616f30 to 00716f3b has its CatchHandler @ 00617b4c */
    uVar4 = (uint)fVar23 & 0xff;
    uVar17 = DAT_0069b970;
    goto LAB_00616f34;
  case 5:
  case 6:
    fVar16 = *param_2;
    uVar21 = CONCAT44(fVar16,fVar16);
                    /* try { // try from 00616e7c to 00716e83 has its CatchHandler @ 00617bd4 */
    uVar4 = (uint)fVar16 >> 0x18;
    uVar17 = DAT_0069b968;
LAB_00616f34:
    uVar5 = NEON_ushl(uVar21,CONCAT44(-(int)((ulong)uVar17 >> 0x20),-(int)uVar17),4);
    fVar23 = (float)((uint)fVar16 & 0xff) * DAT_0069b97c;
    fVar16 = (float)uVar4 * DAT_0069b97c;
                    /* try { // try from 00616f5c to 00716f83 has its CatchHandler @ 00617904 */
    uVar17 = NEON_ucvtf(uVar5 & 0xff000000ff,4);
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)uVar17 >> 0x20) * 0.003921569,(float)uVar17 * 0.003921569);
    param_1[2] = fVar23;
    param_1[3] = fVar16;
    return;
  case 7:
    fVar16 = *param_2;
                    /* try { // try from 00616f84 to 00716f8f has its CatchHandler @ 00617db0 */
                    /* try { // try from 00616f90 to 00716f97 has its CatchHandler @ 00617b48 */
                    /* try { // try from 00616f98 to 00716fff has its CatchHandler @ 00617db0 */
    *param_1 = (float)((uint)fVar16 & 0xff);
    param_1[1] = (float)((uint)fVar16 >> 8 & 0xff);
    param_1[2] = (float)((uint)fVar16 >> 0x10 & 0xff);
    param_1[3] = (float)((uint)fVar16 >> 0x18);
    return;
  case 8:
    fVar16 = *param_2;
    uVar17 = NEON_ushl(CONCAT44(fVar16,fVar16),DAT_0069b960,4);
    fVar16 = (float)(((int)fVar16 << 2) >> 0x16) * DAT_0069b978;
    uVar17 = NEON_scvtf(CONCAT44((int)((long)uVar17 >> 0x36),(int)uVar17 >> 0x16),4);
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)uVar17 >> 0x20) * 0.0019569471,(float)uVar17 * 0.0019569471);
    param_1[2] = fVar16;
    return;
  case 9:
    if (0 < (int)param_4) {
      uVar5 = (ulong)param_4;
      if (param_4 < 8) {
                    /* try { // try from 00617004 to 0071700f has its CatchHandler @ 00617da0 */
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffff8;
                    /* try { // try from 00617208 to 0071722f has its CatchHandler @ 00617900 */
        pauVar10 = (undefined1 (*) [16])(param_2 + 4);
        pfVar12 = param_1 + 4;
        uVar7 = uVar8;
        do {
          pauVar1 = pauVar10 + -1;
          auVar19 = *pauVar10;
          pauVar10 = pauVar10 + 2;
          uVar7 = uVar7 - 8;
          auVar22 = NEON_scvtf(*pauVar1,4);
          auVar19 = NEON_scvtf(auVar19,4);
                    /* try { // try from 00617230 to 0071723b has its CatchHandler @ 00617db0 */
          pfVar12[-2] = auVar22._8_4_ * 1.5258789e-05;
          pfVar12[-1] = auVar22._12_4_ * 1.5258789e-05;
          pfVar12[-4] = auVar22._0_4_ * 1.5258789e-05;
          pfVar12[-3] = auVar22._4_4_ * 1.5258789e-05;
          pfVar12[2] = auVar19._8_4_ * 1.5258789e-05;
          pfVar12[3] = auVar19._12_4_ * 1.5258789e-05;
          *pfVar12 = auVar19._0_4_ * 1.5258789e-05;
          pfVar12[1] = auVar19._4_4_ * 1.5258789e-05;
                    /* try { // try from 0061723c to 00717243 has its CatchHandler @ 00617aec */
          pfVar12 = pfVar12 + 8;
        } while (uVar7 != 0);
                    /* try { // try from 00617244 to 007172b7 has its CatchHandler @ 00617db0 */
        if (uVar8 == uVar5) {
          return;
        }
      }
      fVar16 = DAT_0069b3ec;
      lVar6 = uVar5 - uVar8;
      pfVar12 = param_2 + uVar8;
      pfVar13 = param_1 + uVar8;
      do {
        lVar6 = lVar6 + -1;
        *pfVar13 = (float)(int)*pfVar12 * fVar16;
        pfVar12 = pfVar12 + 1;
        pfVar13 = pfVar13 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 10:
    if (0 < (int)param_4) {
      uVar5 = (ulong)param_4;
      do {
        uVar5 = uVar5 - 1;
        *param_1 = (float)*(byte *)param_2;
        param_1 = param_1 + 1;
        param_2 = (float *)((long)param_2 + 1);
      } while (uVar5 != 0);
    }
    break;
  case 0xb:
    if (0 < (int)param_4) {
      uVar5 = (ulong)param_4;
      if (param_4 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar5 & 0xfffffff8;
        pfVar12 = param_2 + 2;
        pfVar13 = param_1 + 4;
        uVar7 = uVar8;
        do {
          uVar17 = *(undefined8 *)(pfVar12 + -2);
          uVar21 = *(undefined8 *)pfVar12;
          pfVar12 = pfVar12 + 4;
          uVar7 = uVar7 - 8;
          auVar15._0_4_ = (int)(short)uVar17;
          auVar15._4_4_ = (int)(short)((ulong)uVar17 >> 0x10);
          auVar15._8_4_ = (int)(short)((ulong)uVar17 >> 0x20);
          auVar15._12_4_ = (int)(short)((ulong)uVar17 >> 0x30);
          auVar20._0_4_ = (int)(short)uVar21;
          auVar20._4_4_ = (int)(short)((ulong)uVar21 >> 0x10);
          auVar20._8_4_ = (int)(short)((ulong)uVar21 >> 0x20);
          auVar20._12_4_ = (int)(short)((ulong)uVar21 >> 0x30);
          auVar19 = NEON_scvtf(auVar15,4);
          auVar22 = NEON_scvtf(auVar20,4);
          *(long *)(pfVar13 + -2) = auVar19._8_8_;
          *(long *)(pfVar13 + -4) = auVar19._0_8_;
          *(long *)(pfVar13 + 2) = auVar22._8_8_;
          *(long *)pfVar13 = auVar22._0_8_;
          pfVar13 = pfVar13 + 8;
        } while (uVar7 != 0);
        if (uVar8 == uVar5) {
          return;
        }
      }
      lVar6 = uVar5 - uVar8;
      psVar11 = (short *)((long)param_2 + uVar8 * 2);
      pfVar12 = param_1 + uVar8;
      do {
        lVar6 = lVar6 + -1;
        *pfVar12 = (float)(int)*psVar11;
        psVar11 = psVar11 + 1;
        pfVar12 = pfVar12 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0xc:
    if (0 < (int)param_4) {
                    /* try { // try from 00617058 to 00717087 has its CatchHandler @ 0061795c */
      uVar5 = (ulong)param_4;
      if (param_4 < 8) {
        uVar8 = 0;
      }
      else {
                    /* try { // try from 00617184 to 0071718b has its CatchHandler @ 00617b44 */
        uVar8 = uVar5 & 0xfffffff8;
        pfVar12 = param_2 + 2;
        pfVar13 = param_1 + 4;
        uVar7 = uVar8;
        do {
          uVar17 = *(undefined8 *)(pfVar12 + -2);
          uVar21 = *(undefined8 *)pfVar12;
          pfVar12 = pfVar12 + 4;
          uVar7 = uVar7 - 8;
          auVar19._0_4_ = (int)(short)uVar17;
          auVar19._4_4_ = (int)(short)((ulong)uVar17 >> 0x10);
          auVar19._8_4_ = (int)(short)((ulong)uVar17 >> 0x20);
          auVar19._12_4_ = (int)(short)((ulong)uVar17 >> 0x30);
                    /* try { // try from 006171ac to 007171b3 has its CatchHandler @ 00617b40 */
          auVar22._0_4_ = (int)(short)uVar21;
          auVar22._4_4_ = (int)(short)((ulong)uVar21 >> 0x10);
          auVar22._8_4_ = (int)(short)((ulong)uVar21 >> 0x20);
          auVar22._12_4_ = (int)(short)((ulong)uVar21 >> 0x30);
          auVar19 = NEON_scvtf(auVar19,4);
          auVar22 = NEON_scvtf(auVar22,4);
          pfVar13[-2] = auVar19._8_4_ / 32767.0;
          pfVar13[-1] = auVar19._12_4_ / 32767.0;
          pfVar13[-4] = auVar19._0_4_ / 32767.0;
          pfVar13[-3] = auVar19._4_4_ / 32767.0;
          pfVar13[2] = auVar22._8_4_ / 32767.0;
          pfVar13[3] = auVar22._12_4_ / 32767.0;
          *pfVar13 = auVar22._0_4_ / 32767.0;
          pfVar13[1] = auVar22._4_4_ / 32767.0;
          pfVar13 = pfVar13 + 8;
        } while (uVar7 != 0);
        if (uVar8 == uVar5) {
          return;
        }
      }
      fVar16 = DAT_0069b980;
                    /* try { // try from 006171e0 to 007171e7 has its CatchHandler @ 00617af0 */
      lVar6 = uVar5 - uVar8;
      psVar11 = (short *)((long)param_2 + uVar8 * 2);
      pfVar12 = param_1 + uVar8;
      do {
        lVar6 = lVar6 + -1;
        *pfVar12 = (float)(int)*psVar11 / fVar16;
        psVar11 = psVar11 + 1;
        pfVar12 = pfVar12 + 1;
      } while (lVar6 != 0);
    }
    break;
  case 0xd:
    if (0 < (int)param_4) {
      uVar5 = (ulong)param_4;
      do {
        uVar5 = uVar5 - 1;
        *param_1 = (float)(int)*(char *)param_2;
        param_1 = param_1 + 1;
        param_2 = (float *)((long)param_2 + 1);
      } while (uVar5 != 0);
    }
    break;
  case 0xe:
    if (0 < (int)param_4) {
      uVar5 = (ulong)param_4;
      do {
        uVar5 = uVar5 - 1;
                    /* try { // try from 006170a8 to 007170cf has its CatchHandler @ 00617da0 */
        *param_1 = (float)(int)*(char *)param_2 / fVar16;
        param_1 = param_1 + 1;
        param_2 = (float *)((long)param_2 + 1);
      } while (uVar5 != 0);
    }
  }
  return;
}


