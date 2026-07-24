/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005abb20
 * Function: Caver::BezierSegment::ApproximatedLength
 * Signature: undefined __thiscall ApproximatedLength(BezierSegment * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BezierSegment::ApproximatedLength() const */

float __thiscall Caver::BezierSegment::ApproximatedLength(BezierSegment *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 005abb40 to 006abb4b has its CatchHandler @ 005ab174 */
  fVar3 = ((float)*(undefined8 *)(this + 8) + (float)*(undefined8 *)(this + 0x10)) * 0.5;
  fVar4 = ((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) +
          (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20)) * 0.5;
                    /* catch() { ... } // from try @ 005ab920 with catch @ 005abb48 */
  fVar1 = fVar3 - (float)*(undefined8 *)this;
  fVar2 = fVar4 - (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar2 = SQRT(fVar1);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar1);
  }
  fVar3 = (float)*(undefined8 *)(this + 0x18) - fVar3;
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) - fVar4;
  fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
  fVar1 = SQRT(fVar3);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  return fVar2 + fVar1;
}


