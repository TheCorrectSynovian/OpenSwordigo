/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00605634
 * Function: CPVRTModelPOD::GetTransformationMatrix
 * Signature: undefined __thiscall GetTransformationMatrix(CPVRTModelPOD * this, PVRTMATRIXf * param_1, SPODNode * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::GetTransformationMatrix(PVRTMATRIXf&, SPODNode const&) const */

void __thiscall
CPVRTModelPOD::GetTransformationMatrix(CPVRTModelPOD *this,PVRTMATRIXf *param_1,SPODNode *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x58);
  if (puVar1 != (undefined8 *)0x0) {
    if (((byte)param_2[0x18] >> 3 & 1) != 0) {
      if (*(long *)(param_2 + 0x50) == 0) {
        puVar1 = (undefined8 *)
                 ((long)puVar1 + (long)(*(int *)(*(long *)(this + 0x80) + 8) << 4) * 4);
      }
      else {
        puVar1 = (undefined8 *)
                 ((long)puVar1 +
                 (ulong)*(uint *)(*(long *)(param_2 + 0x50) +
                                 (long)*(int *)(*(long *)(this + 0x80) + 8) * 4) * 4);
      }
    }
    uVar2 = puVar1[6];
    *(undefined8 *)(param_1 + 0x38) = puVar1[7];
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar2 = puVar1[4];
                    /* catch() { ... } // from try @ 00605120 with catch @ 0060567c */
    *(undefined8 *)(param_1 + 0x28) = puVar1[5];
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar2 = puVar1[2];
    *(undefined8 *)(param_1 + 0x18) = puVar1[3];
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = *puVar1;
    *(undefined8 *)(param_1 + 8) = puVar1[1];
    *(undefined8 *)param_1 = uVar2;
    return;
  }
  PVRTMatrixIdentityF(param_1);
  return;
}


