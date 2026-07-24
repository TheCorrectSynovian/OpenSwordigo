/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060529c
 * Function: CPVRTModelPOD::GetRotationMatrix
 * Signature: undefined __thiscall GetRotationMatrix(CPVRTModelPOD * this, PVRTMATRIXf * param_1, SPODNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf&, SPODNode const&) const */

void __thiscall
CPVRTModelPOD::GetRotationMatrix(CPVRTModelPOD *this,PVRTMATRIXf *param_1,SPODNode *param_2)

{
  int iVar1;
  long lVar2;
  PVRTQUATERNIONf *pPVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  PVRTQUATERNIONf aPStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pPVar3 = *(PVRTQUATERNIONf **)(param_2 + 0x38);
  if (pPVar3 == (PVRTQUATERNIONf *)0x0) {
    PVRTMatrixIdentityF(param_1);
  }
  else {
    if (((byte)param_2[0x18] >> 1 & 1) != 0) {
      lVar4 = *(long *)(this + 0x80);
      lVar5 = *(long *)(param_2 + 0x30);
      iVar1 = *(int *)(lVar4 + 8);
                    /* catch() { ... } // from try @ 00604f38 with catch @ 006052d8 */
      if (lVar5 == 0) {
        fVar8 = *(float *)(lVar4 + 4);
        uVar7 = (ulong)(iVar1 * 4);
        uVar6 = (ulong)(iVar1 * 4 + 4);
      }
      else {
        uVar7 = (ulong)*(uint *)(lVar5 + (long)iVar1 * 4);
        uVar6 = (ulong)*(uint *)(lVar5 + (long)(iVar1 + 1) * 4);
        fVar8 = *(float *)(lVar4 + 4);
      }
      PVRTMatrixQuaternionSlerpF(aPStack_38,pPVar3 + uVar7 * 4,pPVar3 + uVar6 * 4,fVar8);
      pPVar3 = aPStack_38;
    }
    PVRTMatrixRotationQuaternionF(param_1,pPVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


