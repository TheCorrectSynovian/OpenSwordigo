/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b19a8
 * Function: Caver::Rectangle::OverlapsRectVertically
 * Signature: undefined __thiscall OverlapsRectVertically(Rectangle * this, Rectangle * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::OverlapsRectVertically(Caver::Rectangle const&, float) const */

undefined8 __thiscall
Caver::Rectangle::OverlapsRectVertically(Rectangle *this,Rectangle *param_1,float param_2)

{
  if (*(float *)(param_1 + 4) + *(float *)(param_1 + 0xc) <= *(float *)(this + 4) + param_2) {
    return 0;
  }
  if (*(float *)(param_1 + 4) < (*(float *)(this + 4) + *(float *)(this + 0xc)) - param_2) {
    return 1;
  }
  return 0;
}


