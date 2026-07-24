/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00393438
 * Function: Caver::BatMonsterControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(BatMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BatMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::BatMonsterControllerComponent::SaveToProtobufMessage
          (BatMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  long lVar4;
  
  MonsterControllerComponent::SaveToProtobufMessage((MonsterControllerComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e5b28;
  pMVar3 = (MessageLite *)Proto::BatMonsterControllerComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar4 + 0x14);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar4 + 0x14) = uVar2 | 1;
  *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(this + 0xf0);
  *(uint *)(lVar4 + 0x14) = uVar2 | 3;
  return;
}


