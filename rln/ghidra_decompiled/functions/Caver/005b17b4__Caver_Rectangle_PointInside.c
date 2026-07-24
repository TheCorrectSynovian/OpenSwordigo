/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b17b4
 * Function: Caver::Rectangle::PointInside
 * Signature: undefined __thiscall PointInside(Rectangle * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::PointInside(Caver::Vector2 const&) const */

bool __thiscall Caver::Rectangle::PointInside(Rectangle *this,Vector2 *param_1)

{
  if (*(float *)param_1 < *(float *)this) {
    return false;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 4)) {
                    /* try { // try from 005b17dc to 006b1803 has its CatchHandler @ 005b1aa4 */
    return false;
  }
  if (*(float *)this + *(float *)(this + 8) < *(float *)param_1) {
    return false;
  }
  return *(float *)(param_1 + 4) <= *(float *)(this + 4) + *(float *)(this + 0xc);
}


