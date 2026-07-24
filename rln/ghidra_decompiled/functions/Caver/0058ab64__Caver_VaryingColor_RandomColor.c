/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058ab64
 * Function: Caver::VaryingColor::RandomColor
 * Signature: undefined __thiscall RandomColor(VaryingColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::VaryingColor::RandomColor() const */

void __thiscall Caver::VaryingColor::RandomColor(VaryingColor *this)

{
  float fVar1;
  FloatColor *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_00683488;
                    /* try { // try from 0058ab7c to 0068ab87 has its CatchHandler @ 0058ae9c */
  fVar5 = *(float *)(this + 0xc);
  fVar2 = *(float *)this;
  fVar3 = *(float *)(this + 4);
  fVar4 = *(float *)(this + 8);
  this_00 = (FloatColor *)this;
  if (DAT_00683488 < *(float *)(this + 0x10)) {
    this_00 = (FloatColor *)fastrandom();
                    /* try { // try from 0058aba8 to 0068abcf has its CatchHandler @ 0058ade4 */
    fVar2 = fVar2 + *(float *)(this + 0x10) *
                    ((float)(int)this_00 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 + -0.5);
  }
  if (fVar1 < *(float *)(this + 0x14)) {
    this_00 = (FloatColor *)fastrandom();
                    /* try { // try from 0058abf0 to 0068abf3 has its CatchHandler @ 0058b294 */
    fVar3 = fVar3 + *(float *)(this + 0x14) *
                    ((float)(int)this_00 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 + -0.5);
  }
                    /* try { // try from 0058ac14 to 0068ac17 has its CatchHandler @ 0058b2a4 */
  if (fVar1 < *(float *)(this + 0x18)) {
                    /* try { // try from 0058ac18 to 0068ae13 has its CatchHandler @ 0058a020 */
    this_00 = (FloatColor *)fastrandom();
    fVar4 = fVar4 + *(float *)(this + 0x18) *
                    ((float)(int)this_00 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 + -0.5);
  }
  if (fVar1 < *(float *)(this + 0x1c)) {
    this_00 = (FloatColor *)fastrandom();
    fVar5 = fVar5 + *(float *)(this + 0x1c) *
                    ((float)(int)this_00 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 + -0.5);
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  FloatColor::FromHSLA(this_00,fVar2,fVar3,fVar4,fVar5);
  return;
}


