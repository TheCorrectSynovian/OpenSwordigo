/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1d20
 * Function: Caver::Rectangle::ExpandVertically
 * Signature: undefined __thiscall ExpandVertically(Rectangle * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::ExpandVertically(float) */

void __thiscall Caver::Rectangle::ExpandVertically(Rectangle *this,float param_1)

{
  *(float *)(this + 4) = *(float *)(this + 4) + param_1 * -0.5;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) + param_1;
  return;
}


