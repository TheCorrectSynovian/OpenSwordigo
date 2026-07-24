/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003af810
 * Function: Caver::SimpleGlowComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SimpleGlowComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::SimpleGlowComponent::SaveToProtobufMessage(SimpleGlowComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  undefined8 uVar6;
  FloatColor *this_00;
  Vector2 *this_01;
  
  GlowComponent::SaveToProtobufMessage((Component *)this);
  iVar1 = *(int *)PTR_extension_007e66c0;
  pMVar4 = (MessageLite *)Proto::SimpleGlowComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  this_00 = *(FloatColor **)(lVar5 + 0x10);
  *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) | 1;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar5 + 0x10) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xa4),this_00);
  uVar2 = *(uint *)(lVar5 + 0x38);
  this_01 = *(Vector2 **)(lVar5 + 0x28);
  *(uint *)(lVar5 + 0x38) = uVar2 | 2;
  *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(this + 0xb4);
  uVar3 = *(undefined4 *)(this + 0xc4);
  *(uint *)(lVar5 + 0x38) = uVar2 | 0x1e;
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  if (this_01 == (Vector2 *)0x0) {
    this_01 = operator_new(0x18);
    Proto::Vector2::Vector2(this_01);
    *(Vector2 **)(lVar5 + 0x28) = this_01;
  }
  *(undefined8 *)(this_01 + 0xc) = *(undefined8 *)(this + 0xbc);
  *(uint *)(this_01 + 0x14) = *(uint *)(this_01 + 0x14) | 3;
  uVar6 = *(undefined8 *)(this + 0xcc);
  *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) | 0x60;
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  return;
}


