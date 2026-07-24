/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049463c
 * Function: Caver::MainMenuView::SetGoogleSignInVisible
 * Signature: undefined __thiscall SetGoogleSignInVisible(MainMenuView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::SetGoogleSignInVisible(bool) */

void __thiscall Caver::MainMenuView::SetGoogleSignInVisible(MainMenuView *this,bool param_1)

{
  if (*(long *)(this + 0x268) != 0) {
    *(byte *)(*(long *)(this + 0x268) + 0xe4) = ~param_1 & 1U;
    *(byte *)(*(long *)(this + 0x278) + 0xe4) = ~param_1 & 1U;
  }
  return;
}


