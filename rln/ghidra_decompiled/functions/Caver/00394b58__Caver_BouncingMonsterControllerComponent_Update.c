/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00394b58
 * Function: Caver::BouncingMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(BouncingMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BouncingMonsterControllerComponent::Update(float) */

void __thiscall
Caver::BouncingMonsterControllerComponent::Update
          (BouncingMonsterControllerComponent *this,float param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  EntityComponent *pEVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 in_register_00005004;
  float local_4c;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) goto LAB_00394eb8;
  lVar7 = *(long *)(this + 0x98);
  if (lVar7 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar7 = *(long *)(this + 0x98);
    if (lVar7 == 0) goto LAB_00394eb8;
  }
  plVar2 = *(long **)(lVar7 + 0xa0);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(this + 0x100);
    if (plVar2 == (long *)0x0) goto LAB_00394eb8;
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
    plVar3 = *(long **)(lVar7 + 0xa0);
    *(long **)(lVar7 + 0xa0) = plVar2;
    if ((plVar3 != (long *)0x0) &&
       (iVar5 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar5, iVar5 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    iVar5 = (int)plVar2[1] + -1;
    *(int *)(plVar2 + 1) = iVar5;
    if (iVar5 == 0) {
      lVar7 = *plVar2;
      goto LAB_00394c28;
    }
  }
  else if ((int)plVar2[1] == 0) {
    lVar7 = *plVar2;
LAB_00394c28:
    (**(code **)(lVar7 + 8))(plVar2);
  }
  if (*(int *)(this + 0x110) == 0) {
    pEVar4 = *(EntityComponent **)(this + 0x80);
    if (pEVar4 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pEVar4 = *(EntityComponent **)(this + 0x80);
      iVar5 = *(int *)(this + 0x110);
    }
    else {
      iVar5 = 0;
    }
    iVar8 = *(int *)(pEVar4 + 0x70);
    if (iVar5 != iVar8) {
      *(int *)(this + 0x110) = iVar8;
      if (pEVar4 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar4 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(pEVar4,iVar8);
    }
  }
  pEVar4 = *(EntityComponent **)(this + 0x80);
  if (pEVar4 == (EntityComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    pEVar4 = *(EntityComponent **)(this + 0x80);
  }
  if ((*(float *)(pEVar4 + 0x80) < _DAT_00684434) && (0.0 < *(float *)(pEVar4 + 0x8c))) {
    *(undefined4 *)(pEVar4 + 0xb4) = 0x44480000;
    if (*(int *)(this + 0xa8) == 0) {
      plVar2 = (long *)MonsterControllerComponent::FindNearestEnemy
                                 ((MonsterControllerComponent *)this);
      if (plVar2 != (long *)0x0) {
        iVar5 = (int)plVar2[1] + 1;
        *(int *)(plVar2 + 1) = iVar5;
        iVar8 = -1;
        if (0.0 < *(float *)(plVar2 + 0xe) - *(float *)(*(long *)(this + 0x28) + 0x70)) {
          iVar8 = 1;
        }
        if (*(int *)(this + 0x110) != iVar8) {
          pEVar4 = *(EntityComponent **)(this + 0x80);
          *(int *)(this + 0x110) = iVar8;
          if (pEVar4 == (EntityComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            pEVar4 = *(EntityComponent **)(this + 0x80);
          }
          EntityComponent::SetFacingDirection(pEVar4,iVar8);
          iVar5 = (int)plVar2[1];
        }
        *(int *)(plVar2 + 1) = iVar5 + -1;
        if (iVar5 + -1 == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
    }
    else if (*(float *)(this + 0xb8) <= *(float *)(*(long *)(this + 0x28) + 0x70)) {
      if ((*(float *)(this + 0xb8) + *(float *)(this + 0xc0) <
           *(float *)(*(long *)(this + 0x28) + 0x70)) && (*(int *)(this + 0x110) != -1)) {
        iVar5 = -1;
        *(undefined4 *)(this + 0x110) = 0xffffffff;
        goto LAB_00394db4;
      }
    }
    else if (*(int *)(this + 0x110) != 1) {
      *(undefined4 *)(this + 0x110) = 1;
      iVar5 = 1;
LAB_00394db4:
      EntityComponent::SetFacingDirection(pEVar4,iVar5);
    }
    Jump(this);
  }
  if ((this[0x118] != (BouncingMonsterControllerComponent)0x0) &&
     (this[0x119] == (BouncingMonsterControllerComponent)0x0)) {
    if (*(long *)(this + 0x80) == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    }
    PhysicsObjectState::velocity();
    if (local_4c < 0.0) {
      *(undefined2 *)(*(long *)(this + 0x100) + 0x2c) = 0x100;
      plVar2 = *(long **)(this + 0xf8);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
        plVar2 = *(long **)(this + 0xf8);
      }
      lVar7 = (**(code **)(*plVar2 + 0x108))();
      *(undefined4 *)(lVar7 + 0xc) = 0;
      this[0x119] = (BouncingMonsterControllerComponent)0x1;
    }
  }
  plVar2 = *(long **)(this + 0x80);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar2 = *(long **)(this + 0x80);
    *(undefined4 *)(plVar2 + 0x16) = *(undefined4 *)(this + 0x114);
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar2 = *(long **)(this + 0x80);
    }
  }
  else {
    *(undefined4 *)(plVar2 + 0x16) = *(undefined4 *)(this + 0x114);
  }
  (**(code **)(*plVar2 + 200))(CONCAT44(in_register_00005004,param_1));
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar2 = *(long **)(this + 0x98);
  }
  (**(code **)(*plVar2 + 200))(CONCAT44(in_register_00005004,param_1));
LAB_00394eb8:
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


