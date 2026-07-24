/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b282c
 * Function: Caver::Vector2::RotateWithSinCos
 * Signature: undefined __thiscall RotateWithSinCos(Vector2 * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Vector2::RotateWithSinCos(float, float) */

void __thiscall Caver::Vector2::RotateWithSinCos(Vector2 *this,float param_1,float param_2)

{
  float fVar1;
  
  if ((ABS(param_1) < _LAB_00688900) && (0.0 < param_2)) {
    return;
  }
  fVar1 = *(float *)this;
  *(float *)this = fVar1 * param_2 - *(float *)(this + 4) * param_1;
  *(float *)(this + 4) = fVar1 * param_1 + *(float *)(this + 4) * param_2;
  return;
}


