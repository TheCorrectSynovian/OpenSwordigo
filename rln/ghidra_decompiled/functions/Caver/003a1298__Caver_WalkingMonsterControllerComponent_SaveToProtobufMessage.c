/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1298
 * Function: Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(WalkingMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const
    */

void __thiscall
Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage
          (WalkingMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  
  MonsterControllerComponent::SaveToProtobufMessage((MonsterControllerComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7380;
  pMVar2 = (MessageLite *)Proto::WalkingMonsterControllerComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
  return;
}


