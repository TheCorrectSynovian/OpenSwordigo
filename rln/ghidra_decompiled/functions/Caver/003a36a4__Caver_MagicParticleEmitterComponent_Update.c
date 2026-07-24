/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a36a4
 * Function: Caver::MagicParticleEmitterComponent::Update
 * Signature: undefined __thiscall Update(MagicParticleEmitterComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicParticleEmitterComponent::Update(float) */

void __thiscall
Caver::MagicParticleEmitterComponent::Update(MagicParticleEmitterComponent *this,float param_1)

{
  ParticleSystem *this_00;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  Vector2 *this_01;
  MagicParticleEmitterComponent *pMVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_d8;
  int local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  
  fVar6 = DAT_006895f8;
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar15 = *(float *)(this + 0x1d8) + param_1;
  *(float *)(this + 0x1d8) = fVar15;
  puVar11 = PTR_FASTRANDOM_MAX_007e4b68;
  uVar10 = DAT_00689610;
  uVar9 = _UNK_00689608;
  uVar8 = _DAT_00689600;
  fVar7 = DAT_006895fc;
  dVar5 = DAT_00684790;
  uVar4 = _UNK_00683808;
  uVar3 = _DAT_00683800;
  if (fVar6 <= fVar15) {
    uVar17 = NEON_fmov(0x40f00000,4);
    do {
      *(float *)(this + 0x1d8) = fVar15 + fVar7;
      local_d0 = 0;
      fStack_cc = 0.0;
      fStack_c8 = 0.0;
      local_c4 = 0;
      local_c0 = 0;
      local_b8 = 0xffffffff00000000;
      uStack_a8 = uVar4;
      local_b0 = uVar3;
      local_90 = 0;
      uStack_98 = uVar9;
      local_a0 = uVar8;
      local_d0 = ParticleEmitterComponent::RandomParticleType((ParticleEmitterComponent *)this);
      this_01 = (Vector2 *)fastrandom();
      Vector2::FromAngle(this_01,(float)((double)((float)(int)this_01 / (float)*(int *)puVar11) *
                                        dVar5));
      uVar16 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
      local_c4 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
      fVar15 = (float)((ulong)local_d8 >> 0x20);
      local_c0 = CONCAT44(fVar15 * 35.0,(float)local_d8 * 35.0);
      fStack_cc = ((float)uVar16 + (float)uVar10) - (float)local_d8 * (float)uVar17;
      fStack_c8 = ((float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar10 >> 0x20)) -
                  fVar15 * (float)((ulong)uVar17 >> 0x20);
      local_b8 = local_b8 & 0xffffffff00000000;
      iVar12 = fastrandom();
      uStack_98 = CONCAT44(0x3f000000,(undefined4)uStack_98);
      local_b0 = CONCAT44(local_b0._4_4_,
                          (float)((double)((float)iVar12 / (float)*(int *)puVar11) * dVar5));
      if (-1 < local_d0) {
        pMVar13 = *(MagicParticleEmitterComponent **)(this + 0x118);
        if (pMVar13 == (MagicParticleEmitterComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this);
          pMVar13 = *(MagicParticleEmitterComponent **)(this + 0x118);
          if (pMVar13 != (MagicParticleEmitterComponent *)0x0) goto LAB_003a380c;
LAB_003a3834:
          this_00 = *(ParticleSystem **)(this + 0x148);
          plVar1 = *(long **)(this + 0x150);
        }
        else {
          if (pMVar13 == (MagicParticleEmitterComponent *)0x0) goto LAB_003a3834;
LAB_003a380c:
          if (pMVar13 == this) goto LAB_003a3834;
          this_00 = *(ParticleSystem **)(pMVar13 + 0x148);
          plVar1 = *(long **)(pMVar13 + 0x150);
        }
        if (plVar1 != (long *)0x0) {
          plVar1[1] = plVar1[1] + 1;
        }
        ParticleSystem::AddParticle(this_00,(Particle *)&local_d0);
        if ((plVar1 != (long *)0x0) &&
           (lVar14 = plVar1[1], plVar1[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar14 = plVar1[2];
          plVar1[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
      }
      fVar15 = *(float *)(this + 0x1d8);
    } while (fVar6 <= fVar15);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


