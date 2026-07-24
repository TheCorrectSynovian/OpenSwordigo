/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605560
 * Function: CPVRTModelPOD::GetTranslationMatrix
 * Signature: undefined __thiscall GetTranslationMatrix(CPVRTModelPOD * this, PVRTMATRIXf * param_1, SPODNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf&, SPODNode const&) const */

void __thiscall
CPVRTModelPOD::GetTranslationMatrix(CPVRTModelPOD *this,PVRTMATRIXf *param_1,SPODNode *param_2)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00604b70 with catch @ 00605580 */
  pfVar3 = *(float **)(param_2 + 0x28);
  if (pfVar3 == (float *)0x0) {
    PVRTMatrixIdentityF(param_1);
  }
  else {
    if (((byte)param_2[0x18] & 1) == 0) {
      local_38 = *pfVar3;
      fStack_34 = pfVar3[1];
      local_30 = pfVar3[2];
    }
    else {
      lVar4 = *(long *)(this + 0x80);
      lVar5 = *(long *)(param_2 + 0x20);
      iVar1 = *(int *)(lVar4 + 8);
      if (lVar5 == 0) {
        fVar8 = *(float *)(lVar4 + 4);
        uVar7 = (ulong)(iVar1 * 3);
        uVar6 = (ulong)(iVar1 * 3 + 3);
      }
      else {
        uVar7 = (ulong)*(uint *)(lVar5 + (long)iVar1 * 4);
        uVar6 = (ulong)*(uint *)(lVar5 + (long)(iVar1 + 1) * 4);
        fVar8 = *(float *)(lVar4 + 4);
      }
                    /* catch() { ... } // from try @ 00604ae0 with catch @ 006055cc */
      PVRTMatrixVec3LerpF((PVRTVECTOR3f *)&local_38,(PVRTVECTOR3f *)(pfVar3 + uVar7),
                          (PVRTVECTOR3f *)(pfVar3 + uVar6),fVar8);
    }
    PVRTMatrixTranslationF(param_1,local_38,fStack_34,local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00605180 with catch @ 0060561c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


