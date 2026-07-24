/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00539fa4
 * Function: Caver::SettingsView::SliderValueChanged
 * Signature: undefined __cdecl SliderValueChanged(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::SliderValueChanged(void*, Caver::GUIEvent*) */

void Caver::SettingsView::SliderValueChanged(void *param_1,GUIEvent *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  GameOptions GVar5;
  string *psVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  undefined1 auStack_68 [8];
  long local_60;
  long *local_58;
  GameOptions *local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(GUIEvent **)((long)param_1 + 0x198) == param_2) {
    GameOptions::sharedOptions(param_1);
    fVar10 = *(float *)(*(long *)((long)param_1 + 0x198) + 0x124);
    GVar5 = (GameOptions)(DAT_0068798c <= fVar10);
    *(float *)(local_50 + 0x24) = fVar10;
    local_50[0x20] = GVar5;
    GameOptions::ApplyAudioOptions(local_50);
    UpdateAudioControls(param_1);
    plVar4 = local_48;
  }
  else {
    if (*(GUIEvent **)((long)param_1 + 0x1a8) != param_2) goto LAB_0053a128;
    GameOptions::sharedOptions(param_1);
    fVar10 = *(float *)(*(long *)((long)param_1 + 0x1a8) + 0x124);
    GVar5 = (GameOptions)(DAT_0068798c <= fVar10);
    *(float *)(local_50 + 0x28) = fVar10;
    local_50[0x21] = GVar5;
    GameOptions::ApplyAudioOptions(local_50);
    UpdateAudioControls(param_1);
    plVar4 = local_48;
    if (DAT_00687988 < *(float *)((long)param_1 + 0x1b8)) {
      psVar6 = (string *)AudioSystem::sharedSystem();
      FUN_00666bb8(&local_60,"click",auStack_68);
      AudioSystem::PlaySoundEffectWithName(psVar6,1.0);
      if ((local_58 != (long *)0x0) &&
         (iVar9 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_58 + 8))();
      }
      if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_60 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar9 = *piVar8;
          *piVar8 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar2) {
              *piVar8 = iVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar9 < 1) {
          operator_delete((undefined *)(local_60 + -0x18));
        }
      }
      *(undefined4 *)((long)param_1 + 0x1b8) = 0;
      plVar4 = local_48;
    }
  }
  if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar7 = plVar4[2];
    plVar4[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
LAB_0053a128:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


