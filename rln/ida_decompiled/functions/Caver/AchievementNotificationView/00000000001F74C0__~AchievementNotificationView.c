/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F74C0
 * Mangled: ._ZN5Caver27AchievementNotificationViewD2Ev
 * Demangled: Caver::AchievementNotificationView::~AchievementNotificationView()
 *
 * Callers: 1
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Callees: 1
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F74C8 string=0x00000000001F74CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AchievementNotificationView::~AchievementNotificationView(
        Caver::AchievementNotificationView *this)
{
  JUMPOUT(0x37552C);
}

