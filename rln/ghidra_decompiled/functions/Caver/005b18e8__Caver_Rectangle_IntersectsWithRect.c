/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b18e8
 * Function: Caver::Rectangle::IntersectsWithRect
 * Signature: undefined __thiscall IntersectsWithRect(Rectangle * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&) const */

undefined8 __thiscall Caver::Rectangle::IntersectsWithRect(Rectangle *this,Rectangle *param_1)

{
  if (*(float *)param_1 + *(float *)(param_1 + 8) <= *(float *)this) {
    return 0;
  }
  if (*(float *)this + *(float *)(this + 8) <= *(float *)param_1) {
    return 0;
  }
  if (*(float *)(param_1 + 4) + *(float *)(param_1 + 0xc) <= *(float *)(this + 4)) {
    return 0;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 4) + *(float *)(this + 0xc)) {
    return 1;
  }
  return 0;
}


