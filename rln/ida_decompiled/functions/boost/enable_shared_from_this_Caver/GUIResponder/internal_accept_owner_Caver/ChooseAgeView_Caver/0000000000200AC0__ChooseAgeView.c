/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200AC0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13ChooseAgeViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *
 * Callers: 1
 *   0x000000000036E5EC  boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(Caver::ChooseAgeView *)
 *
 * Callees: 1
 *   0x000000000036FD98  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>(boost::shared_ptr<Caver::ChooseAgeView> const*,Caver::ChooseAgeView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200AC8 string=0x0000000000200ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ChooseAgeView,Caver::ChooseAgeView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13ChooseAgeViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

