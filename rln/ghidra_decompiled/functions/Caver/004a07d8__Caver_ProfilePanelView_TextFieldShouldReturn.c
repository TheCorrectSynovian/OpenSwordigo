/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a07d8
 * Function: Caver::ProfilePanelView::TextFieldShouldReturn
 * Signature: undefined __thiscall TextFieldShouldReturn(ProfilePanelView * this, GUITextField * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ProfilePanelView::TextFieldShouldReturn(Caver::GUITextField*) */

undefined8 __thiscall
Caver::ProfilePanelView::TextFieldShouldReturn(ProfilePanelView *this,GUITextField *param_1)

{
  long *plVar1;
  
  if (*(long *)(this + 0x18) == 0) {
    return 0;
  }
  if ((*(byte *)(*(long *)(this + 0x18) + 0x120) >> 1 & 1) == 0) {
    plVar1 = *(long **)(this + 0x48);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,this + -0x118);
    }
    GUIAlertView::Dismiss(*(GUIAlertView **)(this + 8));
    return 1;
  }
  return 0;
}


