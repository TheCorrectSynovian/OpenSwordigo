/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9500
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_23OfflineAchievementsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>(boost::shared_ptr<Caver::OfflineAchievementsView> const*,Caver::OfflineAchievementsView *)
 *
 * Callers: 1
 *   0x00000000003860E0  boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView *)
 *
 * Callees: 1
 *   0x00000000003861EC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>(boost::shared_ptr<Caver::OfflineAchievementsView> const*,Caver::OfflineAchievementsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9508 string=0x00000000001F950C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementsView,Caver::OfflineAchievementsView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_23OfflineAchievementsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

