/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b24ec
 * Function: Caver::RootsForCubicEquation
 * Signature: undefined __cdecl RootsForCubicEquation(float param_1, float param_2, float param_3, float param_4, float * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::RootsForCubicEquation(float, float, float, float, float*) */

long Caver::RootsForCubicEquation
               (float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  long lVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = param_2 / param_1;
  fVar6 = ((param_3 * 3.0) / param_1 - fVar10 * fVar10) / 3.0;
  fVar9 = ((param_4 * 27.0) / param_1 +
          fVar10 * fVar10 * (fVar10 + fVar10) + ((param_2 * -9.0 * param_3) / param_1) / param_1) /
          27.0;
  fVar8 = (fVar6 * fVar6 * fVar6) / 27.0 + fVar9 * fVar9 * 0.25;
  if (DAT_00689310 <= fVar8) {
    fVar6 = SQRT(fVar8);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar8);
    }
    fVar7 = DAT_00696a30;
    fVar12 = fVar9 * -0.5 + fVar6;
    fVar5 = powf(ABS(fVar12),DAT_00696a30);
    fVar11 = -1.0;
    fVar6 = fVar9 * -0.5 - fVar6;
    fVar9 = fVar11;
    if (0.0 <= fVar12) {
      fVar9 = 1.0;
    }
    fVar7 = powf(ABS(fVar6),fVar7);
    if (0.0 <= fVar6) {
      fVar11 = 1.0;
    }
    if ((_LAB_00688900 < fVar8) ||
       (fVar6 = fVar5 * fVar9 + fVar7 * fVar11, ABS(fVar6) < DAT_00683734)) {
      if (param_5 == (float *)0x0) {
        return 1;
      }
      *param_5 = fVar5 * fVar9 + fVar7 * fVar11;
      lVar3 = 1;
    }
    else {
      if (param_5 == (float *)0x0) {
        return 2;
      }
      lVar3 = 2;
      *param_5 = fVar6;
      param_5[1] = fVar6 * -0.5;
    }
  }
  else {
    fVar7 = (fVar6 * fVar6 * ABS(fVar6)) / 27.0;
    fVar8 = SQRT(fVar7);
                    /* catch() { ... } // from try @ 005b2420 with catch @ 005b25a4 */
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar7);
    }
    fVar8 = acosf((fVar9 * -0.5) / fVar8);
    fVar9 = ABS(fVar6) / 3.0;
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    if (param_5 == (float *)0x0) {
      return 3;
    }
    fVar9 = cosf(fVar8 / 3.0);
    dVar2 = DAT_00684028;
    *param_5 = (fVar6 + fVar6) * fVar9;
    fVar9 = cosf((float)(((double)fVar8 + dVar2) / 3.0));
    dVar2 = DAT_00689fc8;
    param_5[1] = fVar6 * -2.0 * fVar9;
    fVar8 = cosf((float)(((double)fVar8 + dVar2) / 3.0));
    param_5[2] = fVar6 * -2.0 * fVar8;
    lVar3 = 3;
  }
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 1;
    param_5[lVar4] = param_5[lVar4] - fVar10 / 3.0;
    lVar4 = lVar1;
  } while (lVar1 < lVar3);
  return lVar3;
}


