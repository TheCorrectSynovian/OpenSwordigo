/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00617bd8
 * Function: PVRTVertexWrite
 * Signature: undefined __cdecl PVRTVertexWrite(void * param_1, EPVRTDataType param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTVertexWrite(void*, EPVRTDataType, unsigned int) */

void PVRTVertexWrite(undefined2 *param_1,int param_2,undefined2 param_3)

{
                    /* catch() { ... } // from try @ 00616e08 with catch @ 00617bd8 */
                    /* catch() { ... } // from try @ 00616da8 with catch @ 00617bdc */
  if (param_2 == 3) {
    *param_1 = param_3;
  }
  return;
}


