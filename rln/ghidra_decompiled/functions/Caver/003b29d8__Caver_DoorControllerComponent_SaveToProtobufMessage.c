/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b29d8
 * Function: Caver::DoorControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(DoorControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::DoorControllerComponent::SaveToProtobufMessage
          (DoorControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  DoorControllerComponent DVar4;
  MessageLite *pMVar5;
  long lVar6;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7088;
  pMVar5 = (MessageLite *)Proto::DoorControllerComponent::default_instance();
  lVar6 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar5,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar6 + 0x20);
  uVar3 = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar6 + 0x20) = uVar2 | 1;
  *(undefined4 *)(lVar6 + 0xc) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar6 + 0x20) = uVar2 | 3;
  *(undefined4 *)(lVar6 + 0x10) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xa8);
  *(uint *)(lVar6 + 0x20) = uVar2 | 7;
  *(undefined4 *)(lVar6 + 0x14) = uVar3;
  *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(this + 0xc0);
  DVar4 = this[0xd0];
  *(uint *)(lVar6 + 0x20) = uVar2 | 0x1f;
  *(DoorControllerComponent *)(lVar6 + 0x1c) = DVar4;
  return;
}


