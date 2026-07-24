/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b0100
 * Function: Caver::PolygonArea
 * Signature: undefined __cdecl PolygonArea(Vector2 * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PolygonArea(Caver::Vector2 const*, int) */

float Caver::PolygonArea(Vector2 *param_1,int param_2)

{
  ulong uVar1;
  Vector2 *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 < 2) {
    fVar3 = 0.0;
  }
  else {
    fVar4 = *(float *)param_1;
    uVar1 = (long)param_2 - 1U & 0xffffffff;
    pVVar2 = param_1 + 0xc;
    fVar3 = 0.0;
    fVar5 = *(float *)(param_1 + 4);
    do {
      fVar6 = *(float *)pVVar2;
      uVar1 = uVar1 - 1;
      fVar7 = fVar4 * fVar6;
                    /* try { // try from 005b012c to 006b0277 has its CatchHandler @ 005b0084 */
      fVar4 = *(float *)(pVVar2 + -4);
      pVVar2 = pVVar2 + 8;
      fVar3 = fVar3 + (fVar7 - fVar4 * fVar5);
      fVar5 = fVar6;
    } while (uVar1 != 0);
  }
  return (fVar3 + (*(float *)(param_1 + ((long)param_2 - 1U) * 8) * *(float *)(param_1 + 4) -
                  *(float *)param_1 * *(float *)(param_1 + ((long)param_2 - 1U) * 8 + 4))) * 0.5;
}


