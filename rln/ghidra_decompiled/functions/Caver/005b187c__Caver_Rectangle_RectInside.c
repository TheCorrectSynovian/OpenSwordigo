/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b187c
 * Function: Caver::Rectangle::RectInside
 * Signature: undefined __thiscall RectInside(Rectangle * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::RectInside(Caver::Rectangle const&) const */

bool __thiscall Caver::Rectangle::RectInside(Rectangle *this,Rectangle *param_1)

{
  if (*(float *)param_1 < *(float *)this) {
    return false;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 4)) {
    return false;
  }
  if (*(float *)this + *(float *)(this + 8) < *(float *)param_1 + *(float *)(param_1 + 8)) {
    return false;
  }
  return *(float *)(param_1 + 4) + *(float *)(param_1 + 0xc) <=
         *(float *)(this + 4) + *(float *)(this + 0xc);
}


