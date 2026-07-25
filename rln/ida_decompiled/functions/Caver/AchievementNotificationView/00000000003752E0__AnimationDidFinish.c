/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003752E0
 * Mangled: _ZN5Caver27AchievementNotificationView18AnimationDidFinishEPvPNS_8GUIEventE
 * Demangled: Caver::AchievementNotificationView::AnimationDidFinish(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *
 * Callees: 1
 *   0x00000000001F4440  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Referenced strings: 9
 *   insn=0x00000000003752EC string=0x00000000003752F0 "h"
 *   insn=0x00000000003752F8 string=0x0000000000375308 "t"
 *   insn=0x000000000037530C string=0x0000000000375310 "4"
 *   insn=0x0000000000375314 string=0x0000000000375318 ""
 *   insn=0x0000000000375328 string=0x000000000037532C "\t@"
 *   insn=0x0000000000375334 string=0x0000000000375338 ""
 *   insn=0x0000000000375348 string=0x000000000037534C "@"
 *   insn=0x0000000000375360 string=0x0000000000375364 "7"
 *   insn=0x0000000000375364 string=0x00000000001F4440 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AchievementNotificationView *__fastcall Caver::AchievementNotificationView::AnimationDidFinish(
        Caver::AchievementNotificationView *this,
        __int64 a2)
{
  Caver::AchievementNotificationView *v2; // x19
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = this;
  if ( *((_QWORD *)this + 36) == a2 )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 37);
    *((_QWORD *)this + 36) = 0;
    *((_QWORD *)this + 37) = 0;
    if ( v3 )
    {
      v4 = v3[1] - 1LL;
      v3[1] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
    return (Caver::AchievementNotificationView *)Caver::AchievementNotificationView::AnimateOutAfterDelay(v2, 2.5);
  }
  return this;
}

