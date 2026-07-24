/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038c5fc
 * Function: Caver::ProjectileControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ProjectileControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProjectileControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ProjectileControllerComponent::LoadFromProtobufMessage
          (ProjectileControllerComponent *this,Component *param_1)

{
  uint uVar1;
  long lVar2;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7df8,
                     *(MessageLite **)(PTR_extension_007e7df8 + 8));
  uVar1 = *(uint *)(lVar2 + 0x10);
  if ((uVar1 & 1) != 0) {
    this[0x70] = *(ProjectileControllerComponent *)(lVar2 + 0xc);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    this[0x71] = *(ProjectileControllerComponent *)(lVar2 + 0xd);
  }
  return;
}


