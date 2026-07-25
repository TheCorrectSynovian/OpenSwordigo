/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA080
 * Mangled: ._ZN5boost10shared_ptrIN5Caver30ProfileSelectionViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ProfileSelectionViewController>::shared_ptr<Caver::ProfileSelectionViewController>(Caver::ProfileSelectionViewController *)
 *
 * Callers: 1
 *   0x000000000036F1D0  Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x000000000036FD98  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA088 string=0x00000000001FA08C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ProfileSelectionViewController>::shared_ptr<Caver::ProfileSelectionViewController>()
{
  JUMPOUT(0x36FEB8);
}

