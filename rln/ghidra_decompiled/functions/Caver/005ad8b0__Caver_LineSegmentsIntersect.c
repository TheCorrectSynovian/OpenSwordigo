/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ad8b0
 * Function: Caver::LineSegmentsIntersect
 * Signature: undefined __cdecl LineSegmentsIntersect(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3, Vector2 * param_4, float * param_5, float * param_6, bool param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LineSegmentsIntersect(Caver::Vector2 const&, Caver::Vector2 const&, Caver::Vector2 const&,
   Caver::Vector2 const&, float*, float*, bool) */

undefined8
Caver::LineSegmentsIntersect
          (Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,Vector2 *param_4,float *param_5,
          float *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar3 = *(float *)param_2 - *(float *)param_1;
  fVar7 = *(float *)param_4 - *(float *)param_3;
  fVar2 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar1 = fVar6 * fVar3 - fVar7 * fVar2;
  if ((DAT_00689310 < fVar1) && ((double)fVar1 < _LAB_006972f8)) {
    return 0;
  }
                    /* try { // try from 005ad908 to 006ad963 has its CatchHandler @ 005ad908
                       catch(type#1 @ 00000000) { ... } // from try @ 005ad908 with catch @ 005ad908
                       catch(type#1 @ 00000000) { ... } // from try @ 005ad96c with catch @ 005ad908
                       catch(type#1 @ 00000000) { ... } // from try @ 005ada50 with catch @ 005ad908
                        */
  fVar4 = *(float *)(param_1 + 4) - *(float *)(param_3 + 4);
  fVar5 = *(float *)param_1 - *(float *)param_3;
  fVar6 = (fVar7 * fVar4 - fVar6 * fVar5) / fVar1;
  if (param_7) {
    fVar1 = (fVar3 * fVar4 - fVar5 * fVar2) / fVar1;
  }
  else {
    if (fVar6 < _LAB_00688900) {
      return 0;
    }
                    /* try { // try from 005ad964 to 006ad96b has its CatchHandler @ 005ada04 */
                    /* try { // try from 005ad96c to 006ada27 has its CatchHandler @ 005ad908 */
    if (DAT_006972e0 < fVar6) {
      return 0;
    }
    fVar1 = (fVar3 * fVar4 - fVar5 * fVar2) / fVar1;
    if (fVar1 < _LAB_00688900) {
      return 0;
    }
    if (DAT_006972e0 < fVar1) {
      return 0;
    }
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fVar6;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar1;
  }
  return 1;
}


