/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005adba4
 * Function: Caver::RectIntersectsWith1DLine
 * Signature: undefined __cdecl RectIntersectsWith1DLine(float param_1, float param_2, float param_3, float param_4, float * param_5, float * param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::RectIntersectsWith1DLine(float, float, float, float, float*, float*) */

bool Caver::RectIntersectsWith1DLine
               (float param_1,float param_2,float param_3,float param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_2 - param_1;
  if (ABS(fVar4) < _LAB_00688900) {
                    /* catch() { ... } // from try @ 005adad0 with catch @ 005adbc8 */
    return param_3 <= param_1 && param_1 <= param_4;
  }
  fVar2 = *param_6;
  fVar3 = (param_3 - param_1) / fVar4;
  fVar4 = (param_4 - param_1) / fVar4;
  fVar1 = fVar3;
  if (fVar3 <= fVar4) {
    fVar1 = fVar4;
    fVar4 = fVar3;
  }
  if (fVar2 < fVar4) {
                    /* catch() { ... } // from try @ 005ada94 with catch @ 005adc00 */
    return false;
  }
  if (fVar1 < *param_5) {
    return false;
  }
  if (*param_5 < fVar4) {
    *param_5 = fVar4;
    fVar2 = *param_6;
  }
  if (fVar1 < fVar2) {
    *param_6 = fVar1;
    return true;
  }
  return true;
}


