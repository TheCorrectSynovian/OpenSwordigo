/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca878
 * Function: Caver::WeaponGlowComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(WeaponGlowComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::WeaponGlowComponent::LoadFromProtobufMessage(WeaponGlowComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  FloatColor *extraout_x1;
  FloatColor *pFVar7;
  FloatColor *extraout_x1_00;
  FloatColor *extraout_x1_01;
  undefined1 auVar8 [16];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  GlowComponent::LoadFromProtobufMessage((GlowComponent *)this,param_1);
  auVar8 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4d00,
                      *(MessageLite **)(PTR_extension_007e4d00 + 8));
  pFVar7 = auVar8._8_8_;
  lVar5 = auVar8._0_8_;
  if (*(int *)(this + 0x90) != *(int *)(lVar5 + 0xc)) {
    plVar6 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(lVar5 + 0xc);
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
      pFVar7 = extraout_x1;
    }
  }
  uVar2 = *(uint *)(lVar5 + 0x24);
  if ((uVar2 >> 1 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e5698;
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar1 = lVar5;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x10),pFVar7);
    *(undefined8 *)(this + 0xac) = uStack_40;
    *(undefined8 *)(this + 0xa4) = local_48;
    uVar2 = *(uint *)(lVar5 + 0x24);
    pFVar7 = extraout_x1_00;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e5698;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar1 = lVar5;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x18),pFVar7);
    Color::FromFloatColor((Color *)&local_48,extraout_x1_01);
    *(undefined4 *)(this + 0xb4) = local_4c;
    uVar2 = *(uint *)(lVar5 + 0x24);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0xf4) = *(undefined4 *)(lVar5 + 0x20);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


