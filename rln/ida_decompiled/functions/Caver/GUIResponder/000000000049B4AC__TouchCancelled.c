/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B4AC
 * Mangled: _ZN5Caver12GUIResponder14TouchCancelledERKNS_7FWTouchE
 * Demangled: Caver::GUIResponder::TouchCancelled(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000200090  Caver::GUIResponder::TouchCancelled(Caver::FWTouch const&)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000049B4C0 string=0x000000000049B4C4 ""
 *   insn=0x000000000049B4C8 string=0x000000000049B4CC "`"
 *   insn=0x000000000049B4D4 string=0x000000000049B4D8 ""
 *   insn=0x000000000049B4DC string=0x000000000049B4E0 ""
 *   insn=0x000000000049B4F0 string=0x000000000049B4F4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIResponder::TouchCancelled(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2);
  }
  return result;
}

