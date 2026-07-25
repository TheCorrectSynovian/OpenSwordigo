/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049645C
 * Mangled: _ZN5Caver9GUIButton14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::GUIButton::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 10
 *   insn=0x0000000000496468 string=0x000000000049646C "h"
 *   insn=0x000000000049646C string=0x0000000000496470 ")"
 *   insn=0x0000000000496478 string=0x000000000049647C "h"
 *   insn=0x000000000049647C string=0x0000000000496480 "H"
 *   insn=0x000000000049648C string=0x0000000000496490 " "
 *   insn=0x0000000000496490 string=0x0000000000496494 "a"A"
 *   insn=0x0000000000496494 string=0x0000000000496498 "(x"
 *   insn=0x000000000049649C string=0x00000000004964A0 "h""
 *   insn=0x00000000004964A4 string=0x00000000004964A8 "h"
 *   insn=0x00000000004964AC string=0x00000000004964B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::TouchCancelled(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  int v3; // w1

  v2 = this;
  if ( *(_QWORD *)(this + 456) == *(_QWORD *)a2 )
  {
    if ( (*(_BYTE *)(this + 288) & 1) != 0 )
    {
      Caver::GUIControl::SendActionsForControlEvent();
      v3 = *(_DWORD *)(v2 + 288);
      *(_DWORD *)(v2 + 288) = v3 & 0xFFFFFFFE;
      if ( (v3 & 0xFFFFFFFE) != v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 304LL))(v2);
      this = Caver::GUIControl::SendActionsForControlEvent();
    }
    *(_QWORD *)(v2 + 456) = 0;
  }
  return this;
}

