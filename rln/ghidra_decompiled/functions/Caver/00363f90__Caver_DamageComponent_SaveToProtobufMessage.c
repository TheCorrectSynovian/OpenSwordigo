/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363f90
 * Function: Caver::DamageComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(DamageComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::SaveToProtobufMessage(Caver::Proto::Component*) const */

void __thiscall
Caver::DamageComponent::SaveToProtobufMessage(DamageComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DamageComponent DVar4;
  undefined4 uVar5;
  MessageLite *pMVar6;
  long lVar7;
  uint uVar8;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7a08;
  pMVar6 = (MessageLite *)Proto::DamageComponent::default_instance();
  lVar7 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar6,(FieldDescriptor *)0x0);
  uVar2 = *(uint *)(lVar7 + 0x2c);
  uVar5 = *(undefined4 *)(this + 0xa4);
  *(uint *)(lVar7 + 0x2c) = uVar2 | 1;
  *(undefined4 *)(lVar7 + 0xc) = uVar5;
  iVar1 = *(int *)(this + 0xa8);
  if (0 < iVar1) {
    iVar3 = *(int *)(this + 0xa4);
    *(uint *)(lVar7 + 0x2c) = uVar2 | 3;
    *(int *)(lVar7 + 0x10) = iVar3 + iVar1;
  }
  uVar5 = ProtobufValueFromDamageType(*(undefined4 *)(this + 0xb4));
  *(undefined4 *)(lVar7 + 0x14) = uVar5;
  *(uint *)(lVar7 + 0x2c) = *(uint *)(lVar7 + 0x2c) | 4;
  uVar5 = ProtobufValueFromSpecialDamageType(*(undefined4 *)(this + 0xb8));
  uVar2 = *(uint *)(lVar7 + 0x2c);
  *(undefined4 *)(lVar7 + 0x18) = uVar5;
  uVar8 = uVar2 | 8;
  *(uint *)(lVar7 + 0x2c) = uVar8;
  if (this[0xd0] != (DamageComponent)0x0) {
    uVar8 = uVar2 | 0x18;
    *(uint *)(lVar7 + 0x2c) = uVar8;
    *(undefined1 *)(lVar7 + 0x1c) = 1;
  }
  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(this + 200);
  *(DamageComponent *)(lVar7 + 0x28) = this[0xa0];
  DVar4 = this[0xd1];
  *(uint *)(lVar7 + 0x2c) = uVar8 | 0x1e0;
  *(DamageComponent *)(lVar7 + 0x29) = DVar4;
  return;
}


