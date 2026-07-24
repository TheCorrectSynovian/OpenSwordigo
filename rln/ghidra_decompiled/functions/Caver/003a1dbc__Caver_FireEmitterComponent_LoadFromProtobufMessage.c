/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1dbc
 * Function: Caver::FireEmitterComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(FireEmitterComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::FireEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::FireEmitterComponent::LoadFromProtobufMessage(FireEmitterComponent *this,Component *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  FloatColor *extraout_x1;
  FloatColor *pFVar8;
  FloatColor *extraout_x1_00;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar13 = google::protobuf::internal::ExtensionSet::GetMessage
                      ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7f00,
                       *(MessageLite **)(PTR_extension_007e7f00 + 8));
  pFVar8 = auVar13._8_8_;
  lVar6 = auVar13._0_8_;
  if (*(int *)(this + 0x78) != *(int *)(lVar6 + 0xc)) {
    plVar7 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar6 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar7 != (long *)0x0) &&
       (iVar4 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*plVar7 + 8))();
      pFVar8 = extraout_x1;
    }
  }
  if (*(int *)(this + 0x90) != *(int *)(lVar6 + 0x10)) {
    plVar7 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(lVar6 + 0x10);
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar7 != (long *)0x0) &&
       (iVar4 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*plVar7 + 8))();
      uVar1 = *(uint *)(lVar6 + 0x40);
      pFVar8 = extraout_x1_00;
      goto joined_r0x003a1e74;
    }
  }
  uVar1 = *(uint *)(lVar6 + 0x40);
joined_r0x003a1e74:
  if ((uVar1 >> 2 & 1) == 0) {
    lVar10 = *(long *)PTR_default_instance__007e7b98;
    lVar12 = lVar10;
    if (*(long *)(lVar6 + 0x20) != 0) {
      lVar12 = lVar6;
    }
    lVar12 = *(long *)(lVar12 + 0x20);
    uVar11 = *(undefined4 *)(lVar12 + 0x14);
  }
  else {
    uVar11 = 0;
    lVar10 = *(long *)PTR_default_instance__007e7b98;
    lVar12 = lVar10;
    if (*(long *)(lVar6 + 0x18) != 0) {
      lVar12 = lVar6;
    }
    lVar12 = *(long *)(lVar12 + 0x18);
  }
  uVar2 = *(undefined4 *)(lVar12 + 0xc);
  uVar3 = *(undefined4 *)(lVar12 + 0x10);
  *(undefined4 *)(this + 0xbc) = uVar11;
  *(undefined4 *)(this + 0xb4) = uVar2;
  *(undefined4 *)(this + 0xb8) = uVar3;
  if ((uVar1 >> 4 & 1) != 0) {
    if (*(long *)(lVar6 + 0x28) != 0) {
      lVar10 = lVar6;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar10 + 0x28),pFVar8);
    *(undefined8 *)(this + 200) = uStack_40;
    *(undefined8 *)(this + 0xc0) = local_48;
    uVar1 = *(uint *)(lVar6 + 0x40);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    *(undefined4 *)(this + 0xa0) = *(undefined4 *)(lVar6 + 0x30);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    *(undefined4 *)(this + 0xa4) = *(undefined4 *)(lVar6 + 0x34);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    lVar12 = *(long *)PTR_default_instance__007e7b98;
    if (*(long *)(lVar6 + 0x38) != 0) {
      lVar12 = lVar6;
    }
    uVar11 = *(undefined4 *)(*(long *)(lVar12 + 0x38) + 0x14);
    *(undefined8 *)(this + 0xa8) = *(undefined8 *)(*(long *)(lVar12 + 0x38) + 0xc);
    *(undefined4 *)(this + 0xb0) = uVar11;
  }
  if (*(long *)(lVar5 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


