/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B3FC
 * Mangled: _ZN5Caver12GUIResponder10TouchMovedERKNS_7FWTouchE
 * Demangled: Caver::GUIResponder::TouchMoved(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000002003F0  Caver::GUIResponder::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000049B410 string=0x000000000049B414 ""
 *   insn=0x000000000049B418 string=0x000000000049B41C "`"
 *   insn=0x000000000049B424 string=0x000000000049B428 ""
 *   insn=0x000000000049B42C string=0x000000000049B430 ""
 *   insn=0x000000000049B440 string=0x000000000049B444 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIResponder::TouchMoved(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, a2);
  }
  return result;
}

