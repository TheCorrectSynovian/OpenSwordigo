/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA440
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_22OfflineAchievementViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>(boost::shared_ptr<Caver::OfflineAchievementView> const*,Caver::OfflineAchievementView *)
 *
 * Callers: 1
 *   0x00000000003839C8  boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView *)
 *
 * Callees: 1
 *   0x00000000003850AC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>(boost::shared_ptr<Caver::OfflineAchievementView> const*,Caver::OfflineAchievementView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA448 string=0x00000000001FA44C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_22OfflineAchievementViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

