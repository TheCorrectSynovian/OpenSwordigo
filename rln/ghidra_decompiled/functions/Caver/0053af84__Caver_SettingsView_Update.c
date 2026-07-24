/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053af84
 * Function: Caver::SettingsView::Update
 * Signature: undefined __thiscall Update(SettingsView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::Update(float) */

void __thiscall Caver::SettingsView::Update(SettingsView *this,float param_1)

{
  GUIView::Update((GUIView *)this,param_1);
  *(float *)(this + 0x1b8) = *(float *)(this + 0x1b8) + param_1;
  return;
}


