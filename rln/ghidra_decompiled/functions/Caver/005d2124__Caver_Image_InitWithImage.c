/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2124
 * Function: Caver::Image::InitWithImage
 * Signature: undefined __thiscall InitWithImage(Image * this, Image * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::InitWithImage(Caver::Image const&) */

void __thiscall Caver::Image::InitWithImage(Image *this,Image *param_1)

{
  ulong uVar1;
  void *__dest;
  void *pvVar2;
  size_t __n;
  undefined8 uVar3;
  
                    /* try { // try from 005d2130 to 006d2143 has its CatchHandler @ 005d2954 */
  *this = *param_1;
                    /* try { // try from 005d2144 to 006d21b3 has its CatchHandler @ 005d2e78 */
  uVar3 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(this + 4) = uVar3;
  __n = (size_t)*(int *)(param_1 + 0x14);
  uVar1 = __n;
  if ((long)__n < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x14) = *(int *)(param_1 + 0x14);
  __dest = operator_new__(uVar1);
  pvVar2 = *(void **)(this + 0x18);
  *(void **)(this + 0x18) = __dest;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    __dest = *(void **)(this + 0x18);
    __n = (size_t)*(int *)(this + 0x14);
  }
  memcpy(__dest,*(void **)(param_1 + 0x18),__n);
  return;
}


