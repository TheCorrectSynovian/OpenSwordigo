/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006031e0
 * Function: PVRTModelPODDataTypeSize
 * Signature: undefined __cdecl PVRTModelPODDataTypeSize(EPVRTDataType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODDataTypeSize(EPVRTDataType) */

undefined8 PVRTModelPODDataTypeSize(int param_1)

{
  if (param_1 - 1U < 0xe) {
    return *(undefined8 *)(&DAT_0069b8a0 + (long)(int)(param_1 - 1U) * 8);
  }
  return 0;
}


