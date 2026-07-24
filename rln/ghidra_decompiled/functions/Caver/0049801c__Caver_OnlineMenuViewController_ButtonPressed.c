/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049801c
 * Function: Caver::OnlineMenuViewController::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineMenuViewController::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::OnlineMenuViewController::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  if (*(long *)((long)param_1 + 0x28) != 0) {
    OnlineMenuView::AnimateOut();
    GUIViewController::DismissModalViewController(*(GUIViewController **)((long)param_1 + 0x28));
    return;
  }
  return;
}


