/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4a14
 * Function: Caver::Circle::PointInside
 * Signature: undefined __thiscall PointInside(Circle * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Circle::PointInside(Caver::Vector2 const&) const */

bool __thiscall Caver::Circle::PointInside(Circle *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 005d48a0 with catch @ 005d4a14 */
  fVar1 = (float)*(undefined8 *)this - (float)*(undefined8 *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20) -
          (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  return fVar1 * fVar1 + fVar2 * fVar2 <= *(float *)(this + 8) * *(float *)(this + 8);
}


