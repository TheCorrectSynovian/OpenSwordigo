/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4e4c
 * Function: Caver::ParticleComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ParticleComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ParticleComponent::LoadFromProtobufMessage(ParticleComponent *this,Component *param_1)

{
  long lVar1;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar1 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4d80,
                     *(MessageLite **)(PTR_extension_007e4d80 + 8));
  FUN_0066a6a8(this + 0x70,*(undefined8 *)(lVar1 + 0x10));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(lVar1 + 0x18);
  return;
}


