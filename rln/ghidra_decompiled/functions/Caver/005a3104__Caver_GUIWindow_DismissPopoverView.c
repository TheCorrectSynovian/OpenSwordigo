/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3104
 * Function: Caver::GUIWindow::DismissPopoverView
 * Signature: undefined __thiscall DismissPopoverView(GUIWindow * this, GUIPopoverView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::DismissPopoverView(Caver::GUIPopoverView*) */

void __thiscall Caver::GUIWindow::DismissPopoverView(GUIWindow *this,GUIPopoverView *param_1)

{
  GUIWindow *pGVar1;
  GUIWindow *pGVar2;
  
  pGVar2 = *(GUIWindow **)(this + 0x1b0);
  while (pGVar1 = pGVar2, this + 0x1b0 != pGVar1) {
    pGVar2 = *(GUIWindow **)pGVar1;
    if (*(GUIPopoverView **)(pGVar1 + 0x10) == param_1) {
      FUN_0062a9c8(pGVar1);
      operator_delete(pGVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005a316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  return;
}


