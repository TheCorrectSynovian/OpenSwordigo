/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003546ac
 * Function: Caver::BreakableObjectComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(BreakableObjectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BreakableObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::BreakableObjectComponent::LoadFromProtobufMessage
          (BreakableObjectComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4f70,
                     *(MessageLite **)(PTR_extension_007e4f70 + 8));
  this[0x71] = *(BreakableObjectComponent *)(lVar3 + 0xc);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x20) >> 2 & 1) != 0) {
    uVar2 = SpecialDamageTypeFromProtobufValue(*(undefined4 *)(lVar3 + 0x14));
    *(undefined4 *)(this + 0x78) = uVar2;
  }
  lVar1 = *(long *)PTR_default_instance__007e6f48;
  if (*(long *)(lVar3 + 0x18) != 0) {
    lVar1 = lVar3;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x80),*(Program **)(lVar1 + 0x18));
  return;
}


