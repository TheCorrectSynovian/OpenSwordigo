/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e674
 * Function: Caver::BlendAnimationComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(BlendAnimationComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::BlendAnimationComponent::LoadFromProtobufMessage
          (BlendAnimationComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar1 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e47c8,
                     *(MessageLite **)(PTR_extension_007e47c8 + 8));
  uVar2 = *(uint *)(lVar1 + 0x1c);
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(lVar1 + 0xc);
    uVar2 = *(uint *)(lVar1 + 0x1c);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(lVar1 + 0x10);
    uVar2 = *(uint *)(lVar1 + 0x1c);
  }
  lVar3 = *(long *)(this + 0x78);
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar1 + 0x14);
  if ((uVar2 >> 3 & 1) != 0) {
    *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(lVar1 + 0x18);
  }
  return;
}


