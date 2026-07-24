/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af708
 * Function: Caver::Matrix4::Ortho
 * Signature: undefined __thiscall Ortho(Matrix4 * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::Ortho(float, float, float, float, float, float) */

void __thiscall
Caver::Matrix4::Ortho
          (Matrix4 *this,float param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 1.0 / (param_1 - param_3);
  fVar2 = 1.0 / (param_4 - param_2);
  fVar3 = 1.0 / (param_5 - param_6);
  in_x8[3] = 0.0;
  in_x8[4] = 0.0;
  in_x8[1] = 0.0;
  in_x8[2] = 0.0;
  in_x8[6] = 0.0;
  in_x8[7] = 0.0;
  in_x8[8] = 0.0;
  in_x8[9] = 0.0;
  in_x8[0xb] = 0.0;
  *in_x8 = fVar1 * -2.0;
  in_x8[5] = fVar2 * -2.0;
  in_x8[10] = fVar3 * -2.0;
  in_x8[0xc] = (param_1 + param_3) * fVar1;
  in_x8[0xd] = (param_2 + param_4) * fVar2;
  in_x8[0xe] = (param_5 + param_6) * fVar3;
  in_x8[0xf] = 1.0;
  return;
}


