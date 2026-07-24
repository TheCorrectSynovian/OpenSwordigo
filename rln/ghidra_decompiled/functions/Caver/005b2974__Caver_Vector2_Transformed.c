/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2974
 * Function: Caver::Vector2::Transformed
 * Signature: undefined __cdecl Transformed(Vector2 * param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Vector2::Transformed(Caver::Vector2 const&, float, float) const */

void Caver::Vector2::Transformed(Vector2 *param_1,float param_2,float param_3)

{
  float *in_x1;
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = DAT_00683488;
  fVar5 = *(float *)param_1 * param_3;
  fVar4 = *(float *)(param_1 + 4) * param_3;
  *in_x8 = fVar5;
  in_x8[1] = fVar4;
  if (fVar1 < ABS(param_2)) {
    if (_LAB_00688900 <= ABS(param_2)) {
      fVar1 = sinf(param_2);
      fVar2 = cosf(param_2);
      fVar3 = fVar1 * fVar5;
      fVar5 = fVar2 * fVar5 - fVar1 * fVar4;
      fVar4 = fVar3 + fVar2 * fVar4;
    }
    *in_x8 = fVar5;
    in_x8[1] = fVar4;
  }
  *in_x8 = *in_x1 + fVar5;
  in_x8[1] = in_x1[1] + fVar4;
  return;
}


