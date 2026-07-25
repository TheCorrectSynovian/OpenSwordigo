/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD920
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16NotificationViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::NotificationView,Caver::NotificationView>(boost::shared_ptr<Caver::NotificationView> const*,Caver::NotificationView *)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x0000000000364CA4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::NotificationView,Caver::NotificationView>(boost::shared_ptr<Caver::NotificationView> const*,Caver::NotificationView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD928 string=0x00000000001FD92C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::NotificationView,Caver::NotificationView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_16NotificationViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

