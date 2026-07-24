/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036ea0c
 * Function: Caver::EntityInfoComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(EntityInfoComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::EntityInfoComponent::LoadFromProtobufMessage(EntityInfoComponent *this,Component *param_1)

{
  long lVar1;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar1 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5280,
                     *(MessageLite **)(PTR_extension_007e5280 + 8));
  FUN_0066a6a8(this + 0x78,*(undefined8 *)(lVar1 + 0x10));
  return;
}


