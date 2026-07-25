/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002001F0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_30ProfileSelectionViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(boost::shared_ptr<Caver::ProfileSelectionViewController> const*,Caver::ProfileSelectionViewController *)
 *
 * Callers: 1
 *   0x000000000036FD98  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *
 * Callees: 1
 *   0x000000000036FFC4  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(boost::shared_ptr<Caver::ProfileSelectionViewController> const*,Caver::ProfileSelectionViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002001F8 string=0x00000000002001FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_30ProfileSelectionViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

