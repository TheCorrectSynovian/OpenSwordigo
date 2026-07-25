/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202110
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11CreditsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>(boost::shared_ptr<Caver::CreditsView> const*,Caver::CreditsView *)
 *
 * Callers: 1
 *   0x000000000038DC3C  boost::shared_ptr<Caver::CreditsView>::shared_ptr<Caver::CreditsView>(Caver::CreditsView *)
 *
 * Callees: 1
 *   0x000000000038DD48  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>(boost::shared_ptr<Caver::CreditsView> const*,Caver::CreditsView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202118 string=0x000000000020211C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CreditsView,Caver::CreditsView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_11CreditsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

