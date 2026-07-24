/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033c0bc
 * Function: Caver::SpriteComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SpriteComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpriteComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SpriteComponent::LoadFromProtobufMessage(SpriteComponent *this,Component *param_1)

{
  long lVar1;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar1 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7690,
                     *(MessageLite **)(PTR_extension_007e7690 + 8));
  FUN_0066a6a8(this + 0x70,*(undefined8 *)(lVar1 + 0x10));
  return;
}


