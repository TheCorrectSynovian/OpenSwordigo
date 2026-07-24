/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b15c8
 * Function: Caver::Rectangle::NearestPointInRectangle
 * Signature: undefined __cdecl NearestPointInRectangle(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::NearestPointInRectangle(Caver::Vector2 const&) const */

void Caver::Rectangle::NearestPointInRectangle(Vector2 *param_1)

{
  float *in_x1;
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *in_x1;
  fVar4 = *(float *)param_1;
                    /* try { // try from 005b15d4 to 006b16af has its CatchHandler @ 005b126c */
  if (fVar4 <= fVar2) {
    fVar3 = *(float *)(param_1 + 4);
    fVar1 = in_x1[1];
    fVar4 = fVar4 + *(float *)(param_1 + 8);
    if (fVar2 <= fVar4) {
      if (fVar1 < fVar3) {
        *in_x8 = fVar2;
        in_x8[1] = fVar3;
        return;
      }
      fVar4 = *(float *)(param_1 + 0xc);
      *in_x8 = fVar2;
      if (fVar3 + fVar4 < fVar1) {
        in_x8[1] = fVar3 + fVar4;
        return;
      }
    }
    else {
      if (fVar1 < fVar3) {
        *in_x8 = fVar4;
        in_x8[1] = fVar3;
        return;
      }
                    /* catch() { ... } // from try @ 005b15ac with catch @ 005b1640 */
      fVar2 = *(float *)(param_1 + 0xc);
      *in_x8 = fVar4;
      if (fVar3 + fVar2 < fVar1) {
        in_x8[1] = fVar3 + fVar2;
        return;
      }
    }
  }
  else {
    fVar1 = in_x1[1];
    fVar2 = *(float *)(param_1 + 4);
    if (fVar1 < fVar2) {
      *in_x8 = fVar4;
      in_x8[1] = fVar2;
      return;
    }
    fVar3 = *(float *)(param_1 + 0xc);
    *in_x8 = fVar4;
    if (fVar2 + fVar3 < fVar1) {
      in_x8[1] = fVar2 + fVar3;
      return;
    }
  }
  in_x8[1] = fVar1;
  return;
}


