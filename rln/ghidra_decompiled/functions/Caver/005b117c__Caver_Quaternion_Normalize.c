/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b117c
 * Function: Caver::Quaternion::Normalize
 * Signature: undefined __thiscall Normalize(Quaternion * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quaternion::Normalize() */

void __thiscall Caver::Quaternion::Normalize(Quaternion *this)

{
  float fVar1;
  float __x;
  
                    /* catch() { ... } // from try @ 005b110c with catch @ 005b11a0 */
  __x = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
        *(float *)(this + 8) * *(float *)(this + 8) +
        *(float *)(this + 0xc) * *(float *)(this + 0xc);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  fVar1 = 1.0 / fVar1;
  *(ulong *)(this + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * fVar1,
                (float)*(undefined8 *)(this + 8) * fVar1);
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) * fVar1,
                (float)*(undefined8 *)this * fVar1);
  return;
}


