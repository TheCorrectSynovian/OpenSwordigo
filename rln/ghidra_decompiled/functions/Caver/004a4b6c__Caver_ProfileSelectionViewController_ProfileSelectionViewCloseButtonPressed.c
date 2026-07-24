/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4b6c
 * Function: Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed
 * Signature: undefined __thiscall ProfileSelectionViewCloseButtonPressed(ProfileSelectionViewController * this, ProfileSelectionView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView*)
    */

void __thiscall
Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed
          (ProfileSelectionViewController *this,ProfileSelectionView *param_1)

{
                    /* catch() { ... } // from try @ 004a4b64 with catch @ 004a4b78 */
                    /* try { // try from 004a4b7c to 005a4b83 has its CatchHandler @ 004a4b8c */
  ProfileSelectionView::AnimateOut();
                    /* try { // try from 004a4b84 to 005a4b8f has its CatchHandler @ 004a4b10 */
                    /* catch() { ... } // from try @ 004a4b7c with catch @ 004a4b8c */
                    /* catch() { ... } // from try @ 004a4c0c with catch @ 004a4b90 */
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + -0x20));
  return;
}


