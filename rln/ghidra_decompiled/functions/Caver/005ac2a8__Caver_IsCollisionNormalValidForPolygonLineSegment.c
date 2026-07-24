/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ac2a8
 * Function: Caver::IsCollisionNormalValidForPolygonLineSegment
 * Signature: undefined __cdecl IsCollisionNormalValidForPolygonLineSegment(Vector2 * param_1, Polygon * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::IsCollisionNormalValidForPolygonLineSegment(Caver::Vector2 const&, Caver::Polygon const&,
   int) */

bool Caver::IsCollisionNormalValidForPolygonLineSegment
               (Vector2 *param_1,Polygon *param_2,int param_3)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(long *)(param_2 + 8);
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  pfVar1 = (float *)(lVar2 + (long)param_3 * 8);
                    /* try { // try from 005ac2b8 to 006ac2eb has its CatchHandler @ 005ac764 */
  fVar6 = pfVar1[2] - *pfVar1;
  fVar5 = pfVar1[3] - pfVar1[1];
  if (0.0 <= fVar6 * fVar3 + fVar5 * fVar4) {
    if (*(int *)param_2 + (uint)(byte)param_2[0x21] + -2 == param_3) {
      return false;
    }
    lVar2 = lVar2 + (long)param_3 * 8;
    fVar8 = *(float *)(lVar2 + 0x10) - pfVar1[2];
    fVar9 = *(float *)(lVar2 + 0x14) - pfVar1[3];
    fVar7 = fVar6;
    fVar6 = fVar5;
  }
  else {
    if (param_3 == 0) {
      return false;
    }
    lVar2 = lVar2 + (long)param_3 * 8;
                    /* try { // try from 005ac2ec to 006ac337 has its CatchHandler @ 005ac040 */
    fVar7 = *pfVar1 - *(float *)(lVar2 + -8);
    fVar8 = fVar6;
    fVar6 = pfVar1[1] - *(float *)(lVar2 + -4);
    fVar9 = fVar5;
  }
                    /* try { // try from 005ac338 to 006ac35b has its CatchHandler @ 005ac710 */
  if (0.0 < fVar9 * fVar7 - fVar6 * fVar8) {
                    /* try { // try from 005ac35c to 006ac3a7 has its CatchHandler @ 005ac040 */
    if (0.0 < fVar4 * fVar6 - fVar3 * -fVar7) {
      return 0.0 < fVar3 * -fVar8 - fVar4 * fVar9;
    }
    return false;
  }
  return false;
}


