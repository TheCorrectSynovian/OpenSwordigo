/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb43c
 * Function: Caver::WeaponGlowComponent::UpdateParticleEmitter
 * Signature: undefined __thiscall UpdateParticleEmitter(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponGlowComponent::UpdateParticleEmitter() */

void __thiscall Caver::WeaponGlowComponent::UpdateParticleEmitter(WeaponGlowComponent *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ParticleEmitterComponent *this_00;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = *(ParticleEmitterComponent **)(this + 0x98);
  if (this_00 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    this_00 = *(ParticleEmitterComponent **)(this + 0x98);
    if (this_00 == (ParticleEmitterComponent *)0x0) goto LAB_003cb5b4;
  }
  fVar10 = *(float *)(this + 0xec);
  local_78 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xa4) >> 0x20) * fVar10,
                      (float)*(undefined8 *)(this + 0xa4) * fVar10);
  uStack_70 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20) * fVar10,
                       (float)*(undefined8 *)(this + 0xac) * fVar10);
  ParticleEmitterComponent::SetColor(this_00,(FloatColor *)&local_78);
  lVar7 = *(long *)(this + 0x98);
  if (lVar7 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar7 = *(long *)(this + 0x98);
  }
  plVar1 = *(long **)(lVar7 + 0x158);
  plVar2 = *(long **)(lVar7 + 0x160);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  if ((plVar1 != (long *)0x0) &&
     (iVar4 = (**(code **)(*plVar1 + 0x10))(plVar1), fVar10 = DAT_006846c0, iVar4 == 5)) {
    fVar12 = *(float *)(this + 0xf0);
    lVar7 = plVar1[0x19];
    *(undefined4 *)((long)plVar1 + 0x3c) = 0;
    *(undefined4 *)(plVar1 + 8) = 0;
    *(float *)(plVar1 + 7) = fVar12 * fVar10;
    if (lVar7 == 0) {
      uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
      pvVar6 = operator_new__((ulong)uVar5 << 2);
      pvVar8 = (void *)plVar1[0x19];
      plVar1[0x19] = (long)pvVar6;
      if (pvVar8 != (void *)0x0) {
        operator_delete__(pvVar8);
      }
      if (uVar5 == 0) {
        lVar7 = plVar1[0x19];
      }
      else {
        uVar9 = 0;
        do {
          uVar11 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar9 & 0xffffffff);
          lVar7 = plVar1[0x19];
          *(undefined4 *)(lVar7 + uVar9 * 4) = uVar11;
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
      }
    }
    *(float *)(lVar7 + 0xc) = fVar12 + -15.0;
    fVar10 = *(float *)(this + 0xf4);
    if (lVar7 == 0) {
      uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
      pvVar6 = operator_new__((ulong)uVar5 << 2);
      pvVar8 = (void *)plVar1[0x19];
      plVar1[0x19] = (long)pvVar6;
      if (pvVar8 != (void *)0x0) {
        operator_delete__(pvVar8);
      }
      if (uVar5 == 0) {
        lVar7 = plVar1[0x19];
      }
      else {
        uVar9 = 0;
        do {
          uVar11 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar9 & 0xffffffff);
          lVar7 = plVar1[0x19];
          *(undefined4 *)(lVar7 + uVar9 * 4) = uVar11;
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
      }
    }
    *(float *)(lVar7 + 0x14) = ((fVar10 + -10.0) * 15.0) / 6.0 + 20.0;
    fVar10 = *(float *)(this + 0xf4);
    if (lVar7 == 0) {
      uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
      pvVar6 = operator_new__((ulong)uVar5 << 2);
      pvVar8 = (void *)plVar1[0x19];
      plVar1[0x19] = (long)pvVar6;
      if (pvVar8 != (void *)0x0) {
        operator_delete__(pvVar8);
      }
      if (uVar5 == 0) {
        lVar7 = plVar1[0x19];
      }
      else {
        uVar9 = 0;
        do {
          uVar11 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar9 & 0xffffffff);
          lVar7 = plVar1[0x19];
          *(undefined4 *)(lVar7 + uVar9 * 4) = uVar11;
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
      }
    }
    *(float *)(lVar7 + 0x20) = ((fVar10 + -10.0) * DAT_0068798c) / 6.0 + 0.25;
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar7 = plVar2[2];
    plVar2[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
LAB_003cb5b4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


