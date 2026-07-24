/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3170
 * Function: Caver::GUIWindow::DismissAllPopoverViews
 * Signature: undefined __thiscall DismissAllPopoverViews(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::DismissAllPopoverViews() */

void __thiscall Caver::GUIWindow::DismissAllPopoverViews(GUIWindow *this)

{
  GUIWindow *pGVar1;
  
  pGVar1 = *(GUIWindow **)(this + 0x1b0);
  while (pGVar1 != this + 0x1b0) {
    (**(code **)(**(long **)(pGVar1 + 0x10) + 0x90))();
    pGVar1 = *(GUIWindow **)(this + 0x1b0);
  }
  return;
}


