/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A05C8
 * Mangled: _ZN5Caver7GUIView20BecomeFirstResponderEv
 * Demangled: Caver::GUIView::BecomeFirstResponder(void)
 *
 * Callers: 1
 *   0x00000000001F9140  Caver::GUIView::BecomeFirstResponder(void)
 *
 * Callees: 6
 *   0x00000000001F58B0  Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 63
 *   insn=0x00000000004A05D8 string=0x00000000004A05DC "V"
 *   insn=0x00000000004A05EC string=0x00000000004A05F0 "y@"
 *   insn=0x00000000004A05FC string=0x00000000004A0600 "t"
 *   insn=0x00000000004A0600 string=0x00000000004A06CC "("
 *   insn=0x00000000004A0604 string=0x00000000004A0608 "("
 *   insn=0x00000000004A060C string=0x00000000004A0610 ""
 *   insn=0x00000000004A0624 string=0x00000000004A0628 "\t@"
 *   insn=0x00000000004A0630 string=0x00000000004A0634 ""
 *   insn=0x00000000004A0644 string=0x00000000004A0648 "@"
 *   insn=0x00000000004A0658 string=0x00000000001F58B0 "P'"
 *   insn=0x00000000004A065C string=0x00000000004A0660 "3"
 *   insn=0x00000000004A0660 string=0x00000000004A0664 "h"
 *   insn=0x00000000004A0664 string=0x00000000004A0668 ""
 *   insn=0x00000000004A0668 string=0x00000000004A066C "h"
 *   insn=0x00000000004A0670 string=0x00000000004A0674 "h"
 *   insn=0x00000000004A0678 string=0x00000000004A067C "\t@"
 *   insn=0x00000000004A0680 string=0x00000000004A0684 "h\n@"
 *   insn=0x00000000004A0684 string=0x00000000004A0688 ""
 *   insn=0x00000000004A0688 string=0x00000000004A068C "h\n"
 *   insn=0x00000000004A0690 string=0x00000000004A0694 "h"
 *   insn=0x00000000004A0698 string=0x00000000004A069C "@"
 *   insn=0x00000000004A06CC string=0x00000000004A06D0 ""
 *   insn=0x00000000004A06D0 string=0x00000000004A06D4 "A"
 *   insn=0x00000000004A06E0 string=0x00000000001FA980 "0'"
 *   insn=0x00000000004A06E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A06EC string=0x00000000004A06F0 "`~"
 *   insn=0x00000000004A06F4 string=0x00000000004A06F8 "s"
 *   insn=0x00000000004A0700 string=0x00000000004A0704 "4"
 *   insn=0x00000000004A0708 string=0x00000000004A070C ""
 *   insn=0x00000000004A0718 string=0x00000000004A071C "\t@"
 *   insn=0x00000000004A0728 string=0x00000000004A072C ""
 *   insn=0x00000000004A0738 string=0x00000000004A073C "@"
 *   insn=0x00000000004A0748 string=0x00000000004A074C "^"
 *   insn=0x00000000004A0764 string=0x00000000004A0768 "U"
 *   insn=0x00000000004A0774 string=0x00000000004A0778 "h"
 *   insn=0x00000000004A0778 string=0x00000000004A077C "y@"
 *   insn=0x00000000004A0780 string=0x00000000004A0784 "@"
 *   insn=0x00000000004A0784 string=0x00000000004A0788 ""
 *   insn=0x00000000004A0790 string=0x00000000004A0794 "h"
 *   insn=0x00000000004A0798 string=0x00000000004A079C "y@"
 *   insn=0x00000000004A07A8 string=0x00000000004A07AC "AT"
 *   insn=0x00000000004A07B0 string=0x00000000004A07B4 "4"
 *   insn=0x00000000004A07B4 string=0x00000000004A07F8 "s.@"
 *   insn=0x00000000004A07B8 string=0x00000000004A07BC ""
 *   insn=0x00000000004A07CC string=0x00000000004A07D0 "\t@"
 *   insn=0x00000000004A07D8 string=0x00000000004A07DC ""
 *   insn=0x00000000004A07EC string=0x00000000004A07F0 "@"
 *   insn=0x00000000004A07F8 string=0x00000000004A07FC "h"
 *   insn=0x00000000004A0800 string=0x00000000004A0804 "a@"
 *   insn=0x00000000004A080C string=0x00000000004A0810 "s.@"
 *   insn=0x00000000004A080C string=0x00000000004A081C "h"
 *   insn=0x00000000004A0810 string=0x00000000004A0814 "S"
 *   insn=0x00000000004A0820 string=0x00000000004A0824 "e@"
 *   insn=0x00000000004A085C string=0x00000000004A0860 "4"
 *   insn=0x00000000004A0864 string=0x00000000004A0868 ""
 *   insn=0x00000000004A0874 string=0x00000000004A0878 "\t@"
 *   insn=0x00000000004A0884 string=0x00000000004A0888 ""
 *   insn=0x00000000004A0894 string=0x00000000004A0898 "@"
 *   insn=0x00000000004A08A4 string=0x00000000004A08A8 ""
 *   insn=0x00000000004A08BC string=0x00000000004A08C0 "h"
 *   insn=0x00000000004A08C0 string=0x00000000004A08C4 "y@"
 *   insn=0x00000000004A08CC string=0x00000000004A08D0 ""
 *   insn=0x00000000004A08D4 string=0x00000000004A08D8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::BecomeFirstResponder(Caver::GUIView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v9; // [xsp+78h] [xbp-38h]

  _ReadStatusReg(TPIDR_EL0);
  (*(void (__fastcall **)(Caver::GUIView *))(*(_QWORD *)this + 240LL))(this);
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v2 || (v3 = v2[1]) == 0 )
    boost::throw_exception<boost::bad_weak_ptr>();
  v4 = v3 + 1;
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v2[1] = v4;
  if ( !v4 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
    v5 = v2[2] - 1LL;
    v2[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
  }
  Caver::GUIWindow::SetFirstResponder();
  v6 = v2[1] - 1LL;
  v2[1] = v6;
  if ( !v6 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v7 = v9[2] - 1LL;
    v9[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
  }
  return 1;
}

