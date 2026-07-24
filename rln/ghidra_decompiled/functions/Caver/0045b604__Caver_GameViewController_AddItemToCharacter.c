/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045b604
 * Function: Caver::GameViewController::AddItemToCharacter
 * Signature: undefined __thiscall AddItemToCharacter(GameViewController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::GameViewController::AddItemToCharacter(GameViewController *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  GameEvent *pGVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  GameEvent *pGVar14;
  long *plVar15;
  string *psVar16;
  GameSceneController *pGVar17;
  long local_78;
  long *local_70;
  undefined1 auStack_68 [16];
  long local_58;
  
                    /* try { // try from 0045b614 to 0055b623 has its CatchHandler @ 0045b6a4 */
  lVar4 = tpidr_el0;
                    /* try { // try from 0045b624 to 0055b717 has its CatchHandler @ 0045b5d8 */
  local_58 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(this + 0xa8);
  plVar15 = *(long **)(this + 0xb0);
  if (plVar15 != (long *)0x0) {
    plVar15[1] = plVar15[1] + 1;
  }
  uVar8 = CharacterState::AddItem((CharacterState *)(lVar12 + 0x10),param_1);
  if ((plVar15 != (long *)0x0) && (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar12 = plVar15[2];
    plVar15[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  if ((uVar8 & 1) == 0) {
    uVar11 = 0;
    goto LAB_0045bd7c;
  }
                    /* catch() { ... } // from try @ 0045b614 with catch @ 0045b6a4 */
  switch(**(undefined4 **)param_1) {
  case 0:
    FUN_0066a528(&local_78,*(undefined4 **)param_1 + 2);
    iVar7 = FUN_006689e0(&local_78,"healingpotion");
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
      piVar13 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar13;
        *piVar13 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    if (iVar7 != 0) {
      FUN_0066a528(&local_78,*(long *)param_1 + 8);
      iVar7 = FUN_006689e0(&local_78,"experiencesack");
                    /* catch() { ... } // from try @ 0045b5fc with catch @ 0045b714 */
                    /* try { // try from 0045b718 to 0055bc6b has its CatchHandler @ 0045b718
                       catch() { ... } // from try @ 0045b718 with catch @ 0045b718
                       catch() { ... } // from try @ 0045bc80 with catch @ 0045b718
                       catch() { ... } // from try @ 0045c3fc with catch @ 0045b718
                       catch() { ... } // from try @ 0045cf7c with catch @ 0045b718 */
      if ((undefined *)(local_78 + -0x18) != puVar5) {
        piVar13 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar13;
          *piVar13 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar13;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
              *piVar13 = iVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
      if (iVar7 == 0) {
        iVar7 = *(int *)(*(long *)(this + 0xa8) + 0xb8);
        iVar6 = CharacterState::ExperiencePointsRequiredForLevel
                          ((CharacterState *)(*(long *)(this + 0xa8) + 0x10),iVar7 + 1);
        iVar7 = CharacterState::ExperiencePointsRequiredForLevel
                          ((CharacterState *)(*(long *)(this + 0xa8) + 0x10),iVar7);
        pGVar9 = operator_new(0x68);
        *(undefined4 *)pGVar9 = 7;
        pGVar14 = pGVar9 + 0x10;
        *(undefined8 *)pGVar14 = 0;
        *(undefined8 *)(pGVar9 + 0x18) = 0;
        *(GameEvent **)(pGVar9 + 0x20) = pGVar14;
        *(GameEvent **)(pGVar9 + 0x28) = pGVar14;
        *(undefined8 *)(pGVar9 + 0x30) = 0;
        pGVar14 = pGVar9 + 0x40;
        *(undefined8 *)pGVar14 = 0;
        *(undefined8 *)(pGVar9 + 0x48) = 0;
        *(GameEvent **)(pGVar9 + 0x50) = pGVar14;
        *(GameEvent **)(pGVar9 + 0x58) = pGVar14;
        *(undefined8 *)(pGVar9 + 0x60) = 0;
        FUN_00666bb8(&local_78,"amount",auStack_68);
        piVar13 = (int *)std::
                         map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                       *)(pGVar9 + 0x38),(string *)&local_78);
        *piVar13 = (iVar6 - iVar7) / 3;
        if ((undefined *)(local_78 + -0x18) != puVar5) {
          piVar13 = (int *)(local_78 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar7 = *piVar13;
            *piVar13 = iVar7 + -1;
          }
          else {
            do {
              iVar7 = *piVar13;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar2) {
                *piVar13 = iVar7 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (iVar7 < 1) {
            operator_delete((undefined *)(local_78 + -0x18));
          }
        }
        GameEvent::SendEvent(pGVar9);
        lVar12 = *(long *)(this + 0xa8);
        plVar15 = *(long **)(this + 0xb0);
        if (plVar15 != (long *)0x0) {
          plVar15[1] = plVar15[1] + 1;
        }
        CharacterState::RemoveItem((CharacterState *)(lVar12 + 0x10),*(Item **)param_1);
        goto LAB_0045b880;
      }
      break;
    }
    ConsumableItemView::SetItem
              (*(ConsumableItemView **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x1d8),param_1);
    goto LAB_0045bd78;
  case 1:
    lVar12 = *(long *)(this + 0xa8);
    plVar15 = *(long **)(this + 0xb0);
    pGVar17 = *(GameSceneController **)(this + 200);
    if (plVar15 != (long *)0x0) {
      plVar15[1] = plVar15[1] + 1;
    }
    CharacterState::HighestLevelItemOfType(&local_78,lVar12 + 0x10,1);
    GameSceneController::EquipItem(pGVar17,(shared_ptr *)&local_78);
    if ((local_70 != (long *)0x0) &&
       (lVar12 = local_70[1], local_70[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar12 = local_70[2];
      local_70[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*local_70 + 0x18))(local_70);
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
    GameOverlayView::UpdateSwingButtonVisibility
              (*(GameOverlayView **)(*(long *)(this + 0xd8) + 0x100));
    break;
  case 2:
    lVar12 = *(long *)(this + 0xa8);
    plVar15 = *(long **)(this + 0xb0);
    pGVar17 = *(GameSceneController **)(this + 200);
    if (plVar15 != (long *)0x0) {
      plVar15[1] = plVar15[1] + 1;
    }
    CharacterState::HighestLevelItemOfType(&local_78,lVar12 + 0x10,2);
    GameSceneController::EquipItem(pGVar17,(shared_ptr *)&local_78);
    if ((local_70 != (long *)0x0) &&
       (lVar12 = local_70[1], local_70[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      lVar12 = local_70[2];
      local_70[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*local_70 + 0x18))(local_70);
      }
    }
LAB_0045b880:
    if ((plVar15 != (long *)0x0) &&
       (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar12 = plVar15[2];
      plVar15[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    break;
  case 4:
    uVar8 = ItemOverlay::IsOverlayItem
                      (*(ItemOverlay **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x228),param_1)
    ;
    bVar2 = (uVar8 & 1) != 0;
    if (bVar2) {
      ItemOverlay::UpdateItemCount
                (*(ItemOverlay **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x228),param_1);
    }
    FUN_0066a528(&local_78,*(long *)param_1 + 8);
    iVar7 = FUN_006689e0(&local_78,0x68ef7a);
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
      piVar13 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar13;
        *piVar13 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar13;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    if (iVar7 == 0) {
      FUN_00666bb8(&local_78,"takingtheshortcut",auStack_68);
      pGVar9 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_78,1);
      GameEvent::SendEvent(pGVar9);
      if ((undefined *)(local_78 + -0x18) != puVar5) {
        piVar13 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar13;
          *piVar13 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar13;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
    }
    ScheduleGuideTargetUpdate(this);
    if (bVar2) goto LAB_0045bd78;
  }
  if (**(int **)param_1 == 4) {
    psVar16 = *(string **)(this + 0xd8);
    FUN_00666bb8(&local_78,&DAT_0068e4f6,auStack_68);
    GameSceneView::SetCurrentMenuTab(psVar16);
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
      piVar13 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    GameSceneView::SetMenuButtonHighlighted(*(GameSceneView **)(this + 0xd8),true);
    lVar12 = *(long *)(this + 0xa8);
    FUN_0066a528(&local_78,*(long *)param_1 + 8);
    FUN_0066a6a8(lVar12 + 0x1a0,&local_78);
    puVar10 = (undefined *)(local_78 + -0x18);
    if (puVar10 != puVar5) {
      piVar13 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_0045bc30:
        iVar7 = *piVar13;
        *piVar13 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
LAB_0045bc3c:
      if (iVar7 < 1) {
        operator_delete(puVar10);
      }
    }
  }
  else {
    FUN_0066a528(&local_78,*(int **)param_1 + 2);
    iVar7 = FUN_006689e0(&local_78,"experiencesack");
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
      piVar13 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar13;
        *piVar13 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* try { // try from 0045bc80 to 0055c3eb has its CatchHandler @ 0045b718 */
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
    if (iVar7 != 0) {
      psVar16 = *(string **)(this + 0xd8);
      FUN_00666bb8(&local_78,"inventory",auStack_68);
      GameSceneView::SetCurrentMenuTab(psVar16);
      if ((undefined *)(local_78 + -0x18) != puVar5) {
        piVar13 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar13;
          *piVar13 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar13;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar2) {
              *piVar13 = iVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
                    /* try { // try from 0045bc6c to 0055bc7f has its CatchHandler @ 0045cf50 */
          } while (cVar1 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
      GameSceneView::SetMenuButtonHighlighted(*(GameSceneView **)(this + 0xd8),true);
      lVar12 = *(long *)(this + 0xa8);
      FUN_0066a528(&local_78,*(long *)param_1 + 8);
      FUN_0066a6a8(lVar12 + 0x1a0,&local_78);
      puVar10 = (undefined *)(local_78 + -0x18);
      if (puVar10 != puVar5) {
        piVar13 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0045bc30;
        do {
          iVar7 = *piVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar2) {
            *piVar13 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_0045bc3c;
      }
    }
  }
LAB_0045bd78:
  uVar11 = 1;
LAB_0045bd7c:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


