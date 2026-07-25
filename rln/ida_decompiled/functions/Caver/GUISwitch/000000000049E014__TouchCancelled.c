/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049E014
 * Mangled: _ZN5Caver9GUISwitch14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::GUISwitch::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 11
 *   insn=0x000000000049E020 string=0x000000000049E024 "h"
 *   insn=0x000000000049E024 string=0x000000000049E028 ")"
 *   insn=0x000000000049E030 string=0x000000000049E034 "h"
 *   insn=0x000000000049E034 string=0x000000000049E038 "H"
 *   insn=0x000000000049E044 string=0x000000000049E048 "2"
 *   insn=0x000000000049E048 string=0x000000000049E04C "a"A"
 *   insn=0x000000000049E04C string=0x000000000049E050 "(x"
 *   insn=0x000000000049E054 string=0x000000000049E058 "h""
 *   insn=0x000000000049E05C string=0x000000000049E060 "h"
 *   insn=0x000000000049E064 string=0x000000000049E068 ""
 *   insn=0x000000000049E078 string=0x000000000049E07C "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::TouchCancelled(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  int v3; // w1

  v2 = this;
  if ( *(_QWORD *)(this + 344) == *(_QWORD *)a2 )
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
    *(_QWORD *)(v2 + 344) = 0;
  }
  return this;
}

