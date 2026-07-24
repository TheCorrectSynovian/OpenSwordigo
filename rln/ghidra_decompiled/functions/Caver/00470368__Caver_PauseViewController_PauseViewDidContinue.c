/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00470368
 * Function: Caver::PauseViewController::PauseViewDidContinue
 * Signature: undefined __thiscall PauseViewDidContinue(PauseViewController * this, PauseView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::PauseViewController::PauseViewDidContinue(Caver::PauseView*) */

void __thiscall
Caver::PauseViewController::PauseViewDidContinue(PauseViewController *this,PauseView *param_1)

{
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + -0x20));
  return;
}


