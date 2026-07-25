/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA00
 * Mangled: ._ZN5boost10shared_ptrIN5Caver23OfflineAchievementsViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView *)
 *
 * Callers: 1
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000003860E0  boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>(Caver::OfflineAchievementsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA08 string=0x00000000001FCA0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::OfflineAchievementsView>::shared_ptr<Caver::OfflineAchievementsView>()
{
  return _ZN5boost10shared_ptrIN5Caver23OfflineAchievementsViewEEC2IS2_EEPT_();
}

