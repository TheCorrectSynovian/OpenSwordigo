/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1fd0
 * Function: Caver::FireEmitterComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(FireEmitterComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::FireEmitterComponent::SaveToProtobufMessage(FireEmitterComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  Vector3 *pVVar6;
  FloatColor *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7f00;
  pMVar4 = (MessageLite *)Proto::FireEmitterComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x40);
  pVVar6 = *(Vector3 **)(lVar5 + 0x20);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar5 + 0x40) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar5 + 0x40) = uVar2 | 0xb;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  if (pVVar6 == (Vector3 *)0x0) {
    pVVar6 = operator_new(0x20);
    Proto::Vector3::Vector3(pVVar6);
    *(Vector3 **)(lVar5 + 0x20) = pVVar6;
  }
  *(undefined8 *)(pVVar6 + 0xc) = *(undefined8 *)(this + 0xb4);
  *(undefined4 *)(pVVar6 + 0x14) = *(undefined4 *)(this + 0xbc);
  *(uint *)(pVVar6 + 0x18) = *(uint *)(pVVar6 + 0x18) | 7;
  this_00 = *(FloatColor **)(lVar5 + 0x28);
  *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) | 0x10;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar5 + 0x28) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0xc0),this_00);
  pVVar6 = *(Vector3 **)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(this + 0xa0);
  *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) | 0xe0;
  if (pVVar6 == (Vector3 *)0x0) {
    pVVar6 = operator_new(0x20);
    Proto::Vector3::Vector3(pVVar6);
    *(Vector3 **)(lVar5 + 0x38) = pVVar6;
  }
  *(undefined8 *)(pVVar6 + 0xc) = *(undefined8 *)(this + 0xa8);
  *(undefined4 *)(pVVar6 + 0x14) = *(undefined4 *)(this + 0xb0);
  *(uint *)(pVVar6 + 0x18) = *(uint *)(pVVar6 + 0x18) | 7;
  return;
}


