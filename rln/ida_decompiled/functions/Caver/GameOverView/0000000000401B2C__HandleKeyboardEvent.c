/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000401B2C
 * Mangled: _ZN5Caver12GameOverView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::GameOverView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Referenced strings: 10
 *   insn=0x0000000000401B38 string=0x0000000000401B3C ")"
 *   insn=0x0000000000401B3C string=0x0000000000401B40 "?"
 *   insn=0x0000000000401B48 string=0x0000000000401B4C "I!"
 *   insn=0x0000000000401B4C string=0x0000000000401B50 "J"
 *   insn=0x0000000000401B50 string=0x0000000000401B58 "?"
 *   insn=0x0000000000401B64 string=0x0000000000401B68 "\t"
 *   insn=0x0000000000401B6C string=0x0000000000401B70 """
 *   insn=0x0000000000401B70 string=0x0000000000401B74 "@"
 *   insn=0x0000000000401B78 string=0x0000000000401B7C ")"
 *   insn=0x0000000000401B7C string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameOverView::HandleKeyboardEvent(__int64 a1, __int64 a2)
{
  unsigned int v3; // w9
  __int64 (__fastcall ***v4)(_QWORD, __int64); // x0

  if ( *(_DWORD *)(a2 + 12) == 1
    && (v3 = *(_DWORD *)(a2 + 16), v3 <= 0x26)
    && ((1LL << v3) & 0x4008020000LL) != 0
    && (v4 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 240)) != 0 )
  {
    return (**v4)(v4, a1);
  }
  else
  {
    return Caver::GUIResponder::HandleKeyboardEvent();
  }
}

