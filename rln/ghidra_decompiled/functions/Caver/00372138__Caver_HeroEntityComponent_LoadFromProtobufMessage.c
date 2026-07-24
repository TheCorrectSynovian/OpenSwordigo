/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372138
 * Function: Caver::HeroEntityComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(HeroEntityComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::HeroEntityComponent::LoadFromProtobufMessage(HeroEntityComponent *this,Component *param_1)

{
  long lVar1;
  long lVar2;
  
  EntityComponent::LoadFromProtobufMessage((EntityComponent *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7738,
                     *(MessageLite **)(PTR_extension_007e7738 + 8));
  lVar1 = *(long *)PTR_default_instance__007e4d60;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar1 = lVar2;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x150),*(Program **)(lVar1 + 0x10));
  return;
}


