/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4acc
 * Function: Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart
 * Signature: undefined __cdecl ProfileSelectionViewPlayerDidStart(ProfileSelectionView * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView*,
   boost::shared_ptr<Caver::PlayerProfile> const&) */

void Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart
               (ProfileSelectionView *param_1,shared_ptr *param_2)

{
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x50))();
  }
  ProfileSelectionView::AnimateOut();
  GUIViewController::DismissModalViewController(*(GUIViewController **)(param_1 + 0x28));
  return;
}


