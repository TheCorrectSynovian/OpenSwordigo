/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1270
 * Function: Caver::Quaternion::RotationAxisAngle
 * Signature: undefined __thiscall RotationAxisAngle(Quaternion * this, float param_1, Vector3 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quaternion::RotationAxisAngle(float, Caver::Vector3 const&) */

void __thiscall
Caver::Quaternion::RotationAxisAngle(Quaternion *this,float param_1,Vector3 *param_2)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  
  fVar1 = sinf(param_1 * 0.5);
  fVar2 = cosf(param_1 * 0.5);
  *in_x8 = fVar2;
  *(ulong *)(in_x8 + 1) =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) * fVar1,
                (float)*(undefined8 *)this * fVar1);
  in_x8[3] = fVar1 * *(float *)(this + 8);
  return;
}


