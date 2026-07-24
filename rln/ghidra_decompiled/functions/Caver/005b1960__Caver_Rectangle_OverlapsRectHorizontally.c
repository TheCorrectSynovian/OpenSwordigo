/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1960
 * Function: Caver::Rectangle::OverlapsRectHorizontally
 * Signature: undefined __thiscall OverlapsRectHorizontally(Rectangle * this, Rectangle * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::OverlapsRectHorizontally(Caver::Rectangle const&, float) const */

undefined8 __thiscall
Caver::Rectangle::OverlapsRectHorizontally(Rectangle *this,Rectangle *param_1,float param_2)

{
  if (*(float *)param_1 + *(float *)(param_1 + 8) <= *(float *)this + param_2) {
    return 0;
  }
  if (*(float *)param_1 < (*(float *)this + *(float *)(this + 8)) - param_2) {
    return 1;
  }
  return 0;
}


