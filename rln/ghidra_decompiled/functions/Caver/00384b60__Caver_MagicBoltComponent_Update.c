/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00384b60
 * Function: Caver::MagicBoltComponent::Update
 * Signature: undefined __thiscall Update(MagicBoltComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::Update(float) */

void __thiscall Caver::MagicBoltComponent::Update(MagicBoltComponent *this,float param_1)

{
  ComponentOutletBase *pCVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  string *psVar12;
  Vector2 *pVVar13;
  ParticleEmitterComponent *pPVar14;
  long lVar15;
  FloatColor *extraout_x1;
  Component *pCVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  SceneObject *this_00;
  Component *pCVar21;
  ParticleEmitterComponent *pPVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  byte local_e8;
  byte local_e7;
  byte local_e6;
  byte local_e5;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  long *local_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  if (this[0x131] == (MagicBoltComponent)0x0) {
    psVar12 = (string *)AudioSystem::sharedSystem();
    FUN_00666bb8(&local_c0,"woosh3",&local_c8);
    AudioSystem::PlaySoundEffectWithName(psVar12,1.0);
    if ((local_b0 != (long *)0x0) &&
       (iVar10 = (int)local_b0[1] + -1, *(int *)(local_b0 + 1) = iVar10, iVar10 == 0)) {
      (**(code **)(*local_b0 + 8))();
    }
    if ((undefined *)(local_c0 + -0x18) != PTR_DAT_007e5de8) {
      piVar17 = (int *)(local_c0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar17;
        *piVar17 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar3) {
            *piVar17 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_c0 + -0x18));
      }
    }
    this[0x131] = (MagicBoltComponent)0x1;
  }
  lVar20 = *(long *)(this + 0x28);
  fVar24 = *(float *)(lVar20 + 0x68);
  if (DAT_00683944 <= fVar24 * fVar24 + *(float *)(lVar20 + 0x6c) * *(float *)(lVar20 + 0x6c)) {
    local_c0 = *(long *)(lVar20 + 0x68);
    Vector2::Normalize((Vector2 *)&local_c0);
    *(long *)(this + 0x11c) = local_c0;
    *(undefined4 *)(this + 0x124) = 0;
    if (this[0x130] == (MagicBoltComponent)0x0) goto LAB_00384cb0;
LAB_00384d00:
    pCVar21 = *(Component **)(this + 0xd0);
  }
  else {
    fVar24 = *(float *)(this + 0x118);
    if (DAT_00683944 < fVar24) {
      local_b8 = fVar24 * *(float *)(this + 0x124);
      local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x11c) >> 0x20) * fVar24,
                          (float)*(undefined8 *)(this + 0x11c) * fVar24);
      Vector2::Vector2((Vector2 *)&local_d8,(Vector3 *)&local_c0);
      *(undefined8 *)(lVar20 + 0x68) = local_d8;
    }
    if (this[0x130] != (MagicBoltComponent)0x0) goto LAB_00384d00;
LAB_00384cb0:
    this_00 = *(SceneObject **)(this + 0x28);
    fVar24 = *(float *)(this_00 + 0x68) * param_1 + *(float *)(this_00 + 0x70);
    fVar26 = *(float *)(this_00 + 0x6c) * param_1 + *(float *)(this_00 + 0x74);
    if ((ABS(fVar24 - *(float *)(this_00 + 0x70)) <= DAT_00683488) &&
       (ABS(fVar26 - *(float *)(this_00 + 0x74)) <= DAT_00683488)) goto LAB_00384d00;
    *(float *)(this_00 + 0x70) = fVar24;
    *(float *)(this_00 + 0x74) = fVar26;
    if (this_00[0xb4] != (SceneObject)0x0) goto LAB_00384d00;
    SceneObject::RegisterForWorldBoundsUpdate(this_00);
    this_00[0xb4] = (SceneObject)0x1;
    pCVar21 = *(Component **)(this + 0xd0);
  }
  if (pCVar21 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xc0),(Component *)this);
    pCVar21 = *(Component **)(this + 0xd0);
    if (pCVar21 == (Component *)0x0) goto LAB_00385280;
  }
  fVar6 = DAT_00688b44;
  lVar20 = *(long *)(this + 0x28);
  fVar25 = *(float *)(this + 0x128) + param_1;
  *(float *)(this + 0x128) = fVar25;
  puVar9 = PTR_FASTRANDOM_MAX_007e4b68;
  fVar8 = DAT_00688b4c;
  dVar7 = DAT_00684790;
  fVar5 = DAT_00684318;
  fVar31 = *(float *)(lVar20 + 0x78);
  fVar24 = *(float *)(lVar20 + 0x70);
  fVar26 = *(float *)(lVar20 + 0x74);
  fVar27 = *(float *)(lVar20 + 0x8c) * 10.0;
  if (fVar25 <= fVar6) {
LAB_00384f68:
    pCVar16 = *(Component **)(pCVar21 + 0x118);
    if (pCVar16 != (Component *)0x0) goto LAB_00384f70;
LAB_00384fa4:
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar21 + 0x108),pCVar21);
    pCVar16 = *(Component **)(pCVar21 + 0x118);
    if (pCVar16 != (Component *)0x0) goto LAB_00384f74;
