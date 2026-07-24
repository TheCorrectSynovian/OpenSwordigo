/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ae00
 * Function: PVRTMatrixScalingF
 * Signature: undefined __cdecl PVRTMatrixScalingF(PVRTMATRIXf * param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixScalingF(PVRTMATRIXf&, float, float, float) */

void PVRTMatrixScalingF(PVRTMATRIXf *param_1,float param_2,float param_3,float param_4)

{
  *(float *)param_1 = param_2;
  *(float *)(param_1 + 0x14) = param_3;
  *(float *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
                    /* try { // try from 0061ae18 to 0071ae4f has its CatchHandler @ 0061ab90 */
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


