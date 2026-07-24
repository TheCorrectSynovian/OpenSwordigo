/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060515c
 * Function: CPVRTModelPOD::GetWorldMatrixNoCache
 * Signature: undefined __thiscall GetWorldMatrixNoCache(CPVRTModelPOD * this, PVRTMATRIXf * param_1, SPODNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf&, SPODNode const&) const */

void __thiscall
CPVRTModelPOD::GetWorldMatrixNoCache(CPVRTModelPOD *this,PVRTMATRIXf *param_1,SPODNode *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  PVRTMATRIXf aPStack_78 [64];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00605180 to 007051a7 has its CatchHandler @ 0060561c */
  puVar3 = *(undefined8 **)(param_2 + 0x58);
  if (puVar3 == (undefined8 *)0x0) {
    GetScalingMatrix(this,param_1,param_2);
    GetRotationMatrix(this,aPStack_78,param_2);
    PVRTMatrixMultiplyF(param_1,param_1,aPStack_78);
    GetTranslationMatrix(this,aPStack_78,param_2);
    PVRTMatrixMultiplyF(param_1,param_1,aPStack_78);
    iVar1 = *(int *)(param_2 + 0x14);
  }
  else {
    if (((byte)param_2[0x18] >> 3 & 1) != 0) {
      if (*(long *)(param_2 + 0x50) == 0) {
                    /* catch() { ... } // from try @ 00604bd0 with catch @ 00605210 */
                    /* catch() { ... } // from try @ 00604fec with catch @ 00605214
                       catch() { ... } // from try @ 00605044 with catch @ 00605214 */
        puVar3 = (undefined8 *)
                 ((long)puVar3 + (long)(*(int *)(*(long *)(this + 0x80) + 8) << 4) * 4);
      }
      else {
                    /* try { // try from 006051a8 to 00705267 has its CatchHandler @ 00604a8c */
        puVar3 = (undefined8 *)
                 ((long)puVar3 +
                 (ulong)*(uint *)(*(long *)(param_2 + 0x50) +
                                 (long)*(int *)(*(long *)(this + 0x80) + 8) * 4) * 4);
      }
    }
    uVar4 = puVar3[6];
    *(undefined8 *)(param_1 + 0x38) = puVar3[7];
    *(undefined8 *)(param_1 + 0x30) = uVar4;
                    /* catch() { ... } // from try @ 00604f14 with catch @ 00605220
                       catch() { ... } // from try @ 00604f6c with catch @ 00605220 */
    uVar4 = puVar3[4];
    *(undefined8 *)(param_1 + 0x28) = puVar3[5];
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = puVar3[2];
                    /* catch() { ... } // from try @ 00604e38 with catch @ 0060522c
                       catch() { ... } // from try @ 00604e94 with catch @ 0060522c */
    *(undefined8 *)(param_1 + 0x18) = puVar3[3];
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    uVar4 = *puVar3;
    *(undefined8 *)(param_1 + 8) = puVar3[1];
    *(undefined8 *)param_1 = uVar4;
                    /* catch() { ... } // from try @ 00604d5c with catch @ 00605238
                       catch() { ... } // from try @ 00604db8 with catch @ 00605238 */
    iVar1 = *(int *)(param_2 + 0x14);
  }
  if (-1 < iVar1) {
                    /* catch() { ... } // from try @ 00605010 with catch @ 00605244 */
    GetWorldMatrixNoCache(this,aPStack_78,(SPODNode *)(*(long *)(this + 0x50) + (long)iVar1 * 0x60))
    ;
    PVRTMatrixMultiplyF(param_1,param_1,aPStack_78);
  }
                    /* try { // try from 00605268 to 007056c3 has its CatchHandler @ 006056cc */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


