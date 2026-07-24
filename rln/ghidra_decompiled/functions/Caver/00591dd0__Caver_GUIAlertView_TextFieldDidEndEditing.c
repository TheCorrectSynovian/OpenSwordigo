/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591dd0
 * Function: Caver::GUIAlertView::TextFieldDidEndEditing
 * Signature: undefined __thiscall TextFieldDidEndEditing(GUIAlertView * this, GUITextField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::TextFieldDidEndEditing(Caver::GUITextField*) */

void __thiscall
Caver::GUIAlertView::TextFieldDidEndEditing(GUIAlertView *this,GUITextField *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  lVar2 = *(long *)(this + 0x140);
  uVar4 = *(long *)(this + 0x148) - lVar2;
  iVar5 = (int)(uVar4 >> 4);
  if (iVar5 < 1) {
    return;
  }
  uVar3 = (long)(uVar4 * 0x10000000) >> 0x20;
  uVar1 = uVar3;
  if ((long)uVar3 < 2) {
    uVar1 = 1;
  }
  if (uVar1 < 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar1 & 0x7ffffffffffffffe;
    plVar7 = (long *)(lVar2 + 0x10);
    uVar8 = uVar6;
    do {
                    /* catch() { ... } // from try @ 0058fba0 with catch @ 00591e0c */
                    /* catch() { ... } // from try @ 0058f934 with catch @ 00591e10 */
      lVar9 = *plVar7;
                    /* catch() { ... } // from try @ 0058f8e0 with catch @ 00591e14 */
      uVar8 = uVar8 - 2;
      *(undefined1 *)(plVar7[-2] + 0xe5) = 0;
      *(undefined1 *)(lVar9 + 0xe5) = 0;
      plVar7 = plVar7 + 4;
    } while (uVar8 != 0);
    if (uVar1 == uVar6) goto LAB_00591e44;
  }
  plVar7 = (long *)(lVar2 + uVar6 * 0x10);
  do {
    uVar6 = uVar6 + 1;
    *(undefined1 *)(*plVar7 + 0xe5) = 0;
    plVar7 = plVar7 + 2;
  } while ((long)uVar6 < (long)uVar3);
LAB_00591e44:
  if ((0 < iVar5) &&
     (*(GUITextField **)(lVar2 + ((long)(uVar4 * 0x10000000 + -0x100000000) >> 0x1c)) == param_1)) {
                    /* catch() { ... } // from try @ 0058f854 with catch @ 00591e68 */
    Dismiss(this);
    return;
  }
                    /* catch() { ... } // from try @ 0058f8b0 with catch @ 00591e64 */
  return;
}


