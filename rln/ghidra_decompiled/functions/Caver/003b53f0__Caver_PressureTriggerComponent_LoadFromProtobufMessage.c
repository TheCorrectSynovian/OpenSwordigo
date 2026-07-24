/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b53f0
 * Function: Caver::PressureTriggerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(PressureTriggerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::PressureTriggerComponent::LoadFromProtobufMessage
          (PressureTriggerComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e79f0,
                     *(MessageLite **)(PTR_extension_007e79f0 + 8));
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(lVar3 + 0xc);
  uVar2 = *(uint *)(lVar3 + 0x28);
  if ((uVar2 >> 1 & 1) != 0) {
    this[0xd8] = *(PressureTriggerComponent *)(lVar3 + 0x10);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e4948;
    if (*(long *)(lVar3 + 0x18) != 0) {
      lVar1 = lVar3;
    }
    Program::LoadFromProtobufMessage((Program *)(this + 0x88),*(Program **)(lVar1 + 0x18));
    uVar2 = *(uint *)(lVar3 + 0x28);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e4948;
    if (*(long *)(lVar3 + 0x20) != 0) {
      lVar1 = lVar3;
    }
    Program::LoadFromProtobufMessage((Program *)(this + 0xb0),*(Program **)(lVar1 + 0x20));
    return;
  }
  return;
}


