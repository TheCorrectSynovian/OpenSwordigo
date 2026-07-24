/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005abc08
 * Function: Caver::BezierSegment::EvaluateTangent
 * Signature: undefined __cdecl EvaluateTangent(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BezierSegment::EvaluateTangent(float) const */

void Caver::BezierSegment::EvaluateTangent(float param_1)

{
  undefined8 *in_x0;
  Vector2 *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1 <= _LAB_00688900) {
    param_1 = _LAB_00688900;
  }
  if (DAT_006972e0 < param_1) {
    param_1 = DAT_006972e0;
  }
  fVar3 = 1.0 - param_1;
  fVar5 = param_1 * param_1 * 3.0;
  fVar1 = param_1 * fVar3 * 6.0;
  fVar2 = (1.0 - param_1) * fVar3 * -3.0;
  fVar4 = fVar3 * fVar3 * 3.0 - fVar1;
  fVar1 = fVar1 - fVar5;
  fVar3 = (float)*in_x0 * fVar2 + (float)in_x0[1] * fVar4 + (float)in_x0[2] * fVar1 +
          (float)in_x0[3] * fVar5;
  fVar2 = (float)((ulong)*in_x0 >> 0x20) * fVar2 + (float)((ulong)in_x0[1] >> 0x20) * fVar4 +
          (float)((ulong)in_x0[2] >> 0x20) * fVar1 + (float)((ulong)in_x0[3] >> 0x20) * fVar5;
  if ((ABS(fVar3) <= 0.0001) && (ABS(fVar2) <= 0.0001)) {
    *(undefined8 *)in_x8 = DAT_006972f0;
    return;
  }
  *(ulong *)in_x8 = CONCAT44(fVar2,fVar3);
  Vector2::Normalize(in_x8);
  return;
}


