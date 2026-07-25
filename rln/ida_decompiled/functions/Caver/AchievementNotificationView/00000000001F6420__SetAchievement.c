/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6420
 * Mangled: ._ZN5Caver27AchievementNotificationView14SetAchievementERKN5boost10shared_ptrINS_11AchievementEEE
 * Demangled: Caver::AchievementNotificationView::SetAchievement(boost::shared_ptr<Caver::Achievement> const&)
 *
 * Callers: 1
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *
 * Callees: 1
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6428 string=0x00000000001F642C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::AchievementNotificationView::SetAchievement()
{
  JUMPOUT(0x374088);
}

