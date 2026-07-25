/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203150
 * Mangled: ._ZN5boost10shared_ptrIN5Caver27AchievementNotificationViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(Caver::AchievementNotificationView *)
 *
 * Callers: 1
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *
 * Callees: 1
 *   0x0000000000380168  boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>(Caver::AchievementNotificationView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203158 string=0x000000000020315C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::AchievementNotificationView>::shared_ptr<Caver::AchievementNotificationView>()
{
  return _ZN5boost10shared_ptrIN5Caver27AchievementNotificationViewEEC2IS2_EEPT_();
}

