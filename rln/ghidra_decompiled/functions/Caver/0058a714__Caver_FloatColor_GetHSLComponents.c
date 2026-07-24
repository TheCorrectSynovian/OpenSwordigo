/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a714
 * Function: Caver::FloatColor::GetHSLComponents
 * Signature: undefined __thiscall GetHSLComponents(FloatColor * this, float * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatColor::GetHSLComponents(float*) const */

void __thiscall Caver::FloatColor::GetHSLComponents(FloatColor *this,float *param_1)

{
  int iVar1;
  int iVar2;
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
  
  fVar6 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  fVar9 = *(float *)(this + 8);
                    /* try { // try from 0058a72c to 0068a73f has its CatchHandler @ 0058b320 */
  fVar3 = (float)NEON_fminnm(fVar6,DAT_0068431c);
  fVar12 = fVar6;
  if (fVar6 <= DAT_00689974) {
    fVar12 = DAT_00689974;
  }
  fVar4 = fVar7;
  if (fVar3 <= fVar7) {
    fVar4 = fVar3;
  }
  fVar3 = fVar7;
  if (fVar7 <= fVar12) {
    fVar3 = fVar12;
  }
  fVar13 = fVar9;
  if (fVar4 <= fVar9) {
    fVar13 = fVar4;
  }
  fVar4 = fVar9;
  if (fVar9 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar8 = fVar4 - fVar13;
  fVar5 = (fVar13 + fVar4) * 0.5;
  fVar10 = 0.0;
                    /* try { // try from 0058a778 to 0068a79f has its CatchHandler @ 0058adf0 */
  fVar11 = 0.0;
  if (DAT_00683488 < ABS(fVar8)) {
    iVar2 = -(uint)(fVar6 <= DAT_00689974);
    if (fVar12 < fVar7) {
      iVar2 = 1;
    }
    iVar1 = 2;
    if (fVar9 <= fVar3) {
      iVar1 = iVar2;
    }
    fVar11 = fVar13 + fVar4;
    if (0.5 <= fVar5) {
      fVar11 = (2.0 - fVar4) - fVar13;
    }
    if (iVar1 == 1) {
      fVar10 = (fVar9 - fVar6) / fVar8 + 2.0;
    }
    else if (iVar1 == 0) {
                    /* try { // try from 0058a7c0 to 0068a7e7 has its CatchHandler @ 0058b320 */
      fVar10 = (fVar7 - fVar9) / fVar8;
    }
    else {
      fVar10 = (fVar6 - fVar7) / fVar8 + 4.0;
    }
    fVar11 = fVar8 / fVar11;
    fVar10 = fVar10 * DAT_00696a2c;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 + 1.0;
    }
  }
  *param_1 = fVar10;
  param_1[1] = fVar11;
  param_1[2] = fVar5;
  return;
}


