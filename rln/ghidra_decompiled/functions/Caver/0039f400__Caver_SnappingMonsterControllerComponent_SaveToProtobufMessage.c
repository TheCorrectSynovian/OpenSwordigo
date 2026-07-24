/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039f400
 * Function: Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SnappingMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const
    */

void __thiscall
Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage
          (SnappingMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  
  MonsterControllerComponent::SaveToProtobufMessage((MonsterControllerComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7cb0;
  pMVar4 = (MessageLite *)Proto::SnappingMonsterControllerComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x20);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar5 + 0x20) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0xf0);
  *(uint *)(lVar5 + 0x20) = uVar2 | 3;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x108);
  *(uint *)(lVar5 + 0x20) = uVar2 | 7;
  *(undefined4 *)(lVar5 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x120);
  *(uint *)(lVar5 + 0x20) = uVar2 | 0xf;
  *(undefined4 *)(lVar5 + 0x18) = uVar3;
  *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(this + 0x138);
  *(uint *)(lVar5 + 0x20) = uVar2 | 0x1f;
  return;
}


