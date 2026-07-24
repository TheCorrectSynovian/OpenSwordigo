/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321cc8
 * Function: Caver::LightComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(LightComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::LightComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::LightComponent::LoadFromProtobufMessage(LightComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar8 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6668,
                      *(MessageLite **)(PTR_extension_007e6668 + 8));
  lVar6 = auVar8._0_8_;
  if (*(int *)(lVar6 + 0xc) - 1U < 4) {
    *(int *)(this + 0x70) = *(int *)(lVar6 + 0xc);
  }
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(lVar6 + 0x10);
  puVar5 = PTR_default_instance__007e5cc8;
  lVar1 = *(long *)PTR_default_instance__007e5cc8;
  if (*(long *)(lVar6 + 0x18) != 0) {
    lVar1 = lVar6;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x18),auVar8._8_8_);
  *(undefined8 *)(this + 0x80) = uStack_40;
  *(undefined8 *)(this + 0x78) = local_48;
  uVar2 = *(uint *)(lVar6 + 0x38);
  if ((uVar2 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(lVar6 + 0x20);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(lVar6 + 0x24);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(lVar6 + 0x28);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    lVar1 = *(long *)puVar5;
    if (*(long *)(lVar6 + 0x30) != 0) {
      lVar1 = lVar6;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar1 + 0x30) + 0x14);
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(*(long *)(lVar1 + 0x30) + 0xc);
    *(undefined4 *)(this + 0xa8) = uVar3;
  }
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


