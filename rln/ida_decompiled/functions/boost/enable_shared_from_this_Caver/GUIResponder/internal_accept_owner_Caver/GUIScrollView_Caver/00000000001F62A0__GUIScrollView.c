/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F62A0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIScrollViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>(boost::shared_ptr<Caver::GUIScrollView> const*,Caver::GUIScrollView *)
 *
 * Callers: 1
 *   0x0000000000384E5C  boost::shared_ptr<Caver::GUIScrollView>::shared_ptr<Caver::GUIScrollView>(Caver::GUIScrollView *)
 *
 * Callees: 1
 *   0x0000000000384F68  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>(boost::shared_ptr<Caver::GUIScrollView> const*,Caver::GUIScrollView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F62A8 string=0x00000000001F62AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIScrollView,Caver::GUIScrollView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIScrollViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

