/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004963D8
 * Mangled: _ZN5Caver9GUIButton10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUIButton::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 10
 *   insn=0x00000000004963E4 string=0x00000000004963E8 "h"
 *   insn=0x00000000004963E8 string=0x00000000004963EC ")"
 *   insn=0x00000000004963F4 string=0x00000000004963F8 "a"A"
 *   insn=0x0000000000496400 string=0x000000000049641C "(x"
 *   insn=0x000000000049640C string=0x0000000000496410 "@"
 *   insn=0x0000000000496410 string=0x0000000000496414 "a"A"
 *   insn=0x0000000000496420 string=0x0000000000496424 "h""
 *   insn=0x0000000000496428 string=0x000000000049642C "h"
 *   insn=0x0000000000496430 string=0x0000000000496434 ""
 *   insn=0x0000000000496444 string=0x0000000000496448 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::TouchEnded(__int64 this, const Caver::FWTouch *a2)
{
  __int64 v2; // x19
  int v3; // w1

  v2 = this;
  if ( *(_QWORD *)(this + 456) == *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)(this + 288);
    if ( (v3 & 1) != 0 )
    {
      if ( (v3 & 2) != 0
        || (this = Caver::GUIControl::SendActionsForControlEvent(), v3 = *(_DWORD *)(v2 + 288), (v3 & 1) != 0) )
      {
        *(_DWORD *)(v2 + 288) = v3 & 0xFFFFFFFE;
        if ( (v3 & 0xFFFFFFFE) != v3 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 304LL))(v2);
        this = Caver::GUIControl::SendActionsForControlEvent();
      }
    }
    *(_QWORD *)(v2 + 456) = 0;
  }
  return this;
}

