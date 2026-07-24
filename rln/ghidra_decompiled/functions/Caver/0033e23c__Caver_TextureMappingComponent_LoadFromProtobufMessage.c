/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033e23c
 * Function: Caver::TextureMappingComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(TextureMappingComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::TextureMappingComponent::LoadFromProtobufMessage
          (TextureMappingComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6e38,
                     *(MessageLite **)(PTR_extension_007e6e38 + 8));
  uVar2 = *(uint *)(lVar3 + 0x28);
  if ((uVar2 & 1) != 0) {
    FUN_0066a6a8(this + 0x70,*(undefined8 *)(lVar3 + 0x10));
    uVar2 = *(uint *)(lVar3 + 0x28);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(lVar3 + 0x18);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e7550;
    if (*(long *)(lVar3 + 0x20) != 0) {
      lVar1 = lVar3;
    }
    *(undefined8 *)(this + 0x84) = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0xc);
  }
  return;
}


