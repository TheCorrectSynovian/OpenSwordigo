/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00313f00
 * Function: Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(BoneControlledCollisionShapeComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage(Caver::Proto::Component*)
   const */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::SaveToProtobufMessage
          (BoneControlledCollisionShapeComponent *this,Component *param_1)

{
  int iVar1;
  undefined *puVar2;
  MessageLite *pMVar3;
  long lVar4;
  long *plVar5;
  
  CollisionShapeComponent::SaveToProtobufMessage((CollisionShapeComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6bf8;
  pMVar3 = (MessageLite *)Proto::BoneControlledCollisionShapeComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar2 = PTR__default_controlling_bone_name__007e79d8;
  plVar5 = *(long **)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x1d8);
  *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 3;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x1e8);
  return;
}


