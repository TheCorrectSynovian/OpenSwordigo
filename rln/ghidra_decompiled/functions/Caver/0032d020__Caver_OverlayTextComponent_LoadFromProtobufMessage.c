/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032d020
 * Function: Caver::OverlayTextComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(OverlayTextComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::OverlayTextComponent::LoadFromProtobufMessage(OverlayTextComponent *this,Component *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  OverlayComponent::LoadFromProtobufMessage((Component *)this);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4e48,
                     *(MessageLite **)(PTR_extension_007e4e48 + 8));
  FUN_0066a6a8(this + 0x70,*(undefined8 *)(lVar3 + 0x10));
  puVar2 = PTR_default_instance__007e6838;
  lVar1 = *(long *)PTR_default_instance__007e6838;
  if (*(long *)(lVar3 + 0x18) != 0) {
    lVar1 = lVar3;
  }
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0xc);
  FUN_0066a6a8(this + 0x90,*(undefined8 *)(lVar3 + 0x20));
  lVar1 = *(long *)puVar2;
  if (*(long *)(lVar3 + 0x28) != 0) {
    lVar1 = lVar3;
  }
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 0xc);
  return;
}


