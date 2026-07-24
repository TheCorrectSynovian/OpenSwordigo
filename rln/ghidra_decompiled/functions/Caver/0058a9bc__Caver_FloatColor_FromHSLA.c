/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a9bc
 * Function: Caver::FloatColor::FromHSLA
 * Signature: undefined __thiscall FromHSLA(FloatColor * this, float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatColor::FromHSLA(float, float, float, float) */

void __thiscall
Caver::FloatColor::FromHSLA
          (FloatColor *this,float param_1,float param_2,float param_3,float param_4)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 0058a9c0 to 0068a9cb has its CatchHandler @ 0058b450 */
  if ((param_1 < 0.0) || (1.0 < param_1)) {
    param_1 = param_1 - (float)(int)param_1;
  }
  fVar4 = 1.0;
                    /* try { // try from 0058a9e0 to 0068a9e7 has its CatchHandler @ 0058b000 */
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (1.0 < param_3) {
    param_3 = 1.0;
  }
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  if (0.5 <= param_3) {
    fVar2 = (param_2 + param_3) - param_2 * param_3;
  }
  else {
    fVar2 = param_3 * (param_2 + 1.0);
  }
                    /* try { // try from 0058aa14 to 0068aa1f has its CatchHandler @ 0058afb0 */
  fVar3 = (param_3 + param_3) - fVar2;
  fVar7 = param_1 + DAT_00696a30;
  if (0.0 <= fVar7) {
                    /* try { // try from 0058aa40 to 0068aa67 has its CatchHandler @ 0058ade8 */
    if (1.0 < fVar7) {
      fVar7 = fVar7 + -1.0;
    }
  }
  else {
    fVar7 = fVar7 + 1.0;
  }
  fVar5 = (fVar2 - fVar3) * 6.0;
  if (DAT_00696a2c <= fVar7) {
    fVar6 = fVar2;
                    /* try { // try from 0058aa74 to 0068aa7b has its CatchHandler @ 0058af98 */
                    /* try { // try from 0058aa7c to 0068aae3 has its CatchHandler @ 0058b450 */
    if ((0.5 <= fVar7) && (fVar6 = fVar3, fVar7 < DAT_0069674c)) {
      fVar7 = DAT_0069674c - fVar7;
      goto LAB_0058aa98;
    }
  }
  else {
LAB_0058aa98:
                    /* try { // try from 0058aa68 to 0068aa73 has its CatchHandler @ 0058b450 */
    fVar6 = fVar3 + fVar5 * fVar7;
  }
  if (0.0 <= param_1) {
    fVar7 = param_1;
    if (1.0 < param_1) {
      fVar7 = param_1 + -1.0;
    }
  }
  else {
    fVar7 = param_1 + 1.0;
  }
  fVar8 = param_1 + DAT_00696a34;
  if (DAT_00696a2c <= fVar7) {
    fVar1 = fVar2;
                    /* try { // try from 0058aae4 to 0068aaeb has its CatchHandler @ 0058b294 */
                    /* try { // try from 0058aaec to 0068aaff has its CatchHandler @ 0058af94 */
    if ((0.5 <= fVar7) && (fVar1 = fVar3, fVar7 < DAT_0069674c)) {
      fVar7 = DAT_0069674c - fVar7;
      goto LAB_0058ab00;
    }
  }
  else {
LAB_0058ab00:
                    /* try { // try from 0058ab00 to 0068ab13 has its CatchHandler @ 0058af28 */
    fVar1 = fVar3 + fVar5 * fVar7;
  }
  if (fVar8 < 0.0) {
LAB_0058ab18:
    fVar8 = fVar8 + fVar4;
  }
  else if (1.0 < fVar8) {
    fVar4 = -1.0;
    goto LAB_0058ab18;
  }
  if (DAT_00696a2c <= fVar8) {
    if ((fVar8 < 0.5) || (fVar2 = fVar3, DAT_0069674c <= fVar8)) goto LAB_0058ab50;
    fVar8 = DAT_0069674c - fVar8;
                    /* try { // try from 0058ab48 to 0068ab4f has its CatchHandler @ 0058aeec */
  }
  fVar2 = fVar3 + fVar5 * fVar8;
LAB_0058ab50:
  *in_x8 = fVar6;
  in_x8[1] = fVar1;
  in_x8[2] = fVar2;
  in_x8[3] = param_4;
  return;
}


