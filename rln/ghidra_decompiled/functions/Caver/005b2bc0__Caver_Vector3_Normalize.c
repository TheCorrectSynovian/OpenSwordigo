/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2bc0
 * Function: Caver::Vector3::Normalize
 * Signature: undefined __thiscall Normalize(Vector3 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Vector3::Normalize() */

void __thiscall Caver::Vector3::Normalize(Vector3 *this)

{
  float fVar1;
  float __x;
  
  __x = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
        *(float *)(this + 8) * *(float *)(this + 8);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(__x);
  }
  if (fVar1 <= DAT_00683488) {
    *(undefined8 *)this = _DAT_00683948;
    fVar1 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    *(ulong *)this =
         CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) * fVar1,
                  (float)*(undefined8 *)this * fVar1);
    fVar1 = fVar1 * *(float *)(this + 8);
  }
  *(float *)(this + 8) = fVar1;
  return;
}


