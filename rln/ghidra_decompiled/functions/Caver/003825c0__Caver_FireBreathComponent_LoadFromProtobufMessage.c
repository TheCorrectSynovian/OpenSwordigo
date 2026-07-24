/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003825c0
 * Function: Caver::FireBreathComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(FireBreathComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::FireBreathComponent::LoadFromProtobufMessage(FireBreathComponent *this,Component *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *pFVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  SpellComponent::LoadFromProtobufMessage((SpellComponent *)this,param_1);
  auVar8 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6268,
                      *(MessageLite **)(PTR_extension_007e6268 + 8));
  pFVar6 = auVar8._8_8_;
  lVar4 = auVar8._0_8_;
  if (*(int *)(this + 200) != *(int *)(lVar4 + 0xc)) {
    plVar5 = *(long **)(this + 0xd0);
    *(int *)(this + 200) = *(int *)(lVar4 + 0xc);
    *(undefined8 *)(this + 0xd0) = 0;
    if ((plVar5 != (long *)0x0) &&
       (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar5 + 8))();
      pFVar6 = extraout_x1;
    }
  }
  if (*(int *)(this + 0xe0) != *(int *)(lVar4 + 0x10)) {
    plVar5 = *(long **)(this + 0xe8);
    *(int *)(this + 0xe0) = *(int *)(lVar4 + 0x10);
    *(undefined8 *)(this + 0xe8) = 0;
    if ((plVar5 != (long *)0x0) &&
       (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar5 + 8))();
      pFVar6 = extraout_x1_00;
    }
  }
  lVar1 = *(long *)PTR_default_instance__007e77e8;
  if (*(long *)(lVar4 + 0x18) != 0) {
    lVar1 = lVar4;
  }
  FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x18),pFVar6);
  *(undefined8 *)(this + 0xf8) = uStack_40;
  *(undefined8 *)(this + 0xf0) = local_48;
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


