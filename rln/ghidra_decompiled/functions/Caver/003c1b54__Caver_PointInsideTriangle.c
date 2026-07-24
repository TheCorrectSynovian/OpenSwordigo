/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1b54
 * Function: Caver::PointInsideTriangle
 * Signature: undefined __cdecl PointInsideTriangle(Vector2 param_1, Vector2 param_2, Vector2 param_3, Vector2 param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PointInsideTriangle(Caver::Vector2, Caver::Vector2, Caver::Vector2, Caver::Vector2) */

bool Caver::PointInsideTriangle(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = *param_4;
  fVar8 = param_4[1];
  return 0.0 <= (fVar5 - fVar1) * (fVar8 - fVar2) - (fVar6 - fVar2) * (fVar7 - fVar1) &&
         (0.0 <= (fVar1 - fVar3) * (fVar8 - fVar4) - (fVar2 - fVar4) * (fVar7 - fVar3) &&
         0.0 <= (fVar3 - fVar5) * (fVar8 - fVar6) - (fVar4 - fVar6) * (fVar7 - fVar5));
}


