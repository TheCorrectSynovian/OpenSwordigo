/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4a98
 * Function: Caver::Circle::SpanOnAxis
 * Signature: undefined __thiscall SpanOnAxis(Circle * this, Vector2 * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Circle::SpanOnAxis(Caver::Vector2 const&, float*, float*) const */

void __thiscall
Caver::Circle::SpanOnAxis(Circle *this,Vector2 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *(float *)this * *(float *)param_1 + *(float *)(this + 4) * *(float *)(param_1 + 4);
  *param_2 = fVar1 - *(float *)(this + 8);
  *param_3 = fVar1 + *(float *)(this + 8);
  return;
}


