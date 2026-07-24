/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afd70
 * Function: Caver::OrientedRect::SpanOnAxis
 * Signature: undefined __thiscall SpanOnAxis(OrientedRect * this, Vector2 * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrientedRect::SpanOnAxis(Caver::Vector2 const&, float*, float*) const */

void __thiscall
Caver::OrientedRect::SpanOnAxis(OrientedRect *this,Vector2 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
                    /* catch() { ... } // from try @ 005afa34 with catch @ 005afd90 */
                    /* catch() { ... } // from try @ 005afa64 with catch @ 005afd94 */
  fVar1 = *(float *)this * fVar2 + *(float *)(this + 4) * fVar3;
  fVar2 = *(float *)(this + 0x18) *
          ABS(fVar2 * *(float *)(this + 8) + fVar3 * *(float *)(this + 0xc)) +
          *(float *)(this + 0x1c) *
          ABS(fVar2 * *(float *)(this + 0x10) + fVar3 * *(float *)(this + 0x14));
  *param_2 = fVar1 - fVar2;
  *param_3 = fVar1 + fVar2;
  return;
}


