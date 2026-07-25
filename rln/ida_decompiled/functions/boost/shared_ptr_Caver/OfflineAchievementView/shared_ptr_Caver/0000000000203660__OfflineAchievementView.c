/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203660
 * Mangled: ._ZN5boost10shared_ptrIN5Caver22OfflineAchievementViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView *)
 *
 * Callers: 1
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x00000000003839C8  boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203668 string=0x000000000020366C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>()
{
  return _ZN5boost10shared_ptrIN5Caver22OfflineAchievementViewEEC2IS2_EEPT_();
}

