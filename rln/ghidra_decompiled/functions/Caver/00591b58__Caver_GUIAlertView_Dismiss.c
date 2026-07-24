/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591b58
 * Function: Caver::GUIAlertView::Dismiss
 * Signature: undefined __thiscall Dismiss(GUIAlertView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::Dismiss() */

void __thiscall Caver::GUIAlertView::Dismiss(GUIAlertView *this)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(this + 0x140);
  if (0 < (int)((ulong)(*(long *)(this + 0x148) - lVar3) >> 4)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      uVar1 = GUIView::IsFirstResponder(*(GUIView **)(lVar3 + lVar4));
                    /* catch() { ... } // from try @ 0058ff04 with catch @ 00591b90 */
      if ((uVar1 & 1) != 0) {
        (**(code **)(**(long **)(*(long *)(this + 0x140) + lVar4) + 0xd0))();
      }
      lVar3 = *(long *)(this + 0x140);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < (int)((ulong)(*(long *)(this + 0x148) - lVar3) >> 4));
  }
  AddAnimations(this,true);
  GUIView::DismissModalView((GUIView *)this,(GUIView *)0x0);
  plVar2 = *(long **)(this + 0x118);
  if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0058fef0 with catch @ 00591bf4 */
                    /* catch() { ... } // from try @ 0058fec4 with catch @ 00591bf8 */
                    /* WARNING: Could not recover jumptable at 0x00591bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,this);
    return;
  }
  return;
}


