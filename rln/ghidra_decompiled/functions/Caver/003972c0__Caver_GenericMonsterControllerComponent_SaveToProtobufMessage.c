/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003972c0
 * Function: Caver::GenericMonsterControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GenericMonsterControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const
    */

void __thiscall
Caver::GenericMonsterControllerComponent::SaveToProtobufMessage
          (GenericMonsterControllerComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  
  MonsterControllerComponent::SaveToProtobufMessage((MonsterControllerComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4838;
  pMVar2 = (MessageLite *)Proto::GenericMonsterControllerComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(this + 0xd8);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
  return;
}


