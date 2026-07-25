/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8700
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_33OfflineAchievementsViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>(boost::shared_ptr<Caver::OfflineAchievementsViewController> const*,Caver::OfflineAchievementsViewController *)
 *
 * Callers: 1
 *   0x0000000000346184  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *
 * Callees: 1
 *   0x00000000003479BC  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>(boost::shared_ptr<Caver::OfflineAchievementsViewController> const*,Caver::OfflineAchievementsViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8708 string=0x00000000001F870C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OfflineAchievementsViewController,Caver::OfflineAchievementsViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_33OfflineAchievementsViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

