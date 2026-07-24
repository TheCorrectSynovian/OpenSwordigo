/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00326d64
 * Function: Caver::ModelTransformControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ModelTransformControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const
    */

void __thiscall
Caver::ModelTransformControllerComponent::SaveToProtobufMessage
          (ModelTransformControllerComponent *this,Component *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  MessageLite *pMVar5;
  long lVar6;
  ulong uVar7;
  Vector3 *pVVar8;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7650;
  pMVar5 = (MessageLite *)Proto::ModelTransformControllerComponent::default_instance();
  lVar6 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar5,(FieldDescriptor *)0x0);
  uVar2 = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar6 + 0x28) = *(uint *)(lVar6 + 0x28) | 1;
  *(undefined4 *)(lVar6 + 0xc) = uVar2;
  fVar4 = DAT_00683488;
  uVar7 = Vector3::IsClose((Vector3 *)(this + 0x8c),(Vector3 *)PTR_Vector3Zero_007e5988,DAT_00683488
                          );
  if ((uVar7 & 1) == 0) {
    pVVar8 = *(Vector3 **)(lVar6 + 0x10);
    *(uint *)(lVar6 + 0x28) = *(uint *)(lVar6 + 0x28) | 2;
    if (pVVar8 == (Vector3 *)0x0) {
      pVVar8 = operator_new(0x20);
      Proto::Vector3::Vector3(pVVar8);
      *(Vector3 **)(lVar6 + 0x10) = pVVar8;
    }
    *(undefined8 *)(pVVar8 + 0xc) = *(undefined8 *)(this + 0x8c);
    *(undefined4 *)(pVVar8 + 0x14) = *(undefined4 *)(this + 0x94);
    *(uint *)(pVVar8 + 0x18) = *(uint *)(pVVar8 + 0x18) | 7;
  }
  local_50 = 0;
  local_58 = DAT_006840e0;
  uVar7 = Vector3::IsClose((Vector3 *)(this + 0x98),(Vector3 *)&local_58,fVar4);
  if ((uVar7 & 1) == 0) {
    pVVar8 = *(Vector3 **)(lVar6 + 0x18);
    *(uint *)(lVar6 + 0x28) = *(uint *)(lVar6 + 0x28) | 4;
    if (pVVar8 == (Vector3 *)0x0) {
      pVVar8 = operator_new(0x20);
      Proto::Vector3::Vector3(pVVar8);
      *(Vector3 **)(lVar6 + 0x18) = pVVar8;
    }
    *(undefined8 *)(pVVar8 + 0xc) = *(undefined8 *)(this + 0x98);
    *(undefined4 *)(pVVar8 + 0x14) = *(undefined4 *)(this + 0xa0);
    *(uint *)(pVVar8 + 0x18) = *(uint *)(pVVar8 + 0x18) | 7;
  }
  if (fVar4 < ABS(*(float *)(this + 0xa4))) {
    *(float *)(lVar6 + 0x20) = *(float *)(this + 0xa4);
    *(uint *)(lVar6 + 0x28) = *(uint *)(lVar6 + 0x28) | 8;
  }
  if (fVar4 < ABS(*(float *)(this + 0xa8))) {
    *(float *)(lVar6 + 0x24) = *(float *)(this + 0xa8);
    *(uint *)(lVar6 + 0x28) = *(uint *)(lVar6 + 0x28) | 0x10;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


