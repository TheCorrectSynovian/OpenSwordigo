/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B454
 * Mangled: _ZN5Caver12GUIResponder10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000002022A0  Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000049B468 string=0x000000000049B46C ""
 *   insn=0x000000000049B470 string=0x000000000049B474 "`"
 *   insn=0x000000000049B47C string=0x000000000049B480 ""
 *   insn=0x000000000049B484 string=0x000000000049B488 ""
 *   insn=0x000000000049B498 string=0x000000000049B49C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIResponder::TouchEnded(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, a2);
  }
  return result;
}

