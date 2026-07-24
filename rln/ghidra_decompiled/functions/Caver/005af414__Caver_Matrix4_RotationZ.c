/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af414
 * Function: Caver::Matrix4::RotationZ
 * Signature: undefined __thiscall RotationZ(Matrix4 * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Matrix4::RotationZ(float) */

void __thiscall Caver::Matrix4::RotationZ(Matrix4 *this,float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *in_x8;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 005af414 to 006af667 has its CatchHandler @ 005af2c0 */
  fVar3 = cosf(param_1);
  fVar4 = sinf(param_1);
  in_x8[0xe] = 0.0;
  in_x8[0xf] = 1.0;
  *in_x8 = fVar3;
  in_x8[1] = fVar4;
  uVar2 = _UNK_00683498;
  uVar1 = _DAT_00683490;
  in_x8[2] = 0.0;
  in_x8[3] = 0.0;
  in_x8[4] = -fVar4;
  in_x8[5] = fVar3;
  in_x8[6] = 0.0;
  in_x8[7] = 0.0;
  in_x8[8] = 0.0;
  in_x8[9] = 0.0;
  *(undefined8 *)(in_x8 + 0xc) = uVar2;
  *(undefined8 *)(in_x8 + 10) = uVar1;
  return;
}


