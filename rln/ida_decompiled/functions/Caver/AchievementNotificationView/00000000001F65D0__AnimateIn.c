/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F65D0
 * Mangled: ._ZN5Caver27AchievementNotificationView9AnimateInEv
 * Demangled: Caver::AchievementNotificationView::AnimateIn(void)
 *
 * Callers: 1
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *
 * Callees: 1
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F65D8 string=0x00000000001F65DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AchievementNotificationView::AnimateIn(Caver::AchievementNotificationView *this)
{
  JUMPOUT(0x374D0C);
}

