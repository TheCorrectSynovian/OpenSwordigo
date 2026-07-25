/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004962DC
 * Mangled: _ZN5Caver9GUIButton10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::GUIButton::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5260  Caver::Rectangle::Outset(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 23
 *   insn=0x00000000004962E8 string=0x00000000004962EC "T"
 *   insn=0x00000000004962F8 string=0x00000000004962FC "h"
 *   insn=0x00000000004962FC string=0x0000000000496300 ")"
 *   insn=0x0000000000496304 string=0x0000000000496308 "a"
 *   insn=0x0000000000496318 string=0x000000000049631C "`B"
 *   insn=0x000000000049631C string=0x0000000000496320 "h"
 *   insn=0x0000000000496330 string=0x00000000001F5260 "P'"
 *   insn=0x000000000049633C string=0x0000000000496340 "h"A"
 *   insn=0x0000000000496340 string=0x0000000000496344 "@"
 *   insn=0x0000000000496344 string=0x000000000049636C "H"
 *   insn=0x0000000000496348 string=0x000000000049634C "A"
 *   insn=0x0000000000496358 string=0x000000000049635C "m"
 *   insn=0x000000000049635C string=0x0000000000496360 "a"A"
 *   insn=0x0000000000496360 string=0x0000000000496364 "("
 *   insn=0x0000000000496364 string=0x0000000000496368 ""
 *   insn=0x0000000000496378 string=0x000000000049637C "e"
 *   insn=0x000000000049637C string=0x0000000000496380 "a"A"
 *   insn=0x0000000000496380 string=0x0000000000496384 "(x"
 *   insn=0x0000000000496388 string=0x000000000049638C "h""
 *   insn=0x0000000000496390 string=0x0000000000496394 "h"
 *   insn=0x0000000000496398 string=0x000000000049639C ""
 *   insn=0x00000000004963AC string=0x00000000004963B0 "X"
 *   insn=0x00000000004963D4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::TouchMoved(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  int v3; // w8
  int v4; // w1
  unsigned int v5; // w8
  __int128 v6; // [xsp+0h] [xbp-30h] BYREF
  __int64 v7[2]; // [xsp+10h] [xbp-20h] BYREF

  v2 = this;
  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(this + 456) == *(_QWORD *)a2 )
  {
    Caver::FWTouch::LocationInView(v7, a2, (const Caver::GUIView *)this);
    v6 = *(_OWORD *)(v2 + 132);
    Caver::Rectangle::Outset((Caver::Rectangle *)&v6, 40.0);
    this = Caver::Rectangle::PointInside((Caver::Rectangle *)&v6, (const Caver::Vector2 *)v7);
    v3 = *(_DWORD *)(v2 + 288);
    if ( (this & 1) != 0 )
    {
      if ( (v3 & 3) != 0 )
        return this;
      Caver::GUIControl::SendActionsForControlEvent();
      v4 = *(_DWORD *)(v2 + 288);
      v5 = v4 | 1;
    }
    else
    {
      if ( (v3 & 1) == 0 )
        return this;
      Caver::GUIControl::SendActionsForControlEvent();
      v4 = *(_DWORD *)(v2 + 288);
      v5 = v4 & 0xFFFFFFFE;
    }
    *(_DWORD *)(v2 + 288) = v5;
    if ( v5 != v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 304LL))(v2);
    return Caver::GUIControl::SendActionsForControlEvent();
  }
  return this;
}

