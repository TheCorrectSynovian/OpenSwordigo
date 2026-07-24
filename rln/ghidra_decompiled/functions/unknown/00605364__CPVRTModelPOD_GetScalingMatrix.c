/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605364
 * Function: CPVRTModelPOD::GetScalingMatrix
 * Signature: undefined __thiscall GetScalingMatrix(CPVRTModelPOD * this, PVRTMATRIXf * param_1, SPODNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf&, SPODNode const&) const */

void __thiscall
CPVRTModelPOD::GetScalingMatrix(CPVRTModelPOD *this,PVRTMATRIXf *param_1,SPODNode *param_2)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00604e60 with catch @ 0060536c */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pfVar3 = *(float **)(param_2 + 0x48);
  if (pfVar3 == (float *)0x0) {
    PVRTMatrixIdentityF(param_1);
  }
  else {
    if (((byte)param_2[0x18] >> 2 & 1) == 0) {
      local_38 = *pfVar3;
      fStack_34 = pfVar3[1];
      local_30 = pfVar3[2];
    }
    else {
      lVar4 = *(long *)(this + 0x80);
      lVar6 = *(long *)(param_2 + 0x40);
      iVar1 = *(int *)(lVar4 + 8);
      if (lVar6 == 0) {
        fVar8 = *(float *)(lVar4 + 4);
        uVar7 = (ulong)(iVar1 * 7);
        uVar5 = (ulong)(iVar1 * 7 + 7);
      }
      else {
        uVar7 = (ulong)*(uint *)(lVar6 + (long)iVar1 * 4);
        uVar5 = (ulong)*(uint *)(lVar6 + (long)(iVar1 + 1) * 4);
        fVar8 = *(float *)(lVar4 + 4);
      }
      PVRTMatrixVec3LerpF((PVRTVECTOR3f *)&local_38,(PVRTVECTOR3f *)(pfVar3 + uVar7),
                          (PVRTVECTOR3f *)(pfVar3 + uVar5),fVar8);
    }
                    /* catch() { ... } // from try @ 00604d84 with catch @ 00605400 */
    PVRTMatrixScalingF(param_1,local_38,fStack_34,local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


