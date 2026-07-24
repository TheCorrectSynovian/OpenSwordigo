/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2194
 * Function: Caver::Image::Image
 * Signature: undefined __thiscall Image(Image * this, int param_1, int param_2, PixelFormat param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::Image(int, int, Caver::PixelFormat) */

void __thiscall Caver::Image::Image(Image *this,int param_1,int param_2,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = 0;
  *this = (Image)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_4;
                    /* try { // try from 005d21c4 to 006d21d7 has its CatchHandler @ 005d2950 */
  if (param_4 - 1U < 8) {
    iVar3 = *(int *)(&DAT_00698170 + (long)(int)(param_4 - 1U) * 4);
  }
                    /* try { // try from 005d21d8 to 006d2247 has its CatchHandler @ 005d2e40 */
  iVar1 = param_2 * param_1 * iVar3;
  *(int *)(this + 0x10) = iVar3;
  *(int *)(this + 0x14) = iVar1;
  uVar4 = (ulong)iVar1;
  if ((long)uVar4 < 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar4);
  *(void **)(this + 0x18) = pvVar2;
  return;
}


