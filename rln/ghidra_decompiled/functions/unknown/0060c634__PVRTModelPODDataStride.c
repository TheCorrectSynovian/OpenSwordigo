/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060c634
 * Function: PVRTModelPODDataStride
 * Signature: undefined __cdecl PVRTModelPODDataStride(CPODData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODDataStride(CPODData const&) */

long PVRTModelPODDataStride(CPODData *param_1)

{
  long lVar1;
  
  if (*(int *)param_1 - 1U < 0xe) {
    lVar1 = *(long *)(&DAT_0069b8a0 + (long)(int)(*(int *)param_1 - 1U) * 8);
  }
  else {
    lVar1 = 0;
  }
                    /* try { // try from 0060c660 to 0070c687 has its CatchHandler @ 0060cb48 */
  return lVar1 * (ulong)*(uint *)(param_1 + 4);
}