LAB_00384fb8:
    lVar20 = *(long *)(pCVar21 + 0x148);
    plVar23 = *(long **)(pCVar21 + 0x150);
    if (plVar23 == (long *)0x0) goto LAB_00384f84;
LAB_00384fc0:
    lVar15 = plVar23[1];
    *(undefined4 *)(lVar20 + 0xa4) = 0;
    plVar23[1] = lVar15;
    if (lVar15 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      lVar20 = plVar23[2];
      plVar23[2] = lVar20 + -1;
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
    }
  }
  else {
    fVar30 = fVar31 + 0.0;
    pCVar1 = (ComponentOutletBase *)(this + 0xc0);
    fVar32 = (fVar27 * DAT_00688b48) / DAT_00684318;
    do {
      *(float *)(this + 0x128) = fVar25 + fVar8;
      pVVar13 = (Vector2 *)fastrandom();
      Vector2::FromAngle(pVVar13,(float)((double)((float)(int)pVVar13 / (float)*(int *)puVar9) *
                                        dVar7));
      iVar10 = fastrandom();
      fVar25 = ((float)iVar10 / (float)*(int *)puVar9) * 0.5 + 1.0;
      fVar28 = fVar27 * fVar25;
      fVar29 = (float)((ulong)local_c8 >> 0x20);
      local_c0 = CONCAT44(fVar28 * fVar29 + fVar26,fVar28 * (float)local_c8 + fVar24);
      fVar25 = fVar32 * fVar25;
      local_d0 = 0;
      local_e0[0] = 0x595959;
      local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x68) >> 0x20) -
                          fVar29 * fVar25,
                          (float)*(undefined8 *)(*(long *)(this + 0x28) + 0x68) -
                          (float)local_c8 * fVar25);
      pPVar22 = *(ParticleEmitterComponent **)(this + 0xd0);
      pPVar14 = pPVar22;
      local_b8 = fVar30;
      if (pPVar22 == (ParticleEmitterComponent *)0x0) {
        ComponentOutletBase::Connect(pCVar1,(Component *)this);
        pPVar22 = *(ParticleEmitterComponent **)(this + 0xd0);
        pPVar14 = pPVar22;
        if (pPVar22 == (ParticleEmitterComponent *)0x0) {
          ComponentOutletBase::Connect(pCVar1,(Component *)this);
          pPVar14 = *(ParticleEmitterComponent **)(this + 0xd0);
        }
      }
      iVar10 = ParticleEmitterComponent::RandomParticleType(pPVar14);
      iVar11 = fastrandom();
      lVar20 = ParticleEmitterComponent::AddParticle
                         (pPVar22,iVar10,(Vector3 *)&local_c0,(Vector3 *)&local_d8,
                          (float)((double)((float)iVar11 / (float)*(int *)puVar9) * dVar7),
                          (Color *)local_e0,fVar5);
      if (lVar20 != 0) {
        iVar10 = fastrandom();
        *(float *)(lVar20 + 0x24) = (float)((double)((float)iVar10 / (float)*(int *)puVar9) * dVar7)
        ;
        lVar15 = *(long *)(this + 0xd0);
        if (lVar15 == 0) {
          ComponentOutletBase::Connect(pCVar1,(Component *)this);
          lVar15 = *(long *)(this + 0xd0);
        }
        lVar15 = (**(code **)(*(long *)(lVar15 + 0x78) + 0x18))();
        fVar25 = *(float *)(lVar15 + 0x80);
        *(undefined4 *)(lVar20 + 0x28) = 0x3e800000;
        *(float *)(lVar20 + 0x2c) = (fVar27 * 4.0) / fVar25;
      }
      fVar25 = *(float *)(this + 0x128);
    } while (fVar6 < fVar25);
    pCVar21 = *(Component **)(this + 0xd0);
    if (pCVar21 != (Component *)0x0) goto LAB_00384f68;
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xc0),(Component *)this);
    pCVar21 = *(Component **)(this + 0xd0);
    pCVar16 = *(Component **)(pCVar21 + 0x118);
    if (pCVar16 == (Component *)0x0) goto LAB_00384fa4;
LAB_00384f70:
    if (pCVar16 == (Component *)0x0) goto LAB_00384fb8;
LAB_00384f74:
    if (pCVar16 == pCVar21) goto LAB_00384fb8;
    lVar20 = *(long *)(pCVar16 + 0x148);
    plVar23 = *(long **)(pCVar16 + 0x150);
    if (plVar23 != (long *)0x0) goto LAB_00384fc0;
