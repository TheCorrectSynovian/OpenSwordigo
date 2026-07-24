/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d22b0
 * Function: Caver::Image::Clear
 * Signature: undefined __thiscall Clear(Image * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::Clear() */

void __thiscall Caver::Image::Clear(Image *this)

{
  memset(*(void **)(this + 0x18),0,(long)*(int *)(this + 0x14));
  return;
}


