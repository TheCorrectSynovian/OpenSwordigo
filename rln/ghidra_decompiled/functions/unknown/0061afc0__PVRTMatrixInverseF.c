/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061afc0
 * Function: PVRTMatrixInverseF
 * Signature: undefined __cdecl PVRTMatrixInverseF(PVRTMATRIXf * param_1, PVRTMATRIXf * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixInverseF(PVRTMATRIXf&, PVRTMATRIXf const&) */

void PVRTMatrixInverseF(PVRTMATRIXf *param_1,PVRTMATRIXf *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar5 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)param_2;
  fVar17 = *(float *)(param_2 + 0x24);
  fVar3 = *(float *)(param_2 + 0x28);
  fVar19 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x20);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar21 = fVar10 * fVar5 * fVar3;
  fVar25 = fVar1 * fVar17 * fVar8;
  dVar22 = (double)fVar21 + 0.0;
  dVar15 = dVar22;
  dVar16 = 0.0;
  if (0.0 <= fVar21) {
    dVar15 = 0.0;
    dVar16 = dVar22;
  }
  dVar23 = (double)fVar25;
  fVar21 = fVar6 * fVar19 * fVar12;
  dVar22 = dVar15 + dVar23;
  if (0.0 <= fVar25) {
    dVar22 = dVar15;
    dVar16 = dVar16 + dVar23;
  }
  fVar25 = fVar5 * fVar6;
  if (0.0 <= fVar21) {
    dVar16 = dVar16 + (double)fVar21;
  }
  fVar24 = fVar1 * fVar19;
  dVar15 = dVar22 + (double)fVar21;
  if (0.0 <= fVar21) {
    dVar15 = dVar22;
  }
  if (fVar8 * fVar25 <= DAT_00695770) {
    dVar16 = dVar16 + (double)-(fVar8 * fVar25);
  }
  fVar21 = fVar10 * fVar17;
  dVar22 = dVar15 + (double)-(fVar8 * fVar25);
  if (fVar8 * fVar25 <= DAT_00695770) {
    dVar22 = dVar15;
  }
  if (fVar3 * fVar24 <= DAT_00695770) {
    dVar16 = dVar16 + (double)-(fVar3 * fVar24);
  }
  dVar15 = dVar22 + (double)-(fVar3 * fVar24);
  if (fVar3 * fVar24 <= DAT_00695770) {
    dVar15 = dVar22;
  }
  dVar22 = dVar15 + (double)-(fVar21 * fVar12);
  if (fVar21 * fVar12 <= DAT_00695770) {
    dVar22 = dVar15;
    dVar16 = dVar16 + (double)-(fVar21 * fVar12);
  }
  dVar15 = dVar16 + dVar22;
  if (dVar15 != 0.0) {
    dVar22 = dVar15 / (dVar16 - dVar22);
    dVar16 = -dVar22;
    if (0.0 < dVar22) {
      dVar16 = dVar22;
    }
    if (DAT_0069c1d0 <= dVar16) {
                    /* try { // try from 0061b0e8 to 0071b0f3 has its CatchHandler @ 0061ab90 */
                    /* catch() { ... } // from try @ 0061ae50 with catch @ 0061b0f0 */
                    /* catch() { ... } // from try @ 0061b108 with catch @ 0061b0f4 */
                    /* try { // try from 0061b104 to 0071b107 has its CatchHandler @ 0061b118 */
                    /* try { // try from 0061b108 to 0071b12b has its CatchHandler @ 0061b0f4 */
                    /* catch() { ... } // from try @ 0061b104 with catch @ 0061b118 */
      fVar2 = *(float *)(param_2 + 0x30);
      fVar4 = *(float *)(param_2 + 0x34);
      fVar7 = *(float *)(param_2 + 0x38);
      fVar9 = fVar10 * fVar12 - fVar1 * fVar8;
      fVar11 = (float)(1.0 / dVar15);
      fVar20 = (fVar5 * fVar3 - fVar17 * fVar12) * fVar11;
      fVar14 = -((fVar3 * fVar19 - fVar17 * fVar8) * fVar11);
      fVar13 = -((fVar3 * fVar1 - fVar6 * fVar12) * fVar11);
      fVar18 = (fVar10 * fVar3 - fVar8 * fVar6) * fVar11;
      fVar3 = (fVar19 * fVar12 - fVar5 * fVar8) * fVar11;
      fVar8 = (fVar1 * fVar17 - fVar25) * fVar11;
      fVar6 = -((fVar21 - fVar6 * fVar19) * fVar11);
      *(float *)param_1 = fVar20;
      *(float *)(param_1 + 4) = fVar14;
      *(float *)(param_1 + 0x10) = fVar13;
      *(float *)(param_1 + 0x14) = fVar18;
      fVar1 = (fVar10 * fVar5 - fVar24) * fVar11;
      *(float *)(param_1 + 0x20) = fVar8;
      *(float *)(param_1 + 0x24) = fVar6;
      *(float *)(param_1 + 8) = fVar3;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(float *)(param_1 + 0x18) = -(fVar9 * fVar11);
      *(float *)(param_1 + 0x28) = fVar1;
      *(float *)(param_1 + 0x38) = -((fVar3 * fVar2 - fVar4 * fVar9 * fVar11) + fVar1 * fVar7);
      *(ulong *)(param_1 + 0x30) =
           CONCAT44(-(fVar14 * fVar2 + fVar18 * fVar4 + fVar6 * fVar7),
                    -(fVar20 * fVar2 + fVar13 * fVar4 + fVar8 * fVar7));
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    }
  }
  return;
}


