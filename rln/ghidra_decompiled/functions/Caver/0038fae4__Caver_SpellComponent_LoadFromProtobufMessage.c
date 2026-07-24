/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038fae4
 * Function: Caver::SpellComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SpellComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SpellComponent::LoadFromProtobufMessage(SpellComponent *this,Component *param_1)

{
  long lVar1;
  long lVar2;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4ea8,
                     *(MessageLite **)(PTR_extension_007e4ea8 + 8));
  lVar1 = *(long *)PTR_default_instance__007e66b8;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar1 = lVar2;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x90),*(Program **)(lVar1 + 0x10));
  return;
}