LAB_00384f84:
    *(undefined4 *)(lVar20 + 0xa4) = 0;
  }
  fVar8 = DAT_00688b50;
  fVar30 = *(float *)(this + 300) + param_1;
  *(float *)(this + 300) = fVar30;
  puVar9 = PTR_FASTRANDOM_MAX_007e4b68;
  fVar25 = DAT_00688b54;
  dVar7 = DAT_00684790;
  fVar6 = DAT_00684318;
  fVar5 = DAT_00683f68;
  if (fVar8 < fVar30) {
    pCVar1 = (ComponentOutletBase *)(this + 0xc0);
    do {
      *(float *)(this + 300) = fVar30 + fVar25;
      pVVar13 = (Vector2 *)fastrandom();
      Vector2::FromAngle(pVVar13,(float)((double)((float)(int)pVVar13 / (float)*(int *)puVar9) *
                                        dVar7));
      iVar10 = fastrandom();
      fVar30 = fVar27 * (((float)iVar10 / (float)*(int *)puVar9) * fVar6 + 0.5);
      fVar28 = (float)((ulong)local_c8 >> 0x20);
      fVar32 = fVar30 / fVar5;
      local_c0 = CONCAT44(fVar30 * fVar28 + fVar26,fVar30 * (float)local_c8 + fVar24);
      local_d0 = 0;
      local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)(this + 0x28) + 0x68) >> 0x20) *
                          0.6 - fVar28 * fVar32,
                          (float)*(undefined8 *)(*(long *)(this + 0x28) + 0x68) * 0.6 -
                          (float)local_c8 * fVar32);
      local_b8 = fVar31 + 0.0;
      Color::FromFloatColor((Color *)(this + 0x108),extraout_x1);
      fVar30 = (float)NEON_ucvtf((uint)local_e8);
      iVar10 = (int)(fVar30 * 1.5);
      fVar30 = (float)NEON_ucvtf((uint)local_e7);
      iVar11 = (int)(fVar30 * 1.5);
      fVar30 = (float)NEON_ucvtf((uint)local_e6);
      iVar18 = (int)(fVar30 * 1.5);
      fVar30 = (float)NEON_ucvtf((uint)local_e5);
      if (0xfe < iVar10) {
        iVar10 = 0xff;
      }
      iVar19 = (int)(fVar30 * 1.5);
      if (0xfe < iVar11) {
        iVar11 = 0xff;
      }
      if (0xfe < iVar18) {
        iVar18 = 0xff;
      }
      if (0xfe < iVar19) {
        iVar19 = 0xff;
      }
      local_e0[0] = CONCAT13((char)iVar19,CONCAT12((char)iVar18,CONCAT11((char)iVar11,(char)iVar10))
                            );
      pPVar22 = *(ParticleEmitterComponent **)(this + 0xd0);
      pPVar14 = pPVar22;
      if (pPVar22 == (ParticleEmitterComponent *)0x0) {
        ComponentOutletBase::Connect(pCVar1,(Component *)this);
        pPVar22 = *(ParticleEmitterComponent **)(this + 0xd0);
        pPVar14 = pPVar22;
        if (pPVar22 == (ParticleEmitterComponent *)0x0) {
          ComponentOutletBase::Connect(pCVar1,(Component *)this);
          pPVar14 = *(ParticleEmitterComponent **)(this + 0xd0);
        }
      }
      iVar10 = ParticleEmitterComponent::RandomParticleType(pPVar14);
      iVar11 = fastrandom();
      lVar20 = ParticleEmitterComponent::AddParticle
                         (pPVar22,iVar10,(Vector3 *)&local_c0,(Vector3 *)&local_d8,
                          (float)((double)((float)iVar11 / (float)*(int *)puVar9) * dVar7),
                          (Color *)local_e0,fVar5);
      if (lVar20 != 0) {
        iVar10 = fastrandom();
        *(float *)(lVar20 + 0x24) = (float)((double)((float)iVar10 / (float)*(int *)puVar9) * dVar7)
        ;
        lVar15 = *(long *)(this + 0xd0);
        if (lVar15 == 0) {
          ComponentOutletBase::Connect(pCVar1,(Component *)this);
          lVar15 = *(long *)(this + 0xd0);
        }
        lVar15 = (**(code **)(*(long *)(lVar15 + 0x78) + 0x18))();
        fVar30 = *(float *)(lVar15 + 0x80);
        *(undefined4 *)(lVar20 + 0x28) = 0x3f800000;
        *(float *)(lVar20 + 0x2c) = (fVar27 * 3.0) / fVar30;
      }
      fVar30 = *(float *)(this + 300);
    } while (fVar8 < fVar30);
  }
LAB_00385280:
  if (*(long *)(lVar4 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


