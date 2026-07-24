/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d227c
 * Function: Caver::Image::~Image
 * Signature: undefined __thiscall ~Image(Image * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::~Image() */

void __thiscall Caver::Image::~Image(Image *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
    return;
  }
  return;
}


