/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ad620
 * Function: Caver::PortalEffectComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(PortalEffectComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalEffectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::PortalEffectComponent::LoadFromProtobufMessage
          (PortalEffectComponent *this,Component *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *pFVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
  GlowComponent::LoadFromProtobufMessage((GlowComponent *)this,param_1);
  auVar10 = google::protobuf::internal::ExtensionSet::GetMessage
                      ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6200,
                       *(MessageLite **)(PTR_extension_007e6200 + 8));
  pFVar8 = auVar10._8_8_;
  lVar6 = auVar10._0_8_;
  if (*(int *)(this + 0x90) != *(int *)(lVar6 + 0xc)) {
    plVar7 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(lVar6 + 0xc);
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar7 != (long *)0x0) &&
       (iVar3 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar7 + 8))();
      pFVar8 = extraout_x1;
    }
  }
  if (*(int *)(this + 0xa8) != *(int *)(lVar6 + 0x10)) {
    plVar7 = *(long **)(this + 0xb0);
    *(int *)(this + 0xa8) = *(int *)(lVar6 + 0x10);
    *(undefined8 *)(this + 0xb0) = 0;
    if ((plVar7 != (long *)0x0) &&
       (iVar3 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar7 + 8))();
      pFVar8 = extraout_x1_00;
    }
  }
  puVar5 = PTR_default_instance__007e69c0;
  lVar1 = *(long *)PTR_default_instance__007e69c0;
  if (*(long *)(lVar6 + 0x18) != 0) {
    lVar1 = lVar6;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x18),pFVar8);
  *(undefined8 *)(this + 0xc0) = uStack_40;
  *(undefined8 *)(this + 0xb8) = local_48;
  lVar1 = *(long *)puVar5;
  if (*(long *)(lVar6 + 0x20) != 0) {
    lVar1 = lVar6;
  }
  uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x20) + 0x14);
  *(undefined8 *)(this + 200) = *(undefined8 *)(*(long *)(lVar1 + 0x20) + 0xc);
  *(undefined4 *)(this + 0xd0) = uVar2;
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


