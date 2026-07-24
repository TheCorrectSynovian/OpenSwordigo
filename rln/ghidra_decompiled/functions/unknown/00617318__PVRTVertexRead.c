/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00617318
 * Function: PVRTVertexRead
 * Signature: undefined __cdecl PVRTVertexRead(uint * param_1, void * param_2, EPVRTDataType param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTVertexRead(unsigned int*, void const*, EPVRTDataType) */

void PVRTVertexRead(uint *param_1,ushort *param_2,int param_3)

{
  if (param_3 == 3) {
    *param_1 = (uint)*param_2;
  }
  return;
}


