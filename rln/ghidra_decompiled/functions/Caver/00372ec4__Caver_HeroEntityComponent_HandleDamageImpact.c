/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372ec4
 * Function: Caver::HeroEntityComponent::HandleDamageImpact
 * Signature: undefined __thiscall HandleDamageImpact(HeroEntityComponent * this, DamageImpact * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::HeroEntityComponent::HandleDamageImpact(Caver::DamageImpact*) */

void __thiscall
Caver::HeroEntityComponent::HandleDamageImpact(HeroEntityComponent *this,DamageImpact *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  Vector2 *this_00;
  HealthComponent *this_01;
  SceneObject *this_02;
  long lVar5;
  GameEvent *pGVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  long *local_98;
  undefined1 auStack_90 [8];
  long *local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  long local_68;
  
  fVar4 = DAT_006883c8;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(*(long *)(this + 0x130) + 0x80) < 1) goto LAB_00373238;
  local_78 = *(float *)(param_1 + 0x18);
  fStack_74 = *(float *)(param_1 + 0x1c);
  lVar10 = *(long *)param_1;
  fVar13 = DAT_006883c0;
  if (((lVar10 != 0) && (*(int *)(lVar10 + 0xb8) == 2)) &&
     (fVar13 = 0.0, *(int *)(lVar10 + 0xb4) != 1)) {
    fVar13 = DAT_006883c0;
  }
  if (((_DAT_00684434 <= *(float *)(this + 0x80)) || (*(float *)(this + 0x8c) <= 0.0)) ||
     ((this[0x90] != (HeroEntityComponent)0x0 || (DAT_006883c4 <= fStack_74)))) {
    if (DAT_006883c8 < fStack_74) {
      fVar12 = (float)Vector2::Angle((Vector2 *)&local_78);
      this_00 = (Vector2 *)fastrandom();
      Vector2::FromAngle(this_00,(float)((double)((float)(int)this_00 /
                                                  (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68 + -0.5)
                                         * DAT_006883b0 + (double)fVar12));
      fVar13 = fVar13 * (fVar4 / fStack_7c);
      local_78 = local_80;
      fStack_74 = fStack_7c;
    }
  }
  else {
    Vector2::FromAngle((Vector2 *)this,DAT_006883cc);
    local_78 = local_80;
    fStack_74 = fStack_7c;
    if (*(float *)(param_1 + 0x18) < 0.0) {
      local_78 = -local_80;
    }
  }
  local_80 = fVar13 * local_78;
  fStack_7c = fVar13 * fStack_74;
  PhysicsObjectState::setVelocity((PhysicsObjectState *)(this + 0x78),(Vector2 *)&local_80);
  if ((*(long *)param_1 == 0) ||
     (this_01 = *(HealthComponent **)(this + 0x130), DAT_00683734 < *(float *)(this_01 + 0x94)))
  goto LAB_00373238;
  if (*(int *)(*(long *)param_1 + 0xb4) == 1) {
    HealthComponent::TakeDamage(this_01,2);
  }
  else {
    HealthComponent::TakeDamageWithImpact(this_01,param_1);
  }
  *(undefined4 *)(*(long *)(this + 0x130) + 0x94) = 0x3f4ccccd;
  SceneObject::HandleMessage(*(SceneObject **)(*(long *)param_1 + 0x28),0xc,param_1);
  if (*(int *)(*(long *)(this + 0x130) + 0x80) < 1) {
    lVar10 = SceneObject::ComponentWithInterface
                       (*(SceneObject **)(*(long *)param_1 + 0x28),(long)PTR_Interface_007e4fd0);
    lVar5 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(*(long *)param_1 + 0x28),(long)PTR_Interface_007e7a68);
    if (lVar10 == 0) {
LAB_00373140:
      if (lVar5 != 0) {
        MagicExplosionComponent::CasterObject();
        plVar11 = *(long **)(this + 0x28);
        if ((local_98 != (long *)0x0) &&
           (iVar9 = (int)local_98[1] + -1, *(int *)(local_98 + 1) = iVar9, iVar9 == 0)) {
          (**(code **)(*local_98 + 8))(local_98);
        }
        if (local_98 == plVar11) {
          FUN_00666bb8(&local_80,"mishandlingexplosives",auStack_90);
          pGVar6 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_80,1);
          GameEvent::SendEvent(pGVar6);
          puVar7 = (undefined *)(CONCAT44(fStack_7c,local_80) + -0x18);
          if (puVar7 != PTR_DAT_007e5de8) {
            piVar8 = (int *)(CONCAT44(fStack_7c,local_80) + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0037328c;
            do {
              iVar9 = *piVar8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
              if (bVar2) {
                *piVar8 = iVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            goto LAB_00373298;
          }
        }
      }
    }
    else {
      SpellComponent::CasterObject();
      plVar11 = *(long **)(this + 0x28);
      if ((local_88 != (long *)0x0) &&
         (iVar9 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_88 + 8))(local_88);
      }
      if (local_88 != plVar11) goto LAB_00373140;
      FUN_00666bb8(&local_80,"recklessshooting",auStack_90);
      pGVar6 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_80,1);
      GameEvent::SendEvent(pGVar6);
      puVar7 = (undefined *)(CONCAT44(fStack_7c,local_80) + -0x18);
      if (puVar7 != PTR_DAT_007e5de8) {
        piVar8 = (int *)(CONCAT44(fStack_7c,local_80) + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0037328c:
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
LAB_00373298:
        if (iVar9 < 1) {
          operator_delete(puVar7);
        }
      }
    }
    this_02 = *(SceneObject **)(this + 0x28);
    this[0x115] = (HeroEntityComponent)0x1;
    iVar9 = 0xb;
  }
  else {
    this_02 = *(SceneObject **)(this + 0x28);
    iVar9 = 10;
  }
  SceneObject::HandleMessage(this_02,iVar9,param_1);
LAB_00373238:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


