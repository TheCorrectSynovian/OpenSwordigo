/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000375368
 * Mangled: _ZN5Caver27AchievementNotificationView20AnimateOutAfterDelayEf
 * Demangled: Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Callers: 1
 *   0x00000000001F4440  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F74C0  Caver::AchievementNotificationView::~AchievementNotificationView()
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FC000  Caver::GUIFrameView::~GUIFrameView()
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003759B4  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 139
 *   insn=0x000000000037537C string=0x0000000000375380 "U"
 *   insn=0x0000000000375388 string=0x000000000037538C ""
 *   insn=0x000000000037538C string=0x0000000000375390 "t"
 *   insn=0x0000000000375394 string=0x0000000000375398 "h.@"
 *   insn=0x0000000000375398 string=0x000000000037539C "bz@"
 *   insn=0x00000000003753C0 string=0x00000000003753C4 "'"
 *   insn=0x00000000003753C4 string=0x00000000001F9C60 "0'"
 *   insn=0x00000000003753E0 string=0x00000000003753E4 "Y"
 *   insn=0x00000000003753E4 string=0x00000000003753E8 "\t"
 *   insn=0x00000000003753F0 string=0x00000000003753F4 "*"
 *   insn=0x00000000003753F0 string=0x0000000000375400 "t"
 *   insn=0x00000000003753F4 string=0x00000000003753F8 "J"
 *   insn=0x00000000003753F8 string=0x00000000003753FC "*"
 *   insn=0x0000000000375400 string=0x0000000000375404 "h&"
 *   insn=0x0000000000375404 string=0x0000000000375408 "4"
 *   insn=0x000000000037540C string=0x0000000000375410 ""
 *   insn=0x000000000037541C string=0x0000000000375420 "\t@"
 *   insn=0x000000000037542C string=0x0000000000375430 ""
 *   insn=0x000000000037543C string=0x0000000000375440 "@"
 *   insn=0x000000000037544C string=0x0000000000375450 "T"
 *   insn=0x0000000000375450 string=0x00000000001FA5A0 "0'"
 *   insn=0x0000000000375458 string=0x000000000037545C "u"
 *   insn=0x000000000037545C string=0x00000000001F8A30 "0'"
 *   insn=0x0000000000375460 string=0x0000000000375464 "3"
 *   insn=0x0000000000375464 string=0x0000000000375468 "h"
 *   insn=0x0000000000375468 string=0x000000000037546C ""
 *   insn=0x000000000037546C string=0x0000000000375470 "h"
 *   insn=0x0000000000375474 string=0x0000000000375478 "h"
 *   insn=0x000000000037547C string=0x0000000000375480 "\t@"
 *   insn=0x0000000000375484 string=0x0000000000375488 "h\n@"
 *   insn=0x0000000000375488 string=0x000000000037548C ""
 *   insn=0x000000000037548C string=0x0000000000375490 "h\n"
 *   insn=0x0000000000375494 string=0x0000000000375498 "h"
 *   insn=0x000000000037549C string=0x00000000003754A0 "@"
 *   insn=0x00000000003754D0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003754D8 string=0x00000000003754DC "4"
 *   insn=0x00000000003754E0 string=0x00000000003754E4 ""
 *   insn=0x00000000003754F0 string=0x00000000003754F4 "\t@"
 *   insn=0x0000000000375500 string=0x0000000000375504 ""
 *   insn=0x0000000000375510 string=0x0000000000375514 "@"
 *   insn=0x0000000000375540 string=0x0000000000375544 "t"
 *   insn=0x0000000000375544 string=0x0000000000375548 "eD"
 *   insn=0x0000000000375548 string=0x000000000037554C "A"
 *   insn=0x000000000037554C string=0x0000000000375550 "h"
 *   insn=0x0000000000375550 string=0x0000000000375554 "4"
 *   insn=0x0000000000375554 string=0x0000000000375598 "t"
 *   insn=0x0000000000375558 string=0x000000000037555C ""
 *   insn=0x0000000000375568 string=0x000000000037556C "\t@"
 *   insn=0x0000000000375578 string=0x000000000037557C ""
 *   insn=0x0000000000375588 string=0x000000000037558C "@"
 *   insn=0x0000000000375598 string=0x000000000037559C "4"
 *   insn=0x000000000037559C string=0x00000000003755E0 "t"
 *   insn=0x00000000003755A0 string=0x00000000003755A4 ""
 *   insn=0x00000000003755B0 string=0x00000000003755B4 "\t@"
 *   insn=0x00000000003755C0 string=0x00000000003755C4 ""
 *   insn=0x00000000003755D0 string=0x00000000003755D4 "@"
 *   insn=0x00000000003755E0 string=0x00000000003755E4 "4"
 *   insn=0x00000000003755E4 string=0x0000000000375628 "t"
 *   insn=0x00000000003755E8 string=0x00000000003755EC ""
 *   insn=0x00000000003755F8 string=0x00000000003755FC "\t@"
 *   insn=0x0000000000375608 string=0x000000000037560C ""
 *   insn=0x0000000000375618 string=0x000000000037561C "@"
 *   insn=0x0000000000375628 string=0x000000000037562C "4"
 *   insn=0x000000000037562C string=0x0000000000375670 "t"
 *   insn=0x0000000000375630 string=0x0000000000375634 ""
 *   insn=0x0000000000375640 string=0x0000000000375644 "\t@"
 *   insn=0x0000000000375650 string=0x0000000000375654 ""
 *   insn=0x0000000000375660 string=0x0000000000375664 "@"
 *   insn=0x0000000000375670 string=0x0000000000375674 "4"
 *   insn=0x0000000000375674 string=0x00000000003756B8 "t"
 *   insn=0x0000000000375678 string=0x000000000037567C ""
 *   insn=0x0000000000375688 string=0x000000000037568C "\t@"
 *   insn=0x0000000000375698 string=0x000000000037569C ""
 *   insn=0x00000000003756A8 string=0x00000000003756AC "@"
 *   insn=0x00000000003756B8 string=0x00000000003756BC "4"
 *   insn=0x00000000003756BC string=0x0000000000375700 "t"
 *   insn=0x00000000003756C0 string=0x00000000003756C4 ""
 *   insn=0x00000000003756D0 string=0x00000000003756D4 "\t@"
 *   insn=0x00000000003756E0 string=0x00000000003756E4 ""
 *   insn=0x00000000003756F0 string=0x00000000003756F4 "@"
 *   insn=0x0000000000375700 string=0x0000000000375704 "4"
 *   insn=0x0000000000375708 string=0x000000000037570C ""
 *   insn=0x0000000000375718 string=0x000000000037571C "\t@"
 *   insn=0x0000000000375728 string=0x000000000037572C ""
 *   insn=0x0000000000375738 string=0x000000000037573C "@"
 *   insn=0x0000000000375754 string=0x0000000000375758 "*"
 *   insn=0x0000000000375758 string=0x00000000001FC000 "0'"
 *   insn=0x0000000000375764 string=0x0000000000375768 "u"
 *   insn=0x000000000037576C string=0x0000000000375770 "~"
 *   insn=0x0000000000375774 string=0x0000000000375778 "u"
 *   insn=0x0000000000375778 string=0x000000000037577C "5"
 *   insn=0x000000000037577C string=0x0000000000375780 "h"
 *   insn=0x0000000000375780 string=0x0000000000375920 "u"
 *   insn=0x0000000000375784 string=0x0000000000375788 "u"
 *   insn=0x0000000000375788 string=0x000000000037578C "u"
 *   insn=0x000000000037578C string=0x0000000000375790 "R"
 *   insn=0x0000000000375790 string=0x00000000003758D8 "u"
 *   insn=0x0000000000375794 string=0x0000000000375798 "u"
 *   insn=0x000000000037579C string=0x00000000003757A0 "<"
 *   insn=0x00000000003757A0 string=0x0000000000375890 "u"
 *   insn=0x00000000003757A4 string=0x00000000003757A8 "u"
 *   insn=0x00000000003757AC string=0x00000000003757B0 "&"
 *   insn=0x00000000003757B0 string=0x0000000000375848 "u"
 *   insn=0x00000000003757B8 string=0x00000000003757BC "5"
 *   insn=0x00000000003757BC string=0x0000000000375800 "u"
 *   insn=0x00000000003757C0 string=0x00000000003757C4 ""
 *   insn=0x00000000003757D0 string=0x00000000003757D4 "\t@"
 *   insn=0x00000000003757E0 string=0x00000000003757E4 ""
 *   insn=0x00000000003757F0 string=0x00000000003757F4 "@"
 *   insn=0x0000000000375800 string=0x0000000000375804 "5"
 *   insn=0x0000000000375808 string=0x000000000037580C ""
 *   insn=0x0000000000375818 string=0x000000000037581C "\t@"
 *   insn=0x0000000000375828 string=0x000000000037582C ""
 *   insn=0x0000000000375838 string=0x000000000037583C "@"
 *   insn=0x0000000000375848 string=0x000000000037584C "5"
 *   insn=0x0000000000375850 string=0x0000000000375854 ""
 *   insn=0x0000000000375860 string=0x0000000000375864 "\t@"
 *   insn=0x0000000000375870 string=0x0000000000375874 ""
 *   insn=0x0000000000375880 string=0x0000000000375884 "@"
 *   insn=0x0000000000375890 string=0x0000000000375894 "5"
 *   insn=0x0000000000375898 string=0x000000000037589C ""
 *   insn=0x00000000003758A8 string=0x00000000003758AC "\t@"
 *   insn=0x00000000003758B8 string=0x00000000003758BC ""
 *   insn=0x00000000003758C8 string=0x00000000003758CC "@"
 *   insn=0x00000000003758D8 string=0x00000000003758DC "5"
 *   insn=0x00000000003758E0 string=0x00000000003758E4 ""
 *   insn=0x00000000003758F0 string=0x00000000003758F4 "\t@"
 *   insn=0x0000000000375900 string=0x0000000000375904 ""
 *   insn=0x0000000000375910 string=0x0000000000375914 "@"
 *   insn=0x0000000000375920 string=0x0000000000375924 "5"
 *   insn=0x0000000000375928 string=0x000000000037592C ""
 *   insn=0x0000000000375938 string=0x000000000037593C "\t@"
 *   insn=0x0000000000375948 string=0x000000000037594C ""
 *   insn=0x0000000000375958 string=0x000000000037595C "@"
 *   insn=0x0000000000375974 string=0x0000000000375978 "ub"
 *   insn=0x000000000037598C string=0x00000000001F74C0 "0'"
 *   insn=0x0000000000375998 string=0x000000000037599C "E"
 *   insn=0x000000000037599C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003759A4 string=0x00000000003759A8 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AchievementNotificationView::AnimateOutAfterDelay(
        Caver::AchievementNotificationView *this,
        float a2)
{
  __int64 v4; // x8
  float v5; // s2
  float v6; // s0
  float v7; // s1
  __int64 v8; // x8
  _QWORD *v9; // x9
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 result; // x0
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x8
  _DWORD v17[2]; // [xsp+30h] [xbp-50h] BYREF
  __int64 v18; // [xsp+38h] [xbp-48h] BYREF
  __int64 v19; // [xsp+48h] [xbp-38h]
  _QWORD *v20; // [xsp+50h] [xbp-30h]
  __int64 v21; // [xsp+58h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)this + 11);
  v5 = *((float *)this + 30);
  v6 = *(float *)(v4 + 136);
  v7 = *(float *)(v4 + 144);
  v17[0] = 0;
  *(float *)&v17[1] = (float)(v6 + v7) - v5;
  Caver::Rectangle::TranslatedRectangle(
    &v18,
    (Caver::AchievementNotificationView *)((char *)this + 116),
    (const Caver::Vector2 *)v17);
  Caver::GUIAnimation::FrameAnimation();
  v8 = v19;
  *(float *)(v19 + 88) = a2;
  *(_BYTE *)(v8 + 185) = 1;
  v9 = v20;
  if ( v20 )
    ++v20[1];
  v10 = (_QWORD *)*((_QWORD *)this + 39);
  *((_QWORD *)this + 38) = v8;
  *((_QWORD *)this + 39) = v9;
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  Caver::GUIView::RemoveAllAnimations(this);
  result = Caver::GUIView::AddAnimation();
  v14 = v20;
  if ( v20 )
  {
    v15 = v20[1] - 1LL;
    v20[1] = v15;
    if ( !v15 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  return result;
}

