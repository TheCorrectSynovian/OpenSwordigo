/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048dafc
 * Function: Caver::CreditsViewController::ViewDidAppear
 * Signature: undefined __thiscall ViewDidAppear(CreditsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsViewController::ViewDidAppear() */

void __thiscall Caver::CreditsViewController::ViewDidAppear(CreditsViewController *this)

{
  CreditsView::AnimateIn(*(CreditsView **)(this + 0x48));
  return;
}


