/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E30
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUIButtonES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIButton,Caver::GUIButton>(boost::shared_ptr<Caver::GUIButton> const*,Caver::GUIButton *)
 *
 * Callers: 1
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *
 * Callees: 1
 *   0x00000000003425DC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIButton,Caver::GUIButton>(boost::shared_ptr<Caver::GUIButton> const*,Caver::GUIButton *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E38 string=0x00000000001F3E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIButton,Caver::GUIButton>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUIButtonES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

