/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00390ee0
 * Function: Caver::AttackComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(AttackComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::AttackComponent::SaveToProtobufMessage(AttackComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  undefined8 uVar6;
  Program *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4be8;
  pMVar4 = (MessageLite *)Proto::AttackComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x48);
  this_00 = *(Program **)(lVar5 + 0x20);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar5 + 0x48) = uVar2 | 1;
  uVar3 = *(undefined4 *)(this + 0x90);
  *(uint *)(lVar5 + 0x48) = uVar2 | 3;
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xa8);
  *(uint *)(lVar5 + 0x48) = uVar2 | 7;
  *(undefined4 *)(lVar5 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xc0);
  *(uint *)(lVar5 + 0x48) = uVar2 | 0x1f;
  *(undefined4 *)(lVar5 + 0x18) = uVar3;
  if (this_00 == (Program *)0x0) {
    this_00 = operator_new(0x30);
    Proto::Program::Program(this_00);
    *(Program **)(lVar5 + 0x20) = this_00;
  }
  Program::SaveToProtobufMessage((Program *)(this + 0xd0),this_00);
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(this + 0x104);
  *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(this + 0x114);
  *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(this + 0x11c);
  uVar6 = *(undefined8 *)(this + 0x128);
  *(uint *)(lVar5 + 0x48) = *(uint *)(lVar5 + 0x48) | 0x1fe0;
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  return;
}


