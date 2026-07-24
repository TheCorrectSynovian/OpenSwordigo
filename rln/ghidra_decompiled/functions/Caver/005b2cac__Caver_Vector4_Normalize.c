/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2cac
 * Function: Caver::Vector4::Normalize
 * Signature: undefined __thiscall Normalize(Vector4 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Vector4::Normalize() */

void __thiscall Caver::Vector4::Normalize(Vector4 *this)

{
  undefined8 uVar1;
  float fVar2;
  float __x;
  
  __x = *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
        *(float *)(this + 8) * *(float *)(this + 8) +
        *(float *)(this + 0xc) * *(float *)(this + 0xc);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  uVar1 = _DAT_00683948;
  if (fVar2 <= DAT_00683488) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined8 *)this = uVar1;
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0 / fVar2;
    *(ulong *)this =
         CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) * fVar2,
                  (float)*(undefined8 *)this * fVar2);
    *(float *)(this + 8) = fVar2 * *(float *)(this + 8);
    fVar2 = fVar2 * *(float *)(this + 0xc);
  }
  *(float *)(this + 0xc) = fVar2;
  return;
}


