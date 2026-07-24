/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c42cc
 * Function: Caver::SwingableWeaponComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SwingableWeaponComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::SwingableWeaponComponent::SaveToProtobufMessage
          (SwingableWeaponComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  MessageLite *pMVar4;
  long lVar5;
  FloatColor *this_00;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e4b38;
  pMVar4 = (MessageLite *)Proto::SwingableWeaponComponent::default_instance();
  lVar5 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar4,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar5 + 0x44);
  this_00 = *(FloatColor **)(lVar5 + 0x20);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(this + 0x80);
  *(uint *)(lVar5 + 0x44) = uVar2 | 1;
  *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(this + 0x98);
  *(undefined8 *)(lVar5 + 0x14) = *(undefined8 *)(this + 0x19c);
  uVar3 = *(undefined4 *)(this + 0x1a4);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0x3f;
  *(undefined4 *)(lVar5 + 0x1c) = uVar3;
  if (this_00 == (FloatColor *)0x0) {
    this_00 = operator_new(0x20);
    Proto::FloatColor::FloatColor(this_00);
    *(FloatColor **)(lVar5 + 0x20) = this_00;
  }
  FloatColorToProtobufMessage((FloatColor *)(this + 0x1a8),this_00);
  uVar2 = *(uint *)(lVar5 + 0x44);
  *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(this + 0x1bc);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0x40;
  uVar3 = *(undefined4 *)(this + 0xd0);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0xc0;
  *(undefined4 *)(lVar5 + 0x2c) = uVar3;
  uVar3 = *(undefined4 *)(this + 0xe8);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0x1c0;
  *(undefined4 *)(lVar5 + 0x30) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x100);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0x3c0;
  *(undefined4 *)(lVar5 + 0x34) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x118);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0x7c0;
  *(undefined4 *)(lVar5 + 0x38) = uVar3;
  uVar3 = *(undefined4 *)(this + 0x130);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0xfc0;
  *(undefined4 *)(lVar5 + 0x3c) = uVar3;
  *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(this + 0x148);
  *(uint *)(lVar5 + 0x44) = uVar2 | 0x1fc0;
  return;
}


