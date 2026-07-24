/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032f984
 * Function: Caver::PortalComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(PortalComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::PortalComponent::SaveToProtobufMessage(PortalComponent *this,Component *param_1)

{
  int iVar1;
  PortalComponent PVar2;
  undefined *puVar3;
  MessageLite *pMVar4;
  long lVar5;
  long *plVar6;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e72d8;
  pMVar4 = (MessageLite *)Proto::PortalComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  puVar3 = PTR__default_destination_scene_name__007e6a68;
  plVar6 = *(long **)(lVar5 + 0x10);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar5 + 0x24) = *(uint *)(lVar5 + 0x24) | 3;
  if (plVar6 == (long *)puVar3) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar5 + 0x10) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x88);
  puVar3 = PTR__default_spawn_point_name__007e72a0;
  plVar6 = *(long **)(lVar5 + 0x18);
  *(uint *)(lVar5 + 0x24) = *(uint *)(lVar5 + 0x24) | 4;
  if (plVar6 == (long *)puVar3) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar5 + 0x18) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x90);
  PVar2 = this[0x98];
  *(uint *)(lVar5 + 0x24) = *(uint *)(lVar5 + 0x24) | 8;
  *(PortalComponent *)(lVar5 + 0x20) = PVar2;
  return;
}


