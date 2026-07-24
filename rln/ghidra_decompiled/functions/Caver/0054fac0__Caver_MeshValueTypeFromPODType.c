/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054fac0
 * Function: Caver::MeshValueTypeFromPODType
 * Signature: undefined __cdecl MeshValueTypeFromPODType(EPVRTDataType param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshValueTypeFromPODType(EPVRTDataType) */

undefined4 Caver::MeshValueTypeFromPODType(int param_1)

{
  if (param_1 - 1U < 0xd) {
    return *(undefined4 *)(&DAT_00695430 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0;
}


