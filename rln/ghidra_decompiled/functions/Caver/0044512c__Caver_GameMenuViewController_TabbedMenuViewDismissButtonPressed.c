/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044512c
 * Function: Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed
 * Signature: undefined __thiscall TabbedMenuViewDismissButtonPressed(GameMenuViewController * this, TabbedMenuView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(Caver::TabbedMenuView*) */

void __thiscall
Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed
          (GameMenuViewController *this,TabbedMenuView *param_1)

{
  *(undefined8 *)(param_1 + 0xf8) = 0;
                    /* try { // try from 00445130 to 0054513b has its CatchHandler @ 00445148 */
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + -0x30));
  return;
}


