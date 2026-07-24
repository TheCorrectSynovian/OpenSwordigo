/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d20c8
 * Function: Caver::Image::Image
 * Signature: undefined __thiscall Image(Image * this, Image * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::Image(Caver::Image const&) */

void __thiscall Caver::Image::Image(Image *this,Image *param_1)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 0x18) = 0;
  *this = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(this + 4) = uVar2;
  __n = (size_t)*(int *)(param_1 + 0x14);
  uVar1 = __n;
  if ((long)__n < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x14) = *(int *)(param_1 + 0x14);
  __dest = operator_new__(uVar1);
  *(void **)(this + 0x18) = __dest;
  memcpy(__dest,*(void **)(param_1 + 0x18),__n);
  return;
}


