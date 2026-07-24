/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2b04
 * Function: Caver::Vector2::Angle
 * Signature: undefined __thiscall Angle(Vector2 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Vector2::Angle() const */

float __thiscall Caver::Vector2::Angle(Vector2 *this)

{
  float fVar1;
  
  if (((DAT_00683488 <= ABS(*(float *)this)) ||
      (fVar1 = 0.0, DAT_00683488 <= ABS(*(float *)(this + 4)))) &&
     (fVar1 = atan2f(*(float *)(this + 4),*(float *)this), fVar1 < 0.0)) {
    fVar1 = (float)((double)fVar1 + DAT_00684790);
  }
  return fVar1;
}


