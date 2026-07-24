/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ac258
 * Function: RangesOverlap
 * Signature: undefined __cdecl RangesOverlap(float param_1, float param_2, float param_3, float param_4, float * param_5, float * param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* RangesOverlap(float, float, float, float, float*, float*) */

undefined4
RangesOverlap(float param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_3 <= param_2 + DAT_006837a4) && (param_1 + DAT_00683734 <= param_4)) {
    if (param_5 != (float *)0x0) {
      *param_5 = param_4 - param_1;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = param_3 - param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}


