/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044bf50
 * Function: Caver::GameSceneController::BeginCasting
 * Signature: undefined __thiscall BeginCasting(GameSceneController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::BeginCasting(boost::shared_ptr<Caver::Skill> const&) */

void __thiscall
Caver::GameSceneController::BeginCasting(GameSceneController *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  CharControllerComponent *this_00;
  SceneObject *pSVar11;
  long lVar12;
  SkillComponent *pSVar13;
  int *piVar14;
  long *plVar15;
  string *psVar16;
  SkillComponent *local_88;
  long *local_80;
  SkillComponent *local_78;
  long *local_70;
  long local_68;
  undefined *local_60;
  long local_58 [2];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar10 = CharControllerComponent::CanBeginCasting(*(CharControllerComponent **)(this + 0xe0));
  if (((uVar10 & 1) == 0) ||
     (iVar9 = *(int *)(*(long *)(this + 0xf8) + 0x74), iVar8 = ManaCostForSkill(this,param_1),
     iVar9 <= iVar8)) goto LAB_0044c764;
  uVar1 = *(undefined8 *)param_1;
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 != 0) {
    *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 1;
  }
  plVar15 = *(long **)(this + 0x160);
  *(undefined8 *)(this + 0x158) = uVar1;
  *(long *)(this + 0x160) = lVar12;
  if ((plVar15 != (long *)0x0) && (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar12 = plVar15[2];
    plVar15[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  *(undefined4 *)(this + 0x168) = 0x3dcccccd;
  FUN_00666bb8(local_58,"magic_spell_cast",&local_88);
  puVar6 = PTR_DAT_007e5de8;
  local_60 = PTR_DAT_007e5de8 + 0x18;
  FUN_0066a528(&local_88,*(undefined8 *)param_1);
  iVar9 = FUN_006689e0(&local_88,"bolt");
  if (local_88 + -0x18 == (SkillComponent *)puVar6) {
LAB_0044c064:
    if (iVar9 != 0) goto LAB_0044c068;
LAB_0044c184:
    FUN_0066918c(&local_60,"magic_bolt",10);
  }
  else {
    pSVar13 = local_88 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *(int *)pSVar13;
      *(int *)pSVar13 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *(int *)pSVar13;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
        if (bVar7) {
          *(int *)pSVar13 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (0 < iVar8) goto LAB_0044c064;
    operator_delete(local_88 + -0x18);
    if (iVar9 == 0) goto LAB_0044c184;
LAB_0044c068:
    FUN_0066a528(&local_88,*(undefined8 *)param_1);
    iVar9 = FUN_006689e0(&local_88,"bomb");
    if (local_88 + -0x18 != (SkillComponent *)puVar6) {
      pSVar13 = local_88 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pSVar13;
        *(int *)pSVar13 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pSVar13;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
          if (bVar7) {
            *(int *)pSVar13 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_88 + -0x18);
      }
    }
    if (iVar9 == 0) {
      FUN_0066918c(&local_60,"magic_bomb",10);
    }
    else {
      FUN_0066a528(&local_88,*(undefined8 *)param_1);
      iVar9 = FUN_006689e0(&local_88,"hookshot");
      if (local_88 + -0x18 != (SkillComponent *)puVar6) {
        pSVar13 = local_88 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *(int *)pSVar13;
          *(int *)pSVar13 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *(int *)pSVar13;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
            if (bVar7) {
              *(int *)pSVar13 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_88 + -0x18);
        }
      }
      if (iVar9 == 0) {
        FUN_0066918c(&local_60,"magic_hookshot",0xe);
      }
      else {
        FUN_0066a528(&local_88,*(undefined8 *)param_1);
        iVar9 = FUN_006689e0(&local_88,"dimension");
        if (local_88 + -0x18 != (SkillComponent *)puVar6) {
          pSVar13 = local_88 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *(int *)pSVar13;
            *(int *)pSVar13 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *(int *)pSVar13;
              cVar2 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
              if (bVar7) {
                *(int *)pSVar13 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(local_88 + -0x18);
          }
        }
        if (iVar9 == 0) {
          FUN_0066918c(&local_60,"magic_dimension",0xf);
        }
      }
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,&local_88);
  lVar12 = *(long *)(*(long *)(this + 8) + 0x98);
  plVar15 = *(long **)(*(long *)(this + 8) + 0xa0);
  if (plVar15 != (long *)0x0) {
    plVar15[1] = plVar15[1] + 1;
  }
  if (lVar12 == 0) {
    bVar7 = false;
  }
  else {
    FUN_0066a528(&local_88,*(undefined8 *)param_1);
    iVar9 = FUN_006689e0(&local_88,"dimension");
    bVar7 = iVar9 != 0;
    if (local_88 + -0x18 != (SkillComponent *)puVar6) {
      pSVar13 = local_88 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *(int *)pSVar13;
        *(int *)pSVar13 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *(int *)pSVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
          if (bVar3) {
            *(int *)pSVar13 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete(local_88 + -0x18);
      }
    }
  }
  if ((plVar15 != (long *)0x0) && (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar12 = plVar15[2];
    plVar15[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  if (bVar7) {
    lVar12 = *(long *)(*(long *)(this + 8) + 0x98);
    plVar15 = *(long **)(*(long *)(this + 8) + 0xa0);
    if (plVar15 != (long *)0x0) {
      plVar15[1] = plVar15[1] + 1;
    }
    FUN_0066a528(&local_88,lVar12 + 8);
    iVar9 = FUN_006689e0(&local_88,"firetrinket");
    if (local_88 + -0x18 != (SkillComponent *)puVar6) {
      pSVar13 = local_88 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *(int *)pSVar13;
        *(int *)pSVar13 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *(int *)pSVar13;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
          if (bVar7) {
            *(int *)pSVar13 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar8 < 1) {
        operator_delete(local_88 + -0x18);
      }
    }
    if ((plVar15 != (long *)0x0) &&
       (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar12 = plVar15[2];
      plVar15[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    if (iVar9 == 0) {
      FUN_0066918c(&local_68,&DAT_0068eb2f,5);
    }
    else {
      lVar12 = *(long *)(*(long *)(this + 8) + 0x98);
      plVar15 = *(long **)(*(long *)(this + 8) + 0xa0);
      if (plVar15 != (long *)0x0) {
        plVar15[1] = plVar15[1] + 1;
      }
      FUN_0066a528(&local_88,lVar12 + 8);
      iVar9 = FUN_006689e0(&local_88,0x68eb35);
      if (local_88 + -0x18 != (SkillComponent *)puVar6) {
        pSVar13 = local_88 + -8;
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *(int *)pSVar13;
          *(int *)pSVar13 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *(int *)pSVar13;
            cVar2 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
            if (bVar7) {
              *(int *)pSVar13 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete(local_88 + -0x18);
        }
      }
      if ((plVar15 != (long *)0x0) &&
         (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      if (iVar9 == 0) {
        FUN_0066918c(&local_68,&DAT_0068eb40,4);
      }
      else {
        lVar12 = *(long *)(*(long *)(this + 8) + 0x98);
        plVar15 = *(long **)(*(long *)(this + 8) + 0xa0);
        if (plVar15 != (long *)0x0) {
          plVar15[1] = plVar15[1] + 1;
        }
        FUN_0066a528(&local_88,lVar12 + 8);
        iVar9 = FUN_006689e0(&local_88,"shadowtrinket");
        if (local_88 + -0x18 != (SkillComponent *)puVar6) {
          pSVar13 = local_88 + -8;
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar8 = *(int *)pSVar13;
            *(int *)pSVar13 = iVar8 + -1;
          }
          else {
            do {
              iVar8 = *(int *)pSVar13;
              cVar2 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
              if (bVar7) {
                *(int *)pSVar13 = iVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar8 < 1) {
            operator_delete(local_88 + -0x18);
          }
        }
        if ((plVar15 != (long *)0x0) &&
           (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          lVar12 = plVar15[2];
          plVar15[2] = lVar12 + -1;
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar15 + 0x18))(plVar15);
          }
        }
        if (iVar9 == 0) {
          FUN_0066918c(&local_68,"_shadow",7);
        }
      }
    }
  }
  psVar16 = *(string **)(*(long *)(this + 0x20) + 0xa0);
  FUN_0066a528(&local_88,local_58);
  FUN_00667614(&local_88,&local_68);
  ObjectLibrary::TemplateForName(psVar16,SUB81(&local_88,0));
  if (local_88 + -0x18 != (SkillComponent *)puVar6) {
    pSVar13 = local_88 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pSVar13;
      *(int *)pSVar13 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pSVar13;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
        if (bVar7) {
          *(int *)pSVar13 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_88 + -0x18);
    }
  }
  psVar16 = *(string **)(*(long *)(this + 0x20) + 0xa0);
  FUN_0066a528(&local_88,&local_60);
  FUN_00667614(&local_88,&local_68);
  ObjectLibrary::TemplateForName(psVar16,SUB81(&local_88,0));
  if (local_88 + -0x18 != (SkillComponent *)puVar6) {
    pSVar13 = local_88 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pSVar13;
      *(int *)pSVar13 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pSVar13;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pSVar13,0x10);
        if (bVar7) {
          *(int *)pSVar13 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_88 + -0x18);
    }
  }
  if (local_78 == (SkillComponent *)0x0) {
    ObjectLibrary::TemplateForName(*(string **)(*(long *)(this + 0x20) + 0xa0),SUB81(&local_60,0));
    pSVar13 = local_78;
    if (local_88 != (SkillComponent *)0x0) {
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    }
    local_78 = local_88;
    if ((pSVar13 != (SkillComponent *)0x0) &&
       (iVar9 = *(int *)(pSVar13 + 8), *(int *)(pSVar13 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
      (**(code **)(*(long *)pSVar13 + 8))(pSVar13);
    }
    if ((local_88 != (SkillComponent *)0x0) &&
       (iVar9 = *(int *)(local_88 + 8), *(int *)(local_88 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
      (**(code **)(*(long *)local_88 + 8))();
    }
  }
  if (local_70 == (long *)0x0) {
LAB_0044c6ec:
    if ((local_78 != (SkillComponent *)0x0) &&
       (iVar9 = *(int *)(local_78 + 8), *(int *)(local_78 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
      (**(code **)(*(long *)local_78 + 8))();
    }
    if (local_70 != (long *)0x0) goto LAB_0044c718;
  }
  else {
    if (local_78 != (SkillComponent *)0x0) {
      pSVar13 = (SkillComponent *)
                SceneObject::ComponentWithInterface
                          (*(SceneObject **)(this + 0xd8),(long)PTR_Interface_007e6ee0);
      SkillComponent::SetCastObjectTemplate(pSVar13,(intrusive_ptr *)&local_70);
      SkillComponent::SetSpellTemplate(pSVar13,(intrusive_ptr *)&local_78);
      HeroEquipmentManager::ApplyCharacterStatsToSpell
                ((HeroEquipmentManager *)(this + 0x100),*(SceneObject **)(pSVar13 + 0xc0));
      pSVar11 = *(SceneObject **)(pSVar13 + 0xc0);
      local_88 = *(SkillComponent **)(*(long *)(this + 8) + 0x98);
      local_80 = *(long **)(*(long *)(this + 8) + 0xa0);
      if (local_80 != (long *)0x0) {
        local_80[1] = local_80[1] + 1;
      }
      HeroEquipmentManager::ApplyTrinketToSpell
                ((HeroEquipmentManager *)(this + 0x100),pSVar11,(shared_ptr *)&local_88);
      plVar15 = local_80;
      if ((local_80 != (long *)0x0) &&
         (lVar12 = local_80[1], local_80[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*local_80 + 0x10))(local_80);
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      iVar9 = *(int *)(*(long *)(this + 0xe8) + 0x70);
      *(undefined4 *)(pSVar13 + 0x94) = 0;
      *(undefined4 *)(pSVar13 + 0x98) = 0;
      *(float *)(pSVar13 + 0x90) = (float)iVar9;
      this_00 = *(CharControllerComponent **)(this + 0xe0);
      *(int *)(pSVar13 + 8) = *(int *)(pSVar13 + 8) + 1;
      local_88 = pSVar13;
      CharControllerComponent::BeginCasting(this_00,(intrusive_ptr *)&local_88);
      if ((local_88 != (SkillComponent *)0x0) &&
         (iVar9 = *(int *)(local_88 + 8), *(int *)(local_88 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
        (**(code **)(*(long *)local_88 + 8))();
      }
      lVar12 = *(long *)(this + 0xf8);
      iVar9 = *(int *)(lVar12 + 0x74);
      iVar8 = ManaCostForSkill(this,param_1);
      uVar4 = iVar9 - iVar8;
      if ((int)*(uint *)(lVar12 + 0x70) <= (int)uVar4) {
        uVar4 = *(uint *)(lVar12 + 0x70);
      }
      *(uint *)(lVar12 + 0x74) = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      goto LAB_0044c6ec;
    }
LAB_0044c718:
    iVar9 = (int)local_70[1] + -1;
    *(int *)(local_70 + 1) = iVar9;
    if (iVar9 == 0) {
      (**(code **)(*local_70 + 8))();
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar6) {
    piVar14 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar14;
      *piVar14 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar14;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar7) {
          *piVar14 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  if (local_60 + -0x18 != puVar6) {
    piVar14 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar14;
      *piVar14 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar14;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar7) {
          *piVar14 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  if ((undefined *)(local_58[0] + -0x18) != puVar6) {
    piVar14 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar14;
      *piVar14 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar14;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar7) {
          *piVar14 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58[0] + -0x18));
    }
  }
LAB_0044c764:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


