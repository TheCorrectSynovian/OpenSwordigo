/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00539cfc
 * Function: Caver::SettingsView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::SettingsView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  GameOptions GVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  GameOptions *local_38;
  long *local_30;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (*(GUIEvent **)((long)param_1 + 0x110) == param_2) {
    plVar3 = *(long **)((long)param_1 + 0xf8);
    if (plVar3 == (long *)0x0) goto LAB_00539da4;
    pcVar7 = *(code **)(*plVar3 + 8);
  }
  else {
    if (*(GUIEvent **)((long)param_1 + 0x120) != param_2) {
      if (*(GUIEvent **)((long)param_1 + 0x178) == param_2) {
        GameOptions::sharedOptions(param_1);
        GVar1 = local_38[0x20];
        local_38[0x20] = (GameOptions)((byte)GVar1 ^ 1);
        if ((GVar1 == (GameOptions)0x0) && (*(float *)(local_38 + 0x24) < DAT_0068798c)) {
          *(undefined4 *)(local_38 + 0x24) = 0x3f800000;
          local_38[0x20] = (GameOptions)0x1;
        }
        GameOptions::SaveToFile(local_38);
        GameOptions::ApplyAudioOptions(local_38);
        UpdateAudioControls(param_1);
      }
      else {
        if (*(GUIEvent **)((long)param_1 + 0x188) != param_2) {
          if (*(GUIEvent **)((long)param_1 + 0x140) != param_2) {
                    /* try { // try from 00539d60 to 0063a7f7 has its CatchHandler @ 00539d60
                       catch() { ... } // from try @ 00539d60 with catch @ 00539d60
                       catch() { ... } // from try @ 0053a7fc with catch @ 00539d60 */
            if (*(GUIEvent **)((long)param_1 + 0x150) == param_2) {
              plVar3 = (long *)OnlineController::SharedController();
              (**(code **)(*plVar3 + 0x30))();
            }
            goto LAB_00539da4;
          }
          plVar3 = (long *)OnlineController::SharedController();
          uVar4 = (**(code **)(*plVar3 + 0x10))();
          if ((uVar4 & 1) == 0) {
            plVar3 = (long *)OnlineController::SharedController();
            (**(code **)(*plVar3 + 0x28))();
            goto LAB_00539da4;
          }
          plVar3 = *(long **)((long)param_1 + 0xf8);
          if (plVar3 == (long *)0x0) goto LAB_00539da4;
          pcVar7 = *(code **)(*plVar3 + 0x18);
          goto LAB_00539d9c;
        }
        GameOptions::sharedOptions(param_1);
        GVar1 = local_38[0x21];
        local_38[0x21] = (GameOptions)((byte)GVar1 ^ 1);
        if ((GVar1 == (GameOptions)0x0) && (*(float *)(local_38 + 0x28) < DAT_0068798c)) {
          *(undefined4 *)(local_38 + 0x28) = 0x3f800000;
          local_38[0x21] = (GameOptions)0x1;
        }
        GameOptions::SaveToFile(local_38);
        GameOptions::ApplyAudioOptions(local_38);
        UpdateAudioControls(param_1);
      }
      if ((local_30 != (long *)0x0) &&
         (lVar6 = local_30[1], local_30[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_30 + 0x10))(local_30);
        lVar6 = local_30[2];
        local_30[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*local_30 + 0x18))(local_30);
        }
      }
      goto LAB_00539da4;
    }
    plVar3 = *(long **)((long)param_1 + 0xf8);
    if (plVar3 == (long *)0x0) goto LAB_00539da4;
    pcVar7 = *(code **)*plVar3;
  }
LAB_00539d9c:
  (*pcVar7)(plVar3,param_1);
LAB_00539da4:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


