/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045c2e4
 * Function: Caver::GameViewController::AddSkillToCharacter
 * Signature: undefined __thiscall AddSkillToCharacter(GameViewController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::AddSkillToCharacter(boost::shared_ptr<Caver::Skill> const&) */

undefined4 __thiscall
Caver::GameViewController::AddSkillToCharacter(GameViewController *this,shared_ptr *param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  NotificationView *this_00;
  string *psVar8;
  GameEvent *pGVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  GameEvent *pGVar14;
  undefined4 uVar15;
  long *plVar16;
  long *local_88;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  NotificationView *local_60;
  long *local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar10 = *(long *)(this + 0xa8);
  plVar12 = *(long **)(this + 0xb0);
  if (plVar12 != (long *)0x0) {
    plVar12[1] = plVar12[1] + 1;
  }
  uVar7 = CharacterState::AddSkill((CharacterState *)(lVar10 + 0x10),param_1);
  if ((plVar12 != (long *)0x0) && (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar10 = plVar12[2];
    plVar12[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  this_00 = operator_new(0x1a8);
  NotificationView::NotificationView(this_00);
  boost::shared_ptr<Caver::NotificationView>::shared_ptr<Caver::NotificationView>
            ((shared_ptr<Caver::NotificationView> *)&local_60,this_00);
  local_68 = (long *)0x0;
  FUN_0066a528(&local_80,*(long *)param_1 + 8);
  FUN_0035a030(&local_78,"Got Spell: ",&local_80);
  FUN_0066a528(&local_70,&local_78);
  FUN_006677d4(&local_70,&DAT_00692feb,1);
                    /* try { // try from 0045c3ec to 0055c3fb has its CatchHandler @ 0045cf20 */
  NotificationView::Init(local_60,(intrusive_ptr *)&local_68,(string *)&local_70);
  puVar6 = PTR_DAT_007e5de8;
                    /* try { // try from 0045c3fc to 0055cf43 has its CatchHandler @ 0045b718 */
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar11;
      *piVar11 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if ((undefined *)(local_78 + -0x18) != puVar6) {
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar11;
      *piVar11 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  if ((undefined *)(local_80 + -0x18) != puVar6) {
    piVar11 = (int *)(local_80 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar11;
      *piVar11 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_80 + -0x18));
    }
  }
  if ((local_68 != (long *)0x0) &&
     (iVar13 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_68 + 8))();
  }
  GameSceneView::ShowNotification(*(GameSceneView **)(this + 0xd8),(shared_ptr *)&local_60);
  psVar8 = (string *)AudioSystem::sharedSystem();
  FUN_00666bb8(&local_68,"spellget",&local_78);
  AudioSystem::PlaySoundEffectWithName(psVar8,1.0);
  if ((local_88 != (long *)0x0) &&
     (iVar13 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  if (local_68 + -3 != (long *)puVar6) {
    plVar12 = local_68 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar12;
      *(int *)plVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(local_68 + -3);
    }
  }
  if ((uVar7 & 1) == 0) {
    uVar15 = 0;
    goto joined_r0x0045c7e4;
  }
  GameOverlayView::UpdateSkillToggleButtonVisibility
            (*(GameOverlayView **)(*(long *)(this + 0xd8) + 0x100));
  GameSceneView::SetSkillToggleButtonHighlighted(*(GameSceneView **)(this + 0xd8),true);
  lVar10 = *(long *)(this + 0xa8);
  FUN_0066a528(&local_68,*(undefined8 *)param_1);
  FUN_0066a6a8(lVar10 + 0x1a8,&local_68);
  if (local_68 + -3 == (long *)puVar6) {
LAB_0045c504:
    lVar10 = *(long *)(this + 0xa8);
    plVar12 = *(long **)(this + 0xb0);
  }
  else {
    plVar12 = local_68 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = (int)*plVar12;
      *(int *)plVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = (int)*plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (0 < iVar13) goto LAB_0045c504;
    operator_delete(local_68 + -3);
    lVar10 = *(long *)(this + 0xa8);
    plVar12 = *(long **)(this + 0xb0);
  }
  if (plVar12 != (long *)0x0) {
    plVar12[1] = plVar12[1] + 1;
  }
  lVar1 = *(long *)(lVar10 + 0x68);
  plVar16 = *(long **)(lVar10 + 0x70);
  if ((plVar16 != (long *)0x0) && (plVar16[1] == 0)) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar10 = plVar16[2];
    plVar16[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if ((plVar12 != (long *)0x0) && (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar10 = plVar12[2];
    plVar12[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (lVar1 == 0) {
    lVar10 = *(long *)(this + 0xa8);
    plVar12 = *(long **)(this + 0xb0);
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 1;
    }
    uVar2 = *(undefined8 *)param_1;
    lVar1 = *(long *)(param_1 + 8);
    if (lVar1 != 0) {
      *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    }
    plVar16 = *(long **)(lVar10 + 0x70);
    *(undefined8 *)(lVar10 + 0x68) = uVar2;
    *(long *)(lVar10 + 0x70) = lVar1;
    if ((plVar16 != (long *)0x0) &&
       (lVar10 = plVar16[1], plVar16[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar10 = plVar16[2];
      plVar16[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    if ((plVar12 != (long *)0x0) &&
       (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar10 = plVar12[2];
      plVar12[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    pGVar9 = operator_new(0x68);
    *(undefined4 *)pGVar9 = 0xf;
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
    GameEvent::SendEvent(pGVar9);
  }
  SaveGameState(this,false);
  ScheduleGuideTargetUpdate(this);
  uVar15 = 1;
joined_r0x0045c7e4:
  if ((local_58 != (long *)0x0) &&
     (lVar10 = local_58[1], local_58[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar10 = local_58[2];
    local_58[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_58 + 0x18))(local_58);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


