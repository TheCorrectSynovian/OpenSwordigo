/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1cfc
 * Function: Caver::Rectangle::ExpandHorizontally
 * Signature: undefined __thiscall ExpandHorizontally(Rectangle * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::ExpandHorizontally(float) */

void __thiscall Caver::Rectangle::ExpandHorizontally(Rectangle *this,float param_1)

{
  *(float *)this = *(float *)this + param_1 * -0.5;
  *(float *)(this + 8) = *(float *)(this + 8) + param_1;
  return;
}


