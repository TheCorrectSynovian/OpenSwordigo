/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4a3c
 * Function: Caver::Circle::IntersectsWithCircle
 * Signature: undefined __thiscall IntersectsWithCircle(Circle * this, Circle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Circle::IntersectsWithCircle(Caver::Circle const&) const */

bool __thiscall Caver::Circle::IntersectsWithCircle(Circle *this,Circle *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)this - (float)*(undefined8 *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20) -
          (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar2 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
                    /* catch() { ... } // from try @ 005d488c with catch @ 005d4a78 */
  return fVar1 <= *(float *)(this + 8) + *(float *)(param_1 + 8);
}


