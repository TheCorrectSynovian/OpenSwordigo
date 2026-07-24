/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c7dac
 * Function: Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(SwingableWeaponControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage(Caver::Proto::Component*) const
    */

void __thiscall
Caver::SwingableWeaponControllerComponent::SaveToProtobufMessage
          (SwingableWeaponControllerComponent *this,Component *param_1)

{
  int iVar1;
  undefined *puVar2;
  MessageLite *pMVar3;
  long lVar4;
  long *plVar5;
  
  Component::SaveToProtobufMessage((Component *)this,param_1);
  iVar1 = *(int *)PTR_extension_007e7760;
  pMVar3 = (MessageLite *)Proto::SwingableWeaponControllerComponent::default_instance();
  lVar4 = google::protobuf::internal::ExtensionSet::MutableMessage
                    ((ExtensionSet *)(param_1 + 8),iVar1,'\v',pMVar3,(FieldDescriptor *)0x0);
  puVar2 = PTR__default_controlling_bone_name__007e7410;
  plVar5 = *(long **)(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(this + 0x78);
  *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 3;
  if (plVar5 == (long *)puVar2) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(lVar4 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x88);
  puVar2 = PTR__default_weapon_template_name__007e78e0;
  if (*(long *)(*(long *)(this + 0x90) + -0x18) != 0) {
    plVar5 = *(long **)(lVar4 + 0x18);
    *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 4;
    if (plVar5 == (long *)puVar2) {
      plVar5 = operator_new(8);
      *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(lVar4 + 0x18) = plVar5;
    }
    FUN_0066a6a8(plVar5,this + 0x90);
  }
  return;
}


