/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2b60
 * Function: Caver::Vector2::FromAngle
 * Signature: undefined __thiscall FromAngle(Vector2 * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Vector2::FromAngle(float) */

void __thiscall Caver::Vector2::FromAngle(Vector2 *this,float param_1)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  *in_x8 = fVar1;
  in_x8[1] = fVar2;
  return;
}


