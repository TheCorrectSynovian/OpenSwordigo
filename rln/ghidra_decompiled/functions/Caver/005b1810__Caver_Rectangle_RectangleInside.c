/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1810
 * Function: Caver::Rectangle::RectangleInside
 * Signature: undefined __thiscall RectangleInside(Rectangle * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::RectangleInside(Caver::Rectangle const&) const */

bool __thiscall Caver::Rectangle::RectangleInside(Rectangle *this,Rectangle *param_1)

{
  if (*(float *)param_1 < *(float *)this) {
    return false;
  }
  if (*(float *)this + *(float *)(this + 8) < *(float *)param_1 + *(float *)(param_1 + 8)) {
    return false;
  }
                    /* try { // try from 005b1848 to 006b186f has its CatchHandler @ 005b1a98 */
  if (*(float *)(param_1 + 4) < *(float *)(this + 4)) {
    return false;
  }
                    /* try { // try from 005b1870 to 006b1ac3 has its CatchHandler @ 005b171c */
  return *(float *)(param_1 + 4) + *(float *)(param_1 + 0xc) <=
         *(float *)(this + 4) + *(float *)(this + 0xc);
}


