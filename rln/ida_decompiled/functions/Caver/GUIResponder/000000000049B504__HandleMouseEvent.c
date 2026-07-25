/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B504
 * Mangled: _ZN5Caver12GUIResponder16HandleMouseEventERKNS_13GUIMouseEventE
 * Demangled: Caver::GUIResponder::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *
 * Callers: 1
 *   0x00000000001FE230  Caver::GUIResponder::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000049B518 string=0x000000000049B51C ""
 *   insn=0x000000000049B524 string=0x000000000049B528 "h"
 *   insn=0x000000000049B528 string=0x000000000049B52C "y"
 *   insn=0x000000000049B548 string=0x000000000049B54C ""
 *   insn=0x000000000049B550 string=0x000000000049B554 ""
 *   insn=0x000000000049B564 string=0x000000000049B568 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIResponder::HandleMouseEvent(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( result )
  {
    if ( (*(_DWORD *)(a2 + 12) & 0xFFFFFFFE) != 2 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    }
  }
  return result;
}

