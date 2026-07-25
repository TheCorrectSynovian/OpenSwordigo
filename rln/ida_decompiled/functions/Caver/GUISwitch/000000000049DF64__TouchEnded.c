/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049DF64
 * Mangled: _ZN5Caver9GUISwitch10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUISwitch::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 19
 *   insn=0x000000000049DF70 string=0x000000000049DF74 "h"
 *   insn=0x000000000049DF74 string=0x000000000049DF78 ")"
 *   insn=0x000000000049DF7C string=0x000000000049DF80 "A"
 *   insn=0x000000000049DF80 string=0x000000000049DF84 "a"A"
 *   insn=0x000000000049DF84 string=0x000000000049DF88 "("
 *   insn=0x000000000049DF90 string=0x000000000049DF94 "h"E9`"
 *   insn=0x000000000049DF94 string=0x000000000049DF98 "`"
 *   insn=0x000000000049DF98 string=0x000000000049DF9C "\t"
 *   insn=0x000000000049DF9C string=0x000000000049DFA0 "i""
 *   insn=0x000000000049DFA0 string=0x000000000049DFA4 "h"
 *   insn=0x000000000049DFA4 string=0x000000000049DFA8 "a"
 *   insn=0x000000000049DFA4 string=0x000000000049DFB0 "a"
 *   insn=0x000000000049DFC4 string=0x000000000049DFC8 "R"
 *   insn=0x000000000049DFC8 string=0x000000000049DFCC "a"A"
 *   insn=0x000000000049DFD0 string=0x000000000049DFD4 "(x"
 *   insn=0x000000000049DFD8 string=0x000000000049DFDC "h""
 *   insn=0x000000000049DFE0 string=0x000000000049DFE4 "h"
 *   insn=0x000000000049DFE8 string=0x000000000049DFEC ""
 *   insn=0x000000000049DFFC string=0x000000000049E000 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::TouchEnded(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  int v3; // w1

  v2 = this;
  if ( *(_QWORD *)(this + 344) == *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)(this + 288);
    if ( (v3 & 3) == 1 )
    {
      *(_BYTE *)(this + 328) ^= 1u;
      Caver::GUIFrameView::SetFrameTexture();
      this = Caver::GUIControl::SendActionsForControlEvent();
      v3 = *(_DWORD *)(v2 + 288);
    }
    if ( (v3 & 1) != 0 )
    {
      *(_DWORD *)(v2 + 288) = v3 & 0xFFFFFFFE;
      if ( (v3 & 0xFFFFFFFE) != v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 304LL))(v2);
      this = Caver::GUIControl::SendActionsForControlEvent();
    }
    *(_QWORD *)(v2 + 344) = 0;
  }
  return this;
}

