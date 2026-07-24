/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367d30
 * Function: Caver::EntityComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(EntityComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::EntityComponent::SaveToProtobufMessage(EntityComponent *this,Component *param_1)

{
  int iVar1;
  EntityComponent EVar2;
  MessageLite *pMVar3;
  long lVar4;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e73e8;
  pMVar3 = (MessageLite *)Proto::EntityComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x70);
  EVar2 = this[0xec];
  *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) | 3;
  *(EntityComponent *)(lVar4 + 0x10) = EVar2;
  return;
}


