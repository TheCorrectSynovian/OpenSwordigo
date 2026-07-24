/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033f538
 * Function: Caver::TouchableComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(TouchableComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::TouchableComponent::LoadFromProtobufMessage(TouchableComponent *this,Component *param_1)

{
  long lVar1;
  long lVar2;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7388,
                     *(MessageLite **)(PTR_extension_007e7388 + 8));
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(lVar2 + 0xc);
  lVar1 = *(long *)PTR_default_instance__007e5f98;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar1 = lVar2;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x80),*(Program **)(lVar1 + 0x10));
  return;
}


