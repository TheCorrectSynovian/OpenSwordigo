/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b112c
 * Function: Caver::Quaternion::Length
 * Signature: undefined __thiscall Length(Quaternion * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quaternion::Length() const */

float __thiscall Caver::Quaternion::Length(Quaternion *this)

{
  float fVar1;
  float __x;
  
                    /* try { // try from 005b1134 to 006b120f has its CatchHandler @ 005b0dcc */
  __x = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
        *(float *)(this + 8) * *(float *)(this + 8) +
        *(float *)(this + 0xc) * *(float *)(this + 0xc);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  return 1.0 / fVar1;
}


