/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367ce4
 * Function: Caver::EntityComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(EntityComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::EntityComponent::LoadFromProtobufMessage(EntityComponent *this,Component *param_1)

{
  long lVar1;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar1 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e73e8,
                     *(MessageLite **)(PTR_extension_007e73e8 + 8));
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(lVar1 + 0xc);
  this[0xec] = *(EntityComponent *)(lVar1 + 0x10);
  return;
}


