/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a8e4
 * Function: Caver::FloatColor::Saturation
 * Signature: undefined __thiscall Saturation(FloatColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatColor::Saturation() const */

float __thiscall Caver::FloatColor::Saturation(FloatColor *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)this;
  fVar4 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 8);
                    /* try { // try from 0058a900 to 0068a90b has its CatchHandler @ 0058b43c */
  fVar1 = (float)NEON_fminnm(fVar3,DAT_0068431c);
  if (fVar3 <= DAT_00689974) {
    fVar3 = DAT_00689974;
  }
  fVar2 = fVar4;
                    /* try { // try from 0058a90c to 0068a913 has its CatchHandler @ 0058b064 */
  if (fVar1 <= fVar4) {
    fVar2 = fVar1;
  }
                    /* try { // try from 0058a914 to 0068a97b has its CatchHandler @ 0058b43c */
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = fVar5;
  if (fVar2 <= fVar5) {
    fVar3 = fVar2;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  if (DAT_00683488 < ABS(fVar5 - fVar3)) {
    fVar4 = fVar3 + fVar5;
    if (0.5 <= (fVar3 + fVar5) * 0.5) {
      fVar4 = (2.0 - fVar5) - fVar3;
    }
    return (fVar5 - fVar3) / fVar4;
  }
  return 0.0;
}


