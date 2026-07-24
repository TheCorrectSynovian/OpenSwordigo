/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ad9dc
 * Function: Caver::LineSegment::SpanOnAxis
 * Signature: undefined __thiscall SpanOnAxis(LineSegment * this, Vector2 * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LineSegment::SpanOnAxis(Caver::Vector2 const&, float*, float*) const */

void __thiscall
Caver::LineSegment::SpanOnAxis(LineSegment *this,Vector2 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)this * *(float *)param_1 + *(float *)(this + 4) * *(float *)(param_1 + 4);
  fVar3 = *(float *)param_1 * *(float *)(this + 8) +
          *(float *)(param_1 + 4) * *(float *)(this + 0xc);
  fVar2 = fVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ad964 with catch @ 005ada04
                        */
  if (fVar3 <= fVar1) {
    fVar2 = fVar1;
    fVar1 = fVar3;
  }
  *param_2 = fVar1;
  *param_3 = fVar2;
  return;
}


