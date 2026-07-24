/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00459334
 * Function: Caver::GameViewController::HandleGameEvent
 * Signature: undefined __thiscall HandleGameEvent(GameViewController * this, GameEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GameViewController::HandleGameEvent(Caver::GameEvent const&) */

uint __thiscall
Caver::GameViewController::HandleGameEvent(GameViewController *this,GameEvent *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  GameOverViewController *this_00;
  GameEvent *pGVar8;
  GUIWindow *this_01;
  GUIEffect *this_02;
  GameSceneController *this_03;
  long lVar9;
  int *piVar10;
  int iVar11;
  PlayerProfile *this_04;
  GameOverlayView *pGVar12;
  MusicPlayer *this_05;
  long *plVar13;
  undefined1 auStack_88 [8];
  long local_80;
  undefined1 auStack_78 [8];
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar7 = 1;
  switch(*(undefined4 *)param_1) {
  case 1:
    goto switchD_00459380_caseD_1;
  case 2:
    this_04 = *(PlayerProfile **)(this + 0x88);
    FUN_00666bb8(&local_70,"name",auStack_78);
    pGVar8 = (GameEvent *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,std::string>,std::_Select1st<std::pair<std::string_const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)(param_1 + 8),(string *)&local_70);
    if (param_1 + 0x10 == pGVar8) {
                    /* catch() { ... } // from try @ 004590ec with catch @ 0045980c */
                    /* catch() { ... } // from try @ 004590c8 with catch @ 00459810 */
      FUN_00666bb8(&local_50,&DAT_0068fbeb,&local_80);
    }
    else {
      FUN_0066a528(&local_50,pGVar8 + 0x28);
    }
    FUN_00666bb8(&local_80,"amount",auStack_88);
    pGVar8 = (GameEvent *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(param_1 + 0x38),(string *)&local_80);
    if (param_1 + 0x40 == pGVar8) {
                    /* catch() { ... } // from try @ 004590b0 with catch @ 00459850 */
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(pGVar8 + 0x28);
    }
                    /* catch() { ... } // from try @ 0045908c with catch @ 00459854 */
    PlayerProfile::IncreaseCounterValue(this_04,(string *)&local_50,iVar6);
    puVar5 = PTR_DAT_007e5de8;
    if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00458f84 with catch @ 004599e8 */
        iVar6 = *piVar10;
                    /* catch() { ... } // from try @ 00458f5c with catch @ 004599f0 */
        *piVar10 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar10;
                    /* catch() { ... } // from try @ 00459038 with catch @ 00459928 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
    if ((undefined *)(local_50 + -0x18) != puVar5) {
      piVar10 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar10;
        *piVar10 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    if ((undefined *)(local_70 + -0x18) != puVar5) {
      piVar10 = (int *)(local_70 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 00458f48 with catch @ 00459a28 */
        iVar6 = *piVar10;
                    /* catch() { ... } // from try @ 00458f20 with catch @ 00459a30 */
        *piVar10 = iVar6 + -1;
      }
      else {
        do {
                    /* catch() { ... } // from try @ 00458ffc with catch @ 00459968 */
          iVar6 = *piVar10;
                    /* catch() { ... } // from try @ 00458fd4 with catch @ 00459970 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_70 + -0x18));
      }
    }
    break;
  case 3:
    lVar9 = AudioSystem::sharedSystem();
    MusicPlayer::FadeOut(*(MusicPlayer **)(lVar9 + 0x68),_DAT_006846d0);
    lVar9 = AudioSystem::sharedSystem();
    this_05 = *(MusicPlayer **)(lVar9 + 0x68);
    FUN_00666bb8(&local_50,"gameover",&local_80);
    MusicPlayer::PlayMusicWithName(this_05,(string *)&local_50,false);
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar10 = (int *)(local_50 + -8);
                    /* catch() { ... } // from try @ 00459074 with catch @ 004598d0 */
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar10;
        *piVar10 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    lVar9 = AudioSystem::sharedSystem();
    MusicPlayer::SetLooping(*(MusicPlayer **)(lVar9 + 0x68),false);
    this_00 = operator_new(0x80);
    GameOverViewController::GameOverViewController(this_00);
    boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>
              ((shared_ptr<Caver::GameOverViewController> *)&local_50,this_00);
    uVar1 = *(undefined8 *)(this + 0x88);
    lVar9 = *(long *)(this + 0x90);
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    plVar13 = *(long **)(local_50 + 0x60);
    *(undefined8 *)(local_50 + 0x58) = uVar1;
    *(long *)(local_50 + 0x60) = lVar9;
    if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    local_70 = local_50;
    local_68 = local_48;
    if (local_48 != (long *)0x0) {
      local_48[1] = local_48[1] + 1;
    }
    GameEvent::SetEventsEnabled(false);
    (**(code **)(**(long **)(this + 0x40) + 8))
              (0x40000000,DAT_00683484,*(long **)(this + 0x40),&local_70,0);
    plVar13 = local_68;
    local_58 = local_48;
    if ((local_68 != (long *)0x0) &&
       (lVar9 = local_68[1], local_68[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_68 + 0x10))(local_68);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      local_58 = local_48;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        local_58 = local_48;
      }
    }
    goto joined_r0x004596a4;
  case 4:
    HandleDidEnterPortalGameEvent(this,(DidEnterPortalGameEvent *)param_1);
    break;
  default:
    goto switchD_00459380_caseD_5;
  case 6:
    OverlayButton::FlashOnce(*(OverlayButton **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x1b8))
    ;
    this_03 = *(GameSceneController **)(this + 200);
    if (this_03 == (GameSceneController *)0x0) {
      uVar7 = 0;
      goto switchD_00459380_caseD_1;
    }
    goto LAB_004597fc;
  case 8:
    FUN_00666bb8(&local_50,"amount",&local_80);
    pGVar8 = (GameEvent *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(param_1 + 0x38),(string *)&local_50);
    puVar5 = PTR_DAT_007e5de8;
    if (param_1 + 0x40 == pGVar8) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(pGVar8 + 0x28);
    }
                    /* catch() { ... } // from try @ 00459164 with catch @ 00459784 */
                    /* catch() { ... } // from try @ 0045913c with catch @ 00459788 */
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00459050 with catch @ 004598f0 */
      piVar10 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar11 = *piVar10;
        *piVar10 = iVar11 + -1;
      }
      else {
        do {
          iVar11 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
                    /* catch() { ... } // from try @ 00458fc0 with catch @ 004599a8 */
                    /* catch() { ... } // from try @ 00458f98 with catch @ 004599b0 */
      if (iVar11 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    lVar9 = *(long *)(this + 0xa8);
    iVar11 = *(int *)(lVar9 + 0xb0);
    iVar6 = (iVar6 << (ulong)(*(byte *)(lVar9 + 0x1ca) & 0x1f)) + iVar11;
    if (0x3e6 < iVar6) {
      iVar6 = 999;
    }
    *(int *)(lVar9 + 0xb0) = iVar6;
    if ((iVar11 < iVar6) && (0x3e6 < iVar6)) {
                    /* catch() { ... } // from try @ 00459128 with catch @ 004597c8 */
                    /* catch() { ... } // from try @ 00459104 with catch @ 004597cc */
      FUN_00666bb8(&local_50,"toorich",&local_80);
      pGVar8 = (GameEvent *)GameEvent::NewCounterEvent((string *)&local_50,1);
      GameEvent::SendEvent(pGVar8);
      if ((undefined *)(local_50 + -0x18) != puVar5) {
        piVar10 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar6 = *piVar10;
          *piVar10 = iVar6 + -1;
        }
        else {
          do {
            iVar6 = *piVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar6 < 1) {
          operator_delete((undefined *)(local_50 + -0x18));
          this_03 = *(GameSceneController **)(this + 200);
                    /* catch() { ... } // from try @ 00458f0c with catch @ 00459a68 */
          if (this_03 == (GameSceneController *)0x0) {
            uVar7 = 0;
            goto switchD_00459380_caseD_1;
          }
          goto LAB_004597fc;
        }
      }
    }
    goto switchD_00459380_caseD_5;
  case 9:
    SaveGameState(this,false);
    *(undefined8 *)(this + 0x80) = 0x3e99999a00000002;
    break;
  case 0xb:
    if ((*(int *)(this + 0x80) == 0) && (0 < *(int *)(*(long *)(this + 0xa8) + 0xa8))) {
      *(undefined8 *)(this + 0x80) = 0x3f00000000000001;
      this_01 = (GUIWindow *)(**(code **)(**(long **)(this + 0xd8) + 0xf0))();
      this_02 = (GUIEffect *)GUIWindow::Effect(this_01);
      GUIEffect::FadeOut(this_02,0.5);
    }
    break;
  case 0xf:
    local_50 = *(long *)(*(long *)(this + 0xa8) + 0x68);
    pGVar12 = *(GameOverlayView **)(*(long *)(this + 0xd8) + 0x100);
    local_48 = *(long **)(*(long *)(this + 0xa8) + 0x70);
                    /* catch() { ... } // from try @ 004591b8 with catch @ 00459700 */
    if (local_48 != (long *)0x0) {
      local_48[1] = local_48[1] + 1;
    }
    GameOverlayView::SetCurrentSkill(pGVar12,(shared_ptr *)&local_50);
    plVar13 = local_48;
    if ((local_48 != (long *)0x0) &&
       (lVar9 = local_48[1], local_48[1] = lVar9 + -1, lVar9 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004591a0 with catch @ 00459740 */
      (**(code **)(*local_48 + 0x10))(local_48);
                    /* catch() { ... } // from try @ 0045917c with catch @ 00459744 */
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        this_03 = *(GameSceneController **)(this + 200);
        if (this_03 == (GameSceneController *)0x0) {
          uVar7 = 0;
          goto switchD_00459380_caseD_1;
        }
        goto LAB_004597fc;
      }
    }
switchD_00459380_caseD_5:
    this_03 = *(GameSceneController **)(this + 200);
    uVar7 = 0;
    if (this_03 != (GameSceneController *)0x0) {
LAB_004597fc:
      uVar7 = GameSceneController::HandleGameEvent(this_03,param_1);
    }
    goto switchD_00459380_caseD_1;
  case 0x10:
    pGVar12 = *(GameOverlayView **)(*(long *)(this + 0xd8) + 0x100);
    GameOptions::sharedOptions((GameOptions *)0x1);
    iVar6 = CurrentDeviceType();
    plVar13 = (long *)(local_60 + 0x40);
    if (iVar6 != 1) {
      plVar13 = (long *)(local_60 + 0x30);
    }
    local_50 = *plVar13;
    local_48 = (long *)plVar13[1];
    if (local_48 != (long *)0x0) {
      local_48[1] = local_48[1] + 1;
    }
    GameOverlayView::SetLayout(pGVar12,(shared_ptr *)&local_50);
    plVar13 = local_48;
    if ((local_48 != (long *)0x0) &&
       (lVar9 = local_48[1], local_48[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
joined_r0x004596a4:
    if ((local_58 != (long *)0x0) &&
       (lVar9 = local_58[1], local_58[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar9 = local_58[2];
      local_58[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_58 + 0x18))(local_58);
      }
    }
  }
  uVar7 = 1;
switchD_00459380_caseD_1:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00458ee4 with catch @ 00459a70 */
    __stack_chk_fail();
  }
  return uVar7 & 1;
}


