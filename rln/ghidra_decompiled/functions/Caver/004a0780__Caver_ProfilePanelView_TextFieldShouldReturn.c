/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a0780
 * Function: Caver::ProfilePanelView::TextFieldShouldReturn
 * Signature: undefined __cdecl TextFieldShouldReturn(GUITextField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::TextFieldShouldReturn(Caver::GUITextField*) */

undefined8 Caver::ProfilePanelView::TextFieldShouldReturn(GUITextField *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x130) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x130) + 0x120) >> 1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    plVar1 = *(long **)(param_1 + 0x160);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,param_1);
    }
    GUIAlertView::Dismiss(*(GUIAlertView **)(param_1 + 0x120));
    uVar2 = 1;
  }
  return uVar2;
}


