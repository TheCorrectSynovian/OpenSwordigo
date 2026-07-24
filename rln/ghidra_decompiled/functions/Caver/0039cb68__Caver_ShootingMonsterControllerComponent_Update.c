/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039cb68
 * Function: Caver::ShootingMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(ShootingMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ShootingMonsterControllerComponent::Update(float) */

void __thiscall
Caver::ShootingMonsterControllerComponent::Update
          (ShootingMonsterControllerComponent *this,float param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  EntityComponent *pEVar6;
  SceneObject *this_00;
  long *plVar7;
  Vector2 *pVVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  undefined4 in_register_00005004;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a0;
  undefined8 local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) goto LAB_0039d198;
  lVar10 = *(long *)(this + 0x98);
  if (lVar10 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar10 = *(long *)(this + 0x98);
    if (lVar10 == 0) goto LAB_0039d198;
  }
  if (*(long *)(this + 0x100) == 0) goto LAB_0039d198;
  plVar5 = *(long **)(lVar10 + 0xa0);
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(this + 0x100);
    if (plVar5 != (long *)0x0) {
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 2;
    }
    plVar7 = *(long **)(lVar10 + 0xa0);
    *(long **)(lVar10 + 0xa0) = plVar5;
    if ((plVar7 != (long *)0x0) &&
       (iVar9 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar7 + 8))();
    }
    if ((plVar5 != (long *)0x0) &&
       (iVar9 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar9, iVar9 == 0)) {
      lVar10 = *plVar5;
      goto LAB_0039cc60;
    }
  }
  else if ((int)plVar5[1] == 0) {
    lVar10 = *plVar5;
LAB_0039cc60:
    (**(code **)(lVar10 + 8))(plVar5);
  }
  if (*(int *)(this + 0x108) == 0) {
    pEVar6 = *(EntityComponent **)(this + 0x80);
    if (pEVar6 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pEVar6 = *(EntityComponent **)(this + 0x80);
      iVar9 = *(int *)(this + 0x108);
    }
    else {
      iVar9 = 0;
    }
    iVar1 = *(int *)(pEVar6 + 0x70);
    if (iVar9 != iVar1) {
      *(int *)(this + 0x108) = iVar1;
      if (pEVar6 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar6 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(pEVar6,iVar1);
      *(undefined4 *)(this + 0x120) = 0;
    }
  }
  if (this[0x11c] == (ShootingMonsterControllerComponent)0x0) {
    *(float *)(this + 0x118) = *(float *)(this + 0x118) + param_1;
    *(float *)(this + 0x120) = *(float *)(this + 0x120) + param_1;
    plVar5 = (long *)MonsterControllerComponent::FindNearestEnemy
                               ((MonsterControllerComponent *)this);
    if (plVar5 == (long *)0x0) {
      bVar3 = false;
LAB_0039cef4:
      bVar4 = false;
LAB_0039cef8:
      fVar12 = *(float *)(this + 0x120);
    }
    else {
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      fVar12 = *(float *)(plVar5 + 0xe);
      fVar13 = *(float *)((long)plVar5 + 0x74);
      pEVar6 = *(EntityComponent **)(this + 0x80);
      fVar15 = *(float *)(*(long *)(this + 0x28) + 0x70);
      fVar14 = *(float *)(*(long *)(this + 0x28) + 0x74);
      if (pEVar6 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar6 = *(EntityComponent **)(this + 0x80);
      }
      iVar9 = *(int *)(pEVar6 + 0x70);
      fVar12 = fVar12 - fVar15;
      fVar15 = fVar12 * (float)iVar9;
      bVar3 = 0.0 < fVar15;
      if (DAT_0068797c <= ABS(fVar12)) goto LAB_0039cef4;
      bVar4 = ABS(fVar13 - fVar14) < _DAT_0068782c;
      if (((fVar15 <= 0.0) && (DAT_006882c0 < *(float *)(this + 0x120))) && (bVar4)) {
        if (pEVar6 == (EntityComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          pEVar6 = *(EntityComponent **)(this + 0x80);
          iVar9 = *(int *)(pEVar6 + 0x70);
        }
        if (*(int *)(this + 0x108) + iVar9 != 0) {
          *(int *)(this + 0x108) = -iVar9;
          if (pEVar6 == (EntityComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            pEVar6 = *(EntityComponent **)(this + 0x80);
          }
          EntityComponent::SetFacingDirection(pEVar6,-iVar9);
          *(undefined4 *)(this + 0x120) = 0;
        }
      }
      if ((!bVar4 || fVar15 <= 0.0) || (*(float *)(this + 0x118) <= 2.0)) goto LAB_0039cef8;
      fVar12 = *(float *)(this + 0x120);
      if (_DAT_006846d0 < fVar12) {
        plVar7 = *(long **)(this + 0xf8);
        if (plVar7 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
          plVar7 = *(long **)(this + 0xf8);
        }
        lVar10 = (**(code **)(*plVar7 + 0x108))();
        *(undefined4 *)(lVar10 + 0xc) = 0;
        *(undefined2 *)(*(long *)(this + 0x100) + 0x2c) = 0x100;
        *(undefined2 *)(this + 0x11c) = 1;
        *(undefined4 *)(this + 0x118) = 0;
        goto LAB_0039cef8;
      }
    }
    if (((DAT_006882c0 < fVar12) && (!(bool)(bVar3 & bVar4))) && (*(int *)(this + 0xa8) != 0)) {
      if (*(float *)(this + 0xb8) <= *(float *)(*(long *)(this + 0x28) + 0x70)) {
        if ((*(float *)(this + 0xb8) + *(float *)(this + 0xc0) <
             *(float *)(*(long *)(this + 0x28) + 0x70)) && (*(int *)(this + 0x108) != -1)) {
          pEVar6 = *(EntityComponent **)(this + 0x80);
          *(undefined4 *)(this + 0x108) = 0xffffffff;
          if (pEVar6 == (EntityComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            pEVar6 = *(EntityComponent **)(this + 0x80);
          }
          EntityComponent::SetFacingDirection(pEVar6,-1);
          goto LAB_0039cfac;
        }
      }
      else if (*(int *)(this + 0x108) != 1) {
        pEVar6 = *(EntityComponent **)(this + 0x80);
        *(undefined4 *)(this + 0x108) = 1;
        if (pEVar6 == (EntityComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          pEVar6 = *(EntityComponent **)(this + 0x80);
        }
        EntityComponent::SetFacingDirection(pEVar6,1);
LAB_0039cfac:
        *(undefined4 *)(this + 0x120) = 0;
      }
    }
    if ((plVar5 != (long *)0x0) &&
       (iVar9 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
LAB_0039d100:
    if (this[0x11c] == (ShootingMonsterControllerComponent)0x0) goto LAB_0039d11c;
    plVar5 = *(long **)(this + 0x80);
joined_r0x0039d110:
    fVar13 = 0.0;
    fVar12 = 0.0;
    if (plVar5 != (long *)0x0) goto LAB_0039d114;
LAB_0039d138:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar5 = *(long **)(this + 0x80);
    *(float *)(plVar5 + 0x16) = fVar12;
    if (plVar5 != (long *)0x0) goto LAB_0039d154;
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar5 = *(long **)(this + 0x80);
    *(undefined4 *)((long)plVar5 + 0xb4) = 0x44bb8000;
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar5 = *(long **)(this + 0x80);
    }
  }
  else {
    if (this[0x11d] == (ShootingMonsterControllerComponent)0x0) {
      plVar5 = *(long **)(this + 0xf8);
      if (plVar5 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
        plVar5 = *(long **)(this + 0xf8);
      }
      lVar10 = (**(code **)(*plVar5 + 0x108))();
      if (6 < *(int *)(lVar10 + 0x10)) {
        this_00 = operator_new(0x128);
        SceneObject::SceneObject(this_00);
        SceneObject::InitWithTemplate(this_00,(intrusive_ptr *)(this + 0x110));
        SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(this + 0x28));
        if ((DAT_00683488 < ABS((float)local_90 - *(float *)(this_00 + 0x70))) ||
           (DAT_00683488 < ABS(local_90._4_4_ - *(float *)(this_00 + 0x74)))) {
          *(float *)(this_00 + 0x70) = (float)local_90;
          *(float *)(this_00 + 0x74) = local_90._4_4_;
          if (this_00[0xb4] == (SceneObject)0x0) {
            SceneObject::RegisterForWorldBoundsUpdate(this_00);
            this_00[0xb4] = (SceneObject)0x1;
          }
        }
        pVVar8 = *(Vector2 **)(this + 0x28);
        local_90 = (SceneObject *)_DAT_00683948;
        *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(pVVar8 + 0x78);
        SceneObject::WorldDirectionFromLocalDirection(pVVar8);
        *(ulong *)(this_00 + 0x68) =
             CONCAT44((float)((ulong)local_a0 >> 0x20) * 250.0,(float)local_a0 * 250.0);
        plVar5 = *(long **)(*(long *)(this + 0x28) + 0x20);
        pcVar11 = *(code **)(*plVar5 + 0x28);
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        local_90 = this_00;
        (*pcVar11)(plVar5,&local_90);
        if ((local_90 != (SceneObject *)0x0) &&
           (iVar9 = *(int *)(local_90 + 8), *(int *)(local_90 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
          (**(code **)(*(long *)local_90 + 8))();
        }
        this[0x11d] = (ShootingMonsterControllerComponent)0x1;
      }
    }
    plVar5 = *(long **)(this + 0xf8);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar5 = *(long **)(this + 0xf8);
    }
    lVar10 = (**(code **)(*plVar5 + 0x108))();
    if ((*(char *)(lVar10 + 0x2c) != '\0') ||
       (*(float *)(lVar10 + 0xc) <= *(float *)(lVar10 + 0x28) + DAT_00689310)) goto LAB_0039d100;
    *(undefined2 *)(*(long *)(this + 0x100) + 0x2c) = 0x101;
    this[0x11c] = (ShootingMonsterControllerComponent)0x0;
LAB_0039d11c:
    if (*(int *)(this + 0x108) == 0) {
      plVar5 = *(long **)(this + 0x80);
      goto joined_r0x0039d110;
    }
    fVar13 = *(float *)(this + 200) * (float)*(int *)(this + 0x108);
    plVar5 = *(long **)(this + 0x80);
    fVar12 = fVar13;
    if (plVar5 == (long *)0x0) goto LAB_0039d138;
LAB_0039d114:
    *(float *)(plVar5 + 0x16) = fVar13;
LAB_0039d154:
    *(undefined4 *)((long)plVar5 + 0xb4) = 0x44bb8000;
  }
  (**(code **)(*plVar5 + 200))(CONCAT44(in_register_00005004,param_1));
  plVar5 = *(long **)(this + 0x98);
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar5 = *(long **)(this + 0x98);
  }
  (**(code **)(*plVar5 + 200))(CONCAT44(in_register_00005004,param_1));
LAB_0039d198:
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


