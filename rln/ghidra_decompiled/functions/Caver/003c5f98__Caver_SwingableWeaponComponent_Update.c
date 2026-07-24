/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c5f98
 * Function: Caver::SwingableWeaponComponent::Update
 * Signature: undefined __thiscall Update(SwingableWeaponComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SwingableWeaponComponent::Update(float) */

void __thiscall
Caver::SwingableWeaponComponent::Update(SwingableWeaponComponent *this,float param_1)

{
  Rectangle *this_00;
  int iVar1;
  long lVar2;
  CollisionShapeComponent *pCVar3;
  SoundEffectComponent *this_01;
  WeaponTrailComponent *pWVar4;
  long *plVar5;
  Rectangle *extraout_x1;
  long lVar6;
  SwingableWeaponComponent *pSVar7;
  float fVar8;
  undefined4 in_register_00005004;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  Shape aSStack_c8 [16];
  undefined8 local_b8;
  float local_b0;
  long *local_a8;
  Vector2 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(DamageComponent **)(this + 0x160) != (DamageComponent *)0x0) {
    DamageComponent::ResolvePotentialImpacts(*(DamageComponent **)(this + 0x160),false);
  }
  uVar11 = *(undefined8 *)(this + 400);
  fVar9 = *(float *)(this + 0x198);
  fVar14 = *(float *)(*(long *)(this + 0x28) + 0x78);
  uVar16 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  local_88 = uVar11;
  local_80 = fVar9;
  if (this[0x170] == (SwingableWeaponComponent)0x0) {
    if ((this[0x171] != (SwingableWeaponComponent)0x0) &&
       (fVar10 = *(float *)(this + 0x174), *(float *)(this + 0x174) = fVar10 - param_1,
       fVar10 - param_1 <= 0.0)) {
      *(undefined2 *)(this + 0x170) = 1;
      goto LAB_003c6004;
    }
    plVar5 = *(long **)(this + 0xd8);
    if (plVar5 == (long *)0x0) goto LAB_003c62b4;
LAB_003c62c8:
    (**(code **)(*plVar5 + 200))(CONCAT44(in_register_00005004,param_1));
  }
  else {
LAB_003c6004:
    fVar10 = *(float *)(this + 0x17c);
    *(float *)(this + 0x17c) = fVar10 + param_1;
    fVar12 = (float)uVar11;
    if (fVar10 + param_1 <= *(float *)(this + 0x178)) {
      lVar6 = *(long *)(this + 0x160);
      if ((lVar6 != 0) &&
         (fVar10 = (float)*(int *)(this + 0x180) * fVar12,
         0.0 < fVar10 != (*(char *)(lVar6 + 0xbc) != '\0'))) {
        *(bool *)(lVar6 + 0xbc) = 0.0 < fVar10;
        pCVar3 = *(CollisionShapeComponent **)(this + 0xa0);
        if (pCVar3 == (CollisionShapeComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this);
          pCVar3 = *(CollisionShapeComponent **)(this + 0xa0);
          if (pCVar3 == (CollisionShapeComponent *)0x0) goto LAB_003c6120;
        }
        CollisionShapeComponent::SetEnabled(pCVar3,0.0 < fVar10);
      }
    }
    else {
      lVar6 = *(long *)(this + 0x160);
      *(float *)(this + 0x17c) = *(float *)(this + 0x178);
      this[0x170] = (SwingableWeaponComponent)0x0;
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0xbc) != '\0')) {
        *(undefined1 *)(lVar6 + 0xbc) = 0;
        pCVar3 = *(CollisionShapeComponent **)(this + 0xa0);
        if (pCVar3 == (CollisionShapeComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this);
          pCVar3 = *(CollisionShapeComponent **)(this + 0xa0);
          if (pCVar3 == (CollisionShapeComponent *)0x0) goto LAB_003c6060;
        }
        CollisionShapeComponent::SetEnabled(pCVar3,false);
      }
