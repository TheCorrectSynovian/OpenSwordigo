/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b20a0
 * Function: Caver::Rectangle::ScaledRectangle
 * Signature: undefined __cdecl ScaledRectangle(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&) const */

void Caver::Rectangle::ScaledRectangle(Vector2 *param_1)

{
  float *in_x1;
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *in_x1 * *(float *)(param_1 + 8);
  fVar2 = *in_x1 * *(float *)param_1;
  fVar3 = in_x1[1] * *(float *)(param_1 + 4);
  fVar1 = in_x1[1] * *(float *)(param_1 + 0xc);
  *in_x8 = fVar2;
  in_x8[1] = fVar3;
  in_x8[2] = fVar4;
  in_x8[3] = fVar1;
                    /* try { // try from 005b20c8 to 006b20cf has its CatchHandler @ 005b211c */
  if (fVar4 < 0.0) {
    *in_x8 = fVar2 + fVar4;
    in_x8[2] = -fVar4;
  }
  if (fVar1 < 0.0) {
    in_x8[1] = fVar3 + fVar1;
    in_x8[3] = -fVar1;
    return;
  }
  return;
}


