/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E70
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUIFrameViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>(boost::shared_ptr<Caver::GUIFrameView> const*,Caver::GUIFrameView *)
 *
 * Callers: 1
 *   0x00000000003759B4  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *
 * Callees: 1
 *   0x0000000000375D70  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>(boost::shared_ptr<Caver::GUIFrameView> const*,Caver::GUIFrameView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E78 string=0x00000000001F8E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUIFrameViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

