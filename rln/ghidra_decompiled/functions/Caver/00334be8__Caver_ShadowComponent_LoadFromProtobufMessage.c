/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334be8
 * Function: Caver::ShadowComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ShadowComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ShadowComponent::LoadFromProtobufMessage(ShadowComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6890,
                     *(MessageLite **)(PTR_extension_007e6890 + 8));
  puVar3 = PTR_default_instance__007e5258;
  *(undefined8 *)(this + 0x7c) = *(undefined8 *)(lVar4 + 0xc);
  lVar1 = *(long *)puVar3;
  if (*(long *)(lVar4 + 0x18) != 0) {
    lVar1 = lVar4;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x18) + 0x14);
  *(undefined8 *)(this + 0x84) = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0xc);
  *(undefined4 *)(this + 0x8c) = uVar2;
  return;
}


