/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036fb18
 * Function: Caver::HealthComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(HealthComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::HealthComponent::SaveToProtobufMessage(HealthComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  Vector2 *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7648;
  pMVar4 = (MessageLite *)Proto::HealthComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x20);
  uVar3 = *(undefined4 *)(this + 0x7c);
  uVar6 = uVar2 | 1;
  *(uint *)(lVar5 + 0x20) = uVar6;
  *(undefined4 *)(lVar5 + 0xc) = uVar3;
  iVar1 = *(int *)(this + 0x88);
  if ((iVar1 == 1) || (iVar1 == 0)) {
    uVar6 = uVar2 | 3;
    *(uint *)(lVar5 + 0x20) = uVar6;
    *(int *)(lVar5 + 0x10) = iVar1;
  }
  this_00 = *(Vector2 **)(lVar5 + 0x18);
  *(uint *)(lVar5 + 0x20) = uVar6 | 4;
  if (this_00 == (Vector2 *)0x0) {
    this_00 = operator_new(0x18);
    Proto::Vector2::Vector2(this_00);
    *(Vector2 **)(lVar5 + 0x18) = this_00;
  }
  uVar7 = *(undefined8 *)(this + 0x8c);
  *(uint *)(this_00 + 0x14) = *(uint *)(this_00 + 0x14) | 3;
  *(undefined8 *)(this_00 + 0xc) = uVar7;
  return;
}


