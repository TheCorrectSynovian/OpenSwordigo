/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061b3d8
 * Function: PVRTMatrixLinearEqSolveF
 * Signature: undefined __cdecl PVRTMatrixLinearEqSolveF(float * param_1, float * * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixLinearEqSolveF(float*, float**, int) */

void PVRTMatrixLinearEqSolveF(float *param_1,float **param_2,int param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar12 = (ulong)(uint)param_3;
                    /* try { // try from 0061b3fc to 0071b40f has its CatchHandler @ 0061c030 */
  if (param_3 == 0) {
LAB_0061b58c:
    lVar2 = (long)param_3 + -1;
    PVRTMatrixLinearEqSolveF(param_1,param_2,(int)lVar2);
    pfVar3 = param_2[lVar2];
    fVar13 = *pfVar3;
    if (1 < param_3) {
      lVar4 = uVar12 - 1;
                    /* try { // try from 0061b5bc to 0071b61f has its CatchHandler @ 0061c16c */
      pfVar7 = param_1;
      pfVar8 = pfVar3;
      do {
        pfVar8 = pfVar8 + 1;
        lVar4 = lVar4 + -1;
        fVar13 = fVar13 - *pfVar8 * *pfVar7;
        pfVar7 = pfVar7 + 1;
      } while (lVar4 != 0);
    }
    param_1[lVar2] = fVar13 / pfVar3[param_3];
  }
  else {
    if (param_3 != 1) {
      lVar4 = 0;
      lVar2 = (long)param_3;
LAB_0061b42c:
      pfVar3 = param_2[(long)param_3 + lVar4 + -1];
                    /* try { // try from 0061b430 to 0071b43b has its CatchHandler @ 0061be94 */
      if (pfVar3[lVar2] == 0.0) goto code_r0x0061b43c;
      uVar6 = lVar2 - 1;
      if (((int)lVar4 == 0) || (param_3 < 0)) goto LAB_0061b4b0;
      pfVar8 = param_2[uVar6];
      uVar5 = (ulong)(param_3 + 1U);
                    /* try { // try from 0061b468 to 0071b473 has its CatchHandler @ 0061bfe0 */
      if ((7 < param_3 + 1U) && ((pfVar3 + uVar5 <= pfVar8 || (pfVar8 + uVar5 <= pfVar3)))) {
        uVar10 = uVar5 & 0xfffffff8;
        pfVar7 = pfVar8 + 4;
        pfVar11 = pfVar3 + 4;
        uVar9 = uVar10;
        do {
          uVar15 = *(undefined8 *)(pfVar7 + -2);
          uVar14 = *(undefined8 *)(pfVar7 + -4);
          uVar20 = *(undefined8 *)(pfVar7 + 2);
          uVar19 = *(undefined8 *)pfVar7;
          uVar16 = *(undefined8 *)(pfVar11 + -4);
          uVar18 = *(undefined8 *)(pfVar11 + 2);
          uVar17 = *(undefined8 *)pfVar11;
          uVar9 = uVar9 - 8;
          *(undefined8 *)(pfVar7 + -2) = *(undefined8 *)(pfVar11 + -2);
          *(undefined8 *)(pfVar7 + -4) = uVar16;
          *(undefined8 *)(pfVar7 + 2) = uVar18;
          *(undefined8 *)pfVar7 = uVar17;
          *(undefined8 *)(pfVar11 + -2) = uVar15;
          *(undefined8 *)(pfVar11 + -4) = uVar14;
          *(undefined8 *)(pfVar11 + 2) = uVar20;
          *(undefined8 *)pfVar11 = uVar19;
          pfVar7 = pfVar7 + 8;
                    /* try { // try from 0061b620 to 0071b63f has its CatchHandler @ 0061b220 */
          pfVar11 = pfVar11 + 8;
        } while (uVar9 != 0);
        if (uVar10 != uVar5) {
LAB_0061b488:
                    /* try { // try from 0061b494 to 0071b4bb has its CatchHandler @ 0061be98 */
          lVar4 = uVar5 - uVar10;
          pfVar3 = pfVar3 + uVar10;
          pfVar8 = pfVar8 + uVar10;
          do {
            fVar13 = *pfVar8;
            lVar4 = lVar4 + -1;
            *pfVar8 = *pfVar3;
            *pfVar3 = fVar13;
            pfVar3 = pfVar3 + 1;
            pfVar8 = pfVar8 + 1;
          } while (lVar4 != 0);
        }
LAB_0061b4b0:
        if (1 < param_3) {
          pfVar3 = param_2[(int)uVar6];
          uVar5 = 0;
          uVar9 = uVar12 & 0xfffffff8;
          do {
            pfVar8 = param_2[uVar5];
                    /* try { // try from 0061b528 to 0071b53b has its CatchHandler @ 0061bf88 */
            fVar13 = pfVar8[lVar2] / pfVar3[lVar2];
                    /* try { // try from 0061b53c to 0071b547 has its CatchHandler @ 0061bf30 */
                    /* try { // try from 0061b548 to 0071b55b has its CatchHandler @ 0061bed4 */
            if (((uint)param_3 < 8) ||
               ((pfVar8 < pfVar3 + (uint)param_3 && (pfVar3 < pfVar8 + uVar12)))) {
              uVar10 = 0;
LAB_0061b554:
              lVar4 = uVar12 - uVar10;
              pfVar8 = pfVar8 + uVar10;
              pfVar7 = pfVar3 + uVar10;
              do {
                lVar4 = lVar4 + -1;
                    /* try { // try from 0061b570 to 0071b577 has its CatchHandler @ 0061be9c */
                *pfVar8 = *pfVar8 - fVar13 * *pfVar7;
                pfVar8 = pfVar8 + 1;
                pfVar7 = pfVar7 + 1;
              } while (lVar4 != 0);
            }
            else {
              pfVar7 = pfVar8 + 4;
              uVar10 = uVar9;
              pfVar11 = pfVar3 + 4;
              do {
                pfVar1 = pfVar11 + -2;
                uVar14 = *(undefined8 *)(pfVar11 + -4);
                uVar16 = *(undefined8 *)(pfVar11 + 2);
                uVar15 = *(undefined8 *)pfVar11;
                    /* try { // try from 0061b4f0 to 0071b527 has its CatchHandler @ 0061c100 */
                pfVar11 = pfVar11 + 8;
                uVar10 = uVar10 - 8;
                *(ulong *)(pfVar7 + -2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20) -
                              fVar13 * (float)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                              (float)*(undefined8 *)(pfVar7 + -2) -
                              fVar13 * (float)*(undefined8 *)pfVar1);
                *(ulong *)(pfVar7 + -4) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + -4) >> 0x20) -
                              fVar13 * (float)((ulong)uVar14 >> 0x20),
                              (float)*(undefined8 *)(pfVar7 + -4) - fVar13 * (float)uVar14);
                *(ulong *)(pfVar7 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) -
                              fVar13 * (float)((ulong)uVar16 >> 0x20),
                              (float)*(undefined8 *)(pfVar7 + 2) - fVar13 * (float)uVar16);
                *(ulong *)pfVar7 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar7 >> 0x20) -
                              fVar13 * (float)((ulong)uVar15 >> 0x20),
                              (float)*(undefined8 *)pfVar7 - fVar13 * (float)uVar15);
                pfVar7 = pfVar7 + 8;
              } while (uVar10 != 0);
              uVar10 = uVar9;
              if (uVar9 != uVar12) goto LAB_0061b554;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != (uVar6 & 0xffffffff));
        }
        goto LAB_0061b58c;
      }
      uVar10 = 0;
      goto LAB_0061b488;
    }
    *param_1 = **param_2 / (*param_2)[1];
  }
  return;
code_r0x0061b43c:
  lVar4 = lVar4 + -1;
  if (param_3 + (int)lVar4 == 0) goto LAB_0061b58c;
  goto LAB_0061b42c;
}


