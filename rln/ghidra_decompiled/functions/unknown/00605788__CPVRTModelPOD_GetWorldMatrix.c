/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605788
 * Function: CPVRTModelPOD::GetWorldMatrix
 * Signature: undefined __cdecl GetWorldMatrix(SPODNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetWorldMatrix(SPODNode const&) const */

void CPVRTModelPOD::GetWorldMatrix(SPODNode *param_1)

{
  SPODNode *in_x1;
  PVRTMATRIXf *in_x8;
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  pfVar1 = *(float **)(param_1 + 0x80);
                    /* try { // try from 006057b4 to 007057d7 has its CatchHandler @ 0060621c */
  uVar4 = ((long)in_x1 - *(long *)(param_1 + 0x50) >> 5) * -0x5555555555555555;
  if (*pfVar1 == 0.0) {
    puVar2 = (undefined8 *)(*(long *)(pfVar1 + 8) + (uVar4 & 0xffffffff) * 0x40);
  }
  else {
                    /* try { // try from 006057e0 to 007057f3 has its CatchHandler @ 006061cc */
    uVar5 = uVar4 & 0xffffffff;
    if (*pfVar1 != *(float *)(*(long *)(pfVar1 + 4) + (uVar4 & 0xffffffff) * 4)) {
      GetWorldMatrixNoCache((CPVRTModelPOD *)param_1,in_x8,in_x1);
      puVar3 = *(undefined4 **)(param_1 + 0x80);
                    /* try { // try from 0060583c to 007058b3 has its CatchHandler @ 006056d0 */
      *(undefined4 *)(*(long *)(puVar3 + 4) + uVar5 * 4) = *puVar3;
      uVar6 = *(undefined8 *)(in_x8 + 0x30);
      puVar2 = (undefined8 *)(*(long *)(puVar3 + 6) + uVar5 * 0x40);
      puVar2[7] = *(undefined8 *)(in_x8 + 0x38);
      puVar2[6] = uVar6;
      uVar6 = *(undefined8 *)(in_x8 + 0x20);
      puVar2[5] = *(undefined8 *)(in_x8 + 0x28);
      puVar2[4] = uVar6;
      uVar6 = *(undefined8 *)(in_x8 + 0x10);
      puVar2[3] = *(undefined8 *)(in_x8 + 0x18);
      puVar2[2] = uVar6;
      uVar6 = *(undefined8 *)in_x8;
      puVar2[1] = *(undefined8 *)(in_x8 + 8);
      *puVar2 = uVar6;
      return;
    }
    puVar2 = (undefined8 *)(*(long *)(pfVar1 + 6) + uVar5 * 0x40);
  }
  uVar6 = puVar2[6];
  *(undefined8 *)(in_x8 + 0x38) = puVar2[7];
  *(undefined8 *)(in_x8 + 0x30) = uVar6;
  uVar6 = puVar2[4];
  *(undefined8 *)(in_x8 + 0x28) = puVar2[5];
  *(undefined8 *)(in_x8 + 0x20) = uVar6;
  uVar6 = puVar2[2];
  *(undefined8 *)(in_x8 + 0x18) = puVar2[3];
  *(undefined8 *)(in_x8 + 0x10) = uVar6;
  uVar6 = *puVar2;
                    /* try { // try from 00605814 to 0070583b has its CatchHandler @ 00605eac */
  *(undefined8 *)(in_x8 + 8) = puVar2[1];
  *(undefined8 *)in_x8 = uVar6;
  return;
}


