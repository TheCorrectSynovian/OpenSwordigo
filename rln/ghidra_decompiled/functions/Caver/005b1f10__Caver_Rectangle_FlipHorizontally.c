/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1f10
 * Function: Caver::Rectangle::FlipHorizontally
 * Signature: undefined __thiscall FlipHorizontally(Rectangle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::FlipHorizontally() */

void __thiscall Caver::Rectangle::FlipHorizontally(Rectangle *this)

{
  *(float *)this = -*(float *)this - *(float *)(this + 8);
  return;
}


