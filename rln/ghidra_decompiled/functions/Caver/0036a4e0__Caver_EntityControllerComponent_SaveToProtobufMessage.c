/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036a4e0
 * Function: Caver::EntityControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(EntityControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::EntityControllerComponent::SaveToProtobufMessage
          (EntityControllerComponent *this,Component *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  MessageLite *pMVar3;
  long lVar4;
  int iVar5;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar5 = *(int *)PTR_extension_007e5fa0;
  pMVar3 = (MessageLite *)Proto::EntityControllerComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar5,'\v',pMVar3,(FieldDescriptor *)0x0);
  uVar1 = *(uint *)(lVar4 + 0x2c);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar4 + 0x2c) = uVar1 | 1;
  uVar2 = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar4 + 0x2c) = uVar1 | 3;
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(this + 0xa8);
  *(uint *)(lVar4 + 0x2c) = uVar1 | 7;
  *(undefined4 *)(lVar4 + 0x14) = uVar2;
  *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(this + 0xc0);
  *(undefined8 *)(lVar4 + 0x1c) = *(undefined8 *)(this + 0xe0);
  uVar2 = *(undefined4 *)(this + 0xe8);
  *(uint *)(lVar4 + 0x2c) = uVar1 | 0x7f;
  *(undefined4 *)(lVar4 + 0x24) = uVar2;
  iVar5 = 1;
  if (*(int *)(this + 0xf8) - 1U < 3) {
    iVar5 = *(int *)(this + 0xf8) + 1;
  }
  *(int *)(lVar4 + 0x28) = iVar5;
  *(uint *)(lVar4 + 0x2c) = uVar1 | 0xff;
  return;
}


