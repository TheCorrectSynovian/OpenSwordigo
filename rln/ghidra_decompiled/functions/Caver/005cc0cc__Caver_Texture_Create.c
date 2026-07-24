/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc0cc
 * Function: Caver::Texture::Create
 * Signature: undefined __thiscall Create(Texture * this, int param_1, int param_2, PixelFormat param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::Create(int, int, Caver::PixelFormat, float) */

void __thiscall
Caver::Texture::Create(float param_1_00,Texture *this,int param_1,int param_2,undefined4 param_5)

{
  *(float *)(this + 0x6c) = param_1_00;
  *(undefined4 *)(this + 0x44) = param_5;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(float *)(this + 0x54) = (float)param_1;
  *(float *)(this + 0x58) = (float)param_2;
  InitWithData(this,0,(int)((float)param_1 * param_1_00),(int)((float)param_2 * param_1_00),param_5)
  ;
  return;
}


