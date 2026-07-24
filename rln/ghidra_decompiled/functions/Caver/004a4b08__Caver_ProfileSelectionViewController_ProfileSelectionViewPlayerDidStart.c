/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4b08
 * Function: Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart
 * Signature: undefined __thiscall ProfileSelectionViewPlayerDidStart(ProfileSelectionViewController * this, ProfileSelectionView * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView*,
   boost::shared_ptr<Caver::PlayerProfile> const&) */

void __thiscall
Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart
          (ProfileSelectionViewController *this,ProfileSelectionView *param_1,shared_ptr *param_2)

{
                    /* catch() { ... } // from try @ 004a4b68 with catch @ 004a4b10
                       catch() { ... } // from try @ 004a4b84 with catch @ 004a4b10 */
  if (*(undefined8 **)(this + 8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 8))();
  }
  ProfileSelectionView::AnimateOut();
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + -0x20));
  return;
}


