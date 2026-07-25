/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B5CC
 * Mangled: _ZN5Caver13GUIScrollViewC2Ev
 * Demangled: Caver::GUIScrollView::GUIScrollView(void)
 *
 * Callers: 1
 *   0x00000000002021A0  Caver::GUIScrollView::GUIScrollView(void)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FAD60  Caver::GUIScrollLocationController::GUIScrollLocationController(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x000000000049B5D8 string=0x000000000049B5DC "Y"
 *   insn=0x000000000049B5DC string=0x000000000049B5E0 "h"
 *   insn=0x000000000049B5E0 string=0x000000000049B5E4 "%B"
 *   insn=0x000000000049B5E4 string=0x000000000049B5E8 "`"
 *   insn=0x000000000049B5F0 string=0x000000000049B5F4 "A"
 *   insn=0x000000000049B5F4 string=0x000000000049B5F8 "h"
 *   insn=0x000000000049B5FC string=0x000000000049B600 "`"
 *   insn=0x000000000049B5FC string=0x00000000001FAD60 "0'"
 *   insn=0x000000000049B608 string=0x000000000049B60C " )@"
 *   insn=0x000000000049B60C string=0x000000000049B610 "( "
 *   insn=0x000000000049B624 string=0x000000000049B628 "hb"
 *   insn=0x000000000049B628 string=0x000000000049B62C "`"
 *   insn=0x000000000049B650 string=0x000000000049B654 ">"
 *   insn=0x000000000049B668 string=0x000000000049B66C "U"
 *   insn=0x000000000049B694 string=0x000000000049B698 "`"
 *   insn=0x000000000049B698 string=0x000000000049B69C "c"
 *   insn=0x000000000049B6A4 string=0x000000000049B6A8 "H  "
 *   insn=0x000000000049B6A8 string=0x000000000049B6AC "!8 "
 *   insn=0x000000000049B6B0 string=0x000000000049B6E0 "(  "
 *   insn=0x000000000049B6B4 string=0x000000000049B6B8 "D"
 *   insn=0x000000000049B6B8 string=0x000000000049B6BC "B%"
 *   insn=0x000000000049B6BC string=0x000000000049B6C0 "c($"
 *   insn=0x000000000049B6C4 string=0x000000000049B6C8 "c8$"
 *   insn=0x000000000049B6CC string=0x000000000049B6D0 "B(#"
 *   insn=0x000000000049B6D0 string=0x000000000049B6D4 "B8$"
 *   insn=0x000000000049B6E8 string=0x000000000049B6EC """
 *   insn=0x000000000049B6EC string=0x000000000049B6F0 "!#"
 *   insn=0x000000000049B6F4 string=0x000000000049B6F8 "B8!"
 *   insn=0x000000000049B6FC string=0x000000000049B700 "@( "
 *   insn=0x000000000049B700 string=0x000000000049B704 " ( "
 *   insn=0x000000000049B71C string=0x000000000049B720 "h"
 *   insn=0x000000000049B71C string=0x00000000001FB170 "0'"
 *   insn=0x000000000049B728 string=0x000000000049B72C ""
 *   insn=0x000000000049B758 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::GUIScrollView::GUIScrollView(Caver::GUIScrollView *this)
{
  double result; // d0

  Caver::GUIView::GUIView(this);
  *(_QWORD *)((char *)this + 244) = 0;
  *(_QWORD *)((char *)this + 236) = 0;
  *(_QWORD *)this = off_6D6380;
  Caver::GUIScrollLocationController::GUIScrollLocationController((Caver::GUIScrollView *)((char *)this + 252));
  Caver::GUIScrollLocationController::GUIScrollLocationController((Caver::GUIScrollView *)((char *)this + 296));
  result = 1.40444709e306;
  *((_QWORD *)this + 43) = 0;
  *((_BYTE *)this + 408) = 0;
  *((_QWORD *)this + 59) = 0;
  *((_QWORD *)this + 52) = 0;
  *((_QWORD *)this + 53) = 0;
  *((_BYTE *)this + 434) = 0;
  *((_DWORD *)this + 88) = 257;
  *((_QWORD *)this + 50) = 0x7F7FFFFF00000000LL;
  *((_WORD *)this + 216) = 0;
  return result;
}

