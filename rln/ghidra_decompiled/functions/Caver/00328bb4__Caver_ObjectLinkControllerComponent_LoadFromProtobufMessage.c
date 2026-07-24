/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00328bb4
 * Function: Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ObjectLinkControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ObjectLinkControllerComponent::LoadFromProtobufMessage
          (ObjectLinkControllerComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e47a0,
                     *(MessageLite **)(PTR_extension_007e47a0 + 8));
  FUN_0066a6a8(this + 0x70,*(undefined8 *)(lVar3 + 0x10));
  FUN_0066a6a8(this + 0x90,*(undefined8 *)(lVar3 + 0x18));
  lVar4 = *(long *)PTR_default_instance__007e4830;
  lVar1 = lVar4;
  if (*(long *)(lVar3 + 0x20) != 0) {
    lVar1 = lVar3;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x20) + 0x14);
  *(undefined8 *)(this + 0xec) = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0xc);
  *(undefined4 *)(this + 0xf4) = uVar2;
  lVar1 = lVar4;
  if (*(long *)(lVar3 + 0x28) != 0) {
    lVar1 = lVar3;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x28) + 0x14);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 0xc);
  *(undefined4 *)(this + 0x100) = uVar2;
  if (*(long *)(lVar3 + 0x30) != 0) {
    lVar4 = lVar3;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar4 + 0x30) + 0x14);
  *(undefined8 *)(this + 0x104) = *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0xc);
  *(undefined4 *)(this + 0x10c) = uVar2;
  return;
}


