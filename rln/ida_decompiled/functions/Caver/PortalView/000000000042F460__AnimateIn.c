/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042F460
 * Mangled: _ZN5Caver10PortalView9AnimateInEv
 * Demangled: Caver::PortalView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F5F80  Caver::PortalView::AnimateIn(void)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6F20  Caver::GUIScrollView::ScrollRectToVisible(Caver::Rectangle const&,bool)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FEA30  Caver::GUIAnimation::ScaleAnimation(float,float,float)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x000000000042F46C string=0x000000000042F470 "T"
 *   insn=0x000000000042F494 string=0x000000000042F498 "B,"
 *   insn=0x000000000042F498 string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000042F4A0 string=0x000000000042F4A4 "c%"
 *   insn=0x000000000042F4A4 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000042F4A8 string=0x000000000042F4AC "3"
 *   insn=0x000000000042F4AC string=0x000000000042F4B0 "h"
 *   insn=0x000000000042F4B0 string=0x000000000042F4B4 ""
 *   insn=0x000000000042F4B4 string=0x000000000042F4B8 "h"
 *   insn=0x000000000042F4BC string=0x000000000042F4C0 "h"
 *   insn=0x000000000042F4C4 string=0x000000000042F4C8 "\t@"
 *   insn=0x000000000042F4CC string=0x000000000042F4D0 "h\n@"
 *   insn=0x000000000042F4D0 string=0x000000000042F4D4 ""
 *   insn=0x000000000042F4D4 string=0x000000000042F4D8 "h\n"
 *   insn=0x000000000042F4DC string=0x000000000042F4E0 "h"
 *   insn=0x000000000042F4E4 string=0x000000000042F4E8 "@"
 *   insn=0x000000000042F4FC string=0x000000000042F510 "p"
 *   insn=0x000000000042F510 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042F518 string=0x000000000042F51C "4"
 *   insn=0x000000000042F520 string=0x000000000042F524 ""
 *   insn=0x000000000042F530 string=0x000000000042F534 "\t@"
 *   insn=0x000000000042F540 string=0x000000000042F544 ""
 *   insn=0x000000000042F550 string=0x000000000042F554 "@"
 *   insn=0x000000000042F564 string=0x000000000042F568 "y{"
 *   insn=0x000000000042F57C string=0x000000000042F580 "U"
 *   insn=0x000000000042F58C string=0x000000000042F590 "h"
 *   insn=0x000000000042F594 string=0x000000000042F604 "h"
 *   insn=0x000000000042F5A4 string=0x000000000042F5A8 ""="
 *   insn=0x000000000042F5B0 string=0x000000000042F5B4 "t"
 *   insn=0x000000000042F5D4 string=0x000000000042F5D8 ""
 *   insn=0x000000000042F5DC string=0x000000000042F5E0 "!"
 *   insn=0x000000000042F5E8 string=0x000000000042F5EC "\t@"
 *   insn=0x000000000042F5F4 string=0x000000000042F5F8 ""
 *   insn=0x000000000042F604 string=0x000000000042F608 "("
 *   insn=0x000000000042F608 string=0x000000000042F6AC "h"
 *   insn=0x000000000042F624 string=0x000000000042F628 "t"
 *   insn=0x000000000042F640 string=0x000000000042F644 "T"
 *   insn=0x000000000042F648 string=0x000000000042F64C ""
 *   insn=0x000000000042F65C string=0x000000000042F660 "\t@"
 *   insn=0x000000000042F668 string=0x000000000042F66C ""
 *   insn=0x000000000042F67C string=0x000000000042F680 "@"
 *   insn=0x000000000042F684 string=0x000000000042F688 "h"
 *   insn=0x000000000042F688 string=0x000000000042F68C "H"
 *   insn=0x000000000042F68C string=0x000000000042F690 "("
 *   insn=0x000000000042F698 string=0x000000000042F69C "@"
 *   insn=0x000000000042F6A0 string=0x000000000042F6A4 "h"
 *   insn=0x000000000042F6A4 string=0x000000000042F6A8 "("
 *   insn=0x000000000042F6AC string=0x000000000042F6B0 ""
 *   insn=0x000000000042F6CC string=0x000000000042F6D0 "t"
 *   insn=0x000000000042F6E8 string=0x000000000042F6EC "4"
 *   insn=0x000000000042F6F0 string=0x000000000042F6F4 ""
 *   insn=0x000000000042F704 string=0x000000000042F708 "\t@"
 *   insn=0x000000000042F710 string=0x000000000042F714 ""
 *   insn=0x000000000042F724 string=0x000000000042F728 "@"
 *   insn=0x000000000042F760 string=0x000000000042F764 "3"
 *   insn=0x000000000042F764 string=0x000000000042F768 "h"
 *   insn=0x000000000042F768 string=0x000000000042F76C ""
 *   insn=0x000000000042F76C string=0x000000000042F770 "h"
 *   insn=0x000000000042F774 string=0x000000000042F778 "h"
 *   insn=0x000000000042F77C string=0x000000000042F780 "\t@"
 *   insn=0x000000000042F784 string=0x000000000042F788 "h\n@"
 *   insn=0x000000000042F788 string=0x000000000042F78C ""
 *   insn=0x000000000042F78C string=0x000000000042F790 "h\n"
 *   insn=0x000000000042F794 string=0x000000000042F798 "h"
 *   insn=0x000000000042F79C string=0x000000000042F7A0 "@"
 *   insn=0x000000000042F7DC string=0x000000000042F7E0 ""
 *   insn=0x000000000042F7E4 string=0x000000000042F7E8 "!\t"
 *   insn=0x000000000042F7EC string=0x000000000042F7F0 "\t@"
 *   insn=0x000000000042F7FC string=0x000000000042F800 ""
 *   insn=0x000000000042F804 string=0x000000000042F808 "!"
 *   insn=0x000000000042F80C string=0x000000000042F810 "@"
 *   insn=0x000000000042F818 string=0x000000000042F81C "<"
 *   insn=0x000000000042F824 string=0x000000000042F828 "4"
 *   insn=0x000000000042F82C string=0x000000000042F830 ""
 *   insn=0x000000000042F83C string=0x000000000042F840 "\t@"
 *   insn=0x000000000042F84C string=0x000000000042F850 ""
 *   insn=0x000000000042F85C string=0x000000000042F860 "@"
 *   insn=0x000000000042F868 string=0x000000000042F86C "("
 *   insn=0x000000000042F87C string=0x000000000042F880 ""
 *   insn=0x000000000042F884 string=0x000000000042F888 "!"
 *   insn=0x000000000042F88C string=0x000000000042F890 "\t@"
 *   insn=0x000000000042F89C string=0x000000000042F8A0 ""
 *   insn=0x000000000042F8A4 string=0x000000000042F8A8 "!"
 *   insn=0x000000000042F8AC string=0x000000000042F8B0 "@"
 *   insn=0x000000000042F8C4 string=0x000000000042F8C8 "4"
 *   insn=0x000000000042F8CC string=0x000000000042F8D0 ""
 *   insn=0x000000000042F8DC string=0x000000000042F8E0 "\t@"
 *   insn=0x000000000042F8EC string=0x000000000042F8F0 ""
 *   insn=0x000000000042F8FC string=0x000000000042F900 "@"
 *   insn=0x000000000042F928 string=0x000000000042F92C "V"
 *   insn=0x000000000042F934 string=0x000000000042F938 " "
 *   insn=0x000000000042F938 string=0x000000000042F93C ")"
 *   insn=0x000000000042F940 string=0x000000000042F944 "("
 *   insn=0x000000000042F944 string=0x000000000042F948 ""yC"
 *   insn=0x000000000042F954 string=0x000000000042F958 "@"
 *   insn=0x000000000042F960 string=0x000000000042F964 " ( "
 *   insn=0x000000000042F96C string=0x000000000042F970 "t"
 *   insn=0x000000000042F970 string=0x000000000042F974 "i"
 *   insn=0x000000000042F984 string=0x000000000042F988 "h"
 *   insn=0x000000000042F9A0 string=0x000000000042F9A4 "!@!"
 *   insn=0x000000000042F9AC string=0x00000000001F9C60 "0'"
 *   insn=0x000000000042F9B8 string=0x000000000042F9BC "Y"
 *   insn=0x000000000042F9BC string=0x00000000001F6F20 "0'"
 *   insn=0x000000000042F9CC string=0x000000000042F9E4 ";"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalView::AnimateIn(Caver::PortalView *this)
{
  __int64 result; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // [xsp+C8h] [xbp-28h] BYREF
  _QWORD *v7; // [xsp+D0h] [xbp-20h]
  __int64 v8; // [xsp+D8h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIAnimation::AlphaAnimation(&v6, this, 0.0, 1.0, 0.25);
  Caver::GUIView::RemoveAllAnimations(this);
  result = Caver::GUIView::AddAnimation();
  v3 = v7;
  if ( v7 )
  {
    v4 = v7[1] - 1LL;
    v7[1] = v4;
    if ( !v4 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  return result;
}

