/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006054ac
 * Function: CPVRTModelPOD::GetTranslation
 * Signature: undefined __thiscall GetTranslation(CPVRTModelPOD * this, SPODNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetTranslation(SPODNode const&) const */

void __thiscall CPVRTModelPOD::GetTranslation(CPVRTModelPOD *this,SPODNode *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 != (undefined8 *)0x0) {
    if (((byte)param_1[0x18] & 1) == 0) {
      local_30 = *(undefined4 *)(puVar3 + 1);
      local_38 = *puVar3;
                    /* catch() { ... } // from try @ 00604c70 with catch @ 006054e4 */
    }
    else {
      lVar4 = *(long *)(this + 0x80);
      lVar6 = *(long *)(param_1 + 0x20);
      iVar1 = *(int *)(lVar4 + 8);
      if (lVar6 == 0) {
        fVar8 = *(float *)(lVar4 + 4);
        uVar5 = (ulong)(iVar1 * 3);
        uVar7 = (ulong)(iVar1 * 3 + 3);
      }
      else {
        uVar5 = (ulong)*(uint *)(lVar6 + (long)iVar1 * 4);
        uVar7 = (ulong)*(uint *)(lVar6 + (long)iVar1 * 4 + 4);
        fVar8 = *(float *)(lVar4 + 4);
      }
                    /* catch() { ... } // from try @ 00604b9c with catch @ 00605530 */
      PVRTMatrixVec3LerpF((PVRTVECTOR3f *)&local_38,(PVRTVECTOR3f *)((long)puVar3 + uVar5 * 4),
                          (PVRTVECTOR3f *)((long)puVar3 + uVar7 * 4),fVar8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_38,local_38._4_4_,local_30);
}


