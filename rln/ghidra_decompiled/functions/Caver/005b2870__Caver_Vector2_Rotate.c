/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2870
 * Function: Caver::Vector2::Rotate
 * Signature: undefined __thiscall Rotate(Vector2 * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Vector2::Rotate(float) */

void __thiscall Caver::Vector2::Rotate(Vector2 *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (_LAB_00688900 <= ABS(param_1)) {
    fVar1 = sinf(param_1);
    fVar2 = cosf(param_1);
    fVar3 = *(float *)this;
    *(float *)this = fVar2 * fVar3 - fVar1 * *(float *)(this + 4);
    *(float *)(this + 4) = fVar1 * fVar3 + fVar2 * *(float *)(this + 4);
  }
  return;
}


