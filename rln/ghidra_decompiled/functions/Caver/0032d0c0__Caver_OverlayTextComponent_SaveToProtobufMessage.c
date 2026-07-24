/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032d0c0
 * Function: Caver::OverlayTextComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(OverlayTextComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::OverlayTextComponent::SaveToProtobufMessage(OverlayTextComponent *this,Component *param_1)

{
  int iVar1;
  undefined *puVar2;
  MessageLite *pMVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  Vector2 *pVVar7;
  
  OverlayComponent::SaveToProtobufMessage((Component *)this);
  iVar1 = *(int *)PTR_extension_007e4e48;
  pMVar3 = (MessageLite *)Proto::OverlayTextComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar2 = PTR__default_text__007e5e10;
  plVar5 = *(long **)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 1;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x70);
  pVVar7 = *(Vector2 **)(lVar4 + 0x18);
  *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
  if (pVVar7 == (Vector2 *)0x0) {
    pVVar7 = operator_new(0x18);
    Proto::Vector2::Vector2(pVVar7);
    *(Vector2 **)(lVar4 + 0x18) = pVVar7;
  }
  *(undefined8 *)(pVVar7 + 0xc) = *(undefined8 *)(this + 0x78);
  *(uint *)(pVVar7 + 0x14) = *(uint *)(pVVar7 + 0x14) | 3;
  puVar2 = PTR__default_sprite_name__007e6978;
  plVar5 = *(long **)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 4;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x20) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x90);
  pVVar7 = *(Vector2 **)(lVar4 + 0x28);
  *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 8;
  if (pVVar7 == (Vector2 *)0x0) {
    pVVar7 = operator_new(0x18);
    Proto::Vector2::Vector2(pVVar7);
    *(Vector2 **)(lVar4 + 0x28) = pVVar7;
  }
  uVar6 = *(undefined8 *)(this + 0x98);
  *(uint *)(pVVar7 + 0x14) = *(uint *)(pVVar7 + 0x14) | 3;
  *(undefined8 *)(pVVar7 + 0xc) = uVar6;
  return;
}


