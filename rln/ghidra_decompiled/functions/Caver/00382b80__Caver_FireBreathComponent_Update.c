/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382b80
 * Function: Caver::FireBreathComponent::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::Update(float) */

void Caver::FireBreathComponent::Update(float param_1)

{
  long lVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  Component *in_x0;
  ParticleEmitterComponent *this;
  SoundEffectComponent *pSVar9;
  ulong uVar10;
  FloatColor *in_x1;
  FloatColor *extraout_x1;
  FloatColor *extraout_x1_00;
  ParticleEmitterComponent *this_00;
  float fVar11;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  Color aCStack_90 [8];
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(in_x0 + 0xd0) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0xc0),in_x0), in_x1 = extraout_x1
     , *(long *)(in_x0 + 0xd0) != 0)) {
    fVar4 = DAT_0068798c;
    fVar11 = *(float *)(in_x0 + 0x100) + param_1;
    *(float *)(in_x0 + 0x100) = fVar11;
    puVar6 = PTR_FASTRANDOM_MAX_007e4b68;
    fVar5 = DAT_00688a14;
    fVar3 = DAT_0068797c;
    dVar2 = DAT_00684790;
    if (fVar4 < fVar11) {
      do {
        *(float *)(in_x0 + 0x100) = fVar11 + fVar5;
        Color::FromFloatColor((Color *)(in_x0 + 0xf0),in_x1);
        this_00 = *(ParticleEmitterComponent **)(in_x0 + 0xd0);
        this = this_00;
        if (this_00 == (ParticleEmitterComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0xc0),in_x0);
          this_00 = *(ParticleEmitterComponent **)(in_x0 + 0xd0);
          this = this_00;
          if (this_00 == (ParticleEmitterComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0xc0),in_x0);
            this = *(ParticleEmitterComponent **)(in_x0 + 0xd0);
          }
        }
        iVar7 = ParticleEmitterComponent::RandomParticleType(this);
        local_a0 = *(undefined8 *)(*(long *)(in_x0 + 0x28) + 0x70);
        local_98 = *(undefined4 *)(*(long *)(in_x0 + 0x28) + 0x78);
        local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x84) >> 0x20) * 300.0,
                            (float)*(undefined8 *)(in_x0 + 0x84) * 300.0);
        local_a8 = *(float *)(in_x0 + 0x8c) * fVar3;
        iVar8 = fastrandom();
        ParticleEmitterComponent::AddParticle
                  (this_00,iVar7,(Vector3 *)&local_a0,(Vector3 *)&local_b0,
                   (float)((double)((float)iVar8 / (float)*(int *)puVar6) * dVar2),aCStack_90,0.5);
        fVar11 = *(float *)(in_x0 + 0x100);
        in_x1 = extraout_x1_00;
      } while (fVar4 < fVar11);
    }
  }
  pSVar9 = *(SoundEffectComponent **)(in_x0 + 0xe8);
  if (pSVar9 == (SoundEffectComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0xd8),in_x0);
    pSVar9 = *(SoundEffectComponent **)(in_x0 + 0xe8);
    if (pSVar9 == (SoundEffectComponent *)0x0) goto LAB_00382d2c;
  }
  uVar10 = SoundEffectComponent::IsPlaying(pSVar9);
  if ((uVar10 & 1) == 0) {
    pSVar9 = *(SoundEffectComponent **)(in_x0 + 0xe8);
    if (pSVar9 == (SoundEffectComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(in_x0 + 0xd8),in_x0);
      pSVar9 = *(SoundEffectComponent **)(in_x0 + 0xe8);
    }
    SoundEffectComponent::Play(pSVar9);
  }
LAB_00382d2c:
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


