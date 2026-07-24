/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060c610
 * Function: PVRTModelPODDataTypeComponentCount
 * Signature: undefined __cdecl PVRTModelPODDataTypeComponentCount(EPVRTDataType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODDataTypeComponentCount(EPVRTDataType) */

undefined8 PVRTModelPODDataTypeComponentCount(int param_1)

{
                    /* try { // try from 0060c614 to 0070c61f has its CatchHandler @ 0060ccfc */
  if (param_1 - 1U < 0xe) {
    return *(undefined8 *)(&DAT_0069b6c0 + (long)(int)(param_1 - 1U) * 8);
  }
  return 0;
}


