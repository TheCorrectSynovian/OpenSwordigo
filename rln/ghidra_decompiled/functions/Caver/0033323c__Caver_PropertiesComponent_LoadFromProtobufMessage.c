/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033323c
 * Function: Caver::PropertiesComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(PropertiesComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::PropertiesComponent::LoadFromProtobufMessage(PropertiesComponent *this,Component *param_1)

{
  long lVar1;
  long lVar2;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e58a8,
                     *(MessageLite **)(PTR_extension_007e58a8 + 8));
  lVar1 = *(long *)PTR_default_instance__007e5f30;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar1 = lVar2;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x78),*(Program **)(lVar1 + 0x10));
  return;
}


