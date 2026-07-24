/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2200
 * Function: Caver::Image::Create
 * Signature: undefined __thiscall Create(Image * this, int param_1, int param_2, PixelFormat param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::Create(int, int, Caver::PixelFormat) */

void __thiscall Caver::Image::Create(Image *this,int param_1,int param_2,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  
  *(int *)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_4;
  if (param_4 - 1U < 8) {
    iVar3 = *(int *)(&DAT_00698170 + (long)(int)(param_4 - 1U) * 4);
  }
  else {
    iVar3 = 0;
  }
  iVar1 = param_2 * param_1 * iVar3;
  *(int *)(this + 0x10) = iVar3;
  *(int *)(this + 0x14) = iVar1;
  uVar4 = (ulong)iVar1;
  if ((long)uVar4 < 0) {
    uVar4 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar4);
  pvVar5 = *(void **)(this + 0x18);
                    /* try { // try from 005d2258 to 006d226b has its CatchHandler @ 005d294c */
  *(void **)(this + 0x18) = pvVar2;
  if (pvVar5 != (void *)0x0) {
                    /* try { // try from 005d226c to 006d22db has its CatchHandler @ 005d2e08 */
    operator_delete__(pvVar5);
    return;
  }
  return;
}


