/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ad7d8
 * Function: Caver::PortalEffectComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(PortalEffectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::PortalEffectComponent::SaveToProtobufMessage(PortalEffectComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  FloatColor *this_00;
  Vector3 *this_01;
  
  GlowComponent::SaveToProtobufMessage((Component *)this);
  iVar1 = *(int *)PTR_extension_007e6200;
  pMVar4 = (MessageLite *)Proto::PortalEffectComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x28);
  this_00 = *(FloatColor **)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar5 + 0x28) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0xa8);
  *(uint *)(lVar5 + 0x28) = uVar2 | 7;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar5 + 0x18) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xb8),this_00);
  this_01 = *(Vector3 **)(lVar5 + 0x20);
  *(uint *)(lVar5 + 0x28) = *(uint *)(lVar5 + 0x28) | 8;
  if (this_01 == (Vector3 *)0x0) {
    this_01 = operator_new(0x20);
    Proto::Vector3::Vector3(this_01);
    *(Vector3 **)(lVar5 + 0x20) = this_01;
  }
  *(undefined8 *)(this_01 + 0xc) = *(undefined8 *)(this + 200);
  *(undefined4 *)(this_01 + 0x14) = *(undefined4 *)(this + 0xd0);
  *(uint *)(this_01 + 0x18) = *(uint *)(this_01 + 0x18) | 7;
  return;
}


