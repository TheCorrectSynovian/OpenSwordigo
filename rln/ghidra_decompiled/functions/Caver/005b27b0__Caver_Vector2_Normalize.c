/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b27b0
 * Function: Caver::Vector2::Normalize
 * Signature: undefined __thiscall Normalize(Vector2 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Vector2::Normalize() */

void __thiscall Caver::Vector2::Normalize(Vector2 *this)

{
  float fVar1;
  float __x;
  
  __x = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  if (fVar1 <= DAT_00683488) {
    fVar1 = 0.0;
    *(undefined4 *)this = 0x3f800000;
  }
  else {
    *(float *)this = (1.0 / fVar1) * *(float *)this;
    fVar1 = (1.0 / fVar1) * *(float *)(this + 4);
  }
  *(float *)(this + 4) = fVar1;
  return;
}


