/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a2c88
 * Function: Caver::FireEmitterComponent::Update
 * Signature: undefined __thiscall Update(FireEmitterComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::FireEmitterComponent::Update(float) */

void __thiscall Caver::FireEmitterComponent::Update(FireEmitterComponent *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  FloatColor *this_00;
  ParticleEmitterComponent *this_01;
  FloatColor *extraout_x1;
  long lVar13;
  int iVar14;
  int iVar15;
  Vector2 *pVVar16;
  ParticleEmitterComponent *this_02;
  float fVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  Color local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  float local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  float local_a8;
  byte local_a0;
  byte local_9f;
  byte local_9e;
  byte local_9d;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  lVar13 = *(long *)(this + 0x98);
  if (lVar13 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar13 = *(long *)(this + 0x98);
  }
  if ((DAT_00683734 < param_1) && (lVar13 != 0)) {
    fVar27 = *(float *)(this + 0xe8) - *(float *)(this + 0xe4);
    if (*(float *)(this + 0xec) * param_1 + DAT_00683734 <= ABS(fVar27)) {
      fVar23 = -1.0;
      if (0.0 <= fVar27) {
        fVar23 = 1.0;
      }
      *(float *)(this + 0xe4) = *(float *)(this + 0xec) * param_1 * fVar23 + *(float *)(this + 0xe4)
      ;
    }
    else {
      *(float *)(this + 0xe4) = *(float *)(this + 0xe8);
      iVar8 = fastrandom();
      puVar6 = PTR_FASTRANDOM_MAX_007e4b68;
      fVar23 = _DAT_006846d0;
      fVar27 = DAT_00683484;
      *(float *)(this + 0xe8) =
           ((float)iVar8 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) * DAT_00683484 +
           _DAT_006846d0;
      iVar8 = fastrandom();
      lVar13 = *(long *)(this + 0x98);
      *(float *)(this + 0xec) = ((float)iVar8 / (float)*(int *)puVar6) * fVar23 + fVar27;
      if (lVar13 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        lVar13 = *(long *)(this + 0x98);
      }
    }
    fVar27 = *(float *)(this + 0xe0);
    fVar23 = *(float *)(this + 0xe4);
    *(undefined1 *)(lVar13 + 0x90) = 0;
    *(float *)(lVar13 + 0x74) = fVar27 * fVar23;
  }
  if (((*(long *)(this + 0x80) != 0) ||
      (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
      *(long *)(this + 0x80) != 0)) &&
     (fVar27 = *(float *)(this + 0xdc), *(float *)(this + 0xdc) = fVar27 + param_1,
     *(float *)(this + 0xa0) < fVar27 + param_1)) {
    pVVar16 = *(Vector2 **)(this + 0x28);
    Vector2::Vector2((Vector2 *)&local_c0,(Vector3 *)(this + 0xb4));
    SceneObject::WorldPointFromLocalPoint(pVVar16);
    uVar7 = local_b0;
    fVar28 = *(float *)(this + 0xbc);
    fVar27 = *(float *)(this + 0xd0);
    fVar30 = *(float *)(*(long *)(this + 0x28) + 0x78);
    this_00 = (FloatColor *)fastrandom();
    puVar6 = PTR_FASTRANDOM_MAX_007e4b68;
    FloatColor::FromHSLA
              (this_00,fVar27 + ((float)(int)this_00 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68) *
                                DAT_0068798c,*(float *)(this + 0xd4),*(float *)(this + 0xd8),
               *(float *)(this + 0xcc));
    Color::FromFloatColor((Color *)&local_b0,extraout_x1);
    uVar5 = DAT_00689518;
    dVar4 = DAT_00684790;
    fVar3 = _DAT_006846d0;
    fVar2 = DAT_00684318;
    fVar23 = DAT_00684314;
    fVar27 = DAT_00683484;
    fVar17 = *(float *)(this + 0xdc);
    fVar24 = *(float *)(this + 0xa0);
    if (fVar24 < fVar17) {
      uVar31 = NEON_fmov(0xbf800000,4);
      do {
        fVar26 = *(float *)(this + 0xa8);
        *(float *)(this + 0xdc) = fVar17 - fVar24;
        uVar9 = fastrandom();
        uVar18 = *(undefined4 *)puVar6;
        fVar24 = *(float *)(this + 0xac);
        uVar10 = fastrandom();
        uVar21 = NEON_scvtf(CONCAT44(uVar10,uVar9),4);
        fVar29 = *(float *)(this + 0xb0);
        uVar25 = NEON_scvtf(CONCAT44(*(undefined4 *)puVar6,uVar18),4);
        fVar17 = (float)uVar21 / (float)uVar25;
        fVar22 = (float)((ulong)uVar21 >> 0x20) / (float)((ulong)uVar25 >> 0x20);
        fVar26 = fVar26 * (fVar17 + fVar17 + (float)uVar31);
        iVar8 = fastrandom();
        iVar19 = *(int *)puVar6;
        this_02 = *(ParticleEmitterComponent **)(this + 0x80);
        this_01 = this_02;
        if (this_02 == (ParticleEmitterComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          this_02 = *(ParticleEmitterComponent **)(this + 0x80);
          this_01 = this_02;
          if (this_02 == (ParticleEmitterComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            this_01 = *(ParticleEmitterComponent **)(this + 0x80);
          }
        }
        iVar11 = ParticleEmitterComponent::RandomParticleType(this_01);
        local_a8 = fVar30 + fVar28 +
                   fVar29 * ((float)iVar8 / (float)iVar19 + (float)iVar8 / (float)iVar19 + -1.0);
        local_b0 = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                            fVar24 * (fVar22 + fVar22 + (float)((ulong)uVar31 >> 0x20)),
                            (float)uVar7 + fVar26);
        iVar8 = fastrandom();
        local_bc = uVar5;
        local_c0 = ((float)iVar8 / (float)*(int *)puVar6) * -2.0 * fVar26;
        iVar12 = fastrandom();
        iVar20 = *(int *)puVar6;
        iVar8 = fastrandom();
        fVar24 = (float)NEON_ucvtf((uint)local_a0);
        fVar17 = ((float)iVar8 / (float)*(int *)puVar6) * fVar2 + fVar3;
        fVar26 = (float)NEON_ucvtf((uint)local_9f);
        fVar22 = (float)NEON_ucvtf((uint)local_9e);
        iVar8 = (int)(fVar17 * fVar24);
        fVar24 = (float)NEON_ucvtf((uint)local_9d);
        iVar19 = (int)(fVar17 * fVar26);
        iVar14 = (int)(fVar17 * fVar22);
        if (0xfe < iVar8) {
          iVar8 = 0xff;
        }
        iVar15 = (int)(fVar17 * fVar24);
        if (0xfe < iVar19) {
          iVar19 = 0xff;
        }
        local_c8 = SUB41(iVar8,0);
        if (0xfe < iVar14) {
          iVar14 = 0xff;
        }
        local_c7 = (undefined1)iVar19;
        if (0xfe < iVar15) {
          iVar15 = 0xff;
        }
        local_c6 = (undefined1)iVar14;
        local_c5 = (undefined1)iVar15;
        lVar13 = ParticleEmitterComponent::AddParticle
                           (this_02,iVar11,(Vector3 *)&local_b0,(Vector3 *)&local_c0,
                            (float)((double)((float)iVar12 / (float)iVar20) * dVar4),&local_c8,
                            *(float *)(this + 0xa4));
        if (lVar13 != 0) {
          iVar8 = fastrandom();
          *(float *)(lVar13 + 0x2c) =
               *(float *)(lVar13 + 0x2c) *
               (((float)iVar8 / (float)*(int *)puVar6) * fVar27 + fVar23);
          iVar8 = fastrandom();
          *(float *)(lVar13 + 0x24) =
               (float)((double)((float)iVar8 / (float)*(int *)puVar6 + -0.5) * dVar4);
        }
        fVar17 = *(float *)(this + 0xdc);
        fVar24 = *(float *)(this + 0xa0);
      } while (fVar24 < fVar17);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


