/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00457478
 * Function: Caver::GameViewController::GameMenuViewControllerDidQuitToMenu
 * Signature: undefined __cdecl GameMenuViewControllerDidQuitToMenu(GameMenuViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GameMenuViewControllerDidQuitToMenu(Caver::GameMenuViewController*) */

void Caver::GameViewController::GameMenuViewControllerDidQuitToMenu(GameMenuViewController *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ProfileManager *this;
  long lVar4;
  long *plVar5;
  MainMenuViewController *this_00;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  float fVar9;
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this = (ProfileManager *)ProfileManager::sharedManager();
  ProfileManager::RemoveDelegate(this,(IProfileManagerDelegate *)(param_1 + 0x70));
  SaveGameState((GameViewController *)param_1,true);
  lVar4 = AudioSystem::sharedSystem();
  MusicPlayer::FadeOut(*(MusicPlayer **)(lVar4 + 0x68),1.5);
  if ((*(GameState **)(param_1 + 0xa8) != (GameState *)0x0) &&
     (fVar9 = (float)GameState::PercentCompleted(*(GameState **)(param_1 + 0xa8)), 1.0 < fVar9)) {
    plVar5 = (long *)OnlineController::SharedController();
    pcVar8 = *(code **)(*plVar5 + 0x108);
    FUN_00666bb8(&local_50,"quit_to_menu",auStack_40);
    (*pcVar8)(DAT_00683484,plVar5,&local_50,0x3c);
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0045764c to 005577cf has its CatchHandler @ 0045764c
                       catch() { ... } // from try @ 0045764c with catch @ 0045764c
                       catch() { ... } // from try @ 00457808 with catch @ 0045764c
                       catch() { ... } // from try @ 004578b0 with catch @ 0045764c */
      piVar6 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
  }
  this_00 = operator_new(0x128);
  MainMenuViewController::MainMenuViewController(this_00);
  boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>
            ((shared_ptr<Caver::MainMenuViewController> *)&local_50,this_00);
  local_60 = local_50;
  local_58 = local_48;
  if (local_48 != (long *)0x0) {
    local_48[1] = local_48[1] + 1;
  }
  GameEvent::SetEventsEnabled(false);
  (**(code **)(**(long **)(param_1 + 0x40) + 8))
            (DAT_00683484,DAT_00683484,*(long **)(param_1 + 0x40),&local_60,0);
  plVar5 = local_58;
  if ((local_58 != (long *)0x0) && (lVar4 = local_58[1], local_58[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((local_48 != (long *)0x0) && (lVar4 = local_48[1], local_48[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar4 = local_48[2];
    local_48[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


