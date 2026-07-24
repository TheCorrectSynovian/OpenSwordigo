/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a69fc
 * Function: Caver::ParticleEmitterComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ParticleEmitterComponent * this, ParticleEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*) */

void __thiscall
Caver::ParticleEmitterComponent::InitWithComponent
          (ParticleEmitterComponent *this,ParticleEmitterComponent *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ParticleEmitterComponent *pPVar7;
  ParticleEmitterComponent *pPVar8;
  code *pcVar9;
  undefined8 local_68;
  long *local_60;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  this[0x140] = param_1[0x140];
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  this[0x169] = param_1[0x169];
  *(undefined8 *)(this + 0x16c) = *(undefined8 *)(param_1 + 0x16c);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined8 *)(this + 0x188) = *(undefined8 *)(param_1 + 0x188);
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 400);
  iVar1 = *(int *)(param_1 + 0x70);
  *(int *)(this + 0x70) = iVar1;
  if (0 < iVar1) {
    lVar6 = 0;
    pPVar7 = this + 0x78;
    pPVar8 = param_1 + 0x78;
    do {
      pcVar9 = *(code **)(*(long *)pPVar7 + 0x10);
      uVar3 = (**(code **)(*(long *)pPVar8 + 8))(pPVar8);
      (*pcVar9)(pPVar7,uVar3);
      lVar6 = lVar6 + 1;
      pPVar7 = pPVar7 + 0x18;
      pPVar8 = pPVar8 + 0x18;
    } while (lVar6 < *(int *)(this + 0x70));
  }
  if (*(ParticleEmitter **)(param_1 + 0x158) != (ParticleEmitter *)0x0) {
    ParticleEmitter::Clone(*(ParticleEmitter **)(param_1 + 0x158));
    if (local_60 != (long *)0x0) {
      local_60[1] = local_60[1] + 1;
    }
    plVar5 = *(long **)(this + 0x160);
    *(undefined8 *)(this + 0x158) = local_68;
    *(long **)(this + 0x160) = local_60;
    if ((plVar5 != (long *)0x0) && (lVar6 = plVar5[1], plVar5[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar6 = plVar5[2];
      plVar5[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if ((local_60 != (long *)0x0) &&
       (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      lVar6 = local_60[2];
      local_60[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))(local_60);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


