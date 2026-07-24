/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616804
 * Function: PVRTTransformArray
 * Signature: undefined __cdecl PVRTTransformArray(PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, int param_3, PVRTMATRIXf * param_4, float param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTransformArray(PVRTVECTOR3f*, PVRTVECTOR3f const*, int, PVRTMATRIXf const*, float) */

void PVRTTransformArray(PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,int param_3,PVRTMATRIXf *param_4
                       ,float param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  PVRTVECTOR3f *pPVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  PVRTVECTOR3f *pPVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  if (0 < param_3) {
    uVar9 = (ulong)(uint)param_3;
    lVar11 = 0;
    if (4 < (uint)param_3) {
                    /* catch() { ... } // from try @ 006169d0 with catch @ 00616844
                       catch() { ... } // from try @ 00616b48 with catch @ 00616844 */
      if (((PVRTVECTOR3f *)(param_4 + 0x39) <= param_1 ||
           param_1 + uVar9 * 0xc <= (PVRTVECTOR3f *)(param_4 + 0x38)) &&
         (param_2 + uVar9 * 0xc <= param_1 || param_1 + uVar9 * 0xc <= param_2)) {
        fVar13 = *(float *)param_4;
        uVar1 = 4;
        if ((param_3 & 3U) != 0) {
          uVar1 = uVar9 & 3;
        }
                    /* try { // try from 00616888 to 007168af has its CatchHandler @ 00616a1c */
        fVar14 = *(float *)(param_4 + 0x10);
        fVar15 = *(float *)(param_4 + 0x20);
        fVar2 = *(float *)(param_4 + 0x14);
        fVar3 = *(float *)(param_4 + 0x24);
        fVar4 = *(float *)(param_4 + 8);
        fVar5 = *(float *)(param_4 + 0x18);
        fVar6 = *(float *)(param_4 + 0x28);
        fVar16 = *(float *)(param_4 + 0x30) * param_5;
        fVar7 = *(float *)(param_4 + 4);
        lVar11 = uVar9 - uVar1;
        fVar18 = *(float *)(param_4 + 0x34) * param_5;
        fVar17 = *(float *)(param_4 + 0x38) * param_5;
                    /* try { // try from 006168d0 to 007168f7 has its CatchHandler @ 00616a0c */
        lVar10 = lVar11;
        pPVar8 = param_1;
        pPVar12 = param_2;
        do {
          fVar22 = *(float *)(pPVar12 + 4);
          fVar19 = *(float *)(pPVar12 + 0xc);
          fVar23 = *(float *)(pPVar12 + 0x10);
          fVar20 = *(float *)(pPVar12 + 0x18);
          fVar24 = *(float *)(pPVar12 + 0x1c);
          fVar21 = *(float *)(pPVar12 + 0x24);
          fVar25 = *(float *)(pPVar12 + 0x28);
          fVar26 = *(float *)pPVar12;
          fVar30 = *(float *)(pPVar12 + 4);
          fVar34 = *(float *)(pPVar12 + 8);
          fVar27 = *(float *)(pPVar12 + 0xc);
          fVar31 = *(float *)(pPVar12 + 0x10);
          fVar35 = *(float *)(pPVar12 + 0x14);
          fVar28 = *(float *)(pPVar12 + 0x18);
          fVar32 = *(float *)(pPVar12 + 0x1c);
          fVar36 = *(float *)(pPVar12 + 0x20);
          fVar29 = *(float *)(pPVar12 + 0x24);
          fVar33 = *(float *)(pPVar12 + 0x28);
          fVar37 = *(float *)(pPVar12 + 0x2c);
          lVar10 = lVar10 + -4;
                    /* try { // try from 00616918 to 0071693f has its CatchHandler @ 006169fc */
          *(float *)pPVar8 = fVar13 * *(float *)pPVar12 + fVar14 * fVar22 + fVar15 * fVar34 + fVar16
          ;
          *(float *)(pPVar8 + 4) = fVar7 * fVar26 + fVar22 * fVar2 + fVar34 * fVar3 + fVar18;
          *(float *)(pPVar8 + 8) = fVar26 * fVar4 + fVar5 * fVar30 + fVar34 * fVar6 + fVar17;
          *(float *)(pPVar8 + 0xc) = fVar13 * fVar19 + fVar14 * fVar23 + fVar15 * fVar35 + fVar16;
          *(float *)(pPVar8 + 0x10) = fVar7 * fVar27 + fVar23 * fVar2 + fVar35 * fVar3 + fVar18;
          *(float *)(pPVar8 + 0x14) = fVar27 * fVar4 + fVar5 * fVar31 + fVar35 * fVar6 + fVar17;
          *(float *)(pPVar8 + 0x18) = fVar13 * fVar20 + fVar14 * fVar24 + fVar15 * fVar36 + fVar16;
          *(float *)(pPVar8 + 0x1c) = fVar7 * fVar28 + fVar24 * fVar2 + fVar36 * fVar3 + fVar18;
          *(float *)(pPVar8 + 0x20) = fVar28 * fVar4 + fVar5 * fVar32 + fVar36 * fVar6 + fVar17;
          *(float *)(pPVar8 + 0x24) = fVar13 * fVar21 + fVar14 * fVar25 + fVar15 * fVar37 + fVar16;
          *(float *)(pPVar8 + 0x28) = fVar7 * fVar29 + fVar25 * fVar2 + fVar37 * fVar3 + fVar18;
          *(float *)(pPVar8 + 0x2c) = fVar29 * fVar4 + fVar5 * fVar33 + fVar37 * fVar6 + fVar17;
          pPVar8 = pPVar8 + 0x30;
          pPVar12 = pPVar12 + 0x30;
        } while (lVar10 != 0);
      }
    }
    lVar10 = uVar9 - lVar11;
                    /* try { // try from 00616960 to 00716987 has its CatchHandler @ 006169ec */
    pPVar8 = param_2 + lVar11 * 0xc + 4;
    pPVar12 = param_1 + lVar11 * 0xc + 8;
    do {
      fVar14 = *(float *)pPVar8;
      fVar15 = *(float *)(pPVar8 + 4);
      *(float *)(pPVar12 + -8) =
           *(float *)param_4 * *(float *)(pPVar8 + -4) + *(float *)(param_4 + 0x10) * fVar14 +
           *(float *)(param_4 + 0x20) * fVar15 + *(float *)(param_4 + 0x30) * param_5;
                    /* try { // try from 006169a8 to 007169cf has its CatchHandler @ 006169e4 */
      fVar13 = *(float *)(pPVar8 + -4);
                    /* try { // try from 006169d0 to 00716a3f has its CatchHandler @ 00616844 */
      *(float *)(pPVar12 + -4) =
           *(float *)(param_4 + 4) * fVar13 + fVar14 * *(float *)(param_4 + 0x14) +
           fVar15 * *(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x34) * param_5;
      lVar10 = lVar10 + -1;
                    /* catch() { ... } // from try @ 006169a8 with catch @ 006169e4 */
                    /* catch() { ... } // from try @ 00616960 with catch @ 006169ec */
                    /* catch() { ... } // from try @ 00616918 with catch @ 006169fc */
      *(float *)pPVar12 =
           fVar13 * *(float *)(param_4 + 8) + *(float *)(param_4 + 0x18) * *(float *)pPVar8 +
           fVar15 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38) * param_5;
      pPVar8 = pPVar8 + 0xc;
      pPVar12 = pPVar12 + 0xc;
                    /* catch() { ... } // from try @ 006168d0 with catch @ 00616a0c */
    } while (lVar10 != 0);
  }
  return;
}


