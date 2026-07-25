/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000374B20
 * Mangled: _ZN5Caver27AchievementNotificationView13PresentInViewEPNS_7GUIViewE
 * Demangled: Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *
 * Callers: 1
 *   0x00000000001F7D40  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *
 * Callees: 16
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F65D0  Caver::AchievementNotificationView::AnimateIn(void)
 *   0x00000000001F6B70  boost::detail::function::has_empty_target(...)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000002007D0  Caver::AchievementNotificationView::UpdateLayout(void)
 *   0x0000000000203320  Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003752E0  Caver::AchievementNotificationView::AnimationDidFinish(void *,Caver::GUIEvent *)
 *   0x0000000000375D70  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIFrameView,Caver::GUIFrameView>(boost::shared_ptr<Caver::GUIFrameView> const*,Caver::GUIFrameView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 205
 *   insn=0x0000000000374B34 string=0x0000000000374B38 "V"
 *   insn=0x0000000000374B48 string=0x0000000000374B4C "!/"
 *   insn=0x0000000000374B50 string=0x0000000000374B54 "h"
 *   insn=0x0000000000374B6C string=0x0000000000374B70 "c($"
 *   insn=0x0000000000374B74 string=0x0000000000374B78 "@( "
 *   insn=0x0000000000374B78 string=0x0000000000374B7C """
 *   insn=0x0000000000374B7C string=0x0000000000374B80 "c($"
 *   insn=0x0000000000374B84 string=0x0000000000374B88 "a8""
 *   insn=0x0000000000374B9C string=0x0000000000374BA0 "t"
 *   insn=0x0000000000374BA0 string=0x0000000000374BA4 "u\n@"
 *   insn=0x0000000000374BA0 string=0x00000000001FB170 "0'"
 *   insn=0x0000000000374BB4 string=0x0000000000374BB8 "j"
 *   insn=0x0000000000374BB8 string=0x0000000000374BBC ""
 *   insn=0x0000000000374BBC string=0x0000000000374BC0 "71@"
 *   insn=0x0000000000374BD4 string=0x0000000000374BD8 "\t@"
 *   insn=0x0000000000374BE0 string=0x0000000000374BE4 ""
 *   insn=0x0000000000374BF4 string=0x0000000000374BF8 "@"
 *   insn=0x0000000000374C0C string=0x0000000000374C10 "4"
 *   insn=0x0000000000374C14 string=0x0000000000374C18 ""
 *   insn=0x0000000000374C28 string=0x0000000000374C2C "\t@"
 *   insn=0x0000000000374C34 string=0x0000000000374C38 ""
 *   insn=0x0000000000374C48 string=0x0000000000374C4C "@"
 *   insn=0x0000000000374C54 string=0x0000000000374C58 "^"
 *   insn=0x0000000000374C58 string=0x00000000001F65D0 "0'"
 *   insn=0x0000000000374C84 string=0x0000000000374C88 ""
 *   insn=0x0000000000374C88 string=0x0000000000374C8C "A"
 *   insn=0x0000000000374C94 string=0x0000000000374C98 ":"
 *   insn=0x0000000000374C98 string=0x00000000001FA980 "0'"
 *   insn=0x0000000000374C9C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000374CB8 string=0x0000000000374CBC "4"
 *   insn=0x0000000000374CC0 string=0x0000000000374CC4 ""
 *   insn=0x0000000000374CD0 string=0x0000000000374CD4 "\t@"
 *   insn=0x0000000000374CE0 string=0x0000000000374CE4 ""
 *   insn=0x0000000000374CF0 string=0x0000000000374CF4 "@"
 *   insn=0x0000000000374D20 string=0x0000000000374D24 "U"
 *   insn=0x0000000000374D64 string=0x00000000001F9C60 "0'"
 *   insn=0x0000000000374D74 string=0x0000000000374D78 "j9"
 *   insn=0x0000000000374D80 string=0x0000000000374D84 "h"
 *   insn=0x0000000000374D94 string=0x0000000000374D98 ")"
 *   insn=0x0000000000374D9C string=0x0000000000374DA0 "\t"
 *   insn=0x0000000000374DA4 string=0x0000000000374DA8 " "
 *   insn=0x0000000000374DA8 string=0x0000000000374DAC "h"
 *   insn=0x0000000000374DB8 string=0x0000000000374DBC "m"
 *   insn=0x0000000000374DBC string=0x0000000000374DC0 "`"
 *   insn=0x0000000000374DBC string=0x00000000001F6B70 "0'"
 *   insn=0x0000000000374DC4 string=0x0000000000374DC8 ""
 *   insn=0x0000000000374DDC string=0x0000000000374DE0 ""
 *   insn=0x0000000000374DE8 string=0x0000000000374DEC "i\n@"
 *   insn=0x0000000000374DEC string=0x0000000000374DF0 ")"
 *   insn=0x0000000000374DF0 string=0x0000000000374DF4 "i\n"
 *   insn=0x0000000000374DF8 string=0x0000000000374DFC "("
 *   insn=0x0000000000374E00 string=0x0000000000374E04 "h"
 *   insn=0x0000000000374E04 string=0x0000000000374E08 ""
 *   insn=0x0000000000374E08 string=0x0000000000374E0C ""
 *   insn=0x0000000000374E10 string=0x0000000000374E14 " !"
 *   insn=0x0000000000374E18 string=0x0000000000374E1C "!a"
 *   insn=0x0000000000374E54 string=0x0000000000374E58 "@"
 *   insn=0x0000000000374E58 string=0x0000000000374E5C ""
 *   insn=0x0000000000374E5C string=0x0000000000374E60 ""
 *   insn=0x0000000000374E64 string=0x0000000000374E68 "@"
 *   insn=0x0000000000374E68 string=0x0000000000374E6C ""
 *   insn=0x0000000000374E6C string=0x0000000000374E70 ""
 *   insn=0x0000000000374E74 string=0x0000000000374E78 ""
 *   insn=0x0000000000374E78 string=0x0000000000374E7C "@"
 *   insn=0x0000000000374E90 string=0x0000000000374E94 "C9"
 *   insn=0x0000000000374E98 string=0x0000000000374E9C "h"
 *   insn=0x0000000000374E9C string=0x0000000000374EA0 "("
 *   insn=0x0000000000374EA0 string=0x0000000000374EA4 ""
 *   insn=0x0000000000374EA4 string=0x0000000000374EA8 ""
 *   insn=0x0000000000374EB0 string=0x0000000000374EB4 " a"
 *   insn=0x0000000000374ECC string=0x0000000000374ED0 "@"
 *   insn=0x0000000000374ED0 string=0x0000000000374ED4 ""
 *   insn=0x0000000000374ED4 string=0x0000000000374ED8 ""
 *   insn=0x0000000000374EDC string=0x0000000000374EE0 ""
 *   insn=0x0000000000374EE0 string=0x0000000000374EE4 "@"
 *   insn=0x0000000000374EEC string=0x0000000000374EF0 "h"
 *   insn=0x0000000000374EF0 string=0x0000000000374EF4 "("
 *   insn=0x0000000000374EF0 string=0x0000000000374F1C "h"
 *   insn=0x0000000000374EF4 string=0x0000000000374EF8 ""
 *   insn=0x0000000000374EF8 string=0x0000000000374EFC ""
 *   insn=0x0000000000374F04 string=0x0000000000374F08 " !"
 *   insn=0x0000000000374F1C string=0x0000000000374F20 ""
 *   insn=0x0000000000374F20 string=0x0000000000374F24 "h"
 *   insn=0x0000000000374F28 string=0x0000000000374F2C "h"
 *   insn=0x0000000000374F28 string=0x0000000000374F5C "h"
 *   insn=0x0000000000374F2C string=0x0000000000374F30 "\t@"
 *   insn=0x0000000000374F38 string=0x0000000000374F3C "h\n@"
 *   insn=0x0000000000374F3C string=0x0000000000374F40 ""
 *   insn=0x0000000000374F40 string=0x0000000000374F44 "h\n"
 *   insn=0x0000000000374F48 string=0x0000000000374F4C "h"
 *   insn=0x0000000000374F4C string=0x0000000000374F50 "@"
 *   insn=0x0000000000374F5C string=0x0000000000374F60 ""
 *   insn=0x0000000000374F60 string=0x0000000000374F64 "h"
 *   insn=0x0000000000374F68 string=0x0000000000374F6C "h"
 *   insn=0x0000000000374F6C string=0x0000000000374F70 "\t@"
 *   insn=0x0000000000374F78 string=0x0000000000374F7C "h\n@"
 *   insn=0x0000000000374F7C string=0x0000000000374F80 ""
 *   insn=0x0000000000374F80 string=0x0000000000374F84 "h\n"
 *   insn=0x0000000000374F88 string=0x0000000000374F8C "h"
 *   insn=0x0000000000374F8C string=0x0000000000374F90 "@"
 *   insn=0x0000000000374FA0 string=0x0000000000374FA4 "\n"
 *   insn=0x0000000000374FA4 string=0x0000000000374FA8 "J"
 *   insn=0x0000000000374FA8 string=0x0000000000374FAC "\n"
 *   insn=0x0000000000374FB4 string=0x0000000000374FB8 "3"
 *   insn=0x0000000000374FB8 string=0x0000000000374FBC "h"
 *   insn=0x0000000000374FBC string=0x0000000000374FC0 ""
 *   insn=0x0000000000374FC0 string=0x0000000000374FC4 "h"
 *   insn=0x0000000000374FC8 string=0x0000000000374FCC "h"
 *   insn=0x0000000000374FCC string=0x0000000000374FD0 "\t@"
 *   insn=0x0000000000374FD8 string=0x0000000000374FDC "h\n@"
 *   insn=0x0000000000374FDC string=0x0000000000374FE0 ""
 *   insn=0x0000000000374FE0 string=0x0000000000374FE4 "h\n"
 *   insn=0x0000000000374FE8 string=0x0000000000374FEC "h"
 *   insn=0x0000000000374FEC string=0x0000000000374FF0 "@"
 *   insn=0x0000000000374FFC string=0x0000000000375000 "h"
 *   insn=0x0000000000375000 string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000037500C string=0x00000000001F8A30 "0'"
 *   insn=0x0000000000375010 string=0x0000000000375014 "3"
 *   insn=0x0000000000375014 string=0x0000000000375018 "h"
 *   insn=0x0000000000375018 string=0x000000000037501C ""
 *   insn=0x000000000037501C string=0x0000000000375020 "h"
 *   insn=0x0000000000375024 string=0x0000000000375028 "h"
 *   insn=0x000000000037502C string=0x0000000000375030 "\t@"
 *   insn=0x0000000000375034 string=0x0000000000375038 "h\n@"
 *   insn=0x0000000000375038 string=0x000000000037503C ""
 *   insn=0x000000000037503C string=0x0000000000375040 "h\n"
 *   insn=0x0000000000375044 string=0x0000000000375048 "h"
 *   insn=0x000000000037504C string=0x0000000000375050 "@"
 *   insn=0x0000000000375080 string=0x0000000000375084 ""
 *   insn=0x0000000000375084 string=0x0000000000375088 "A"
 *   insn=0x0000000000375090 string=0x0000000000375094 ";"
 *   insn=0x00000000003750AC string=0x000000000037528C "h"
 *   insn=0x00000000003750B4 string=0x00000000003750B8 "D"
 *   insn=0x00000000003750B8 string=0x00000000003751C8 "h"
 *   insn=0x00000000003750C4 string=0x00000000003750C8 "\t\t@"
 *   insn=0x00000000003750C8 string=0x00000000003750CC ")"
 *   insn=0x00000000003750CC string=0x00000000003750D0 "\t\t"
 *   insn=0x00000000003750D0 string=0x00000000003750D4 "!"
 *   insn=0x00000000003750D4 string=0x00000000003750D8 "\t"
 *   insn=0x00000000003750D8 string=0x00000000003750DC ")@"
 *   insn=0x00000000003750E0 string=0x00000000003750E4 " "
 *   insn=0x00000000003750E4 string=0x00000000003750E8 ","
 *   insn=0x00000000003750F4 string=0x00000000003750F8 "H"
 *   insn=0x00000000003750F8 string=0x00000000003750FC "3"
 *   insn=0x00000000003750F8 string=0x00000000003751A0 "("
 *   insn=0x0000000000375108 string=0x000000000037510C "\t\t@"
 *   insn=0x000000000037510C string=0x0000000000375110 ")"
 *   insn=0x0000000000375110 string=0x0000000000375114 "\t\t"
 *   insn=0x0000000000375118 string=0x000000000037511C "\t"
 *   insn=0x000000000037511C string=0x0000000000375120 ")@"
 *   insn=0x0000000000375124 string=0x0000000000375128 " "
 *   insn=0x0000000000375128 string=0x000000000037512C ""
 *   insn=0x0000000000375130 string=0x0000000000375134 "S"
 *   insn=0x0000000000375138 string=0x000000000037513C "3"
 *   insn=0x000000000037513C string=0x0000000000375208 "h"
 *   insn=0x0000000000375144 string=0x0000000000375148 "h"
 *   insn=0x0000000000375148 string=0x000000000037514C "("
 *   insn=0x000000000037514C string=0x0000000000375150 ""
 *   insn=0x0000000000375150 string=0x0000000000375154 ""
 *   insn=0x000000000037515C string=0x0000000000375160 " a"
 *   insn=0x0000000000375178 string=0x000000000037517C "@"
 *   insn=0x000000000037517C string=0x0000000000375180 ""
 *   insn=0x0000000000375180 string=0x0000000000375184 ""
 *   insn=0x0000000000375188 string=0x000000000037518C ""
 *   insn=0x000000000037518C string=0x0000000000375190 "@"
 *   insn=0x0000000000375198 string=0x000000000037519C "h"
 *   insn=0x00000000003751A0 string=0x00000000003751A4 ""
 *   insn=0x00000000003751A4 string=0x00000000003751A8 ""
 *   insn=0x00000000003751B0 string=0x00000000003751B4 " !"
 *   insn=0x00000000003751C8 string=0x00000000003751CC ""
 *   insn=0x00000000003751CC string=0x00000000003751D0 "h"
 *   insn=0x00000000003751D4 string=0x00000000003751D8 "h"
 *   insn=0x00000000003751D8 string=0x00000000003751DC "\t@"
 *   insn=0x00000000003751E4 string=0x00000000003751E8 "h\n@"
 *   insn=0x00000000003751E8 string=0x00000000003751EC ""
 *   insn=0x00000000003751EC string=0x00000000003751F0 "h\n"
 *   insn=0x00000000003751F4 string=0x00000000003751F8 "h"
 *   insn=0x00000000003751F8 string=0x00000000003751FC "@"
 *   insn=0x0000000000375208 string=0x000000000037520C ""
 *   insn=0x000000000037520C string=0x0000000000375210 "h"
 *   insn=0x0000000000375214 string=0x0000000000375218 "h"
 *   insn=0x0000000000375218 string=0x000000000037521C "\t@"
 *   insn=0x0000000000375224 string=0x0000000000375228 "h\n@"
 *   insn=0x0000000000375228 string=0x000000000037522C ""
 *   insn=0x000000000037522C string=0x0000000000375230 "h\n"
 *   insn=0x0000000000375234 string=0x0000000000375238 "h"
 *   insn=0x0000000000375238 string=0x000000000037523C "@"
 *   insn=0x0000000000375250 string=0x0000000000375254 "("
 *   insn=0x0000000000375254 string=0x0000000000375258 "\t\t@"
 *   insn=0x0000000000375258 string=0x000000000037525C ")"
 *   insn=0x000000000037525C string=0x0000000000375260 "\t\t"
 *   insn=0x0000000000375264 string=0x0000000000375268 "\t"
 *   insn=0x0000000000375268 string=0x000000000037526C ")@"
 *   insn=0x0000000000375270 string=0x0000000000375274 " "
 *   insn=0x0000000000375284 string=0x0000000000375288 "3"
 *   insn=0x000000000037528C string=0x0000000000375290 ""
 *   insn=0x0000000000375290 string=0x0000000000375294 "h"
 *   insn=0x0000000000375298 string=0x000000000037529C "h"
 *   insn=0x000000000037529C string=0x00000000003752A0 "\t@"
 *   insn=0x00000000003752A8 string=0x00000000003752AC "h\n@"
 *   insn=0x00000000003752AC string=0x00000000003752B0 ""
 *   insn=0x00000000003752B0 string=0x00000000003752B4 "h\n"
 *   insn=0x00000000003752B8 string=0x00000000003752BC "h"
 *   insn=0x00000000003752BC string=0x00000000003752C0 "@"
 *   insn=0x00000000003752CC string=0x00000000003752D0 "}1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AchievementNotificationView::PresentInView(
        Caver::AchievementNotificationView *this,
        Caver::GUIView *a2)
{
  float v4; // w8
  float v5; // s2
  float v6; // s3
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  void (__fastcall *v10)(Caver::GUIView *, __int64 *); // x23
  __int64 v11; // x8
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // [xsp+C0h] [xbp-50h] BYREF
  unsigned __int64 v16; // [xsp+C8h] [xbp-48h]
  void (__fastcall **v17)(std::exception *__hidden); // [xsp+D0h] [xbp-40h]
  __int64 v18; // [xsp+D8h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::AchievementNotificationView::UpdateLayout(this);
  v4 = *((float *)this + 31);
  v5 = *((float *)this + 32);
  v6 = (float)(*((float *)a2 + 34) + *((float *)a2 + 36)) + -5.0;
  LODWORD(v15) = roundf((float)(*((float *)a2 + 33) + (float)(*((float *)a2 + 35) * 0.5)) - (float)(v4 * 0.5));
  *((float *)&v15 + 1) = v6 - v5;
  v16 = __PAIR64__(LODWORD(v5), LODWORD(v4));
  Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v15);
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v7 || (v8 = v7[1]) == 0 )
  {
    v17 = off_6CC4E8;
    boost::throw_exception<boost::bad_weak_ptr>();
  }
  v9 = v8 + 1;
  v10 = *(void (__fastcall **)(Caver::GUIView *, __int64 *))(*(_QWORD *)a2 + 96LL);
  v15 = *((_QWORD *)this + 1);
  v16 = (unsigned __int64)v7;
  v7[1] = v9;
  if ( !v9 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    v11 = v7[2] - 1LL;
    v7[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
  }
  v10(a2, &v15);
  v12 = (_QWORD *)v16;
  if ( v16 )
  {
    v13 = *(_QWORD *)(v16 + 8) - 1LL;
    *(_QWORD *)(v16 + 8) = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  Caver::AchievementNotificationView::AnimateIn(this);
}

