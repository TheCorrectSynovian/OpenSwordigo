/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c6690
 * Function: Caver::SwingableWeaponComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(SwingableWeaponComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SwingableWeaponComponent::HandleMessage(int, void*) */

void __thiscall
Caver::SwingableWeaponComponent::HandleMessage
          (SwingableWeaponComponent *this,int param_1,void *param_2)

{
  float *pfVar1;
  CollisionShapeComponent *this_00;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  SceneObject *pSVar7;
  long lVar8;
  intrusive_ptr *piVar9;
  SoundEffectComponent *this_01;
  CollisionShape *this_02;
  ulong uVar10;
  DamageComponent *pDVar11;
  long lVar12;
  int iVar13;
  string *psVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  SceneObject *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  long *local_70;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_1 == 7) {
    cVar2 = *(char *)((long)param_2 + 0x34);
    lVar12 = *(long *)(this + 0xa0);
    lVar8 = *(long *)param_2;
    this_00 = *(CollisionShapeComponent **)((long)param_2 + 8);
    if (lVar12 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this);
      lVar12 = *(long *)(this + 0xa0);
    }
    if (lVar8 == lVar12) {
      if ((*(int *)(this_00 + 0x180) != 6) &&
         ((uVar6 = 1, cVar2 == '\0' || (this_00[0x17c] == (CollisionShapeComponent)0x0))))
      goto LAB_003c6838;
      lVar8 = SceneObject::ComponentWithInterface
                        (*(SceneObject **)(this_00 + 0x28),(long)PTR_Interface_007e7450);
      if ((this[0x1c4] == (SwingableWeaponComponent)0x0) &&
         (((lVar12 = *(long *)(this + 0x160), lVar12 != 0 && (*(char *)(lVar12 + 0xbc) != '\0')) &&
          ((lVar8 == 0 || (*(int *)(lVar12 + 0xb4) != *(int *)(lVar8 + 0x88))))))) {
        iVar13 = *(int *)(this + 0x180);
        Vector2::Vector2((Vector2 *)&local_78,(Vector3 *)(this + 400));
        if ((DAT_00683734 < ABS(local_78)) || (DAT_00683734 < ABS(local_74))) {
          Vector2::Vector2((Vector2 *)&local_80,(Vector3 *)(this + 400));
          local_98 = (long *)local_80;
          Vector2::Normalize((Vector2 *)&local_98);
          fVar16 = (float)local_98;
          fVar17 = local_98._4_4_;
        }
        else {
          fVar16 = (float)iVar13;
          fVar17 = 0.0;
        }
        fVar15 = *(float *)(this + 0x1b8);
        pfVar1 = (float *)(*(long *)(this + 0x28) + 0x70);
        fVar18 = *pfVar1;
        fVar19 = *(float *)(*(long *)(this + 0x28) + 0x74);
        local_98 = *(long **)pfVar1;
        local_90 = fVar16 * 10.0 * fVar15 + fVar18;
        fStack_8c = fVar17 * 10.0 * fVar15 + fVar19;
        local_88 = (SceneObject *)
                   CONCAT44(fVar19 + fVar17 * fVar15 * 0.5,fVar18 + fVar16 * fVar15 * 0.5);
        this_02 = (CollisionShape *)CollisionShapeComponent::collisionShape(this_00);
        if ((*(int *)(this_00 + 0x180) == 6) ||
           (uVar10 = CollisionShape::IntersectsWithLineSegment
                               (this_02,(LineSegment *)&local_98,(Vector2 *)&local_88,(Vector2 *)0x0
                                ,(int *)0x0), (uVar10 & 1) == 0)) {
          CollisionShape::NearestPointInShape((Vector2 *)this_02);
          local_88 = local_b0;
          pSVar7 = local_b0;
        }
        else {
          pSVar7 = (SceneObject *)((ulong)local_88 & 0xffffffff);
        }
        local_a0 = (SceneObject *)CONCAT44(fVar17,fVar16);
        fVar16 = SUB84(pSVar7,0) - *(float *)(*(long *)(this + 0x28) + 0x70);
        fVar17 = local_88._4_4_ - *(float *)(*(long *)(this + 0x28) + 0x74);
        if ((DAT_00683944 < ABS(fVar16)) || (fVar15 = SUB84(pSVar7,0), DAT_00683944 < ABS(fVar17)))
        {
          local_b0 = (SceneObject *)CONCAT44(fVar17,fVar16);
          Vector2::Normalize((Vector2 *)&local_b0);
          local_a0 = local_b0;
          fVar15 = (float)local_88;
        }
        local_88 = (SceneObject *)
                   CONCAT44(local_88._4_4_ + 0.0,fVar15 + (float)*(int *)(this + 0x180) * 15.0);
        if (*(int *)(this_00 + 0x180) == 6) {
          local_68 = *(SceneObject **)(this_00 + 0x28);
          pDVar11 = *(DamageComponent **)(this + 0x160);
          if (local_68 != (SceneObject *)0x0) {
            *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          }
          local_b0 = (SceneObject *)0x0;
          local_a8 = 0;
          DamageComponent::AddPotentialImpact
                    (pDVar11,(intrusive_ptr *)&local_68,(Vector2 *)&local_88,(Vector2 *)&local_a0,
                     true,(Vector4 *)&local_b0);
          pSVar7 = local_68;
        }
        else {
          if (this_00[0x17c] == (CollisionShapeComponent)0x0) goto LAB_003c6834;
          local_b8 = *(SceneObject **)(this_00 + 0x28);
          pDVar11 = *(DamageComponent **)(this + 0x160);
          if (local_b8 != (SceneObject *)0x0) {
            *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
          }
          fVar15 = *(float *)(this + 0x194) * *(float *)(this + 0x18c) -
                   *(float *)(this + 0x198) * *(float *)(this + 0x188);
          fVar17 = *(float *)(this + 0x198) * *(float *)(this + 0x184) -
                   *(float *)(this + 0x18c) * *(float *)(this + 400);
          fVar16 = *(float *)(this + 0x188) * *(float *)(this + 400) -
                   *(float *)(this + 0x194) * *(float *)(this + 0x184);
          if (_LAB_00688900 <= fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17) {
            local_68 = (SceneObject *)CONCAT44(fVar17,fVar15);
            local_60 = fVar16;
            Vector3::Normalize((Vector3 *)&local_68);
            lVar8 = *(long *)(this + 0x28);
            local_b0 = local_68;
            fVar17 = *(float *)(lVar8 + 0x78) * local_60 +
                     *(float *)(lVar8 + 0x70) * (float)local_68 +
                     *(float *)(lVar8 + 0x74) * local_68._4_4_;
            fVar16 = local_60;
          }
          else {
            local_b0 = (SceneObject *)0x0;
            fVar17 = 0.0;
            fVar16 = 0.0;
          }
          local_a8 = CONCAT44(fVar17,fVar16);
          DamageComponent::AddPotentialImpact
                    (pDVar11,(intrusive_ptr *)&local_b8,(Vector2 *)&local_88,(Vector2 *)&local_a0,
                     false,(Vector4 *)&local_b0);
          pSVar7 = local_b8;
        }
        if ((pSVar7 != (SceneObject *)0x0) &&
           (iVar13 = *(int *)(pSVar7 + 8), *(int *)(pSVar7 + 8) = iVar13 + -1, iVar13 + -1 == 0)) {
          (**(code **)(*(long *)pSVar7 + 8))();
        }
      }
    }
LAB_003c6834:
    uVar6 = 1;
    goto LAB_003c6838;
  }
  if ((param_1 == 0xd) && (this[0x1c4] == (SwingableWeaponComponent)0x0)) {
    pSVar7 = operator_new(0x128);
    SceneObject::SceneObject(pSVar7);
    *(int *)(pSVar7 + 8) = *(int *)(pSVar7 + 8) + 1;
    psVar14 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
    local_68 = pSVar7;
    FUN_00666bb8(&local_b0,"particle_blast",&local_a0);
    ObjectLibrary::TemplateForName(psVar14,SUB81(&local_b0,0));
    SceneObject::InitWithTemplate(pSVar7,(intrusive_ptr *)&local_98);
    if ((local_98 != (long *)0x0) &&
       (iVar13 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar13, iVar13 == 0)) {
      (**(code **)(*local_98 + 8))();
    }
    puVar5 = PTR_DAT_007e5de8;
    if (local_b0 + -0x18 != (SceneObject *)PTR_DAT_007e5de8) {
      pSVar7 = local_b0 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar13 = *(int *)pSVar7;
        *(int *)pSVar7 = iVar13 + -1;
      }
      else {
        do {
          iVar13 = *(int *)pSVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pSVar7,0x10);
          if (bVar3) {
            *(int *)pSVar7 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar13 < 1) {
        operator_delete(local_b0 + -0x18);
      }
    }
    pSVar7 = local_68;
    local_98 = *(long **)((long)param_2 + 0x10);
    local_90 = *(float *)(*(long *)(this + 0x28) + 0x78);
    Vector2::Vector2((Vector2 *)&local_b0,(Vector3 *)&local_98);
    if ((DAT_00683488 < ABS((float)local_b0 - *(float *)(pSVar7 + 0x70))) ||
       (DAT_00683488 < ABS(local_b0._4_4_ - *(float *)(pSVar7 + 0x74)))) {
      *(float *)(pSVar7 + 0x70) = (float)local_b0;
      *(float *)(pSVar7 + 0x74) = local_b0._4_4_;
      if (pSVar7[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar7);
        pSVar7[0xb4] = (SceneObject)0x1;
      }
    }
    *(float *)(pSVar7 + 0x78) = local_90;
    (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
              (*(long **)(*(long *)(this + 0x28) + 0x20),&local_68);
    if ((*(SwingableWeaponControllerComponent **)(this + 0x70) !=
         (SwingableWeaponControllerComponent *)0x0) && (*(char *)((long)param_2 + 0x25) == '\0')) {
      SwingableWeaponControllerComponent::KnockBack
                (*(SwingableWeaponControllerComponent **)(this + 0x70));
    }
    if (*(char *)((long)param_2 + 0x24) == '\0') {
      this_01 = *(SoundEffectComponent **)(this + 0x150);
      if (this_01 == (SoundEffectComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x140),(Component *)this);
        this_01 = *(SoundEffectComponent **)(this + 0x150);
        if (this_01 == (SoundEffectComponent *)0x0) goto LAB_003c69c4;
      }
      SoundEffectComponent::Play(this_01);
    }
    else {
      piVar9 = (intrusive_ptr *)AudioSystem::sharedSystem();
      psVar14 = (string *)SoundLibrary::sharedLibrary();
      FUN_00666bb8(&local_b0,"shield_block",&local_a0);
      SoundLibrary::EffectForName(psVar14);
      AudioSystem::PlaySoundEffect(piVar9,1.0);
      if ((local_70 != (long *)0x0) &&
         (iVar13 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar13, iVar13 == 0)) {
        (**(code **)(*local_70 + 8))();
      }
      if ((local_98 != (long *)0x0) &&
         (iVar13 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar13, iVar13 == 0)) {
        (**(code **)(*local_98 + 8))();
      }
      if (local_b0 + -0x18 != (SceneObject *)puVar5) {
        pSVar7 = local_b0 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar13 = *(int *)pSVar7;
          *(int *)pSVar7 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *(int *)pSVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pSVar7,0x10);
            if (bVar3) {
              *(int *)pSVar7 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete(local_b0 + -0x18);
        }
      }
    }
LAB_003c69c4:
    this[0x1c4] = (SwingableWeaponComponent)0x1;
    if ((local_68 != (SceneObject *)0x0) &&
       (iVar13 = *(int *)(local_68 + 8), *(int *)(local_68 + 8) = iVar13 + -1, iVar13 + -1 == 0)) {
      (**(code **)(*(long *)local_68 + 8))();
    }
  }
  uVar6 = 0;
LAB_003c6838:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


