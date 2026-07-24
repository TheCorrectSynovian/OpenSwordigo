/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d460c
 * Function: Caver::GUIPopoverView::DismissPopoverView
 * Signature: undefined __thiscall DismissPopoverView(GUIPopoverView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::DismissPopoverView() */

void __thiscall Caver::GUIPopoverView::DismissPopoverView(GUIPopoverView *this)

{
  long lVar1;
  GUIWindow *this_00;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
    this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))(this);
    GUIWindow::DismissPopoverView(this_00,this);
    return;
  }
  return;
}


