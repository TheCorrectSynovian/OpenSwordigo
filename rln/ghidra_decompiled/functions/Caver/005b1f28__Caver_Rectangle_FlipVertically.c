/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1f28
 * Function: Caver::Rectangle::FlipVertically
 * Signature: undefined __thiscall FlipVertically(Rectangle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::FlipVertically() */

void __thiscall Caver::Rectangle::FlipVertically(Rectangle *this)

{
  *(float *)(this + 4) = -*(float *)(this + 4) - *(float *)(this + 0xc);
  return;
}


