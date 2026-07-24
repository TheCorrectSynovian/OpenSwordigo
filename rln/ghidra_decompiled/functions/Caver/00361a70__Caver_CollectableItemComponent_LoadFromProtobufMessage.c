/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00361a70
 * Function: Caver::CollectableItemComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(CollectableItemComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::CollectableItemComponent::LoadFromProtobufMessage
          (CollectableItemComponent *this,Component *param_1)

{
  long lVar1;
  long lVar2;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e5498,
                     *(MessageLite **)(PTR_extension_007e5498 + 8));
  if (((*(byte *)(lVar2 + 0x38) & 1) != 0) && (*(uint *)(lVar2 + 0xc) < 6)) {
    *(uint *)(this + 0x70) = *(uint *)(lVar2 + 0xc);
  }
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(lVar2 + 0x10);
  FUN_0066a6a8(this + 0x78,*(undefined8 *)(lVar2 + 0x18));
  FUN_0066a6a8(this + 0x80,*(undefined8 *)(lVar2 + 0x20));
  this[0x88] = *(CollectableItemComponent *)(lVar2 + 0x28);
  lVar1 = *(long *)PTR_default_instance__007e5fb8;
  if (*(long *)(lVar2 + 0x30) != 0) {
    lVar1 = lVar2;
  }
  Program::LoadFromProtobufMessage((Program *)(this + 0x90),*(Program **)(lVar1 + 0x30));
  return;
}


