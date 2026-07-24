/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004848d0
 * Function: Caver::OfflineAchievementsView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(OfflineAchievementsView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::OfflineAchievementsView::HandleKeyboardEvent
          (OfflineAchievementsView *this,GUIKeyboardEvent *param_1)

{
  if (*(int *)(param_1 + 0xc) == 1) {
    if ((*(int *)(param_1 + 0x10) == 0x21) || (*(int *)(param_1 + 0x10) == 0x1b)) {
      GUIControl::SendActionsForControlEvent(*(GUIControl **)(this + 0xf0),0x40,0);
      return;
    }
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


