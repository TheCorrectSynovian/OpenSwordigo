/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af338
 * Function: Caver::Matrix4::RotationX
 * Signature: undefined __thiscall RotationX(Matrix4 * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Matrix4::RotationX(float) */

void __thiscall Caver::Matrix4::RotationX(Matrix4 *this,float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  float fVar3;
  float fVar4;
  
  fVar3 = cosf(param_1);
  fVar4 = sinf(param_1);
  *(float *)((long)in_x8 + 0x14) = fVar3;
  *(float *)(in_x8 + 3) = fVar4;
  uVar2 = _UNK_00683498;
  uVar1 = _DAT_00683490;
  *(undefined4 *)(in_x8 + 2) = 0;
  *(undefined8 *)((long)in_x8 + 0x1c) = 0;
  *(undefined4 *)((long)in_x8 + 0x2c) = 0;
                    /* try { // try from 005af380 to 006af3a7 has its CatchHandler @ 005af648 */
  in_x8[6] = 0;
  *(float *)((long)in_x8 + 0x24) = -fVar4;
  *(float *)(in_x8 + 5) = fVar3;
  in_x8[1] = uVar2;
  *in_x8 = uVar1;
  *(undefined4 *)(in_x8 + 7) = 0;
  *(undefined4 *)((long)in_x8 + 0x3c) = 0x3f800000;
  return;
}


