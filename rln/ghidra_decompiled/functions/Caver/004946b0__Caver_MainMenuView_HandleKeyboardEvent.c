/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004946b0
 * Function: Caver::MainMenuView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(MainMenuView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::MainMenuView::HandleKeyboardEvent(MainMenuView *this,GUIKeyboardEvent *param_1)

{
  if ((*(int *)(param_1 + 0xc) == 1) &&
     ((*(int *)(param_1 + 0x10) == 0x21 || (*(int *)(param_1 + 0x10) == 0x1b)))) {
    AndroidQuitApplication();
    return;
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


