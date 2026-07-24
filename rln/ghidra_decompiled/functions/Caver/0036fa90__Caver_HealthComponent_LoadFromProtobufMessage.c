/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036fa90
 * Function: Caver::HealthComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(HealthComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::HealthComponent::LoadFromProtobufMessage(HealthComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7648,
                     *(MessageLite **)(PTR_extension_007e7648 + 8));
  uVar2 = *(undefined4 *)(lVar4 + 0xc);
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar2;
  *(undefined4 *)(this + 0x84) = uVar2;
  iVar3 = *(int *)(lVar4 + 0x10);
  if ((iVar3 == 1) || (iVar3 == 0)) {
    *(int *)(this + 0x88) = iVar3;
  }
  if ((*(byte *)(lVar4 + 0x20) >> 2 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e6bf0;
    if (*(long *)(lVar4 + 0x18) != 0) {
      lVar1 = lVar4;
    }
    *(undefined8 *)(this + 0x8c) = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0xc);
  }
  return;
}


