/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036ea50
 * Function: Caver::EntityInfoComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(EntityInfoComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::EntityInfoComponent::SaveToProtobufMessage(EntityInfoComponent *this,Component *param_1)

{
  int iVar1;
  undefined *puVar2;
  MessageLite *pMVar3;
  long lVar4;
  long *plVar5;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e5280;
  pMVar3 = (MessageLite *)Proto::EntityInfoComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar2 = PTR__default_entity_class__007e6138;
  plVar5 = *(long **)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 1;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x78);
  return;
}


