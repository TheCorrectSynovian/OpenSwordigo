/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003976d8
 * Function: Caver::GenericMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(GenericMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GenericMonsterControllerComponent::Update(float) */

void __thiscall
Caver::GenericMonsterControllerComponent::Update
          (GenericMonsterControllerComponent *this,float param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  AttackComponent *this_00;
  undefined4 in_register_00005004;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long *local_70;
  long local_68;
  
  uVar10 = CONCAT44(in_register_00005004,param_1);
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) goto LAB_00397f44;
  lVar9 = *(long *)(this + 0x98);
  if (lVar9 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar9 = *(long *)(this + 0x98);
    if (lVar9 == 0) goto LAB_00397f44;
  }
  plVar4 = *(long **)(lVar9 + 0xa0);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(this + 0xe0);
    if (plVar4 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar4 = *(long **)(this + 0xe0);
      if (plVar4 == (long *)0x0) goto LAB_003977d0;
      lVar9 = *(long *)(this + 0x98);
      if (lVar9 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        plVar4 = *(long **)(this + 0xe0);
        lVar9 = *(long *)(this + 0x98);
        if (plVar4 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          plVar4 = *(long **)(this + 0xe0);
        }
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x108))();
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 2;
    }
    plVar7 = *(long **)(lVar9 + 0xa0);
    *(long **)(lVar9 + 0xa0) = plVar4;
    if ((plVar7 != (long *)0x0) &&
       (iVar8 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar8, iVar8 == 0)) {
      (**(code **)(*plVar7 + 8))();
    }
    if ((plVar4 != (long *)0x0) &&
       (iVar8 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar8, iVar8 == 0)) {
      lVar9 = *plVar4;
      goto LAB_003977c8;
    }
  }
  else if ((int)plVar4[1] == 0) {
    lVar9 = *plVar4;
LAB_003977c8:
    (**(code **)(lVar9 + 8))(plVar4);
  }
