/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038CF88
 * Mangled: _ZN5Caver11CreditsView9AnimateInEv
 * Demangled: Caver::CreditsView::AnimateIn(void)
 *
 * Callers: 1
 *   0x00000000001F83E0  Caver::CreditsView::AnimateIn(void)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 30
 *   insn=0x000000000038CF94 string=0x000000000038CF98 "T"
 *   insn=0x000000000038CFC0 string=0x000000000038CFC4 "I3"
 *   insn=0x000000000038CFC4 string=0x000000000038CFCC "\tY"
 *   insn=0x000000000038CFCC string=0x000000000038CFD0 "s"
 *   insn=0x000000000038CFD4 string=0x000000000038CFD8 "r"
 *   insn=0x000000000038CFD8 string=0x00000000001FA5A0 "0'"
 *   insn=0x000000000038CFE4 string=0x00000000001F8A30 "0'"
 *   insn=0x000000000038CFE8 string=0x000000000038CFEC "3"
 *   insn=0x000000000038CFEC string=0x000000000038CFF0 "h"
 *   insn=0x000000000038CFF0 string=0x000000000038CFF4 ""
 *   insn=0x000000000038CFF4 string=0x000000000038CFF8 "h"
 *   insn=0x000000000038CFFC string=0x000000000038D000 "h"
 *   insn=0x000000000038D004 string=0x000000000038D008 "\t@"
 *   insn=0x000000000038D00C string=0x000000000038D010 "h\n@"
 *   insn=0x000000000038D010 string=0x000000000038D014 ""
 *   insn=0x000000000038D014 string=0x000000000038D018 "h\n"
 *   insn=0x000000000038D01C string=0x000000000038D020 "h"
 *   insn=0x000000000038D024 string=0x000000000038D028 "@"
 *   insn=0x000000000038D050 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000038D058 string=0x000000000038D05C "4"
 *   insn=0x000000000038D060 string=0x000000000038D064 ""
 *   insn=0x000000000038D070 string=0x000000000038D074 "\t@"
 *   insn=0x000000000038D080 string=0x000000000038D084 ""
 *   insn=0x000000000038D090 string=0x000000000038D094 "@"
 *   insn=0x000000000038D0A0 string=0x000000000038D0A4 ""
 *   insn=0x000000000038D0A8 string=0x000000000038D0AC "("
 *   insn=0x000000000038D0B0 string=0x000000000038D0B4 "A"
 *   insn=0x000000000038D0B4 string=0x000000000038D0B8 "("
 *   insn=0x000000000038D0BC string=0x000000000038D0C0 "`"
 *   insn=0x000000000038D0DC string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CreditsView::AnimateIn(Caver::GUIView **this)
{
  __int64 result; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // [xsp+8h] [xbp-28h] BYREF
  _QWORD *v7; // [xsp+10h] [xbp-20h]
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIAnimation::AlphaAnimation(&v6, (Caver::GUIAnimation *)this, 0.0, 1.0, 0.4);
  *(_DWORD *)(v6 + 88) = 1050253722;
  Caver::GUIView::RemoveAllAnimations(this[32]);
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

