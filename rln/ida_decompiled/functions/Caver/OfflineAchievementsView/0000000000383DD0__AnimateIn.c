/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000383DD0
 * Mangled: _ZN5Caver23OfflineAchievementsView9AnimateInEv
 * Demangled: Caver::OfflineAchievementsView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F3710  Caver::OfflineAchievementsView::AnimateIn(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 212
 *   insn=0x0000000000383DE8 string=0x0000000000383DEC "V"
 *   insn=0x0000000000383DF8 string=0x0000000000383DFC "hz@"
 *   insn=0x0000000000383E00 string=0x0000000000383E04 ""
 *   insn=0x0000000000383E00 string=0x0000000000383E7C "h"
 *   insn=0x0000000000383E14 string=0x0000000000383E18 "J"
 *   insn=0x0000000000383E20 string=0x0000000000383E28 "\tY"
 *   insn=0x0000000000383E28 string=0x0000000000383E2C "tz@"
 *   insn=0x0000000000383E34 string=0x00000000001FA5A0 "0'"
 *   insn=0x0000000000383E40 string=0x00000000001F8A30 "0'"
 *   insn=0x0000000000383E4C string=0x0000000000383E50 ""
 *   insn=0x0000000000383E54 string=0x0000000000383E58 "!"
 *   insn=0x0000000000383E60 string=0x0000000000383E64 "\t@"
 *   insn=0x0000000000383E6C string=0x0000000000383E70 ""
 *   insn=0x0000000000383E80 string=0x0000000000383E84 ""
 *   insn=0x0000000000383E80 string=0x0000000000383F30 "h"
 *   insn=0x0000000000383E94 string=0x0000000000383E98 "*"
 *   insn=0x0000000000383EA0 string=0x0000000000383EA8 "\tY"
 *   insn=0x0000000000383EA8 string=0x0000000000383EAC "t"
 *   insn=0x0000000000383EC4 string=0x0000000000383EC8 "T"
 *   insn=0x0000000000383ECC string=0x0000000000383ED0 ""
 *   insn=0x0000000000383EE0 string=0x0000000000383EE4 "\t@"
 *   insn=0x0000000000383EEC string=0x0000000000383EF0 ""
 *   insn=0x0000000000383F00 string=0x0000000000383F04 "@"
 *   insn=0x0000000000383F08 string=0x0000000000383F0C "h"
 *   insn=0x0000000000383F0C string=0x0000000000383F10 "H"
 *   insn=0x0000000000383F10 string=0x0000000000383F14 "'"
 *   insn=0x0000000000383F10 string=0x0000000000383F38 ""
 *   insn=0x0000000000383F14 string=0x0000000000383FB0 "`"
 *   insn=0x0000000000383F1C string=0x0000000000383F20 "@"
 *   insn=0x0000000000383F24 string=0x0000000000383F28 "h"
 *   insn=0x0000000000383F54 string=0x0000000000383F5C "\tY"
 *   insn=0x0000000000383F5C string=0x0000000000383F60 "t"
 *   insn=0x0000000000383F80 string=0x0000000000383F84 ""
 *   insn=0x0000000000383F88 string=0x0000000000383F8C "!"
 *   insn=0x0000000000383F94 string=0x0000000000383F98 "\t@"
 *   insn=0x0000000000383FA0 string=0x0000000000383FA4 ""
 *   insn=0x0000000000383FA8 string=0x0000000000383FAC "@"
 *   insn=0x0000000000383FB4 string=0x0000000000383FB8 "h"
 *   insn=0x0000000000383FB4 string=0x000000000038408C "h&S"
 *   insn=0x0000000000383FD8 string=0x0000000000383FDC "A(#"
 *   insn=0x0000000000383FE8 string=0x0000000000383FEC "h"
 *   insn=0x0000000000383FE8 string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000383FF4 string=0x0000000000383FF8 ""
 *   insn=0x000000000038400C string=0x0000000000384010 "t"
 *   insn=0x0000000000384014 string=0x0000000000384018 "b"
 *   insn=0x0000000000384030 string=0x0000000000384034 ""
 *   insn=0x0000000000384044 string=0x0000000000384048 "\t@"
 *   insn=0x0000000000384050 string=0x0000000000384054 ""
 *   insn=0x0000000000384064 string=0x0000000000384068 "@"
 *   insn=0x000000000038406C string=0x0000000000384070 ""
 *   insn=0x0000000000384078 string=0x000000000038407C "@"
 *   insn=0x0000000000384080 string=0x0000000000384084 "`"
 *   insn=0x000000000038408C string=0x0000000000384090 "?"
 *   insn=0x0000000000384098 string=0x000000000038409C "\n"
 *   insn=0x000000000038409C string=0x00000000003840A0 "(iO"
 *   insn=0x00000000003840A0 string=0x00000000003840A4 "I"
 *   insn=0x00000000003840B0 string=0x00000000003840B4 "i"
 *   insn=0x00000000003840C0 string=0x00000000003840C4 " "
 *   insn=0x00000000003840C4 string=0x00000000003840C8 "!u@"
 *   insn=0x00000000003840DC string=0x00000000003840E0 "A(#"
 *   insn=0x0000000000384118 string=0x000000000038411C "!"
 *   insn=0x0000000000384124 string=0x0000000000384128 "B"
 *   insn=0x000000000038412C string=0x0000000000384130 "4"
 *   insn=0x0000000000384130 string=0x0000000000384174 "h&S"
 *   insn=0x0000000000384134 string=0x0000000000384138 ""
 *   insn=0x0000000000384148 string=0x000000000038414C "\t@"
 *   insn=0x0000000000384154 string=0x0000000000384158 ""
 *   insn=0x0000000000384168 string=0x000000000038416C "@"
 *   insn=0x000000000038417C string=0x0000000000384180 ")"
 *   insn=0x0000000000384180 string=0x0000000000384184 ")"
 *   insn=0x0000000000384184 string=0x0000000000384188 "?"
 *   insn=0x0000000000384188 string=0x000000000038418C "("
 *   insn=0x000000000038419C string=0x00000000003841BC "E"
 *   insn=0x00000000003841BC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003841C4 string=0x00000000003841C8 "4"
 *   insn=0x00000000003841CC string=0x00000000003841D0 ""
 *   insn=0x00000000003841DC string=0x00000000003841E0 "\t@"
 *   insn=0x00000000003841EC string=0x00000000003841F0 ""
 *   insn=0x00000000003841FC string=0x0000000000384200 "@"
 *   insn=0x0000000000384208 string=0x000000000038420C "P"
 *   insn=0x000000000038421C string=0x0000000000384220 ""
 *   insn=0x0000000000384224 string=0x0000000000384228 "!\t"
 *   insn=0x000000000038422C string=0x0000000000384230 "\t@"
 *   insn=0x000000000038423C string=0x0000000000384240 ""
 *   insn=0x0000000000384244 string=0x0000000000384248 "!"
 *   insn=0x000000000038424C string=0x0000000000384250 "@"
 *   insn=0x0000000000384258 string=0x000000000038425C "<"
 *   insn=0x0000000000384264 string=0x0000000000384268 "4"
 *   insn=0x000000000038426C string=0x0000000000384270 ""
 *   insn=0x000000000038427C string=0x0000000000384280 "\t@"
 *   insn=0x000000000038428C string=0x0000000000384290 ""
 *   insn=0x000000000038429C string=0x00000000003842A0 "@"
 *   insn=0x00000000003842A8 string=0x00000000003842AC "("
 *   insn=0x00000000003842BC string=0x00000000003842C0 ""
 *   insn=0x00000000003842C4 string=0x00000000003842C8 "!"
 *   insn=0x00000000003842CC string=0x00000000003842D0 "\t@"
 *   insn=0x00000000003842DC string=0x00000000003842E0 ""
 *   insn=0x00000000003842E4 string=0x00000000003842E8 "!"
 *   insn=0x00000000003842EC string=0x00000000003842F0 "@"
 *   insn=0x0000000000384304 string=0x0000000000384308 "4"
 *   insn=0x000000000038430C string=0x0000000000384310 ""
 *   insn=0x000000000038431C string=0x0000000000384320 "\t@"
 *   insn=0x000000000038432C string=0x0000000000384330 ""
 *   insn=0x000000000038433C string=0x0000000000384340 "@"
 *   insn=0x000000000038434C string=0x0000000000384350 "]"
 *   insn=0x0000000000384370 string=0x0000000000384374 "V"
 *   insn=0x0000000000384380 string=0x0000000000384384 "hz@"
 *   insn=0x0000000000384388 string=0x000000000038438C ""
 *   insn=0x0000000000384388 string=0x00000000003843FC "h"
 *   insn=0x00000000003843A8 string=0x00000000003843AC "tz@"
 *   insn=0x00000000003843B0 string=0x00000000003843B4 "{"
 *   insn=0x00000000003843CC string=0x00000000003843D0 ""
 *   insn=0x00000000003843D4 string=0x00000000003843D8 "!"
 *   insn=0x00000000003843E0 string=0x00000000003843E4 "\t@"
 *   insn=0x00000000003843EC string=0x00000000003843F0 ""
 *   insn=0x00000000003843FC string=0x0000000000384400 "H"
 *   insn=0x0000000000384400 string=0x0000000000384404 ""
 *   insn=0x0000000000384400 string=0x00000000003844A8 "h"
 *   insn=0x0000000000384420 string=0x0000000000384424 "t"
 *   insn=0x0000000000384428 string=0x000000000038442C "]"
 *   insn=0x0000000000384434 string=0x0000000000384438 "~"
 *   insn=0x000000000038443C string=0x0000000000384440 "T"
 *   insn=0x0000000000384444 string=0x0000000000384448 ""
 *   insn=0x0000000000384458 string=0x000000000038445C "\t@"
 *   insn=0x0000000000384464 string=0x0000000000384468 ""
 *   insn=0x0000000000384478 string=0x000000000038447C "@"
 *   insn=0x0000000000384480 string=0x0000000000384484 "h"
 *   insn=0x0000000000384484 string=0x0000000000384488 "H"
 *   insn=0x0000000000384488 string=0x000000000038448C "%"
 *   insn=0x0000000000384488 string=0x00000000003844B0 ""
 *   insn=0x000000000038448C string=0x0000000000384520 "t"
 *   insn=0x0000000000384494 string=0x0000000000384498 "@"
 *   insn=0x000000000038449C string=0x00000000003844A0 "h"
 *   insn=0x00000000003844A0 string=0x00000000003844A4 ""
 *   insn=0x00000000003844CC string=0x00000000003844D0 "t"
 *   insn=0x00000000003844D4 string=0x00000000003844D8 "2"
 *   insn=0x00000000003844E0 string=0x00000000003844E4 "S"
 *   insn=0x00000000003844F0 string=0x00000000003844F4 ""
 *   insn=0x00000000003844F8 string=0x00000000003844FC "!"
 *   insn=0x0000000000384504 string=0x0000000000384508 "\t@"
 *   insn=0x0000000000384510 string=0x0000000000384514 ""
 *   insn=0x0000000000384518 string=0x000000000038451C "`"
 *   insn=0x0000000000384524 string=0x0000000000384528 "h"
 *   insn=0x0000000000384524 string=0x0000000000384600 "h&S"
 *   insn=0x000000000038454C string=0x0000000000384550 "A(#"
 *   insn=0x000000000038455C string=0x0000000000384560 ""
 *   insn=0x0000000000384570 string=0x0000000000384574 "k"
 *   insn=0x0000000000384580 string=0x0000000000384584 "t"
 *   insn=0x0000000000384594 string=0x0000000000384598 "&"
 *   insn=0x00000000003845A4 string=0x00000000003845A8 ""
 *   insn=0x00000000003845B8 string=0x00000000003845BC "\t@"
 *   insn=0x00000000003845C4 string=0x00000000003845C8 ""
 *   insn=0x00000000003845D8 string=0x00000000003845DC "@"
 *   insn=0x00000000003845E0 string=0x00000000003845E4 ""
 *   insn=0x00000000003845EC string=0x00000000003845F0 "@"
 *   insn=0x00000000003845F4 string=0x00000000003845F8 "t"
 *   insn=0x00000000003845F8 string=0x00000000003845FC "t"
 *   insn=0x0000000000384600 string=0x0000000000384604 "?"
 *   insn=0x0000000000384608 string=0x000000000038460C "\t"
 *   insn=0x000000000038460C string=0x0000000000384610 "*"
 *   insn=0x0000000000384610 string=0x0000000000384614 "("
 *   insn=0x0000000000384614 string=0x0000000000384618 "IQK"
 *   insn=0x0000000000384624 string=0x0000000000384628 "i"
 *   insn=0x0000000000384634 string=0x0000000000384638 " "
 *   insn=0x0000000000384638 string=0x000000000038463C "!u@"
 *   insn=0x0000000000384650 string=0x0000000000384654 "A(#"
 *   insn=0x0000000000384670 string=0x0000000000384674 "+"
 *   insn=0x00000000003846A4 string=0x00000000003846A8 "4"
 *   insn=0x00000000003846A8 string=0x00000000003846EC "h&S"
 *   insn=0x00000000003846AC string=0x00000000003846B0 ""
 *   insn=0x00000000003846C0 string=0x00000000003846C4 "\t@"
 *   insn=0x00000000003846CC string=0x00000000003846D0 ""
 *   insn=0x00000000003846E0 string=0x00000000003846E4 "@"
 *   insn=0x00000000003846F4 string=0x00000000003846F8 ")"
 *   insn=0x00000000003846F8 string=0x00000000003846FC ")"
 *   insn=0x00000000003846FC string=0x0000000000384700 "?"
 *   insn=0x0000000000384700 string=0x0000000000384704 ""
 *   insn=0x000000000038473C string=0x0000000000384740 "4"
 *   insn=0x0000000000384744 string=0x0000000000384748 ""
 *   insn=0x0000000000384754 string=0x0000000000384758 "\t@"
 *   insn=0x0000000000384764 string=0x0000000000384768 ""
 *   insn=0x0000000000384774 string=0x0000000000384778 "@"
 *   insn=0x0000000000384780 string=0x0000000000384784 "P"
 *   insn=0x0000000000384794 string=0x0000000000384798 ""
 *   insn=0x000000000038479C string=0x00000000003847A0 "!\t"
 *   insn=0x00000000003847A4 string=0x00000000003847A8 "\t@"
 *   insn=0x00000000003847B4 string=0x00000000003847B8 ""
 *   insn=0x00000000003847BC string=0x00000000003847C0 "!"
 *   insn=0x00000000003847C4 string=0x00000000003847C8 "@"
 *   insn=0x00000000003847D0 string=0x00000000003847D4 "<"
 *   insn=0x00000000003847DC string=0x00000000003847E0 "4"
 *   insn=0x00000000003847E4 string=0x00000000003847E8 ""
 *   insn=0x00000000003847F4 string=0x00000000003847F8 "\t@"
 *   insn=0x0000000000384804 string=0x0000000000384808 ""
 *   insn=0x0000000000384814 string=0x0000000000384818 "@"
 *   insn=0x0000000000384820 string=0x0000000000384824 "("
 *   insn=0x0000000000384834 string=0x0000000000384838 ""
 *   insn=0x000000000038483C string=0x0000000000384840 "!"
 *   insn=0x0000000000384844 string=0x0000000000384848 "\t@"
 *   insn=0x0000000000384854 string=0x0000000000384858 ""
 *   insn=0x000000000038485C string=0x0000000000384860 "!"
 *   insn=0x0000000000384864 string=0x0000000000384868 "@"
 *   insn=0x000000000038487C string=0x0000000000384880 "4"
 *   insn=0x0000000000384884 string=0x0000000000384888 ""
 *   insn=0x0000000000384894 string=0x0000000000384898 "\t@"
 *   insn=0x00000000003848A4 string=0x00000000003848A8 ""
 *   insn=0x00000000003848B4 string=0x00000000003848B8 "@"
 *   insn=0x00000000003848CC string=0x00000000003848D0 "("
 *   insn=0x00000000003848D4 string=0x00000000003848D8 "A"
 *   insn=0x00000000003848D8 string=0x00000000003848DC "("
 *   insn=0x00000000003848E0 string=0x00000000003848E4 "`"
 *   insn=0x0000000000384900 string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OfflineAchievementsView::AnimateIn(Caver::OfflineAchievementsView *this)
{
  Caver::OfflineAchievementsView *v1; // x19
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // x8
  float v13; // s0
  float v14; // s1
  float *v15; // x0
  float v16; // t1
  float v17; // s3
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x23
  unsigned __int64 v23; // x24
  float *v24; // x20
  __int64 v25; // x9
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s3
  _QWORD *v30; // x20
  __int64 v31; // x8
  __int64 v32; // x8
  float v33; // [xsp+80h] [xbp-70h] BYREF
  int v34; // [xsp+84h] [xbp-6Ch]
  __int64 v35[2]; // [xsp+88h] [xbp-68h] BYREF
  __int64 v36; // [xsp+98h] [xbp-58h] BYREF
  _QWORD *v37; // [xsp+A0h] [xbp-50h]
  __int64 v38; // [xsp+A8h] [xbp-48h]

  v1 = this;
  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*((_QWORD *)this + 30) )
    goto LABEL_5;
  Caver::GUIAnimation::AlphaAnimation(&v36, this, 0.0, 1.0, 0.4);
  *(_DWORD *)(v36 + 88) = 1053609165;
  Caver::GUIView::RemoveAllAnimations(*((Caver::GUIView **)v1 + 30));
  this = (Caver::OfflineAchievementsView *)Caver::GUIView::AddAnimation();
  v2 = v37;
  if ( !v37 )
    goto LABEL_5;
  v3 = v37[1] - 1LL;
  v37[1] = v3;
  if ( !v3
    && (this = (Caver::OfflineAchievementsView *)(*(__int64 (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2),
        v4 = v2[2] - 1LL,
        (v2[2] = v4) == 0) )
  {
    this = (Caver::OfflineAchievementsView *)(*(__int64 (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    if ( !*((_QWORD *)v1 + 41) )
      goto LABEL_12;
  }
  else
  {
LABEL_5:
    if ( !*((_QWORD *)v1 + 41) )
      goto LABEL_12;
  }
  Caver::GUIAnimation::AlphaAnimation(&v36, this, 0.0, 1.0, 0.4);
  *(_DWORD *)(v36 + 88) = 1053609165;
  Caver::GUIView::RemoveAllAnimations(*((Caver::GUIView **)v1 + 41));
  this = (Caver::OfflineAchievementsView *)Caver::GUIView::AddAnimation();
  v5 = v37;
  if ( v37 )
  {
    v6 = v37[1] - 1LL;
    v37[1] = v6;
    if ( !v6 )
    {
      this = (Caver::OfflineAchievementsView *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
      {
        this = (Caver::OfflineAchievementsView *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
        if ( !*((_QWORD *)v1 + 43) )
          goto LABEL_16;
        goto LABEL_13;
      }
    }
  }
LABEL_12:
  if ( !*((_QWORD *)v1 + 43) )
    goto LABEL_16;
LABEL_13:
  Caver::GUIAnimation::AlphaAnimation(&v36, this, 0.0, 1.0, 0.4);
  *(_DWORD *)(v36 + 88) = 1053609165;
  Caver::GUIView::RemoveAllAnimations(*((Caver::GUIView **)v1 + 43));
  Caver::GUIView::AddAnimation();
  v8 = v37;
  if ( v37 )
  {
    v9 = v37[1] - 1LL;
    v37[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
        result = *((_QWORD *)v1 + 32);
        if ( !result )
          goto LABEL_22;
        goto LABEL_17;
      }
    }
  }
LABEL_16:
  result = *((_QWORD *)v1 + 32);
  if ( !result )
    goto LABEL_22;
LABEL_17:
  v12 = *((_QWORD *)v1 + 36);
  v13 = *(float *)(v12 + 132);
  v14 = *(float *)(v12 + 116);
  v16 = *(float *)(result + 116);
  v15 = (float *)(result + 116);
  v17 = v15[2];
  v34 = 0;
  v33 = (float)(v13 - v14) - (float)(v16 + v17);
  Caver::Rectangle::TranslatedRectangle(v35, (Caver::Rectangle *)v15, (const Caver::Vector2 *)&v33);
  Caver::GUIAnimation::FrameAnimation();
  *(_DWORD *)(v36 + 88) = 0;
  Caver::GUIView::RemoveAllAnimations(*((Caver::GUIView **)v1 + 32));
  result = Caver::GUIView::AddAnimation();
  v18 = v37;
  if ( v37 )
  {
    v19 = v37[1] - 1LL;
    v37[1] = v19;
    if ( !v19 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v20 = v18[2] - 1LL;
      v18[2] = v20;
      if ( !v20 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
LABEL_22:
  v21 = *((_QWORD *)v1 + 38);
  if ( *((_QWORD *)v1 + 39) != v21 )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      v24 = *(float **)(v21 + v22);
      v25 = *((_QWORD *)v1 + 36);
      v26 = *(float *)(v25 + 132);
      v27 = *(float *)(v25 + 116);
      v28 = v24[29];
      v29 = v24[31];
      v34 = 0;
      v33 = (float)(v26 - v27) - (float)(v28 + v29);
      Caver::Rectangle::TranslatedRectangle(v35, (Caver::Rectangle *)(v24 + 29), (const Caver::Vector2 *)&v33);
      Caver::GUIAnimation::FrameAnimation();
      *(float *)(v36 + 88) = (float)((float)(int)v23 * 0.05) + 0.05;
      Caver::GUIView::RemoveAllAnimations((Caver::GUIView *)v24);
      result = Caver::GUIView::AddAnimation();
      v30 = v37;
      if ( v37 )
      {
        v31 = v37[1] - 1LL;
        v37[1] = v31;
        if ( !v31 )
        {
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
          v32 = v30[2] - 1LL;
          v30[2] = v32;
          if ( !v32 )
            result = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 24LL))(v30);
        }
      }
      v21 = *((_QWORD *)v1 + 38);
      ++v23;
      v22 += 16;
    }
    while ( (*((_QWORD *)v1 + 39) - v21) >> 4 > v23 );
  }
  return result;
}

