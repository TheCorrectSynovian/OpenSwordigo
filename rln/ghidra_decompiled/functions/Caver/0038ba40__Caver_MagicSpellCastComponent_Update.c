/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038ba40
 * Function: Caver::MagicSpellCastComponent::Update
 * Signature: undefined __thiscall Update(MagicSpellCastComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicSpellCastComponent::Update(float) */

void __thiscall Caver::MagicSpellCastComponent::Update(MagicSpellCastComponent *this,float param_1)

{
  ComponentOutletBase *this_00;
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  SoundEffectComponent *pSVar9;
  ulong uVar10;
  Vector2 *this_01;
  ParticleEmitterComponent *this_02;
  long lVar11;
  long lVar12;
  ParticleEmitterComponent *this_03;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  pSVar9 = *(SoundEffectComponent **)(this + 0x98);
  if (pSVar9 == (SoundEffectComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    pSVar9 = *(SoundEffectComponent **)(this + 0x98);
    if (pSVar9 == (SoundEffectComponent *)0x0) goto LAB_0038bac0;
  }
  uVar10 = SoundEffectComponent::IsPlaying(pSVar9);
  if ((uVar10 & 1) == 0) {
    pSVar9 = *(SoundEffectComponent **)(this + 0x98);
    if (pSVar9 == (SoundEffectComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pSVar9 = *(SoundEffectComponent **)(this + 0x98);
    }
    SoundEffectComponent::Play(pSVar9);
  }
LAB_0038bac0:
  if ((*(long *)(this + 0x80) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) != 0)) {
    fVar4 = DAT_00688b44;
    fVar13 = *(float *)(this + 0xa0) + param_1;
    *(float *)(this + 0xa0) = fVar13;
    puVar6 = PTR_FASTRANDOM_MAX_007e4b68;
    fVar5 = DAT_00688b4c;
    dVar3 = DAT_00684790;
    fVar2 = DAT_00684318;
    if (fVar4 < fVar13) {
      lVar12 = *(long *)(this + 0x28);
      fVar14 = *(float *)(lVar12 + 0x78);
      fVar15 = *(float *)(lVar12 + 0x8c);
      uVar18 = *(undefined8 *)(lVar12 + 0x70);
      fVar19 = fVar15 * 10.0;
      this_00 = (ComponentOutletBase *)(this + 0x70);
      fVar16 = (fVar19 * DAT_00688b48) / DAT_00684318;
      do {
        *(float *)(this + 0xa0) = fVar13 + fVar5;
        this_01 = (Vector2 *)fastrandom();
        Vector2::FromAngle(this_01,(float)((double)((float)(int)this_01 / (float)*(int *)puVar6) *
                                          dVar3));
        iVar7 = fastrandom();
        fVar17 = ((float)iVar7 / (float)*(int *)puVar6) * 0.5 + 1.0;
        fVar13 = fVar19 * fVar17;
        local_b0 = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                            (float)((ulong)local_a0 >> 0x20) * fVar13,
                            (float)uVar18 + (float)local_a0 * fVar13);
        lVar12 = *(long *)(this + 0x28);
        local_a8 = fVar14 + 0.0;
        iVar7 = fastrandom();
        fVar17 = fVar16 * fVar17;
        local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0x68) >> 0x20) *
                            ((float)iVar7 / (float)*(int *)puVar6) -
                            (float)((ulong)local_a0 >> 0x20) * fVar17,
                            (float)*(undefined8 *)(lVar12 + 0x68) *
                            ((float)iVar7 / (float)*(int *)puVar6) - (float)local_a0 * fVar17);
        local_b8 = 0;
        local_c8[0] = 0x595959;
        this_03 = *(ParticleEmitterComponent **)(this + 0x80);
        this_02 = this_03;
        if (this_03 == (ParticleEmitterComponent *)0x0) {
          ComponentOutletBase::Connect(this_00,(Component *)this);
          this_03 = *(ParticleEmitterComponent **)(this + 0x80);
          this_02 = this_03;
          if (this_03 == (ParticleEmitterComponent *)0x0) {
            ComponentOutletBase::Connect(this_00,(Component *)this);
            this_02 = *(ParticleEmitterComponent **)(this + 0x80);
          }
        }
        iVar7 = ParticleEmitterComponent::RandomParticleType(this_02);
        iVar8 = fastrandom();
        lVar12 = ParticleEmitterComponent::AddParticle
                           (this_03,iVar7,(Vector3 *)&local_b0,(Vector3 *)&local_c0,
                            (float)((double)((float)iVar8 / (float)*(int *)puVar6) * dVar3),
                            (Color *)local_c8,fVar2);
        iVar7 = fastrandom();
        *(float *)(lVar12 + 0x24) = (float)((double)((float)iVar7 / (float)*(int *)puVar6) * dVar3);
        lVar11 = *(long *)(this + 0x80);
        if (lVar11 == 0) {
          ComponentOutletBase::Connect(this_00,(Component *)this);
          lVar11 = *(long *)(this + 0x80);
        }
        lVar11 = (**(code **)(*(long *)(lVar11 + 0x78) + 0x18))();
        fVar13 = *(float *)(lVar11 + 0x80);
        *(undefined4 *)(lVar12 + 0x28) = 0;
        *(float *)(lVar12 + 0x2c) = (fVar15 * 30.0) / fVar13;
        fVar13 = *(float *)(this + 0xa0);
      } while (fVar4 < fVar13);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


