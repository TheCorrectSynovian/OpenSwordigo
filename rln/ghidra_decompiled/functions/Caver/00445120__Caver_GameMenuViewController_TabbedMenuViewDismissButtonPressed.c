/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445120
 * Function: Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed
 * Signature: undefined __thiscall TabbedMenuViewDismissButtonPressed(GameMenuViewController * this, TabbedMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(Caver::TabbedMenuView*) */

void __thiscall
Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed
          (GameMenuViewController *this,TabbedMenuView *param_1)

{
  *(undefined8 *)(param_1 + 0xf8) = 0;
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + 0x28));
  return;
}


