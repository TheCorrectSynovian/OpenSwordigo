/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2368
 * Function: Caver::Rectangle::ExpandToIncludePoint
 * Signature: undefined __thiscall ExpandToIncludePoint(Rectangle * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&) */

void __thiscall Caver::Rectangle::ExpandToIncludePoint(Rectangle *this,Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)this;
  fVar3 = *(float *)(this + 8);
                    /* try { // try from 005b2374 to 006b2377 has its CatchHandler @ 005b2388 */
                    /* catch() { ... } // from try @ 005b2364 with catch @ 005b2378 */
  if (fVar1 < fVar2) {
    fVar3 = (fVar2 + fVar3) - fVar1;
                    /* catch() { ... } // from try @ 005b2374 with catch @ 005b2388 */
    *(float *)(this + 8) = fVar3;
                    /* try { // try from 005b238c to 006b238f has its CatchHandler @ 005b2398 */
    *(float *)this = fVar1;
    fVar2 = fVar1;
  }
                    /* try { // try from 005b2390 to 006b239b has its CatchHandler @ 005b230c */
                    /* catch() { ... } // from try @ 005b238c with catch @ 005b2398 */
  if (fVar2 + fVar3 < fVar1) {
                    /* catch() { ... } // from try @ 005b23bc with catch @ 005b23a0 */
    *(float *)(this + 8) = fVar1 - fVar2;
  }
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0xc);
                    /* try { // try from 005b23b4 to 006b23bb has its CatchHandler @ 005b23d8 */
  if (fVar1 < fVar2) {
                    /* try { // try from 005b23bc to 006b23eb has its CatchHandler @ 005b23a0 */
    fVar3 = (fVar2 + fVar3) - fVar1;
    *(float *)(this + 0xc) = fVar3;
    *(float *)(this + 4) = fVar1;
    fVar2 = fVar1;
  }
  if (fVar2 + fVar3 < fVar1) {
                    /* catch() { ... } // from try @ 005b23b4 with catch @ 005b23d8 */
    *(float *)(this + 0xc) = fVar1 - fVar2;
  }
  return;
}


