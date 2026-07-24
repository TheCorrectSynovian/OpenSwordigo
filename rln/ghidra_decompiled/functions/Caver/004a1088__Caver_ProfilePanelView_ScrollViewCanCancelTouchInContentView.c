/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a1088
 * Function: Caver::ProfilePanelView::ScrollViewCanCancelTouchInContentView
 * Signature: undefined __thiscall ScrollViewCanCancelTouchInContentView(ProfilePanelView * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::ScrollViewCanCancelTouchInContentView(Caver::GUIView*) */

bool __thiscall
Caver::ProfilePanelView::ScrollViewCanCancelTouchInContentView
          (ProfilePanelView *this,GUIView *param_1)

{
  return *(GUIView **)(this + 0x1f8) != param_1;
}