LAB_003977d0:
  *(float *)(this + 0x10c) = *(float *)(this + 0x10c) + param_1;
  if (*(int *)(this + 0x108) == 0) {
    lVar9 = *(long *)(this + 0x80);
    if (lVar9 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar9 = *(long *)(this + 0x80);
      iVar8 = *(int *)(this + 0x108);
    }
    else {
      iVar8 = 0;
    }
    iVar1 = *(int *)(lVar9 + 0x70);
    if (iVar8 != iVar1) {
      *(int *)(this + 0x108) = iVar1;
      *(undefined4 *)(this + 0x10c) = 0;
      iVar8 = iVar1;
      if (lVar9 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        iVar8 = *(int *)(*(long *)(this + 0x80) + 0x70);
      }
      plVar4 = *(long **)(this + 0xe0);
      if (plVar4 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar4 = *(long **)(this + 0xe0);
      }
      lVar9 = (**(code **)(*plVar4 + 0x108))();
      *(bool *)(lVar9 + 0x39) = iVar8 != iVar1;
    }
  }
  lVar9 = *(long *)(this + 0x80);
  if (lVar9 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar9 = *(long *)(this + 0x80);
  }
  plVar4 = *(long **)(this + 0x118);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(lVar9 + 0x80);
  if (plVar4 == (long *)0x0) {
    lVar9 = MonsterControllerComponent::FindNearestEnemy((MonsterControllerComponent *)this);
    if (lVar9 != 0) {
      fVar11 = *(float *)(*(long *)(this + 0x28) + 0x70);
      fVar13 = DAT_0068797c;
      if ((*(int *)(this + 0xa8) != 0) &&
         ((fVar11 < *(float *)(this + 0xb8) ||
          (*(float *)(this + 0xb8) + *(float *)(this + 0xc0) < fVar11)))) {
        fVar13 = DAT_00687990;
      }
      fVar11 = *(float *)(lVar9 + 0x70) - fVar11;
      fVar12 = *(float *)(lVar9 + 0x74) - *(float *)(*(long *)(this + 0x28) + 0x74);
      if (fVar11 * fVar11 + fVar12 * fVar12 <= fVar13 * fVar13) {
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        plVar4 = *(long **)(this + 0x118);
        *(long *)(this + 0x118) = lVar9;
        if ((plVar4 != (long *)0x0) &&
           (iVar8 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar8, iVar8 == 0)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        *(undefined4 *)(this + 0x10c) = 0x7f7fffff;
      }
    }
LAB_00397a38:
    lVar9 = *(long *)(this + 0x100);
    if (lVar9 != 0) goto LAB_00397a48;
LAB_00397a40:
    if (*(long *)(this + 0x118) != 0) goto LAB_00397a48;
LAB_00397d3c:
    if ((*(int *)(this + 0xa8) != 0) && (DAT_006882c0 < *(float *)(this + 0x10c))) {
      lVar9 = *(long *)(this + 0x80);
      if (lVar9 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar9 = *(long *)(this + 0x80);
      }
      if (((*(float *)(lVar9 + 0x80) < _DAT_00684434) && (0.0 < *(float *)(lVar9 + 0x8c))) &&
         (*(char *)(lVar9 + 0x90) == '\0')) {
        if (*(float *)(this + 0xb8) <= *(float *)(*(long *)(this + 0x28) + 0x70)) {
          if ((*(float *)(this + 0xb8) + *(float *)(this + 0xc0) <
               *(float *)(*(long *)(this + 0x28) + 0x70)) &&
             (SetFacingDirection(this,-1), *(int *)(this + 0x108) != -1)) {
            lVar9 = *(long *)(this + 0x80);
            *(undefined8 *)(this + 0x108) = 0xffffffff;
            if (lVar9 == 0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
              lVar9 = *(long *)(this + 0x80);
            }
            plVar4 = *(long **)(this + 0xe0);
            iVar8 = *(int *)(lVar9 + 0x70);
            if (plVar4 == (long *)0x0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
              plVar4 = *(long **)(this + 0xe0);
            }
            lVar9 = *plVar4;
            bVar3 = iVar8 == -1;
            goto LAB_00398084;
          }
        }
        else {
          SetFacingDirection(this,1);
          if (*(int *)(this + 0x108) != 1) {
            lVar9 = *(long *)(this + 0x80);
            *(undefined8 *)(this + 0x108) = 1;
            if (lVar9 == 0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
              lVar9 = *(long *)(this + 0x80);
            }
            plVar4 = *(long **)(this + 0xe0);
            iVar8 = *(int *)(lVar9 + 0x70);
            if (plVar4 == (long *)0x0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
              plVar4 = *(long **)(this + 0xe0);
            }
            lVar9 = *plVar4;
            bVar3 = iVar8 == 1;
LAB_00398084:
            lVar9 = (**(code **)(lVar9 + 0x108))();
            *(bool *)(lVar9 + 0x39) = !bVar3;
          }
        }
      }
    }
    fVar11 = *(float *)(this + 200);
    fVar13 = *(float *)(this + 0x114);
    if (DAT_00683734 < ABS(fVar11 - fVar13)) {
LAB_00397e84:
      plVar4 = *(long **)(this + 0xe0);
      *(float *)(this + 0x114) = fVar11;
      if (plVar4 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar4 = *(long **)(this + 0xe0);
      }
      lVar9 = (**(code **)(*plVar4 + 0x108))();
      fVar13 = *(float *)(this + 0x114);
      *(float *)(lVar9 + 0x34) = fVar13 / *(float *)(this + 200);
    }
  }
  else {
    if (*(long *)(this + 0x100) != 0) goto LAB_00397a38;
    fVar11 = *(float *)(*(long *)(this + 0x28) + 0x70);
    fVar13 = _DAT_00687e1c;
    if ((*(int *)(this + 0xa8) != 0) &&
       ((fVar11 < *(float *)(this + 0xb8) + DAT_00689170 ||
        (*(float *)(this + 0xb8) + *(float *)(this + 0xc0) + DAT_0068797c < fVar11)))) {
      fVar13 = _DAT_00684940;
    }
    fVar12 = *(float *)((long)plVar4 + 0x74) - *(float *)(*(long *)(this + 0x28) + 0x74);
    if ((*(float *)(plVar4 + 0xe) - fVar11) * (*(float *)(plVar4 + 0xe) - fVar11) + fVar12 * fVar12
        <= fVar13 * fVar13) goto LAB_00397a38;
    *(undefined8 *)(this + 0x118) = 0;
    iVar8 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar8;
    if (iVar8 != 0) goto LAB_00397a38;
    (**(code **)(*plVar4 + 8))();
    lVar9 = *(long *)(this + 0x100);
    if (lVar9 == 0) goto LAB_00397a40;
LAB_00397a48:
    plVar4 = *(long **)(this + 0xe8);
    plVar7 = *(long **)(this + 0xf0);
    if (plVar4 != plVar7) {
      do {
        (**(code **)(*(long *)*plVar4 + 200))(uVar10);
        if (((*(long *)(this + 0x100) == 0) && (*(long *)(this + 0x118) != 0)) &&
           (this_00 = (AttackComponent *)*plVar4,
           *(float *)(this_00 + 0x104) < *(float *)(this_00 + 0x110))) {
          plVar5 = *(long **)(this + 0xe0);
          *(AttackComponent **)(this + 0x100) = this_00;
          if (plVar5 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
            plVar5 = *(long **)(this + 0xe0);
          }
          local_70 = (long *)(**(code **)(*plVar5 + 0x108))();
          if (local_70 != (long *)0x0) {
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          }
          AttackComponent::StartAttack
                    (this_00,(intrusive_ptr *)&local_70,*(SceneObject **)(this + 0x118));
          if ((local_70 == (long *)0x0) ||
             (iVar8 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar8, iVar8 != 0)) {
            plVar5 = *(long **)(this + 0xe0);
          }
          else {
            (**(code **)(*local_70 + 8))();
            plVar5 = *(long **)(this + 0xe0);
          }
          if (plVar5 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
            plVar5 = *(long **)(this + 0xe0);
          }
          lVar9 = (**(code **)(*plVar5 + 0x108))();
          *(undefined1 *)(lVar9 + 0x38) = 0;
          lVar9 = *(long *)(this + 0x98);
          if (lVar9 == 0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
            lVar9 = *(long *)(this + 0x98);
          }
          plVar5 = *(long **)(*plVar4 + 0xf8);
          if (plVar5 != (long *)0x0) {
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 3;
          }
          plVar6 = *(long **)(lVar9 + 0xa0);
          *(long **)(lVar9 + 0xa0) = plVar5;
          if ((plVar6 != (long *)0x0) &&
             (iVar8 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar8, iVar8 == 0)) {
            (**(code **)(*plVar6 + 8))();
          }
          if (plVar5 != (long *)0x0) {
            iVar8 = (int)plVar5[1] + -1;
            *(int *)(plVar5 + 1) = iVar8;
            if (iVar8 == 0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            iVar8 = (int)plVar5[1] + -1;
            *(int *)(plVar5 + 1) = iVar8;
            if (iVar8 == 0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        plVar4 = plVar4 + 1;
      } while (plVar7 != plVar4);
      lVar9 = *(long *)(this + 0x100);
    }
    if ((lVar9 == 0) || (*(char *)(lVar9 + 0x100) != '\0')) {
      lVar9 = *(long *)(this + 0x118);
    }
    else {
      plVar4 = *(long **)(this + 0xe0);
      if (plVar4 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar4 = *(long **)(this + 0xe0);
      }
      lVar9 = (**(code **)(*plVar4 + 0x108))();
      *(undefined1 *)(lVar9 + 0x38) = 1;
      lVar9 = *(long *)(this + 0x98);
      if (lVar9 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        lVar9 = *(long *)(this + 0x98);
      }
      plVar4 = *(long **)(this + 0xe0);
      if (plVar4 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar4 = *(long **)(this + 0xe0);
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x108))();
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 2;
      }
      plVar7 = *(long **)(lVar9 + 0xa0);
      *(long **)(lVar9 + 0xa0) = plVar4;
      if ((plVar7 != (long *)0x0) &&
         (iVar8 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar8, iVar8 == 0)) {
        (**(code **)(*plVar7 + 8))();
      }
      if ((plVar4 != (long *)0x0) &&
         (iVar8 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar8, iVar8 == 0)) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      *(undefined8 *)(this + 0x100) = 0;
      lVar9 = *(long *)(this + 0x118);
    }
    if (lVar9 == 0) goto LAB_00397d3c;
    fVar13 = *(float *)(lVar9 + 0x70) - *(float *)(*(long *)(this + 0x28) + 0x70);
    iVar8 = -1;
    if (0.0 <= fVar13) {
      iVar8 = 1;
    }
    SetFacingDirection(this,iVar8);
    if (DAT_006882c0 < *(float *)(this + 0x10c)) {
      fVar13 = ABS(fVar13);
      if (_DAT_0068782c <= fVar13) {
        if ((DAT_00687990 < fVar13) && (*(int *)(this + 0x108) != iVar8)) {
          lVar9 = *(long *)(this + 0x80);
          goto LAB_00397ddc;
        }
      }
      else if (*(int *)(this + 0x108) + iVar8 != 0) {
        lVar9 = *(long *)(this + 0x80);
        iVar8 = -iVar8;
LAB_00397ddc:
        *(int *)(this + 0x108) = iVar8;
        *(undefined4 *)(this + 0x10c) = 0;
        if (lVar9 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar9 = *(long *)(this + 0x80);
        }
        plVar4 = *(long **)(this + 0xe0);
        iVar1 = *(int *)(lVar9 + 0x70);
        if (plVar4 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          plVar4 = *(long **)(this + 0xe0);
        }
        lVar9 = (**(code **)(*plVar4 + 0x108))();
        *(bool *)(lVar9 + 0x39) = iVar1 != iVar8;
      }
    }
    lVar9 = *(long *)(this + 0x80);
    iVar8 = *(int *)(this + 0x108);
    if (lVar9 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar9 = *(long *)(this + 0x80);
    }
    fVar13 = *(float *)(this + 0x114);
    fVar11 = *(float *)(this + 200) *
             *(float *)(&DAT_00689174 + (ulong)(iVar8 == *(int *)(lVar9 + 0x70)) * 4);
    if (DAT_00683734 < ABS(fVar11 - fVar13)) goto LAB_00397e84;
  }
  fVar11 = 0.0;
  if ((*(long *)(this + 0x100) == 0) && (fVar11 = 0.0, *(int *)(this + 0x108) != 0)) {
    fVar11 = fVar13 * (float)*(int *)(this + 0x108);
  }
  plVar4 = *(long **)(this + 0x80);
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar4 = *(long **)(this + 0x80);
    *(float *)(plVar4 + 0x16) = fVar11;
    if (plVar4 != (long *)0x0) goto LAB_00397f04;
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar4 = *(long **)(this + 0x80);
    *(undefined4 *)((long)plVar4 + 0xb4) = 0x44480000;
    if (plVar4 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar4 = *(long **)(this + 0x80);
    }
  }
  else {
    *(float *)(plVar4 + 0x16) = fVar11;
LAB_00397f04:
    *(undefined4 *)((long)plVar4 + 0xb4) = 0x44480000;
  }
  (**(code **)(*plVar4 + 200))(uVar10);
  plVar4 = *(long **)(this + 0x98);
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar4 = *(long **)(this + 0x98);
  }
  (**(code **)(*plVar4 + 200))(uVar10);
LAB_00397f44:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


