/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003895f8
 * Function: Caver::MagicHookshotComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(MagicHookshotComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::MagicHookshotComponent::SaveToProtobufMessage
          (MagicHookshotComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  FloatColor *this_00;
  
  SpellComponent::SaveToProtobufMessage((SpellComponent *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7f98;
  pMVar4 = (MessageLite *)Proto::MagicHookshotComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x28);
  this_00 = *(FloatColor **)(lVar5 + 0x20);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 200);
  *(uint *)(lVar5 + 0x28) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0xe0);
  *(uint *)(lVar5 + 0x28) = uVar2 | 3;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xf8);
  *(uint *)(lVar5 + 0x28) = uVar2 | 7;
  *(undefined4 *)(lVar5 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x110);
  *(uint *)(lVar5 + 0x28) = uVar2 | 0x1f;
  *(undefined4 *)(lVar5 + 0x18) = uVar3;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar5 + 0x20) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0x128),this_00);
  return;
}


