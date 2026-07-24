/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c3fbc
 * Function: Caver::SwingableWeaponComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(SwingableWeaponComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::SwingableWeaponComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::SwingableWeaponComponent::LoadFromProtobufMessage
          (SwingableWeaponComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  FloatColor *pFVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar9 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e4b38,
                      *(MessageLite **)(PTR_extension_007e4b38 + 8));
  pFVar7 = auVar9._8_8_;
  lVar5 = auVar9._0_8_;
  if (*(int *)(this + 0x80) != *(int *)(lVar5 + 0xc)) {
    plVar6 = *(long **)(this + 0x88);
    *(int *)(this + 0x80) = *(int *)(lVar5 + 0xc);
    *(undefined8 *)(this + 0x88) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
      pFVar7 = extraout_x1;
    }
  }
  if (*(int *)(this + 0x98) != *(int *)(lVar5 + 0x10)) {
    plVar6 = *(long **)(this + 0xa0);
    *(int *)(this + 0x98) = *(int *)(lVar5 + 0x10);
    *(undefined8 *)(this + 0xa0) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
      pFVar7 = extraout_x1_00;
    }
  }
  uVar2 = *(uint *)(lVar5 + 0x44);
  if ((uVar2 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0x19c) = *(undefined4 *)(lVar5 + 0x14);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(lVar5 + 0x18);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(lVar5 + 0x1c);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e4b88;
    if (*(long *)(lVar5 + 0x20) != 0) {
      lVar1 = lVar5;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x20),pFVar7);
    *(undefined8 *)(this + 0x1b0) = uStack_40;
    *(undefined8 *)(this + 0x1a8) = local_48;
    uVar2 = *(uint *)(lVar5 + 0x44);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    *(undefined4 *)(this + 0x1bc) = *(undefined4 *)(lVar5 + 0x28);
  }
  if (*(int *)(this + 0xd0) != *(int *)(lVar5 + 0x2c)) {
    plVar6 = *(long **)(this + 0xd8);
    *(int *)(this + 0xd0) = *(int *)(lVar5 + 0x2c);
    *(undefined8 *)(this + 0xd8) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (*(int *)(this + 0xe8) != *(int *)(lVar5 + 0x30)) {
    plVar6 = *(long **)(this + 0xf0);
    *(int *)(this + 0xe8) = *(int *)(lVar5 + 0x30);
    *(undefined8 *)(this + 0xf0) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (*(int *)(this + 0x100) != *(int *)(lVar5 + 0x34)) {
    plVar6 = *(long **)(this + 0x108);
    *(int *)(this + 0x100) = *(int *)(lVar5 + 0x34);
    *(undefined8 *)(this + 0x108) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (*(int *)(this + 0x118) != *(int *)(lVar5 + 0x38)) {
    plVar6 = *(long **)(this + 0x120);
    *(int *)(this + 0x118) = *(int *)(lVar5 + 0x38);
    *(undefined8 *)(this + 0x120) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (*(int *)(this + 0x130) != *(int *)(lVar5 + 0x3c)) {
    plVar6 = *(long **)(this + 0x138);
    *(int *)(this + 0x130) = *(int *)(lVar5 + 0x3c);
    *(undefined8 *)(this + 0x138) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (*(int *)(this + 0x148) != *(int *)(lVar5 + 0x40)) {
    plVar6 = *(long **)(this + 0x150);
    *(int *)(this + 0x148) = *(int *)(lVar5 + 0x40);
    *(undefined8 *)(this + 0x150) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


