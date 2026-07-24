/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3b8c
 * Function: Caver::OrbitControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(OrbitControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrbitControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::OrbitControllerComponent::LoadFromProtobufMessage
          (OrbitControllerComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e69a8,
                     *(MessageLite **)(PTR_extension_007e69a8 + 8));
  lVar1 = *(long *)PTR_default_instance__007e68f8;
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar1 = lVar3;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x14);
  *(undefined8 *)(this + 0x7c) = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0xc);
  *(undefined4 *)(this + 0x84) = uVar2;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(lVar3 + 0x18);
  return;
}


