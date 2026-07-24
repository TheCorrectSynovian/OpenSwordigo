/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053a2b4
 * Function: Caver::SettingsView::SliderTouchUp
 * Signature: undefined __cdecl SliderTouchUp(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::SliderTouchUp(void*, Caver::GUIEvent*) */

void Caver::SettingsView::SliderTouchUp(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  GameOptions *local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(GUIEvent **)((long)param_1 + 0x198) == param_2) ||
     (*(GUIEvent **)((long)param_1 + 0x1a8) == param_2)) {
    GameOptions::sharedOptions(param_1);
    GameOptions::SaveToFile(local_38);
    if ((local_30 != (long *)0x0) &&
       (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_30 + 0x10))(local_30);
      lVar3 = local_30[2];
      local_30[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_30 + 0x18))(local_30);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


