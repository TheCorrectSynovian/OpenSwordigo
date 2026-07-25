/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA10
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16SceneLoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>(boost::shared_ptr<Caver::SceneLoadingView> const*,Caver::SceneLoadingView *)
 *
 * Callers: 1
 *   0x00000000003641FC  boost::shared_ptr<Caver::SceneLoadingView>::shared_ptr<Caver::SceneLoadingView>(Caver::SceneLoadingView *)
 *
 * Callees: 1
 *   0x0000000000364308  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>(boost::shared_ptr<Caver::SceneLoadingView> const*,Caver::SceneLoadingView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA18 string=0x00000000001FAA1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SceneLoadingView,Caver::SceneLoadingView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16SceneLoadingViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

