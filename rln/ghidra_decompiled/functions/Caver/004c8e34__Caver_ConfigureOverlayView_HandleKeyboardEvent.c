/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c8e34
 * Function: Caver::ConfigureOverlayView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(ConfigureOverlayView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::ConfigureOverlayView::HandleKeyboardEvent
          (ConfigureOverlayView *this,GUIKeyboardEvent *param_1)

{
                    /* catch() { ... } // from try @ 004c8b98 with catch @ 004c8e3c */
                    /* catch() { ... } // from try @ 004c8b7c with catch @ 004c8e40 */
  if ((*(int *)(param_1 + 0xc) == 1) &&
     ((*(int *)(param_1 + 0x10) == 0x21 || (*(int *)(param_1 + 0x10) == 0x1b)))) {
                    /* catch() { ... } // from try @ 004c8be0 with catch @ 004c8e58
                       catch() { ... } // from try @ 004c8c30 with catch @ 004c8e58 */
    ButtonPressed(this,*(GUIEvent **)(this + 0x108));
    return;
  }
                    /* catch() { ... } // from try @ 004c8b70 with catch @ 004c8e5c
                       catch() { ... } // from try @ 004c8d04 with catch @ 004c8e5c */
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


