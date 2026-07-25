/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3840
 * Mangled: ._ZN5Caver27AchievementNotificationViewC2Ev
 * Demangled: Caver::AchievementNotificationView::AchievementNotificationView(void)
 *
 * Callers: 1
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *
 * Callees: 1
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3848 string=0x00000000001F384C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AchievementNotificationView::AchievementNotificationView(
        Caver::AchievementNotificationView *this)
{
  JUMPOUT(0x372E28);
}

