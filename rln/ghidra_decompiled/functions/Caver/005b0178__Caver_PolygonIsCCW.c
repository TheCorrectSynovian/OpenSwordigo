/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b0178
 * Function: Caver::PolygonIsCCW
 * Signature: undefined __cdecl PolygonIsCCW(Vector2 * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PolygonIsCCW(Caver::Vector2 const*, int) */

bool Caver::PolygonIsCCW(Vector2 *param_1,int param_2)

{
  ulong uVar1;
  Vector2 *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_2 < 2) {
    fVar3 = *(float *)param_1;
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = 0.0;
  }
  else {
    fVar3 = *(float *)param_1;
    fVar4 = *(float *)(param_1 + 4);
    uVar1 = (long)param_2 - 1U & 0xffffffff;
    pVVar2 = param_1 + 0xc;
    fVar5 = 0.0;
    fVar7 = fVar4;
    fVar6 = fVar3;
    do {
      fVar8 = *(float *)pVVar2;
      uVar1 = uVar1 - 1;
      fVar9 = fVar6 * fVar8;
      fVar6 = *(float *)(pVVar2 + -4);
      pVVar2 = pVVar2 + 8;
      fVar5 = fVar5 + (fVar9 - fVar7 * fVar6);
      fVar7 = fVar8;
    } while (uVar1 != 0);
  }
  return 0.0 < (fVar5 + (*(float *)(param_1 + ((long)param_2 - 1U) * 8) * fVar4 -
                        fVar3 * *(float *)(param_1 + ((long)param_2 - 1U) * 8 + 4))) * 0.5;
}


