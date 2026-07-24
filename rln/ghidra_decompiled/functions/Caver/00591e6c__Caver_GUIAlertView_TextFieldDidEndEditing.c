/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591e6c
 * Function: Caver::GUIAlertView::TextFieldDidEndEditing
 * Signature: undefined __thiscall TextFieldDidEndEditing(GUIAlertView * this, GUITextField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GUIAlertView::TextFieldDidEndEditing(Caver::GUITextField*) */

void __thiscall
Caver::GUIAlertView::TextFieldDidEndEditing(GUIAlertView *this,GUITextField *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = *(long *)(this + 0x30);
  uVar4 = *(long *)(this + 0x38) - lVar2;
  if ((int)(uVar4 >> 4) < 1) {
    return;
  }
  uVar3 = (long)(uVar4 * 0x10000000) >> 0x20;
  uVar1 = uVar3;
  if ((long)uVar3 < 2) {
    uVar1 = 1;
  }
  if (uVar1 < 3) {
    uVar5 = 0;
                    /* catch() { ... } // from try @ 0058f6f0 with catch @ 00591e9c */
  }
  else {
    uVar5 = uVar1 & 0x7ffffffffffffffe;
    plVar6 = (long *)(lVar2 + 0x10);
    uVar7 = uVar5;
    do {
      lVar8 = *plVar6;
      uVar7 = uVar7 - 2;
      *(undefined1 *)(plVar6[-2] + 0xe5) = 0;
      *(undefined1 *)(lVar8 + 0xe5) = 0;
      plVar6 = plVar6 + 4;
    } while (uVar7 != 0);
    if (uVar1 == uVar5) goto LAB_00591ee4;
  }
                    /* catch() { ... } // from try @ 0058f6c8 with catch @ 00591ecc */
  plVar6 = (long *)(lVar2 + uVar5 * 0x10);
  do {
                    /* catch() { ... } // from try @ 0058f6c0 with catch @ 00591ed0 */
                    /* catch() { ... } // from try @ 0058f678 with catch @ 00591ed4 */
    uVar5 = uVar5 + 1;
    *(undefined1 *)(*plVar6 + 0xe5) = 0;
    plVar6 = plVar6 + 2;
  } while ((long)uVar5 < (long)uVar3);
LAB_00591ee4:
  if (*(GUITextField **)(lVar2 + ((long)(uVar4 * 0x10000000 + -0x100000000) >> 0x1c)) != param_1) {
    return;
  }
                    /* catch() { ... } // from try @ 0058f650 with catch @ 00591f04 */
  Dismiss(this + -0x110);
  return;
}


