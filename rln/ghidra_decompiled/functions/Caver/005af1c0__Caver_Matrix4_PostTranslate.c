/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af1c0
 * Function: Caver::Matrix4::PostTranslate
 * Signature: undefined __thiscall PostTranslate(Matrix4 * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::PostTranslate(Caver::Vector3 const&) */

void __thiscall Caver::Matrix4::PostTranslate(Matrix4 *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 4);
  *(ulong *)(this + 0x30) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) +
                fVar1 * (float)((ulong)*(undefined8 *)this >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) * fVar2,
                (float)*(undefined8 *)(this + 0x30) +
                fVar1 * (float)*(undefined8 *)this + (float)*(undefined8 *)(this + 0x10) * fVar3 +
                (float)*(undefined8 *)(this + 0x20) * fVar2);
  *(ulong *)(this + 0x38) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) +
                fVar1 * (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20) * fVar2,
                (float)*(undefined8 *)(this + 0x38) +
                fVar1 * (float)*(undefined8 *)(this + 8) +
                (float)*(undefined8 *)(this + 0x18) * fVar3 +
                (float)*(undefined8 *)(this + 0x28) * fVar2);
  return;
}


