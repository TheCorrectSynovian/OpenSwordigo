/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4b44
 * Function: Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed
 * Signature: undefined __cdecl ProfileSelectionViewCloseButtonPressed(ProfileSelectionView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView*)
    */

void Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed
               (ProfileSelectionView *param_1)

{
  ProfileSelectionView::AnimateOut();
                    /* try { // try from 004a4b64 to 005a4b67 has its CatchHandler @ 004a4b78 */
                    /* try { // try from 004a4b68 to 005a4b7b has its CatchHandler @ 004a4b10 */
  GUIViewController::DismissModalViewController(*(GUIViewController **)(param_1 + 0x28));
  return;
}


