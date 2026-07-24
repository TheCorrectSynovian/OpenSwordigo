/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613770
 * Function: PVRTMatrixRotationQuaternionF
 * Signature: undefined __cdecl PVRTMatrixRotationQuaternionF(PVRTMATRIXf * param_1, PVRTQUATERNIONf * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixRotationQuaternionF(PVRTMATRIXf&, PVRTQUATERNIONf const&) */

void PVRTMatrixRotationQuaternionF(PVRTMATRIXf *param_1,PVRTQUATERNIONf *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 8);
  *(float *)param_1 =
       (*(float *)(param_2 + 4) * *(float *)(param_2 + 4) * -2.0 + 1.0) - fVar1 * (fVar1 + fVar1);
  *(float *)(param_1 + 4) =
       (*(float *)param_2 + *(float *)param_2) * *(float *)(param_2 + 4) -
       (*(float *)(param_2 + 8) + *(float *)(param_2 + 8)) * *(float *)(param_2 + 0xc);
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(float *)(param_1 + 8) = (fVar1 + fVar1) * fVar3 + (fVar2 + fVar2) * fVar4;
  *(float *)(param_1 + 0x10) =
       (*(float *)param_2 + *(float *)param_2) * *(float *)(param_2 + 4) +
       (*(float *)(param_2 + 8) + *(float *)(param_2 + 8)) * *(float *)(param_2 + 0xc);
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 8);
                    /* try { // try from 00613814 to 0071381f has its CatchHandler @ 006145d8 */
  *(float *)(param_1 + 0x14) = (1.0 - fVar1 * (fVar1 + fVar1)) - fVar2 * (fVar2 + fVar2);
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x18) = (fVar2 + fVar2) * fVar3 - (fVar1 + fVar1) * fVar4;
                    /* try { // try from 00613858 to 0071387f has its CatchHandler @ 00613f74 */
  *(float *)(param_1 + 0x20) =
       (*(float *)param_2 + *(float *)param_2) * *(float *)(param_2 + 8) -
       (*(float *)(param_2 + 4) + *(float *)(param_2 + 4)) * *(float *)(param_2 + 0xc);
  *(float *)(param_1 + 0x24) =
       (*(float *)(param_2 + 4) + *(float *)(param_2 + 4)) * *(float *)(param_2 + 8) +
       (*(float *)param_2 + *(float *)param_2) * *(float *)(param_2 + 0xc);
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
                    /* try { // try from 006138a0 to 007138c7 has its CatchHandler @ 006145d8 */
  *(float *)(param_1 + 0x28) = (1.0 - fVar1 * (fVar1 + fVar1)) - fVar2 * (fVar2 + fVar2);
  return;
}


