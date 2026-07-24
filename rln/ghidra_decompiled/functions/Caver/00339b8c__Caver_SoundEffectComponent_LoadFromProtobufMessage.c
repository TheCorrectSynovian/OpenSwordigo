/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00339b8c
 * Function: Caver::SoundEffectComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SoundEffectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SoundEffectComponent::LoadFromProtobufMessage(SoundEffectComponent *this,Component *param_1)

{
  long lVar1;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar1 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6a80,
                     *(MessageLite **)(PTR_extension_007e6a80 + 8));
  FUN_0066a6a8(this + 0x78,*(undefined8 *)(lVar1 + 0x10));
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(lVar1 + 0x18);
  return;
}


