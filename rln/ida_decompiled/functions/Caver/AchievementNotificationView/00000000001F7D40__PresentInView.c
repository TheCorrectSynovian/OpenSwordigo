/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7D40
 * Mangled: ._ZN5Caver27AchievementNotificationView13PresentInViewEPNS_7GUIViewE
 * Demangled: Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *
 * Callers: 1
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *
 * Callees: 1
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7D48 string=0x00000000001F7D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementNotificationView::PresentInView(
        Caver::AchievementNotificationView *this,
        Caver::GUIView *a2)
{
  return _ZN5Caver27AchievementNotificationView13PresentInViewEPNS_7GUIViewE(this, a2);
}

