/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3b78
 * Function: Caver::ElevatorControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ElevatorControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ElevatorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::ElevatorControllerComponent::SaveToProtobufMessage
          (ElevatorControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e72d0;
  pMVar4 = (MessageLite *)Proto::ElevatorControllerComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x14);
  uVar3 = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar5 + 0x14) = uVar2 | 1;
  *(undefined4 *)(lVar5 + 0xc) = uVar3;
  if (*(uint *)(this + 0x98) < 3) {
    *(uint *)(lVar5 + 0x10) = *(uint *)(this + 0x98) + 1;
    *(uint *)(lVar5 + 0x14) = uVar2 | 3;
  }
  return;
}


