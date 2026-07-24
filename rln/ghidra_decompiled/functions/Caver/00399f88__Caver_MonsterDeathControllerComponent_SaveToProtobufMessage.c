/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00399f88
 * Function: Caver::MonsterDeathControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MonsterDeathControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::MonsterDeathControllerComponent::SaveToProtobufMessage
          (MonsterDeathControllerComponent *this,Component *param_1)

{
  int iVar1;
  MessageLite *pMVar2;
  long lVar3;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e68b8;
  pMVar2 = (MessageLite *)Proto::MonsterDeathControllerComponent::default_instance();
  lVar3 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar2,(FieldDescriptor *)0x0);
  *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | 1;
  return;
}


