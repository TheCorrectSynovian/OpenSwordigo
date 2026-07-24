/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a35a4
 * Function: Caver::GUIWindow::DismissAllModalViews
 * Signature: undefined __thiscall DismissAllModalViews(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::DismissAllModalViews() */

void __thiscall Caver::GUIWindow::DismissAllModalViews(GUIWindow *this)

{
  GUIWindow *pGVar1;
  long lVar2;
  
  for (pGVar1 = *(GUIWindow **)(this + 0x1c0); this + 0x1c0 != pGVar1;
      pGVar1 = *(GUIWindow **)pGVar1) {
    lVar2 = *(long *)(pGVar1 + 0x10);
    *(undefined4 *)(lVar2 + 0x1fc) = 0x3e99999a;
    *(undefined1 *)(lVar2 + 0xe5) = 0;
  }
  return;
}


