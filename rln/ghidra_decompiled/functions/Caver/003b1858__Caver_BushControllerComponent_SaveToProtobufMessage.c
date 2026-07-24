/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b1858
 * Function: Caver::BushControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(BushControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BushControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::BushControllerComponent::SaveToProtobufMessage
          (BushControllerComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7620;
  pMVar4 = (MessageLite *)Proto::BushControllerComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar5 + 0x18) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar5 + 0x18) = uVar2 | 3;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(this + 0xa8);
  *(uint *)(lVar5 + 0x18) = uVar2 | 7;
  return;
}


