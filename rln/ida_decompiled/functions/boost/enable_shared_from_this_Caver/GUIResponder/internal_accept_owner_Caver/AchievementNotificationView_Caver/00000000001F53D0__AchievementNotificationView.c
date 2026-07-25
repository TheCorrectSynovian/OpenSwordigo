/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F53D0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_27AchievementNotificationViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>(boost::shared_ptr<Caver::AchievementNotificationView> const*,Caver::AchievementNotificationView *)
 *
 * Callers: 1
 *   0x0000000000380168  boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(Caver::AchievementNotificationView *)
 *
 * Callees: 1
 *   0x0000000000380274  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>(boost::shared_ptr<Caver::AchievementNotificationView> const*,Caver::AchievementNotificationView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F53D8 string=0x00000000001F53DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::AchievementNotificationView,Caver::AchievementNotificationView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_27AchievementNotificationViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

