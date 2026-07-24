/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005abba0
 * Function: Caver::BezierSegment::EvaluatePosition
 * Signature: undefined __cdecl EvaluatePosition(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BezierSegment::EvaluatePosition(float) const */

void Caver::BezierSegment::EvaluatePosition(float param_1)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (1.0 < param_1) {
    param_1 = 1.0;
  }
  fVar1 = 1.0 - param_1;
  fVar3 = param_1 * param_1 * param_1;
  fVar2 = fVar1 * param_1 * 3.0 * fVar1;
  fVar4 = fVar1 * fVar1 * fVar1;
  fVar1 = fVar1 * param_1 * param_1 * 3.0;
                    /* catch() { ... } // from try @ 005abde0 with catch @ 005abbf8
                       catch() { ... } // from try @ 005abf64 with catch @ 005abbf8 */
  *in_x8 = CONCAT44((float)((ulong)*in_x0 >> 0x20) * fVar4 +
                    (float)((ulong)in_x0[1] >> 0x20) * fVar2 +
                    (float)((ulong)in_x0[2] >> 0x20) * fVar1 +
                    (float)((ulong)in_x0[3] >> 0x20) * fVar3,
                    (float)*in_x0 * fVar4 + (float)in_x0[1] * fVar2 + (float)in_x0[2] * fVar1 +
                    (float)in_x0[3] * fVar3);
  return;
}


