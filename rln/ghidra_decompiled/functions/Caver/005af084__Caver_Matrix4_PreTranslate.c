/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af084
 * Function: Caver::Matrix4::PreTranslate
 * Signature: undefined __thiscall PreTranslate(Matrix4 * this, float param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::PreTranslate(float, float, float) */

void __thiscall
Caver::Matrix4::PreTranslate(Matrix4 *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 0xc);
  fVar2 = *(float *)(this + 0x1c);
  fVar3 = *(float *)(this + 0x2c);
  fVar4 = *(float *)(this + 0x3c);
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) + param_2 * fVar1,
                (float)*(undefined8 *)this + param_1 * fVar1);
  *(ulong *)(this + 0x10) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) + param_2 * fVar2,
                (float)*(undefined8 *)(this + 0x10) + param_1 * fVar2);
  *(ulong *)(this + 0x20) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) + param_2 * fVar3,
                (float)*(undefined8 *)(this + 0x20) + param_1 * fVar3);
  *(ulong *)(this + 0x30) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) + param_2 * fVar4,
                (float)*(undefined8 *)(this + 0x30) + param_1 * fVar4);
  *(float *)(this + 8) = fVar1 * param_3 + *(float *)(this + 8);
  *(float *)(this + 0x18) = fVar2 * param_3 + *(float *)(this + 0x18);
  *(float *)(this + 0x28) = fVar3 * param_3 + *(float *)(this + 0x28);
  *(float *)(this + 0x38) = fVar4 * param_3 + *(float *)(this + 0x38);
  return;
}


