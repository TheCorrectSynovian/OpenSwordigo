/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00387e74
 * Function: Caver::MagicExplosionComponent::Update
 * Signature: undefined __thiscall Update(MagicExplosionComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicExplosionComponent::Update(float) */

void __thiscall Caver::MagicExplosionComponent::Update(MagicExplosionComponent *this,float param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  SoundEffectComponent *this_00;
  SceneObject *pSVar5;
  undefined *puVar6;
  SceneObject *pSVar7;
  int *piVar8;
  int iVar9;
  string *psVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  long *local_78;
  undefined4 local_70;
  undefined1 auStack_68 [8];
  SceneObject *local_60;
  float local_58;
  float fStack_54;
  long local_48;
  
  uVar4 = _DAT_00683948;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (this[0xf2] == (MagicExplosionComponent)0x0) {
    *(float *)(this + 0xd8) = *(float *)(this + 0xe0) / *(float *)(this + 0xe4);
    *(undefined4 *)(this + 0xdc) = 0x40c90fdb;
    *(undefined8 *)(this + 0xd0) = uVar4;
    *(undefined2 *)(this + 0xf0) = 0;
    this[0xf2] = (MagicExplosionComponent)0x1;
    *(float *)(this + 0xe8) = *(float *)(this + 0xe0) * 1.5;
    *(float *)(this + 0xec) = param_1 + 0.0;
  }
  else {
    fVar11 = *(float *)(this + 0xec) + param_1;
    *(float *)(this + 0xec) = fVar11;
    if (this[0xf0] != (MagicExplosionComponent)0x0) {
      fVar12 = *(float *)(this + 0xe8);
      dVar14 = (double)param_1 * DAT_00688c20;
      fVar13 = *(float *)(this + 0xf8) + fVar12 * param_1 + fVar12 * param_1;
      fVar15 = fVar12 * _DAT_006846d0;
      if (fVar13 <= fVar12) {
        fVar12 = fVar13;
      }
      *(float *)(this + 0xf4) =
           (float)((double)param_1 * DAT_00688c18 + (double)*(float *)(this + 0xf4));
      *(float *)(this + 0xf8) = fVar12;
      fVar12 = fVar15 * param_1 + fVar15 * param_1 + *(float *)(this + 0x100);
      if (fVar12 <= fVar15) {
        fVar15 = fVar12;
      }
      *(float *)(this + 0xfc) = (float)((double)*(float *)(this + 0xfc) + dVar14);
      *(float *)(this + 0x100) = fVar15;
      if (*(DamageComponent **)(this + 0xa0) != (DamageComponent *)0x0) {
        DamageComponent::ResolvePotentialImpacts(*(DamageComponent **)(this + 0xa0),true);
        fVar11 = *(float *)(this + 0xec);
      }
      if (0.5 < fVar11) {
        this[0xf0] = (MagicExplosionComponent)0x0;
      }
      goto LAB_00387ff4;
    }
  }
  if (*(DamageComponent **)(this + 0xa0) != (DamageComponent *)0x0) {
    DamageComponent::ResolvePotentialImpacts(*(DamageComponent **)(this + 0xa0),true);
  }
  if (this[0xf1] == (MagicExplosionComponent)0x0) {
    this[0xf1] = (MagicExplosionComponent)0x1;
    if (*(CollisionShapeComponent **)(this + 0xa8) != (CollisionShapeComponent *)0x0) {
      CollisionShapeComponent::SetEnabled(*(CollisionShapeComponent **)(this + 0xa8),true);
    }
    this_00 = *(SoundEffectComponent **)(this + 0x98);
    if (this_00 == (SoundEffectComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      this_00 = *(SoundEffectComponent **)(this + 0x98);
      if (this_00 != (SoundEffectComponent *)0x0) goto LAB_00388050;
    }
    else {
LAB_00388050:
      SoundEffectComponent::Play(this_00);
    }
    pSVar5 = operator_new(0x128);
    SceneObject::SceneObject(pSVar5);
    *(int *)(pSVar5 + 8) = *(int *)(pSVar5 + 8) + 1;
    psVar10 = *(string **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0xa0);
    local_60 = pSVar5;
    FUN_00666bb8(&local_58,"particle_blast",auStack_68);
    ObjectLibrary::TemplateForName(psVar10,SUB81(&local_58,0));
    SceneObject::InitWithTemplate(pSVar5,(intrusive_ptr *)&local_78);
    if ((local_78 != (long *)0x0) &&
       (iVar9 = (int)local_78[1] + -1, *(int *)(local_78 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*local_78 + 8))();
    }
    puVar6 = (undefined *)(CONCAT44(fStack_54,local_58) + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar8 = (int *)(CONCAT44(fStack_54,local_58) + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
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
      if (iVar9 < 1) {
        operator_delete(puVar6);
      }
    }
    pSVar5 = local_60;
    local_78 = *(long **)(*(long *)(this + 0x28) + 0x70);
    local_70 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    Vector2::Vector2((Vector2 *)&local_58,(Vector3 *)&local_78);
    pSVar7 = pSVar5;
    if ((DAT_00683488 < ABS(local_58 - *(float *)(pSVar5 + 0x70))) ||
       (DAT_00683488 < ABS(fStack_54 - *(float *)(pSVar5 + 0x74)))) {
      *(float *)(pSVar5 + 0x70) = local_58;
      *(float *)(pSVar5 + 0x74) = fStack_54;
      if (pSVar5[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(pSVar5);
        pSVar5[0xb4] = (SceneObject)0x1;
        pSVar7 = local_60;
      }
    }
    *(undefined4 *)(pSVar5 + 0x78) = local_70;
    SceneObject::SetInstanceScaling(pSVar7,1.5);
    (**(code **)(**(long **)(*(long *)(this + 0x28) + 0x20) + 0x28))
              (*(long **)(*(long *)(this + 0x28) + 0x20),&local_60);
    *(undefined4 *)(this + 0x160) = 0;
    if ((local_60 != (SceneObject *)0x0) &&
       (iVar9 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
      (**(code **)(*(long *)local_60 + 8))();
    }
  }
  fVar11 = *(float *)(this + 0xe8);
  fVar15 = *(float *)(this + 0x160) + (fVar11 * param_1) / DAT_00683f68;
  *(float *)(this + 0x160) = fVar15;
  if (fVar11 < fVar15) {
    *(float *)(this + 0x160) = fVar11;
    *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  }
LAB_00387ff4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


