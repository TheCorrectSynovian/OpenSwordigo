/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F60E0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14GUILoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*,Caver::GUILoadingView *)
 *
 * Callers: 1
 *   0x000000000033E5CC  boost::shared_ptr<Caver::GUILoadingView>::shared_ptr<Caver::GUILoadingView>(Caver::GUILoadingView *)
 *
 * Callees: 1
 *   0x000000000033E6D8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>(boost::shared_ptr<Caver::GUILoadingView> const*,Caver::GUILoadingView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F60E8 string=0x00000000001F60EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILoadingView,Caver::GUILoadingView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14GUILoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

