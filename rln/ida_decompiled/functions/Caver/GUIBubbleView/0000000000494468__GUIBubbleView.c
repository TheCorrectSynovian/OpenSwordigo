/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000494468
 * Mangled: _ZN5Caver13GUIBubbleViewC2Ev
 * Demangled: Caver::GUIBubbleView::GUIBubbleView(void)
 *
 * Callers: 1
 *   0x00000000001FD180  Caver::GUIBubbleView::GUIBubbleView(void)
 *
 * Callees: 13
 *   0x00000000001F3E00  Caver::GUITextBubble::Update(float)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6120  boost::detail::shared_count::shared_count<Caver::GUITextBubble>(Caver::GUITextBubble *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9630  Caver::GUIAnimation::Update(float)
 *   0x00000000001FD480  Caver::GUITextBubble::GUITextBubble(void)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000494478 string=0x000000000049447C "U"
 *   insn=0x0000000000494490 string=0x0000000000494494 "e@"
 *   insn=0x00000000004944A0 string=0x00000000004944A4 "A"
 *   insn=0x00000000004944A4 string=0x00000000004944A8 "h"
 *   insn=0x00000000004944AC string=0x00000000004944B0 "L"
 *   insn=0x00000000004944B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004944BC string=0x00000000001FD480 "0'"
 *   insn=0x00000000004944D0 string=0x00000000001F6120 "0'"
 *   insn=0x00000000004944E0 string=0x00000000004944E4 "hRO"
 *   insn=0x00000000004944F0 string=0x00000000004944F4 "i""
 *   insn=0x00000000004944F8 string=0x00000000004944FC "4"
 *   insn=0x0000000000494500 string=0x0000000000494504 ""
 *   insn=0x0000000000494510 string=0x0000000000494514 "\t@"
 *   insn=0x0000000000494520 string=0x0000000000494524 ""
 *   insn=0x0000000000494530 string=0x0000000000494534 "@"
 *   insn=0x000000000049454C string=0x0000000000494564 "["
 *   insn=0x0000000000494564 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000494570 string=0x0000000000494574 "O"
 *   insn=0x0000000000494574 string=0x0000000000494578 "u"
 *   insn=0x0000000000494574 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000494580 string=0x00000000004945D0 "u~@"
 *   insn=0x0000000000494584 string=0x0000000000494588 "u"
 *   insn=0x0000000000494588 string=0x000000000049458C "5"
 *   insn=0x0000000000494590 string=0x0000000000494594 ""
 *   insn=0x00000000004945A0 string=0x00000000004945A4 "\t@"
 *   insn=0x00000000004945B0 string=0x00000000004945B4 ""
 *   insn=0x00000000004945C0 string=0x00000000004945C4 "@"
 *   insn=0x00000000004945D0 string=0x00000000004945D4 "5"
 *   insn=0x00000000004945D8 string=0x00000000004945DC ""
 *   insn=0x00000000004945E8 string=0x00000000004945EC "\t@"
 *   insn=0x00000000004945F8 string=0x00000000004945FC ""
 *   insn=0x0000000000494608 string=0x000000000049460C "@"
 *   insn=0x0000000000494624 string=0x0000000000494628 "I"
 *   insn=0x0000000000494638 string=0x000000000049463C ""
 *   insn=0x0000000000494644 string=0x0000000000494648 "`"
 *   insn=0x0000000000494648 string=0x000000000049464C "`"
 *   insn=0x000000000049464C string=0x0000000000494658 "`z@"
 *   insn=0x0000000000494654 string=0x00000000001F9630 "0'"
 *   insn=0x000000000049466C string=0x00000000001F3E00 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIBubbleView::GUIBubbleView(Caver::GUIBubbleView *this)
{
  Caver::GUITextBubble *v2; // x20
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  Caver::GUITextBubble *v6; // [xsp+28h] [xbp-38h]
  __int64 v7; // [xsp+30h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 30) = 0;
  *(_QWORD *)this = off_6D57D0;
  v2 = (Caver::GUITextBubble *)operator new(0x98u);
  Caver::GUITextBubble::GUITextBubble(v2);
  v6 = v2;
  boost::detail::shared_count::shared_count<Caver::GUITextBubble>();
  boost::detail::sp_enable_shared_from_this();
  v3 = (_QWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 30) = v6;
  *((_QWORD *)this + 31) = v7;
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
}

