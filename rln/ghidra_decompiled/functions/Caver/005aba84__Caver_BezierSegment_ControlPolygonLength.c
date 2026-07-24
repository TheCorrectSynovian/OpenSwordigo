/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aba84
 * Function: Caver::BezierSegment::ControlPolygonLength
 * Signature: undefined __thiscall ControlPolygonLength(BezierSegment * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BezierSegment::ControlPolygonLength() const */

float __thiscall Caver::BezierSegment::ControlPolygonLength(BezierSegment *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* catch() { ... } // from try @ 005ab3f0 with catch @ 005aba8c */
                    /* catch() { ... } // from try @ 005ab3f8 with catch @ 005aba90 */
  fVar1 = (float)*(undefined8 *)(this + 8) - (float)*(undefined8 *)this;
  fVar2 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) -
          (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar2 = SQRT(fVar1);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar1);
  }
  fVar1 = (float)*(undefined8 *)(this + 0x10) - (float)*(undefined8 *)(this + 8);
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar3 = fVar1 * fVar1 + fVar3 * fVar3;
  fVar1 = SQRT(fVar3);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  fVar3 = (float)*(undefined8 *)(this + 0x18) - (float)*(undefined8 *)(this + 0x10);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar4 = fVar3 * fVar3 + fVar4 * fVar4;
  fVar3 = SQRT(fVar4);
                    /* catch() { ... } // from try @ 005ab390 with catch @ 005abaf8 */
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  return fVar2 + fVar1 + fVar3;
}


