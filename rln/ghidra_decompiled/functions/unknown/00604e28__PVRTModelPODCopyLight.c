/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00604e28
 * Function: PVRTModelPODCopyLight
 * Signature: undefined __cdecl PVRTModelPODCopyLight(SPODLight * param_1, SPODLight * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODCopyLight(SPODLight const&, SPODLight&) */

void PVRTModelPODCopyLight(SPODLight *param_1,SPODLight *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
                    /* try { // try from 00604e38 to 00704e4b has its CatchHandler @ 0060522c */
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_2 = uVar1;
  return;
}


