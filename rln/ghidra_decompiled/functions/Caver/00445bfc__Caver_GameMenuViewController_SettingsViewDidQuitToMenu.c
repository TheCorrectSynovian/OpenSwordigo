/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445bfc
 * Function: Caver::GameMenuViewController::SettingsViewDidQuitToMenu
 * Signature: undefined __thiscall SettingsViewDidQuitToMenu(GameMenuViewController * this, SettingsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::GameMenuViewController::SettingsViewDidQuitToMenu(Caver::SettingsView*) */

void __thiscall
Caver::GameMenuViewController::SettingsViewDidQuitToMenu
          (GameMenuViewController *this,SettingsView *param_1)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 00445b68 with catch @ 00445c04 */
                    /* catch() { ... } // from try @ 00445b30 with catch @ 00445c0c */
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00445bbc with catch @ 00445c20 */
    (**(code **)*puVar1)(puVar1,this + -0x60);
  }
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + -0x38));
  return;
}


