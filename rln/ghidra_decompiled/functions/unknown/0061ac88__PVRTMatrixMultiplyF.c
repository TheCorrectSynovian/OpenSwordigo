/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ac88
 * Function: PVRTMatrixMultiplyF
 * Signature: undefined __cdecl PVRTMatrixMultiplyF(PVRTMATRIXf * param_1, PVRTMATRIXf * param_2, PVRTMATRIXf * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixMultiplyF(PVRTMATRIXf&, PVRTMATRIXf const&, PVRTMATRIXf const&) */

void PVRTMatrixMultiplyF(PVRTMATRIXf *param_1,PVRTMATRIXf *param_2,PVRTMATRIXf *param_3)

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
  
                    /* try { // try from 0061ac88 to 0071acaf has its CatchHandler @ 0061aec4 */
  fVar1 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 8);
  fVar9 = *(float *)(param_2 + 0xc);
  fVar21 = *(float *)(param_2 + 0x10);
  fVar20 = *(float *)(param_2 + 0x14);
  fVar23 = *(float *)(param_2 + 0x18);
  fVar24 = *(float *)(param_2 + 0x1c);
  fVar25 = *(float *)(param_2 + 0x20);
  fVar26 = *(float *)(param_2 + 0x24);
  fVar27 = *(float *)(param_2 + 0x28);
  fVar28 = *(float *)(param_2 + 0x2c);
  fVar29 = *(float *)(param_2 + 0x30);
  fVar30 = *(float *)(param_2 + 0x34);
  fVar31 = *(float *)(param_2 + 0x38);
  fVar32 = *(float *)(param_2 + 0x3c);
  fVar6 = (float)*(undefined8 *)param_3;
  fVar7 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_3 + 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_3 + 0x30);
                    /* try { // try from 0061acd0 to 0071acf7 has its CatchHandler @ 0061aeb4 */
  fVar15 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_3 + 8);
  fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
  fVar16 = (float)*(undefined8 *)(param_3 + 0x28);
  fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
  fVar18 = (float)*(undefined8 *)(param_3 + 0x38);
  fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20);
                    /* try { // try from 0061ad18 to 0071ad3f has its CatchHandler @ 0061aea4 */
  fVar2 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
                    /* try { // try from 0061ad60 to 0071ad87 has its CatchHandler @ 0061ae94 */
  fVar22 = *(float *)(param_2 + 4);
                    /* try { // try from 0061ada8 to 0071adcf has its CatchHandler @ 0061ae84 */
  *(ulong *)(param_1 + 0x10) =
       CONCAT44(fVar7 * fVar21 + fVar3 * fVar20 + fVar13 * fVar23 + fVar15 * fVar24,
                fVar6 * fVar21 + fVar2 * fVar20 + fVar12 * fVar23 + fVar14 * fVar24);
  *(ulong *)(param_1 + 0x18) =
       CONCAT44(fVar11 * fVar21 + fVar5 * fVar20 + fVar17 * fVar23 + fVar19 * fVar24,
                fVar10 * fVar21 + fVar4 * fVar20 + fVar16 * fVar23 + fVar18 * fVar24);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44(fVar7 * fVar25 + fVar3 * fVar26 + fVar13 * fVar27 + fVar15 * fVar28,
                fVar6 * fVar25 + fVar2 * fVar26 + fVar12 * fVar27 + fVar14 * fVar28);
  *(ulong *)(param_1 + 0x28) =
       CONCAT44(fVar11 * fVar25 + fVar5 * fVar26 + fVar17 * fVar27 + fVar19 * fVar28,
                fVar10 * fVar25 + fVar4 * fVar26 + fVar16 * fVar27 + fVar18 * fVar28);
  *(ulong *)param_1 =
       CONCAT44(fVar1 * fVar7 + fVar3 * fVar22 + fVar13 * fVar8 + fVar15 * fVar9,
                fVar1 * fVar6 + fVar2 * fVar22 + fVar12 * fVar8 + fVar14 * fVar9);
  *(ulong *)(param_1 + 8) =
       CONCAT44(fVar1 * fVar11 + fVar5 * fVar22 + fVar17 * fVar8 + fVar19 * fVar9,
                fVar1 * fVar10 + fVar4 * fVar22 + fVar16 * fVar8 + fVar18 * fVar9);
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(fVar7 * fVar29 + fVar3 * fVar30 + fVar13 * fVar31 + fVar15 * fVar32,
                fVar6 * fVar29 + fVar2 * fVar30 + fVar12 * fVar31 + fVar14 * fVar32);
  *(ulong *)(param_1 + 0x38) =
       CONCAT44(fVar11 * fVar29 + fVar5 * fVar30 + fVar17 * fVar31 + fVar19 * fVar32,
                fVar10 * fVar29 + fVar4 * fVar30 + fVar16 * fVar31 + fVar18 * fVar32);
  return;
}


