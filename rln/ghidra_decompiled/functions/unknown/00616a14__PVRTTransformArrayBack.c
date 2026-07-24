/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616a14
 * Function: PVRTTransformArrayBack
 * Signature: undefined __cdecl PVRTTransformArrayBack(PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, int param_3, PVRTMATRIXf * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTransformArrayBack(PVRTVECTOR3f*, PVRTVECTOR3f const*, int, PVRTMATRIXf const*) */

void PVRTTransformArrayBack
               (PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,int param_3,PVRTMATRIXf *param_4)

{
  ulong uVar1;
  long lVar2;
  PVRTVECTOR3f *pPVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  PVRTVECTOR3f *pPVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
                    /* catch() { ... } // from try @ 00616888 with catch @ 00616a1c */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00616a40 to 00716b47 has its CatchHandler @ 00616b50 */
  PVRTMatrixInverseF((PVRTMATRIXf *)&local_b8,param_4);
  if (0 < param_3) {
    uVar4 = (ulong)(uint)param_3;
    lVar6 = 0;
    if (4 < (uint)param_3) {
      pPVar3 = param_2 + uVar4 * 0xc;
      pPVar7 = param_1 + uVar4 * 0xc;
      if (((pPVar3 + -8 <= param_1 || pPVar7 + -8 <= param_2) &&
          (pPVar3 + -4 <= param_1 + 4 || pPVar7 + -4 <= param_2 + 4)) &&
         (pPVar3 <= param_1 + 8 || pPVar7 <= param_2 + 8)) {
        uVar1 = 4;
        if ((param_3 & 3U) != 0) {
          uVar1 = uVar4 & 3;
        }
        lVar6 = uVar4 - uVar1;
                    /* try { // try from 00616b48 to 00716b53 has its CatchHandler @ 00616844 */
                    /* catch() { ... } // from try @ 00616a40 with catch @ 00616b50 */
                    /* catch() { ... } // from try @ 00616b68 with catch @ 00616b54 */
                    /* try { // try from 00616b64 to 00716b67 has its CatchHandler @ 00616b78 */
                    /* try { // try from 00616b68 to 00716b8b has its CatchHandler @ 00616b54 */
        lVar5 = lVar6;
        pPVar3 = param_1;
        pPVar7 = param_2;
        do {
          fVar11 = *(float *)(pPVar7 + 4);
          fVar8 = *(float *)(pPVar7 + 0xc);
          fVar12 = *(float *)(pPVar7 + 0x10);
          fVar9 = *(float *)(pPVar7 + 0x18);
          fVar13 = *(float *)(pPVar7 + 0x1c);
          fVar10 = *(float *)(pPVar7 + 0x24);
          fVar14 = *(float *)(pPVar7 + 0x28);
          fVar15 = *(float *)pPVar7;
          fVar19 = *(float *)(pPVar7 + 4);
          fVar23 = *(float *)(pPVar7 + 8);
          fVar16 = *(float *)(pPVar7 + 0xc);
          fVar20 = *(float *)(pPVar7 + 0x10);
          fVar24 = *(float *)(pPVar7 + 0x14);
          fVar17 = *(float *)(pPVar7 + 0x18);
          fVar21 = *(float *)(pPVar7 + 0x1c);
          fVar25 = *(float *)(pPVar7 + 0x20);
          fVar18 = *(float *)(pPVar7 + 0x24);
          fVar22 = *(float *)(pPVar7 + 0x28);
          fVar26 = *(float *)(pPVar7 + 0x2c);
                    /* catch() { ... } // from try @ 00616b64 with catch @ 00616b78 */
          lVar5 = lVar5 + -4;
                    /* try { // try from 00616bd0 to 00716c03 has its CatchHandler @ 00616bd0
                       catch() { ... } // from try @ 00616bd0 with catch @ 00616bd0
                       catch() { ... } // from try @ 006177d0 with catch @ 00616bd0
                       catch() { ... } // from try @ 00617c5c with catch @ 00616bd0
                       catch() { ... } // from try @ 00617dd8 with catch @ 00616bd0 */
          *(float *)pPVar3 =
               local_88 + local_b8 * *(float *)pPVar7 + local_a8 * fVar11 + local_98 * fVar23;
          *(float *)(pPVar3 + 4) =
               fStack_84 + fStack_b4 * fVar15 + fVar11 * fStack_a4 + fVar23 * fStack_94;
          *(float *)(pPVar3 + 8) =
               local_80 + fVar15 * local_b0 + local_a0 * fVar19 + fVar23 * local_90;
          *(float *)(pPVar3 + 0xc) =
               local_88 + local_b8 * fVar8 + local_a8 * fVar12 + local_98 * fVar24;
          *(float *)(pPVar3 + 0x10) =
               fStack_84 + fStack_b4 * fVar16 + fVar12 * fStack_a4 + fVar24 * fStack_94;
          *(float *)(pPVar3 + 0x14) =
               local_80 + fVar16 * local_b0 + local_a0 * fVar20 + fVar24 * local_90;
          *(float *)(pPVar3 + 0x18) =
               local_88 + local_b8 * fVar9 + local_a8 * fVar13 + local_98 * fVar25;
          *(float *)(pPVar3 + 0x1c) =
               fStack_84 + fStack_b4 * fVar17 + fVar13 * fStack_a4 + fVar25 * fStack_94;
          *(float *)(pPVar3 + 0x20) =
               local_80 + fVar17 * local_b0 + local_a0 * fVar21 + fVar25 * local_90;
          *(float *)(pPVar3 + 0x24) =
               local_88 + local_b8 * fVar10 + local_a8 * fVar14 + local_98 * fVar26;
          *(float *)(pPVar3 + 0x28) =
               fStack_84 + fStack_b4 * fVar18 + fVar14 * fStack_a4 + fVar26 * fStack_94;
          *(float *)(pPVar3 + 0x2c) =
               local_80 + fVar18 * local_b0 + local_a0 * fVar22 + fVar26 * local_90;
          pPVar3 = pPVar3 + 0x30;
          pPVar7 = pPVar7 + 0x30;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar4 - lVar6;
    pPVar3 = param_2 + lVar6 * 0xc + 4;
    pPVar7 = param_1 + lVar6 * 0xc + 8;
    do {
      fVar9 = *(float *)pPVar3;
      fVar10 = *(float *)(pPVar3 + 4);
      lVar5 = lVar5 + -1;
                    /* try { // try from 00616c04 to 00716c17 has its CatchHandler @ 00617cf8 */
                    /* try { // try from 00616c18 to 00716c2b has its CatchHandler @ 00617c88 */
      *(float *)(pPVar7 + -8) =
           local_88 + local_b8 * *(float *)(pPVar3 + -4) + local_a8 * fVar9 + local_98 * fVar10;
      fVar8 = *(float *)(pPVar3 + -4);
      *(float *)(pPVar7 + -4) =
           fStack_84 + fStack_b4 * fVar8 + fVar9 * fStack_a4 + fVar10 * fStack_94;
                    /* try { // try from 00616c44 to 00716c4f has its CatchHandler @ 00617db0 */
                    /* try { // try from 00616c50 to 00716c5b has its CatchHandler @ 00617c70 */
      *(float *)pPVar7 =
           local_80 + fVar8 * local_b0 + local_a0 * *(float *)pPVar3 + fVar10 * local_90;
      pPVar3 = pPVar3 + 0xc;
      pPVar7 = pPVar7 + 0xc;
                    /* try { // try from 00616c5c to 00716cd3 has its CatchHandler @ 00617db0 */
    } while (lVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


