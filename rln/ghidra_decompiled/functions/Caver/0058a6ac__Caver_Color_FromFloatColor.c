/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a6ac
 * Function: Caver::Color::FromFloatColor
 * Signature: undefined __thiscall FromFloatColor(Color * this, FloatColor * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Color::FromFloatColor(Caver::FloatColor const&) */

void __thiscall Caver::Color::FromFloatColor(Color *this,FloatColor *param_1)

{
  undefined1 *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(this + 4) * DAT_00683ffc;
  fVar3 = *(float *)(this + 8) * DAT_00683ffc;
  fVar1 = *(float *)(this + 0xc) * DAT_00683ffc;
                    /* try { // try from 0058a6d8 to 0068a6e3 has its CatchHandler @ 0058b0f8 */
  *in_x8 = (char)(int)(*(float *)this * DAT_00683ffc);
  in_x8[1] = (char)(int)fVar2;
  in_x8[2] = (char)(int)fVar3;
  in_x8[3] = (char)(int)fVar1;
  return;
}


