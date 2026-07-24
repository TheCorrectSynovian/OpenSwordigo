/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00380a04
 * Function: Caver::PhysicsPlatformComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(PhysicsPlatformComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::PhysicsPlatformComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::PhysicsPlatformComponent::LoadFromProtobufMessage
          (PhysicsPlatformComponent *this,Component *param_1)

{
  uint uVar1;
  long lVar2;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4c88,
                     *(MessageLite **)(PTR_extension_007e4c88 + 8));
  uVar1 = *(uint *)(lVar2 + 0x1c);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(lVar2 + 0xc);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(lVar2 + 0x10);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(lVar2 + 0x14);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0xa0) = *(undefined4 *)(lVar2 + 0x18);
  }
  return;
}


