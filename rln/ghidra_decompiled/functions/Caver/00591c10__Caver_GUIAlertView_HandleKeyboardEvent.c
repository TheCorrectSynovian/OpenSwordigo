/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591c10
 * Function: Caver::GUIAlertView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(GUIAlertView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::GUIAlertView::HandleKeyboardEvent(GUIAlertView *this,GUIKeyboardEvent *param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 1) &&
     ((*(int *)(param_1 + 0x10) == 0x21 || (*(int *)(param_1 + 0x10) == 0x1b)))) {
    uVar1 = *(uint *)(this + 0x1a0);
    uVar2 = (ulong)uVar1;
    iVar3 = (int)((ulong)(*(long *)(this + 0x160) - *(long *)(this + 0x158)) >> 4);
    if (((int)uVar1 < 0) || (iVar3 <= (int)uVar1)) {
                    /* catch() { ... } // from try @ 0058fe54 with catch @ 00591c60 */
      if (iVar3 == 1) {
        uVar2 = 0;
        goto LAB_00591c54;
      }
    }
    else if ((int)uVar1 < iVar3) {
LAB_00591c54:
      if (this[0x1a4] == (GUIAlertView)0x0) {
        ButtonPressed(this,*(GUIEvent **)
                            (*(long *)(this + 0x158) +
                            (-(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar2 << 4)));
        return;
      }
                    /* catch() { ... } // from try @ 0058feb0 with catch @ 00591c5c */
      AndroidQuitApplication();
      return;
    }
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


