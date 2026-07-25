/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201FF0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_25ProfileManagerLoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(boost::shared_ptr<Caver::ProfileManagerLoadingView> const*,Caver::ProfileManagerLoadingView *)
 *
 * Callers: 1
 *   0x00000000003A9304  boost::shared_ptr<Caver::ProfileManagerLoadingView>::shared_ptr<Caver::ProfileManagerLoadingView>(Caver::ProfileManagerLoadingView *)
 *
 * Callees: 1
 *   0x00000000003A9410  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(boost::shared_ptr<Caver::ProfileManagerLoadingView> const*,Caver::ProfileManagerLoadingView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201FF8 string=0x0000000000201FFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_25ProfileManagerLoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

