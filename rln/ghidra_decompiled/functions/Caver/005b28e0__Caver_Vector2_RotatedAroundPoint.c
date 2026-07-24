/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b28e0
 * Function: Caver::Vector2::RotatedAroundPoint
 * Signature: undefined __cdecl RotatedAroundPoint(float param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Vector2::RotatedAroundPoint(float, Caver::Vector2 const&) const */

void Caver::Vector2::RotatedAroundPoint(float param_1,Vector2 *param_2)

{
  float *in_x1;
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *in_x1;
  fVar4 = in_x1[1];
  fVar7 = *(float *)param_2 - fVar3;
  fVar6 = *(float *)(param_2 + 4) - fVar4;
  if (_LAB_00688900 <= ABS(param_1)) {
    fVar1 = sinf(param_1);
    fVar2 = cosf(param_1);
    fVar3 = *in_x1;
    fVar4 = in_x1[1];
    fVar5 = fVar7 * fVar1;
    fVar7 = fVar7 * fVar2 - fVar6 * fVar1;
    fVar6 = fVar5 + fVar6 * fVar2;
  }
  *in_x8 = fVar7 + fVar3;
  in_x8[1] = fVar6 + fVar4;
  return;
}


