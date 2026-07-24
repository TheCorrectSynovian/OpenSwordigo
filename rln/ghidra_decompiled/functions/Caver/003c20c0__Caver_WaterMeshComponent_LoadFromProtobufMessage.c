/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c20c0
 * Function: Caver::WaterMeshComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(WaterMeshComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::WaterMeshComponent::LoadFromProtobufMessage(WaterMeshComponent *this,Component *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *pFVar7;
  FloatColor *extraout_x1_01;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar9 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e71e0,
                      *(MessageLite **)(PTR_extension_007e71e0 + 8));
  pFVar7 = auVar9._8_8_;
  lVar5 = auVar9._0_8_;
  if (*(int *)(this + 0x78) != *(int *)(lVar5 + 0xc)) {
    plVar6 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar5 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar6 + 8))();
      pFVar7 = extraout_x1;
    }
  }
  if (*(int *)(this + 0xa0) != *(int *)(lVar5 + 0x10)) {
    plVar6 = *(long **)(this + 0xa8);
    *(int *)(this + 0xa0) = *(int *)(lVar5 + 0x10);
    *(undefined8 *)(this + 0xa8) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar2 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar6 + 8))();
      pFVar7 = extraout_x1_00;
    }
  }
  puVar4 = PTR_default_instance__007e6e28;
  lVar1 = *(long *)PTR_default_instance__007e6e28;
  if (*(long *)(lVar5 + 0x18) != 0) {
    lVar1 = lVar5;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x18),pFVar7);
  *(undefined8 *)(this + 0xb8) = uStack_40;
  *(undefined8 *)(this + 0xb0) = local_48;
  lVar1 = *(long *)puVar4;
  if (*(long *)(lVar5 + 0x20) != 0) {
    lVar1 = lVar5;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x20),extraout_x1_01);
  *(undefined8 *)(this + 200) = uStack_40;
  *(undefined8 *)(this + 0xc0) = local_48;
  if (*(long *)(lVar3 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


