/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c7d10
 * Function: Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SwingableWeaponControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component
   const&) */

void __thiscall
Caver::SwingableWeaponControllerComponent::LoadFromProtobufMessage
          (SwingableWeaponControllerComponent *this,Component *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar2 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7760,
                     *(MessageLite **)(PTR_extension_007e7760 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar2 + 0xc)) {
    plVar3 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar2 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  FUN_0066a6a8(this + 0x88,*(undefined8 *)(lVar2 + 0x10));
  if ((*(byte *)(lVar2 + 0x20) >> 2 & 1) != 0) {
    FUN_0066a6a8(this + 0x90,*(undefined8 *)(lVar2 + 0x18));
  }
  return;
}


