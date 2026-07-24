/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006056a4
 * Function: CPVRTModelPOD::GetWorldMatrix
 * Signature: undefined __thiscall GetWorldMatrix(CPVRTModelPOD * this, PVRTMATRIXf * param_1, SPODNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetWorldMatrix(PVRTMATRIXf&, SPODNode const&) const */

void __thiscall
CPVRTModelPOD::GetWorldMatrix(CPVRTModelPOD *this,PVRTMATRIXf *param_1,SPODNode *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  pfVar1 = *(float **)(this + 0x80);
                    /* try { // try from 006056c4 to 007056cf has its CatchHandler @ 00604a8c */
                    /* catch() { ... } // from try @ 00605268 with catch @ 006056cc */
                    /* try { // try from 006056d0 to 00705723 has its CatchHandler @ 006056d0
                       catch() { ... } // from try @ 006056d0 with catch @ 006056d0
                       catch() { ... } // from try @ 00605738 with catch @ 006056d0
                       catch() { ... } // from try @ 0060583c with catch @ 006056d0
                       catch() { ... } // from try @ 0060593c with catch @ 006056d0
                       catch() { ... } // from try @ 00605a48 with catch @ 006056d0
                       catch() { ... } // from try @ 00605b18 with catch @ 006056d0
                       catch() { ... } // from try @ 00605c18 with catch @ 006056d0
                       catch() { ... } // from try @ 00605ce8 with catch @ 006056d0
                       catch() { ... } // from try @ 00605e24 with catch @ 006056d0
                       catch() { ... } // from try @ 00606360 with catch @ 006056d0 */
  uVar4 = ((long)param_2 - *(long *)(this + 0x50) >> 5) * -0x5555555555555555;
  if (*pfVar1 == 0.0) {
    puVar2 = (undefined8 *)(*(long *)(pfVar1 + 8) + (uVar4 & 0xffffffff) * 0x40);
  }
  else {
    uVar5 = uVar4 & 0xffffffff;
    if (*pfVar1 != *(float *)(*(long *)(pfVar1 + 4) + (uVar4 & 0xffffffff) * 4)) {
      GetWorldMatrixNoCache(this,param_1,param_2);
      puVar3 = *(undefined4 **)(this + 0x80);
      *(undefined4 *)(*(long *)(puVar3 + 4) + uVar5 * 4) = *puVar3;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      puVar2 = (undefined8 *)(*(long *)(puVar3 + 6) + uVar5 * 0x40);
      puVar2[7] = *(undefined8 *)(param_1 + 0x38);
      puVar2[6] = uVar6;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puVar2[5] = *(undefined8 *)(param_1 + 0x28);
      puVar2[4] = uVar6;
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      puVar2[3] = *(undefined8 *)(param_1 + 0x18);
      puVar2[2] = uVar6;
      uVar6 = *(undefined8 *)param_1;
      puVar2[1] = *(undefined8 *)(param_1 + 8);
      *puVar2 = uVar6;
      return;
    }
    puVar2 = (undefined8 *)(*(long *)(pfVar1 + 6) + uVar5 * 0x40);
  }
  uVar6 = puVar2[6];
  *(undefined8 *)(param_1 + 0x38) = puVar2[7];
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  uVar6 = puVar2[4];
  *(undefined8 *)(param_1 + 0x28) = puVar2[5];
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = puVar2[2];
                    /* try { // try from 00605724 to 00705737 has its CatchHandler @ 00606268 */
  *(undefined8 *)(param_1 + 0x18) = puVar2[3];
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  uVar6 = *puVar2;
  *(undefined8 *)(param_1 + 8) = puVar2[1];
  *(undefined8 *)param_1 = uVar6;
                    /* try { // try from 00605738 to 007057b3 has its CatchHandler @ 006056d0 */
  return;
}


