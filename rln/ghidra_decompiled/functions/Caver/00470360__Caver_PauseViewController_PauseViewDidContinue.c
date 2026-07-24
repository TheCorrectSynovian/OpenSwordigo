/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00470360
 * Function: Caver::PauseViewController::PauseViewDidContinue
 * Signature: undefined __cdecl PauseViewDidContinue(PauseView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PauseViewController::PauseViewDidContinue(Caver::PauseView*) */

void Caver::PauseViewController::PauseViewDidContinue(PauseView *param_1)

{
                    /* catch() { ... } // from try @ 0046fc40 with catch @ 00470360 */
  GUIViewController::DismissModalViewController(*(GUIViewController **)(param_1 + 0x28));
  return;
}


