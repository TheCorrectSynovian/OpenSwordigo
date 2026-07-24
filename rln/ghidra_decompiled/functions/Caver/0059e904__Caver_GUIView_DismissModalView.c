/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e904
 * Function: Caver::GUIView::DismissModalView
 * Signature: undefined __thiscall DismissModalView(GUIView * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::DismissModalView(Caver::GUIView*) */

void __thiscall Caver::GUIView::DismissModalView(GUIView *this,GUIView *param_1)

{
  GUIWindow *this_00;
  
  this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))();
  if (this_00 != (GUIWindow *)0x0) {
    GUIWindow::DismissModalView(this_00,param_1);
    return;
  }
  return;
}


