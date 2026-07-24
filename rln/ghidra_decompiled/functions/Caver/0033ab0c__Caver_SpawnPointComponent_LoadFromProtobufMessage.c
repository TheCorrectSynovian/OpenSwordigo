/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033ab0c
 * Function: Caver::SpawnPointComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SpawnPointComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpawnPointComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SpawnPointComponent::LoadFromProtobufMessage(SpawnPointComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e68d0,
                     *(MessageLite **)(PTR_extension_007e68d0 + 8));
  puVar3 = PTR_default_instance__007e5048;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(lVar4 + 0xc);
  lVar1 = *(long *)puVar3;
  if (*(long *)(lVar4 + 0x10) != 0) {
    lVar1 = lVar4;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x14);
  *(undefined8 *)(this + 0x74) = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0xc);
  *(undefined4 *)(this + 0x7c) = uVar2;
  return;
}


