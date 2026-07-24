/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b23e4
 * Function: Caver::Rectangle::ExpandToincludeRectangle
 * Signature: undefined __thiscall ExpandToincludeRectangle(Rectangle * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&) */

void __thiscall Caver::Rectangle::ExpandToincludeRectangle(Rectangle *this,Rectangle *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)this;
  fVar3 = *(float *)(this + 8);
  fVar4 = fVar2;
                    /* catch() { ... } // from try @ 005b2424 with catch @ 005b23f4 */
  if (fVar2 < fVar1) {
    fVar3 = (fVar1 + fVar3) - fVar2;
    *(float *)(this + 8) = fVar3;
    *(float *)this = fVar2;
    fVar4 = *(float *)param_1;
    fVar1 = fVar2;
  }
                    /* try { // try from 005b2420 to 006b2423 has its CatchHandler @ 005b25a4 */
                    /* try { // try from 005b2424 to 006b270f has its CatchHandler @ 005b23f4 */
  if (fVar1 + fVar3 < fVar4 + *(float *)(param_1 + 8)) {
    *(float *)(this + 8) = (fVar4 + *(float *)(param_1 + 8)) - fVar1;
  }
  fVar2 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0xc);
  fVar4 = fVar2;
  if (fVar2 < fVar1) {
    fVar3 = (fVar1 + fVar3) - fVar2;
    *(float *)(this + 0xc) = fVar3;
    *(float *)(this + 4) = fVar2;
    fVar4 = *(float *)(param_1 + 4);
    fVar1 = fVar2;
  }
  if (fVar1 + fVar3 < fVar4 + *(float *)(param_1 + 0xc)) {
    *(float *)(this + 0xc) = (fVar4 + *(float *)(param_1 + 0xc)) - fVar1;
  }
  return;
}


