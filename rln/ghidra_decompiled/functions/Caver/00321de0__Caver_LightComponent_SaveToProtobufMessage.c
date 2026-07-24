/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321de0
 * Function: Caver::LightComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(LightComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::LightComponent::SaveToProtobufMessage(LightComponent *this,Component *param_1)

{
  int iVar1;
  undefined4 uVar2;
  MessageLite *pMVar3;
  long lVar4;
  uint uVar5;
  FloatColor *this_00;
  Vector3 *this_01;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e6668;
  pMVar3 = (MessageLite *)Proto::LightComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  if (*(int *)(this + 0x70) - 1U < 4) {
    *(int *)(lVar4 + 0xc) = *(int *)(this + 0x70);
    uVar5 = *(uint *)(lVar4 + 0x38) | 1;
    *(uint *)(lVar4 + 0x38) = uVar5;
  }
  else {
    uVar5 = *(uint *)(lVar4 + 0x38);
  }
  uVar2 = *(undefined4 *)(this + 0x74);
  this_00 = *(FloatColor **)(lVar4 + 0x18);
  *(uint *)(lVar4 + 0x38) = uVar5 | 6;
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar4 + 0x18) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0x78),this_00);
  if (*(int *)(this + 0x70) == 3) {
    this_01 = *(Vector3 **)(lVar4 + 0x30);
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(this + 0x94);
    uVar2 = *(undefined4 *)(this + 0x9c);
    *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) | 0x78;
    *(undefined4 *)(lVar4 + 0x28) = uVar2;
    if (this_01 == (Vector3 *)0x0) {
      this_01 = operator_new(0x20);
      Proto::Vector3::Vector3(this_01);
      *(Vector3 **)(lVar4 + 0x30) = this_01;
    }
    *(undefined8 *)(this_01 + 0xc) = *(undefined8 *)(this + 0xa0);
    *(undefined4 *)(this_01 + 0x14) = *(undefined4 *)(this + 0xa8);
    *(uint *)(this_01 + 0x18) = *(uint *)(this_01 + 0x18) | 7;
  }
  return;
}