LAB_003c6060:
      if (this[0x1c4] == (SwingableWeaponComponent)0x0) {
        this_01 = *(SoundEffectComponent **)(this + 0x138);
        if (this_01 == (SoundEffectComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x128),(Component *)this);
          this_01 = *(SoundEffectComponent **)(this + 0x138);
          if (this_01 == (SoundEffectComponent *)0x0) goto LAB_003c6120;
        }
        SoundEffectComponent::Play(this_01);
      }
    }
LAB_003c6120:
    pSVar7 = this + 0xd8;
    lVar6 = *(long *)pSVar7;
    if (lVar6 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
      lVar6 = *(long *)(this + 0xd8);
      if (lVar6 != 0) goto LAB_003c6140;
    }
    else {
LAB_003c6140:
      if ((*(float *)(this + 0x178) + -0.5 < *(float *)(this + 0x17c)) &&
         (*(char *)(lVar6 + 0x94) == '\0')) {
        WeaponTrail::FadeOut((WeaponTrail *)(lVar6 + 0x70),0.5);
        lVar6 = *(long *)(this + 0xf0);
        if (lVar6 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
          lVar6 = *(long *)(this + 0xf0);
          if (lVar6 == 0) goto LAB_003c6194;
        }
        WeaponTrail::FadeOut((WeaponTrail *)(lVar6 + 0x70),0.5);
      }
LAB_003c6194:
      fVar10 = *(float *)(this + 0x178) * _DAT_006846d0;
      if (*(float *)(this + 0x17c) <= fVar10) {
        fVar10 = 1.0;
      }
      else {
        fVar8 = *(float *)(this + 0x178) * _DAT_0068a084;
        fVar10 = (fVar8 - *(float *)(this + 0x17c)) / (fVar8 - fVar10);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
      }
      pWVar4 = *(WeaponTrailComponent **)pSVar7;
      if (pWVar4 == (WeaponTrailComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
        pWVar4 = *(WeaponTrailComponent **)(this + 0xd8);
      }
      fVar13 = (float)((ulong)uVar11 >> 0x20);
      fVar15 = (float)uVar16;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      local_b8 = CONCAT44(fVar17 + fVar13 * 0.0,fVar15 + fVar12 * 0.0);
      local_b0 = fVar14 + fVar9 * 0.0;
      fVar8 = *(float *)(this + 0x1b8);
      local_98 = CONCAT44(fVar17 + fVar13 * fVar8,fVar15 + fVar12 * fVar8);
      uStack_90 = CONCAT44(uStack_90._4_4_,fVar14 + fVar8 * fVar9);
      WeaponTrailComponent::AddSegment(pWVar4,(Vector3 *)&local_b8,(Vector3 *)&local_98,fVar10);
      pWVar4 = *(WeaponTrailComponent **)(this + 0xf0);
      if (pWVar4 == (WeaponTrailComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
        pWVar4 = *(WeaponTrailComponent **)(this + 0xf0);
        if (pWVar4 != (WeaponTrailComponent *)0x0) goto LAB_003c6260;
      }
      else {
LAB_003c6260:
        fVar9 = (float)((ulong)local_88 >> 0x20);
        local_b8 = CONCAT44(fVar17 + fVar9 * 0.0,fVar15 + (float)local_88 * 0.0);
        local_b0 = fVar14 + local_80 * 0.0;
        fVar12 = *(float *)(this + 0x1b8);
        local_98 = CONCAT44(fVar17 + fVar9 * fVar12,fVar15 + (float)local_88 * fVar12);
        uStack_90 = CONCAT44(uStack_90._4_4_,fVar14 + local_80 * fVar12);
        WeaponTrailComponent::AddSegment(pWVar4,(Vector3 *)&local_b8,(Vector3 *)&local_98,fVar10);
      }
      plVar5 = *(long **)pSVar7;
      if (plVar5 != (long *)0x0) goto LAB_003c62c8;
    }
LAB_003c62b4:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 200),(Component *)this);
    plVar5 = *(long **)(this + 0xd8);
    if (plVar5 != (long *)0x0) goto LAB_003c62c8;
  }
  plVar5 = *(long **)(this + 0xf0);
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe0),(Component *)this);
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 != (long *)0x0) goto LAB_003c62f4;
  }
  else {
LAB_003c62f4:
    (**(code **)(*plVar5 + 200))(CONCAT44(in_register_00005004,param_1));
  }
  if ((this[0x170] == (SwingableWeaponComponent)0x0) ||
     ((*(long *)(this + 0xa0) == 0 &&
      (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this),
      *(long *)(this + 0xa0) == 0)))) {
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    goto LAB_003c64dc;
  }
  lVar6 = *(long *)(this + 0x28);
  local_98 = *(undefined8 *)(lVar6 + 0x70);
  uStack_90 = 0;
  Vector2::Vector2(local_a0,(Vector3 *)&local_88);
  uVar11 = *(undefined8 *)(lVar6 + 0x70);
  local_b8 = CONCAT44(local_a0._4_4_ * *(float *)(this + 0x1b8) + (float)((ulong)uVar11 >> 0x20),
                      local_a0._0_4_ * *(float *)(this + 0x1b8) + (float)uVar11);
  Rectangle::ExpandToIncludePoint((Rectangle *)&local_98,(Vector2 *)&local_b8);
  Rectangle::ExpandHorizontally((Rectangle *)&local_98,DAT_00684320);
  fVar9 = (float)local_98;
  if (*(int *)(this + 0x180) < 0) {
    if (*(float *)(*(long *)(this + 0x28) + 0x70) < (float)local_98 + (float)uStack_90) {
      fVar14 = *(float *)(*(long *)(this + 0x28) + 0x70) - (float)local_98;
      goto LAB_003c63cc;
    }
  }
  else {
    fVar14 = *(float *)(*(long *)(this + 0x28) + 0x70);
    if ((float)local_98 < fVar14) {
      local_98 = CONCAT44(local_98._4_4_,fVar14);
      fVar14 = (fVar9 + (float)uStack_90) - fVar14;
LAB_003c63cc:
      uStack_90 = CONCAT44(uStack_90._4_4_,fVar14);
    }
  }
  iVar1 = *(int *)(this + 0x1c0);
  this_00 = (Rectangle *)(this + 0xa8);
  *(int *)(this + 0x1c0) = iVar1 + -1;
  if (iVar1 < 2) {
    *(undefined8 *)(this + 0xb0) = uStack_90;
    *(undefined8 *)this_00 = local_98;
    if ((DAT_00683734 < *(float *)(this + 0xc0)) || (DAT_00683734 < *(float *)(this + 0xc4))) {
      Rectangle::ExpandToincludeRectangle(this_00,(Rectangle *)(this + 0xb8));
    }
    *(undefined4 *)(this + 0x1c0) = 6;
    pCVar3 = *(CollisionShapeComponent **)(this + 0xa0);
  }
  else {
    Rectangle::ExpandToincludeRectangle(this_00,(Rectangle *)&local_98);
    pCVar3 = *(CollisionShapeComponent **)(this + 0xa0);
  }
  if (pCVar3 == (CollisionShapeComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x90),(Component *)this);
    pCVar3 = *(CollisionShapeComponent **)(this + 0xa0);
  }
  Rectangle::TranslatedRectangle((Vector2 *)this_00);
  Shape::ShapeWithRectangle(aSStack_c8,extraout_x1);
  CollisionShapeComponent::SetUpdatedShape(pCVar3,(Shape *)&local_b8);
  if ((local_a8 != (long *)0x0) && (lVar6 = local_a8[1], local_a8[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    lVar6 = local_a8[2];
    local_a8[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_a8 + 0x18))(local_a8);
    }
  }
  *(undefined8 *)(this + 0xc0) = uStack_90;
  *(undefined8 *)(this + 0xb8) = local_98;
LAB_003c64dc:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


