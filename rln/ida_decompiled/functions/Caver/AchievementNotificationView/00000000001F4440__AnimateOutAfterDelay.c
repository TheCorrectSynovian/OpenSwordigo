/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4440
 * Mangled: ._ZN5Caver27AchievementNotificationView20AnimateOutAfterDelayEf
 * Demangled: Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Callers: 1
 *   0x00000000003752E0  Caver::AchievementNotificationView::AnimationDidFinish(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4448 string=0x00000000001F444C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementNotificationView::AnimateOutAfterDelay(
        Caver::AchievementNotificationView *this,
        float a2)
{
  return _ZN5Caver27AchievementNotificationView20AnimateOutAfterDelayEf(this, a2);
}

