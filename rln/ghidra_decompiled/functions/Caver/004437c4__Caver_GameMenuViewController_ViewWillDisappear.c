/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004437c4
 * Function: Caver::GameMenuViewController::ViewWillDisappear
 * Signature: undefined __thiscall ViewWillDisappear(GameMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::ViewWillDisappear() */

void __thiscall Caver::GameMenuViewController::ViewWillDisappear(GameMenuViewController *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x80);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,this);
  }
  TabbedMenuView::Dismiss(*(TabbedMenuView **)(this + 0x98));
  return;
}


