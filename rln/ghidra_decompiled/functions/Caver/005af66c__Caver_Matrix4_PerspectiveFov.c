/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af66c
 * Function: Caver::Matrix4::PerspectiveFov
 * Signature: undefined __thiscall PerspectiveFov(Matrix4 * this, float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::PerspectiveFov(float, float, float, float) */

void __thiscall
Caver::Matrix4::PerspectiveFov
          (Matrix4 *this,float param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  float *in_x8;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 005af690 to 006af69b has its CatchHandler @ 005af2c0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005af668 with catch @ 005af698
                        */
  fVar2 = tanf(param_1 * 0.5);
  uVar1 = DAT_00688c10;
  fVar3 = 1.0 / (param_3 - param_4);
  in_x8[5] = 1.0 / fVar2;
  in_x8[3] = 0.0;
  in_x8[4] = 0.0;
  in_x8[1] = 0.0;
  in_x8[2] = 0.0;
  in_x8[6] = 0.0;
  in_x8[7] = 0.0;
  in_x8[8] = 0.0;
  in_x8[9] = 0.0;
  in_x8[0xd] = 0.0;
  *in_x8 = (1.0 / fVar2) / param_2;
  in_x8[10] = (param_3 + param_4) * fVar3;
  in_x8[0xe] = (param_4 + param_4) * param_3 * fVar3;
  *(undefined8 *)(in_x8 + 0xb) = uVar1;
  in_x8[0xf] = 0.0;
  return;
}


