/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003941c8
 * Function: Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(BouncingMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const
    */

void __thiscall
Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage
          (BouncingMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  undefined8 uVar6;
  
  MonsterControllerComponent::SaveToProtobufMessage((MonsterControllerComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4e70;
  pMVar4 = (MessageLite *)Proto::BouncingMonsterControllerComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x1c);
  uVar3 = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar5 + 0x1c) = uVar2 | 1;
  *(undefined4 *)(lVar5 + 0xc) = uVar3;
  *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(this + 0xf0);
  uVar6 = *(undefined8 *)(this + 0x108);
  *(uint *)(lVar5 + 0x1c) = uVar2 | 0xf;
  *(undefined8 *)(lVar5 + 0x14) = uVar6;
  return;
}


