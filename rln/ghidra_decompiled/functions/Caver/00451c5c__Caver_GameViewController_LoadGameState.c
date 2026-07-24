/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00451c5c
 * Function: Caver::GameViewController::LoadGameState
 * Signature: undefined __thiscall LoadGameState(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::LoadGameState() */

void __thiscall Caver::GameViewController::LoadGameState(GameViewController *this)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  PlayerProfile *pPVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  MapNode *this_00;
  long lVar14;
  int *piVar15;
  uint uVar16;
  ulong extraout_x12;
  GameState *this_01;
  long *plVar17;
  long lVar18;
  string *psVar19;
  long local_80;
  long local_78;
  long *local_70;
  long local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  pPVar10 = *(PlayerProfile **)(this + 0x88);
  if (pPVar10 != (PlayerProfile *)0x0) {
    if ((pPVar10[0x68] == (PlayerProfile)0x0) &&
       (uVar11 = PlayerProfile::Load(pPVar10), (uVar11 & 1) == 0)) {
      pPVar10 = *(PlayerProfile **)(this + 0x88);
      FUN_00666bb8(&local_78,&LAB_0068ee84,auStack_60);
      PlayerProfile::CreateProfile(pPVar10,(string *)&local_78);
      if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
        piVar15 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar15;
          *piVar15 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar3) {
              *piVar15 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
    }
    uVar1 = *(undefined8 *)(*(long *)(this + 0x88) + 0x70);
    plVar12 = *(long **)(*(long *)(this + 0x88) + 0x78);
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 2;
    }
    plVar17 = *(long **)(this + 0xa0);
    *(undefined8 *)(this + 0x98) = uVar1;
    *(long **)(this + 0xa0) = plVar12;
    if ((plVar17 != (long *)0x0) &&
       (lVar14 = plVar17[1], plVar17[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar14 = plVar17[2];
      plVar17[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar14 = plVar12[2];
      plVar12[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    uVar1 = *(undefined8 *)(*(long *)(this + 0x88) + 0x80);
    plVar12 = *(long **)(*(long *)(this + 0x88) + 0x88);
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 2;
    }
    plVar17 = *(long **)(this + 0xb0);
    *(undefined8 *)(this + 0xa8) = uVar1;
    *(long **)(this + 0xb0) = plVar12;
    if ((plVar17 != (long *)0x0) &&
       (lVar14 = plVar17[1], plVar17[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar14 = plVar17[2];
      plVar17[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar14 = plVar12[2];
      plVar12[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
  }
  lVar14 = *(long *)(this + 0xa8);
  if (*(int *)(lVar14 + 0xa8) == 0) {
    *(int *)(lVar14 + 0xa8) = *(int *)(lVar14 + 0xbc) * 2 + 4;
    *(int *)(lVar14 + 0xac) = *(int *)(lVar14 + 0xc4) * 0x14 + 10;
    FUN_0066a528(&local_68,lVar14 + 0x168);
    puVar7 = PTR_DAT_007e5de8;
    plVar12 = (long *)(local_68 + -0x18);
    lVar14 = *plVar12;
    if (plVar12 == (long *)PTR_DAT_007e5de8) {
LAB_00451e80:
      lVar18 = *(long *)(this + 0xa8);
      if (lVar14 == 0) goto LAB_00451f74;
LAB_00451e88:
      FUN_0066a528(&local_78,lVar18 + 0x168);
      FUN_0066a6a8(lVar18 + 0x158,&local_78);
      if ((undefined *)(local_78 + -0x18) != puVar7) {
        piVar15 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar15;
          *piVar15 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar3) {
              *piVar15 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
      lVar14 = *(long *)(this + 0xa8);
      FUN_00666bb8(&local_78,"portal",auStack_60);
      FUN_0066a6a8(lVar14 + 0x160,&local_78);
      puVar13 = (undefined *)(local_78 + -0x18);
      if (puVar13 == puVar7) goto LAB_00451fd8;
      piVar15 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00452508;
      do {
        iVar8 = *piVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      piVar15 = (int *)(local_68 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar15;
        *piVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (0 < iVar8) goto LAB_00451e80;
      operator_delete(plVar12);
      lVar18 = *(long *)(this + 0xa8);
      if (lVar14 != 0) goto LAB_00451e88;
LAB_00451f74:
      FUN_00666bb8(&local_78,0x68ee8e,auStack_60);
      FUN_0066a6a8(lVar18 + 0x158,&local_78);
      if ((undefined *)(local_78 + -0x18) != puVar7) {
        piVar15 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar15;
          *piVar15 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar3) {
              *piVar15 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
      lVar14 = *(long *)(this + 0xa8);
      FUN_00666bb8(&local_78,"spawn_from_town_herohouse",auStack_60);
      FUN_0066a6a8(lVar14 + 0x160,&local_78);
      puVar13 = (undefined *)(local_78 + -0x18);
      if (puVar13 == puVar7) goto LAB_00451fd8;
      piVar15 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00452508:
        iVar8 = *piVar15;
        *piVar15 = iVar8 + -1;
      }
      else {
        do {
          iVar8 = *piVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (iVar8 < 1) {
      operator_delete(puVar13);
    }
  }
LAB_00451fd8:
  this_01 = *(GameState **)(this + 0xa8);
  FUN_0066a528(&local_78,this_01 + 0x158);
  lVar14 = GameState::StateForLevelWithName(this_01,(string *)&local_78,true);
  puVar7 = PTR_DAT_007e5de8;
  if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
    piVar15 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar15;
      *piVar15 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  *(undefined1 *)(lVar14 + 8) = 1;
  plVar12 = *(long **)(*(long *)(this + 0xa8) + 0x178);
  if (plVar12 != (long *)0x0) {
    plVar12[1] = plVar12[1] + 1;
  }
  lVar18 = *(long *)(this + 0x98);
  lVar14 = *(long *)(lVar18 + 0x48);
  plVar17 = *(long **)(lVar18 + 0x50);
  if (plVar17 == (long *)0x0) {
    if (lVar14 != 0) {
      psVar19 = *(string **)(lVar18 + 0x48);
LAB_004520b8:
      plVar17 = (long *)0x0;
      bVar3 = true;
      goto LAB_004520bc;
    }
  }
  else {
    if (plVar17[1] == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar18 = plVar17[2];
      plVar17[2] = lVar18 + -1;
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    if (lVar14 != 0) {
      psVar19 = *(string **)(*(long *)(this + 0x98) + 0x48);
      plVar17 = *(long **)(*(long *)(this + 0x98) + 0x50);
      if (plVar17 == (long *)0x0) goto LAB_004520b8;
      bVar3 = false;
      plVar17[1] = plVar17[1] + 1;
LAB_004520bc:
      FUN_0066a528(&local_80,*(long *)(this + 0xa8) + 0x158);
      Map::NodeForName(psVar19);
      if ((undefined *)(local_80 + -0x18) != puVar7) {
        piVar15 = (int *)(local_80 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar8 = *piVar15;
          *piVar15 = iVar8 + -1;
        }
        else {
          do {
            iVar8 = *piVar15;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar4) {
              *piVar15 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar8 < 1) {
          operator_delete((undefined *)(local_80 + -0x18));
        }
      }
      if ((!bVar3) && (lVar14 = plVar17[1], plVar17[1] = lVar14 + -1, lVar14 + -1 == 0)) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        lVar14 = plVar17[2];
        plVar17[2] = lVar14 + -1;
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
      }
      lVar14 = *(long *)(this + 0xa8);
      if (local_78 == 0) {
        plVar17 = *(long **)(lVar14 + 0x178);
        *(undefined8 *)(lVar14 + 0x170) = 0;
        *(undefined8 *)(lVar14 + 0x178) = 0;
        if ((plVar17 != (long *)0x0) &&
           (lVar14 = plVar17[1], plVar17[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          lVar14 = plVar17[2];
          plVar17[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
        }
      }
      else {
        if (local_70 != (long *)0x0) {
          local_70[1] = local_70[1] + 1;
        }
        plVar17 = *(long **)(lVar14 + 0x178);
        *(long *)(lVar14 + 0x170) = local_78;
        *(long **)(lVar14 + 0x178) = local_70;
        if ((plVar17 != (long *)0x0) &&
           (lVar14 = plVar17[1], plVar17[1] = lVar14 + -1, lVar14 + -1 == 0)) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          lVar14 = plVar17[2];
          plVar17[2] = lVar14 + -1;
          if (lVar14 + -1 == 0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
        }
      }
      if ((local_70 != (long *)0x0) &&
         (lVar14 = local_70[1], local_70[1] = lVar14 + -1, lVar14 + -1 == 0)) {
        (**(code **)(*local_70 + 0x10))(local_70);
        lVar14 = local_70[2];
        local_70[2] = lVar14 + -1;
        if (lVar14 + -1 == 0) {
          (**(code **)(*local_70 + 0x18))(local_70);
        }
      }
    }
  }
  lVar14 = *(long *)(this + 0xa8);
  if (*(int *)(lVar14 + 0xb8) != 0) goto LAB_004523c4;
  lVar18 = *(long *)(lVar14 + 0x170);
  plVar17 = *(long **)(lVar14 + 0x178);
  if (plVar17 == (long *)0x0) {
    if (lVar18 != 0) {
      this_00 = *(MapNode **)(lVar14 + 0x170);
LAB_004522c8:
      plVar17 = (long *)0x0;
      bVar3 = true;
      goto LAB_004522cc;
    }
LAB_004522bc:
    iVar8 = 1;
  }
  else {
    if (plVar17[1] == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar14 = plVar17[2];
      plVar17[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    if (lVar18 == 0) goto LAB_004522bc;
    this_00 = *(MapNode **)(*(long *)(this + 0xa8) + 0x170);
    plVar17 = *(long **)(*(long *)(this + 0xa8) + 0x178);
    if (plVar17 == (long *)0x0) goto LAB_004522c8;
    bVar3 = false;
    plVar17[1] = plVar17[1] + 1;
LAB_004522cc:
    iVar8 = MapNode::ExperienceLevel(this_00);
    if ((!bVar3) && (lVar14 = plVar17[1], plVar17[1] = lVar14 + -1, lVar14 + -1 == 0)) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar14 = plVar17[2];
      plVar17[2] = lVar14 + -1;
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
  }
  lVar14 = *(long *)(this + 0xa8);
  *(int *)(lVar14 + 0xb8) = iVar8;
  uVar9 = CharacterState::ExperiencePointsRequiredForLevel((CharacterState *)(lVar14 + 0x10),iVar8);
  *(undefined4 *)(lVar14 + 0xb4) = uVar9;
  lVar14 = *(long *)(this + 0xa8);
  if (1 < iVar8) {
    uVar16 = 0;
    iVar8 = iVar8 + -1;
    uVar11 = extraout_x12;
    do {
      uVar5 = uVar16 % 3;
      if (uVar5 == 2) {
        uVar11 = 2;
      }
      else if (uVar5 == 1) {
        uVar11 = 1;
      }
      else if (uVar5 == 0) {
        uVar11 = 0;
      }
      lVar18 = lVar14 + (uVar11 & 0xffffffff) * 4;
      iVar8 = iVar8 + -1;
      uVar16 = uVar16 + 1;
      *(int *)(lVar18 + 0xbc) = *(int *)(lVar18 + 0xbc) + 1;
    } while (iVar8 != 0);
  }
  *(int *)(lVar14 + 0xa8) = *(int *)(lVar14 + 0xbc) * 2 + 4;
  *(int *)(lVar14 + 0xac) = *(int *)(lVar14 + 0xc4) * 0x14 + 10;
LAB_004523c4:
  if ((plVar12 != (long *)0x0) && (lVar14 = plVar12[1], plVar12[1] = lVar14 + -1, lVar14 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar14 = plVar12[2];
    plVar12[2] = lVar14 + -1;
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


