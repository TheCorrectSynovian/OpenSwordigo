/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3540
 * Function: Caver::GUIWindow::DismissModalView
 * Signature: undefined __thiscall DismissModalView(GUIWindow * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::DismissModalView(Caver::GUIView*) */

void __thiscall Caver::GUIWindow::DismissModalView(GUIWindow *this,GUIView *param_1)

{
  GUIWindow *pGVar1;
  GUIWindow *pGVar2;
  
  pGVar2 = *(GUIWindow **)(this + 0x1c0);
  pGVar1 = this + 0x1c0;
  if (pGVar2 != pGVar1) {
    if (param_1 == (GUIView *)0x0) {
      this = *(GUIWindow **)(*(long *)(this + 0x1c8) + 0x10);
    }
    else {
      while (this = *(GUIWindow **)(pGVar2 + 0x10), *(GUIWindow **)(param_1 + 0x58) != this) {
        pGVar2 = *(GUIWindow **)pGVar2;
        if (pGVar1 == pGVar2) {
          return;
        }
      }
    }
  }
                    /* catch() { ... } // from try @ 005a3470 with catch @ 005a3584
                       catch() { ... } // from try @ 005a34e8 with catch @ 005a3584 */
  *(undefined4 *)(this + 0x1fc) = 0x3e99999a;
  this[0xe5] = (GUIWindow)0x0;
  return;
}


