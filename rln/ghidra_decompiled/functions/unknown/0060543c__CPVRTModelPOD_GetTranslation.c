/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060543c
 * Function: CPVRTModelPOD::GetTranslation
 * Signature: undefined __thiscall GetTranslation(CPVRTModelPOD * this, PVRTVECTOR3f * param_1, SPODNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetTranslation(PVRTVECTOR3f&, SPODNode const&) const */

void __thiscall
CPVRTModelPOD::GetTranslation(CPVRTModelPOD *this,PVRTVECTOR3f *param_1,SPODNode *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  puVar3 = *(undefined8 **)(param_2 + 0x28);
  if (puVar3 != (undefined8 *)0x0) {
    if (((byte)param_2[0x18] & 1) != 0) {
      lVar2 = *(long *)(this + 0x80);
      lVar4 = *(long *)(param_2 + 0x20);
      iVar1 = *(int *)(lVar2 + 8);
      if (lVar4 == 0) {
        fVar7 = *(float *)(lVar2 + 4);
                    /* catch() { ... } // from try @ 00604c9c with catch @ 00605494 */
        uVar6 = (ulong)(iVar1 * 3);
        uVar5 = (ulong)(iVar1 * 3 + 3);
      }
      else {
        uVar6 = (ulong)*(uint *)(lVar4 + (long)iVar1 * 4);
        uVar5 = (ulong)*(uint *)(lVar4 + (long)(iVar1 + 1) * 4);
        fVar7 = *(float *)(lVar2 + 4);
      }
      PVRTMatrixVec3LerpF(param_1,(PVRTVECTOR3f *)((long)puVar3 + uVar6 * 4),
                          (PVRTVECTOR3f *)((long)puVar3 + uVar5 * 4),fVar7);
      return;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)param_1 = *puVar3;
  }
  return;
}


