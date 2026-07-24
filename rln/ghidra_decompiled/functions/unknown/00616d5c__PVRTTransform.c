/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00616d5c
 * Function: PVRTTransform
 * Signature: undefined __cdecl PVRTTransform(PVRTVECTOR4f * param_1, PVRTVECTOR4f * param_2, PVRTMATRIXf * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTTransform(PVRTVECTOR4f*, PVRTVECTOR4f const*, PVRTMATRIXf const*) */

void PVRTTransform(PVRTVECTOR4f *param_1,PVRTVECTOR4f *param_2,PVRTMATRIXf *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 0xc);
                    /* try { // try from 00616d70 to 00716d7b has its CatchHandler @ 006178f0 */
  *(float *)param_1 =
       *(float *)param_3 * *(float *)param_2 + *(float *)(param_3 + 0x10) * fVar2 +
       *(float *)(param_3 + 0x20) * fVar3 + *(float *)(param_3 + 0x30) * fVar4;
  fVar1 = *(float *)param_2;
                    /* try { // try from 00616da8 to 00716db3 has its CatchHandler @ 00617bdc */
  *(float *)(param_1 + 4) =
       *(float *)(param_3 + 4) * fVar1 + fVar2 * *(float *)(param_3 + 0x14) +
       fVar3 * *(float *)(param_3 + 0x24) + fVar4 * *(float *)(param_3 + 0x34);
  fVar2 = *(float *)(param_2 + 4);
                    /* try { // try from 00616dd4 to 00716dfb has its CatchHandler @ 00617908 */
  *(float *)(param_1 + 8) =
       fVar1 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x18) * fVar2 +
       fVar3 * *(float *)(param_3 + 0x28) + fVar4 * *(float *)(param_3 + 0x38);
                    /* try { // try from 00616dfc to 00716e07 has its CatchHandler @ 00617db0 */
                    /* try { // try from 00616e08 to 00716e0f has its CatchHandler @ 00617bd8 */
                    /* try { // try from 00616e10 to 00716e77 has its CatchHandler @ 00617db0 */
  *(float *)(param_1 + 0xc) =
       fVar1 * *(float *)(param_3 + 0xc) + fVar2 * *(float *)(param_3 + 0x1c) +
       *(float *)(param_3 + 0x2c) * *(float *)(param_2 + 8) + fVar4 * *(float *)(param_3 + 0x3c);
  return;
}


