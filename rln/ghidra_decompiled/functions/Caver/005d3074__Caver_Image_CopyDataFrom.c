/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d3074
 * Function: Caver::Image::CopyDataFrom
 * Signature: undefined __thiscall CopyDataFrom(Image * this, void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::CopyDataFrom(void const*) */

void __thiscall Caver::Image::CopyDataFrom(Image *this,void *param_1)

{
  memcpy(*(void **)(this + 0x18),param_1,(long)*(int *)(this + 0x14));
  return;
}


