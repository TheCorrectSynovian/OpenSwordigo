/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a814
 * Function: Caver::FloatColor::Hue
 * Signature: undefined __thiscall Hue(FloatColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatColor::Hue() const */

float __thiscall Caver::FloatColor::Hue(FloatColor *this)

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
  
  fVar5 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  fVar8 = *(float *)(this + 8);
  fVar3 = (float)NEON_fminnm(fVar5,DAT_0068431c);
  fVar6 = fVar5;
  if (fVar5 <= DAT_00689974) {
    fVar6 = DAT_00689974;
  }
  fVar9 = fVar7;
  if (fVar3 <= fVar7) {
    fVar9 = fVar3;
  }
                    /* try { // try from 0058a840 to 0068a853 has its CatchHandler @ 0058b0b8 */
  fVar3 = fVar7;
  if (fVar7 <= fVar6) {
    fVar3 = fVar6;
  }
  fVar4 = fVar8;
  if (fVar9 <= fVar8) {
    fVar4 = fVar9;
  }
  fVar9 = fVar8;
  if (fVar8 <= fVar3) {
    fVar9 = fVar3;
  }
  fVar9 = fVar9 - fVar4;
  if (ABS(fVar9) <= DAT_00683488) {
    return 0.0;
  }
                    /* try { // try from 0058a874 to 0068a87f has its CatchHandler @ 0058ade0 */
  iVar2 = -(uint)(fVar5 <= DAT_00689974);
  if (fVar6 < fVar7) {
    iVar2 = 1;
  }
  iVar1 = 2;
  if (fVar8 <= fVar3) {
    iVar1 = iVar2;
  }
  if (iVar1 == 1) {
    fVar5 = fVar8 - fVar5;
                    /* try { // try from 0058a8ac to 0068a8b7 has its CatchHandler @ 0058b068 */
    fVar6 = 2.0;
  }
  else {
    if (iVar1 == 0) {
      fVar9 = (fVar7 - fVar8) / fVar9;
      goto LAB_0058a8c4;
    }
    fVar5 = fVar5 - fVar7;
    fVar6 = 4.0;
  }
  fVar9 = fVar5 / fVar9 + fVar6;
LAB_0058a8c4:
  fVar9 = fVar9 * DAT_00696a2c;
  if (fVar9 < 0.0) {
                    /* try { // try from 0058a8d8 to 0068a8ff has its CatchHandler @ 0058adec */
    fVar9 = fVar9 + 1.0;
  }
  return fVar9;
}


