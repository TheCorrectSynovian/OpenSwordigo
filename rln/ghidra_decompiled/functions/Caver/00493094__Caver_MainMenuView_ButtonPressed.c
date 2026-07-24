/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00493094
 * Function: Caver::MainMenuView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::MainMenuView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  GameOptions GVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  AchievementsManager *this;
  long lVar5;
  code *pcVar6;
  long lVar7;
  GameOptions *local_38;
  long *local_30;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00492fdc with catch @ 004930bc */
  if (*(GUIEvent **)((long)param_1 + 0x118) == param_2) {
    plVar3 = *(long **)((long)param_1 + 0xf0);
    if (plVar3 == (long *)0x0) goto LAB_00493214;
    pcVar6 = *(code **)*plVar3;
  }
  else if (*(GUIEvent **)((long)param_1 + 0x128) == param_2) {
    plVar3 = (long *)OnlineController::SharedController();
                    /* try { // try from 00493190 to 005931c7 has its CatchHandler @ 004931d0 */
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 004931c8 to 005931d3 has its CatchHandler @ 00492ef0 */
      SetOnlineMenuVisible(param_1,true);
                    /* catch() { ... } // from try @ 00493190 with catch @ 004931d0 */
      goto LAB_00493214;
    }
    plVar3 = *(long **)((long)param_1 + 0xf0);
    if (plVar3 == (long *)0x0) goto LAB_00493214;
    pcVar6 = *(code **)(*plVar3 + 0x18);
  }
  else {
    if (*(GUIEvent **)((long)param_1 + 0x138) == param_2) {
      plVar3 = (long *)OnlineController::SharedController();
      (**(code **)(*plVar3 + 200))();
      goto LAB_00493214;
    }
    if (*(GUIEvent **)((long)param_1 + 0x148) == param_2) {
                    /* catch() { ... } // from try @ 004932a4 with catch @ 004931d4
                       catch() { ... } // from try @ 00493338 with catch @ 004931d4 */
      plVar3 = *(long **)((long)param_1 + 0xf0);
      if (plVar3 == (long *)0x0) goto LAB_00493214;
      pcVar6 = *(code **)(*plVar3 + 8);
    }
    else if (*(GUIEvent **)((long)param_1 + 0x158) == param_2) {
      plVar3 = *(long **)((long)param_1 + 0xf0);
      if (plVar3 == (long *)0x0) goto LAB_00493214;
      pcVar6 = *(code **)(*plVar3 + 0x10);
    }
    else {
                    /* catch() { ... } // from try @ 00492fc8 with catch @ 004930f4 */
                    /* catch() { ... } // from try @ 00492f98 with catch @ 004930f8 */
      if (*(GUIEvent **)((long)param_1 + 0x168) != param_2) {
        if (*(GUIEvent **)((long)param_1 + 0x248) == param_2) {
          plVar3 = (long *)OnlineController::SharedController();
                    /* try { // try from 00493238 to 0059323b has its CatchHandler @ 004932c4 */
          (**(code **)(*plVar3 + 0x38))();
        }
        else if (*(GUIEvent **)((long)param_1 + 600) == param_2) {
          plVar3 = (long *)OnlineController::SharedController();
          (**(code **)(*plVar3 + 0x40))();
        }
        else {
          if (*(GUIEvent **)((long)param_1 + 0x1c8) == param_2) {
            GameOptions::sharedOptions(param_1);
            GVar1 = local_38[0x20];
                    /* try { // try from 0049326c to 0059326f has its CatchHandler @ 004932bc */
            local_38[0x20] = (GameOptions)((byte)GVar1 ^ 1);
            if ((GVar1 == (GameOptions)0x0) && (*(float *)(local_38 + 0x24) < DAT_0068798c)) {
              *(undefined4 *)(local_38 + 0x24) = 0x3f800000;
              local_38[0x20] = (GameOptions)0x1;
            }
            GameOptions::SaveToFile(local_38);
                    /* try { // try from 004932a0 to 005932a3 has its CatchHandler @ 004932b4 */
                    /* try { // try from 004932a4 to 005932f7 has its CatchHandler @ 004931d4 */
            GameOptions::ApplyAudioOptions(local_38);
            UpdateAudioControls(param_1);
          }
          else {
            if (*(GUIEvent **)((long)param_1 + 0x1b8) != param_2) {
              if (*(GUIEvent **)(*(long *)((long)param_1 + 0x1a8) + 0x138) == param_2) {
                SetOnlineMenuVisible(param_1,false);
              }
              else if (*(GUIEvent **)((long)param_1 + 0x208) == param_2) {
                this = (AchievementsManager *)AchievementsManager::sharedManager();
                AchievementsManager::ReportAllAchievements(this);
              }
              else if (*(GUIEvent **)((long)param_1 + 0x238) == param_2) {
                plVar3 = (long *)OnlineController::SharedController();
                (**(code **)(*plVar3 + 0xd0))();
              }
              else if (*(GUIEvent **)((long)param_1 + 0x268) == param_2) {
                plVar3 = (long *)OnlineController::SharedController();
                    /* catch() { ... } // from try @ 00492f84 with catch @ 00493164 */
                (**(code **)(*plVar3 + 0x100))();
              }
              goto LAB_00493214;
            }
                    /* catch() { ... } // from try @ 004932a0 with catch @ 004932b4 */
            GameOptions::sharedOptions(param_1);
                    /* catch() { ... } // from try @ 0049326c with catch @ 004932bc */
            GVar1 = local_38[0x21];
                    /* catch() { ... } // from try @ 00493238 with catch @ 004932c4 */
            local_38[0x21] = (GameOptions)((byte)GVar1 ^ 1);
            if ((GVar1 == (GameOptions)0x0) && (*(float *)(local_38 + 0x28) < DAT_0068798c)) {
              *(undefined4 *)(local_38 + 0x28) = 0x3f800000;
              local_38[0x21] = (GameOptions)0x1;
            }
            GameOptions::SaveToFile(local_38);
                    /* try { // try from 004932f8 to 00593337 has its CatchHandler @ 00493340 */
            GameOptions::ApplyAudioOptions(local_38);
            UpdateAudioControls(param_1);
          }
          if ((local_30 != (long *)0x0) &&
             (lVar7 = local_30[1], local_30[1] = lVar7 + -1, lVar7 + -1 == 0)) {
            (**(code **)(*local_30 + 0x10))(local_30);
            lVar7 = local_30[2];
                    /* try { // try from 00493338 to 00593343 has its CatchHandler @ 004931d4 */
            local_30[2] = lVar7 + -1;
            if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 004932f8 with catch @ 00493340 */
              (**(code **)(*local_30 + 0x18))(local_30);
            }
          }
        }
        goto LAB_00493214;
      }
      plVar3 = *(long **)((long)param_1 + 0xf0);
      if (plVar3 == (long *)0x0) goto LAB_00493214;
      pcVar6 = *(code **)(*plVar3 + 0x20);
    }
  }
  (*pcVar6)(plVar3,param_1);
LAB_00493214:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


