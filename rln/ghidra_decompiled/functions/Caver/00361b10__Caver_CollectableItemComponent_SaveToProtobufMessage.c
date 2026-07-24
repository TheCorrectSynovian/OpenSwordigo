/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00361b10
 * Function: Caver::CollectableItemComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(CollectableItemComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::CollectableItemComponent::SaveToProtobufMessage
          (CollectableItemComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  MessageLite *pMVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  Program *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e5498;
  pMVar4 = (MessageLite *)Proto::CollectableItemComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(this + 0x70);
  uVar7 = *(uint *)(lVar5 + 0x38);
  if (uVar2 < 6) {
    uVar7 = uVar7 | 1;
    *(uint *)(lVar5 + 0x38) = uVar7;
    *(uint *)(lVar5 + 0xc) = uVar2;
  }
  puVar3 = PTR__default_item_name__007e5e68;
  plVar6 = *(long **)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(this + 0x74);
  *(uint *)(lVar5 + 0x38) = uVar7 | 6;
  if (plVar6 == (long *)puVar3) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar5 + 0x18) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x78);
  puVar3 = PTR__default_identifier__007e6b70;
  plVar6 = *(long **)(lVar5 + 0x20);
  *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) | 8;
  if (plVar6 == (long *)puVar3) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar5 + 0x20) = plVar6;
  }
  FUN_0066a6a8(plVar6,this + 0x80);
  this_00 = *(Program **)(lVar5 + 0x30);
  *(CollectableItemComponent *)(lVar5 + 0x28) = this[0x88];
  *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) | 0x30;
  if (this_00 == (Program *)0x0) {
    this_00 = operator_new(0x30);
    Proto::Program::Program(this_00);
    *(Program **)(lVar5 + 0x30) = this_00;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0x90),this_00);
  return;
}


