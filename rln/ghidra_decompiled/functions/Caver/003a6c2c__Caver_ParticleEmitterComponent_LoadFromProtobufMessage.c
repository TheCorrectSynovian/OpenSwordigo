/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a6c2c
 * Function: Caver::ParticleEmitterComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ParticleEmitterComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::ParticleEmitterComponent::LoadFromProtobufMessage
          (ParticleEmitterComponent *this,Component *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ParticleEmitterComponent *pPVar9;
  undefined8 local_58;
  long *local_50;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar4 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e6aa8,
                     *(MessageLite **)(PTR_extension_007e6aa8 + 8));
  if (*(int *)(this + 0x110) != *(int *)(lVar4 + 0xc)) {
    plVar5 = *(long **)(this + 0x118);
    *(int *)(this + 0x110) = *(int *)(lVar4 + 0xc);
    *(undefined8 *)(this + 0x118) = 0;
    if ((plVar5 != (long *)0x0) &&
       (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (*(int *)(this + 0x128) != *(int *)(lVar4 + 0x10)) {
    plVar5 = *(long **)(this + 0x130);
    *(int *)(this + 0x128) = *(int *)(lVar4 + 0x10);
    *(undefined8 *)(this + 0x130) = 0;
    if ((plVar5 != (long *)0x0) &&
       (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  this[0x140] = *(ParticleEmitterComponent *)(lVar4 + 0x14);
  uVar6 = *(uint *)(lVar4 + 0x88);
  if ((uVar6 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x144) = *(undefined4 *)(lVar4 + 0x18);
    uVar6 = *(uint *)(lVar4 + 0x88);
  }
  this[0x169] = *(ParticleEmitterComponent *)(lVar4 + 0x1c);
  if ((uVar6 >> 7 & 1) != 0) {
    lVar8 = *(long *)PTR_default_instance__007e5ba8;
    if (*(long *)(lVar4 + 0x78) != 0) {
      lVar8 = lVar4;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0x78) + 0x14);
    *(undefined8 *)(this + 0x16c) = *(undefined8 *)(*(long *)(lVar8 + 0x78) + 0xc);
    *(undefined4 *)(this + 0x174) = uVar1;
  }
  if ((uVar6 >> 8 & 1) != 0) {
    lVar8 = *(long *)PTR_default_instance__007e5ba8;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar8 = lVar4;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar8 + 0x80) + 0x14);
    *(undefined8 *)(this + 0x188) = *(undefined8 *)(*(long *)(lVar8 + 0x80) + 0xc);
    *(undefined4 *)(this + 400) = uVar1;
  }
  iVar2 = *(int *)(lVar4 + 0x28);
  *(int *)(this + 0x70) = iVar2;
  if (0 < iVar2) {
    lVar8 = 0;
    pPVar9 = this + 0x78;
    do {
      (**(code **)(*(long *)pPVar9 + 0x10))
                (pPVar9,*(undefined4 *)(*(long *)(lVar4 + 0x20) + lVar8 * 4));
      lVar8 = lVar8 + 1;
      pPVar9 = pPVar9 + 0x18;
    } while (lVar8 < *(int *)(this + 0x70));
  }
  if (0 < *(int *)(lVar4 + 0x48)) {
    ParticleEmitter::LoadFromProtobufMessage((ParticleEmitter *)**(undefined8 **)(lVar4 + 0x40));
    if (local_50 != (long *)0x0) {
      local_50[1] = local_50[1] + 1;
    }
    plVar5 = *(long **)(this + 0x160);
    *(undefined8 *)(this + 0x158) = local_58;
    *(long **)(this + 0x160) = local_50;
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if ((local_50 != (long *)0x0) &&
       (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar4 = local_50[2];
      local_50[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


