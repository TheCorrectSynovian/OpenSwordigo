/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049DE68
 * Mangled: _ZN5Caver9GUISwitch10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::GUISwitch::TouchMoved(Caver::FWTouch const&)
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
 * Referenced strings: 21
 *   insn=0x000000000049DE74 string=0x000000000049DE78 "T"
 *   insn=0x000000000049DE84 string=0x000000000049DE88 "h"
 *   insn=0x000000000049DE88 string=0x000000000049DE8C ")"
 *   insn=0x000000000049DE90 string=0x000000000049DE94 "a"
 *   insn=0x000000000049DEA4 string=0x000000000049DEA8 "`B"
 *   insn=0x000000000049DEA8 string=0x000000000049DEAC "("
 *   insn=0x000000000049DEBC string=0x00000000001F5260 "P'"
 *   insn=0x000000000049DEC8 string=0x000000000049DECC "h"A"
 *   insn=0x000000000049DECC string=0x000000000049DED0 "@"
 *   insn=0x000000000049DED0 string=0x000000000049DEF8 "H"
 *   insn=0x000000000049DED4 string=0x000000000049DED8 "A"
 *   insn=0x000000000049DEE8 string=0x000000000049DEEC "a"A"
 *   insn=0x000000000049DEEC string=0x000000000049DEF0 "("
 *   insn=0x000000000049DEF0 string=0x000000000049DEF4 ""
 *   insn=0x000000000049DF08 string=0x000000000049DF0C "a"A"
 *   insn=0x000000000049DF0C string=0x000000000049DF10 "(x"
 *   insn=0x000000000049DF14 string=0x000000000049DF18 "h""
 *   insn=0x000000000049DF1C string=0x000000000049DF20 "h"
 *   insn=0x000000000049DF24 string=0x000000000049DF28 ""
 *   insn=0x000000000049DF38 string=0x000000000049DF3C "u"
 *   insn=0x000000000049DF60 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::TouchMoved(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  int v3; // w8
  int v4; // w1
  unsigned int v5; // w8
  __int128 v6; // [xsp+0h] [xbp-30h] BYREF
  __int64 v7[2]; // [xsp+10h] [xbp-20h] BYREF

  v2 = this;
  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(this + 344) == *(_QWORD *)a2 )
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

