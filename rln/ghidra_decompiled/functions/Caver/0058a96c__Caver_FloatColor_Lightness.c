/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a96c
 * Function: Caver::FloatColor::Lightness
 * Signature: undefined __thiscall Lightness(FloatColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatColor::Lightness() const */

float __thiscall Caver::FloatColor::Lightness(FloatColor *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)this;
  fVar5 = *(float *)(this + 4);
                    /* try { // try from 0058a97c to 0068a983 has its CatchHandler @ 0058b2a4 */
  fVar1 = (float)NEON_fminnm(fVar3,DAT_0068431c);
                    /* try { // try from 0058a984 to 0068a997 has its CatchHandler @ 0058b060 */
  if (fVar3 <= DAT_00689974) {
    fVar3 = DAT_00689974;
  }
  fVar4 = *(float *)(this + 8);
  fVar2 = fVar5;
  if (fVar1 <= fVar5) {
    fVar2 = fVar1;
  }
                    /* try { // try from 0058a998 to 0068a9ab has its CatchHandler @ 0058b004 */
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  fVar3 = fVar4;
  if (fVar2 <= fVar4) {
    fVar3 = fVar2;
  }
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  return (fVar3 + fVar4) * 0.5;
}


