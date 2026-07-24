/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00386d94
 * Function: Caver::MagicExplosionComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(MagicExplosionComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicExplosionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::MagicExplosionComponent::LoadFromProtobufMessage
          (MagicExplosionComponent *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  FloatColor *extraout_x1;
  FloatColor *pFVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  auVar9 = google::protobuf::internal::ExtensionSet::GetMessage
                     ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e7c20,
                      *(MessageLite **)(PTR_extension_007e7c20 + 8));
  pFVar7 = auVar9._8_8_;
  lVar5 = auVar9._0_8_;
  if (*(int *)(this + 0x78) != *(int *)(lVar5 + 0xc)) {
    plVar6 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar5 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar6 != (long *)0x0) &&
       (iVar3 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar3, iVar3 == 0)) {
      (**(code **)(*plVar6 + 8))();
      pFVar7 = extraout_x1;
    }
  }
  uVar2 = *(uint *)(lVar5 + 0x24);
  if ((uVar2 >> 1 & 1) != 0) {
    lVar1 = *(long *)PTR_default_instance__007e5e18;
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar1 = lVar5;
    }
    FloatColorFromProtobufMessage(*(Caver **)(lVar1 + 0x10),pFVar7);
    *(undefined8 *)(this + 0xb8) = uStack_40;
    *(undefined8 *)(this + 0xb0) = local_48;
    uVar2 = *(uint *)(lVar5 + 0x24);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(lVar5 + 0x18);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0xe4) = *(undefined4 *)(lVar5 + 0x1c);
  }
  if (*(int *)(this + 0x90) != *(int *)(lVar5 + 0x20)) {
    plVar6 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(lVar5 + 0x20);
    *(undefined8 *)(this + 0x98) = 0;
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


