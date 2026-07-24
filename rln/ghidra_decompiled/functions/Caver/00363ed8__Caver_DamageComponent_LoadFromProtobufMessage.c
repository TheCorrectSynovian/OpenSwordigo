/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363ed8
 * Function: Caver::DamageComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(DamageComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::DamageComponent::LoadFromProtobufMessage(DamageComponent *this,Component *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7a08,
                     *(MessageLite **)(PTR_extension_007e7a08 + 8));
  iVar1 = *(int *)(lVar4 + 0xc);
  *(int *)(this + 0xa4) = iVar1;
  if ((*(byte *)(lVar4 + 0x2c) >> 1 & 1) == 0) {
    iVar5 = *(int *)(this + 0xa8);
  }
  else {
    iVar5 = *(int *)(lVar4 + 0x10) - iVar1;
    *(int *)(this + 0xa8) = iVar5;
  }
  *(int *)(this + 0xac) = iVar1;
  *(int *)(this + 0xb0) = iVar5;
  uVar3 = DamageTypeFromProtobufValue(*(undefined4 *)(lVar4 + 0x14));
  *(undefined4 *)(this + 0xb4) = uVar3;
  uVar3 = SpecialDamageTypeFromProtobufValue(*(undefined4 *)(lVar4 + 0x18));
  *(undefined4 *)(this + 0xb8) = uVar3;
  this[0xd0] = *(DamageComponent *)(lVar4 + 0x1c);
  uVar2 = *(uint *)(lVar4 + 0x2c);
  if ((uVar2 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 200) = *(undefined4 *)(lVar4 + 0x20);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(lVar4 + 0x24);
  }
  this[0xa0] = *(DamageComponent *)(lVar4 + 0x28);
  if ((uVar2 >> 8 & 1) != 0) {
    this[0xd1] = *(DamageComponent *)(lVar4 + 0x29);
  }
  return;
}


