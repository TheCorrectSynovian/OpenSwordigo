/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af3a0
 * Function: Caver::Matrix4::RotationY
 * Signature: undefined __thiscall RotationY(Matrix4 * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Matrix4::RotationY(float) */

void __thiscall Caver::Matrix4::RotationY(Matrix4 *this,float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *in_x8;
  float fVar3;
  float fVar4;
  
  fVar3 = cosf(param_1);
  fVar4 = sinf(param_1);
  uVar2 = _UNK_006837f8;
  uVar1 = _DAT_006837f0;
  in_x8[8] = fVar4;
  *in_x8 = fVar3;
  in_x8[1] = 0.0;
  in_x8[9] = 0.0;
  in_x8[10] = fVar3;
                    /* try { // try from 005af3ec to 006af413 has its CatchHandler @ 005af63c */
  in_x8[7] = 0.0;
  in_x8[0xb] = 0.0;
  in_x8[0xc] = 0.0;
  in_x8[0xd] = 0.0;
  in_x8[2] = -fVar4;
  *(undefined8 *)(in_x8 + 5) = uVar2;
  *(undefined8 *)(in_x8 + 3) = uVar1;
  in_x8[0xe] = 0.0;
  in_x8[0xf] = 1.0;
  return;
}


