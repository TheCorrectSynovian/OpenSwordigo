/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB290
 * Mangled: ._ZN5Caver22OfflineAchievementView14SetAchievementERKN5boost10shared_ptrINS_11AchievementEEEbf
 * Demangled: Caver::OfflineAchievementView::SetAchievement(boost::shared_ptr<Caver::Achievement> const&,bool,float)
 *
 * Callers: 1
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB298 string=0x00000000001FB29C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::OfflineAchievementView::SetAchievement()
{
  JUMPOUT(0x3875CC);
}

