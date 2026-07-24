/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00445bc4
 * Function: Caver::GameMenuViewController::SettingsViewDidQuitToMenu
 * Signature: undefined __cdecl SettingsViewDidQuitToMenu(SettingsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::SettingsViewDidQuitToMenu(Caver::SettingsView*) */

void Caver::GameMenuViewController::SettingsViewDidQuitToMenu(SettingsView *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80);
                    /* try { // try from 00445bd8 to 00545c3b has its CatchHandler @ 00445b00 */
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1);
  }
  GUIViewController::DismissModalViewController(*(GUIViewController **)(param_1 + 0x28));
  return;
}


