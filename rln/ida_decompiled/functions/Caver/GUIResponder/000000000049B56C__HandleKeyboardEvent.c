/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049B56C
 * Mangled: _ZN5Caver12GUIResponder19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 1
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000049B580 string=0x000000000049B584 ""
 *   insn=0x000000000049B588 string=0x000000000049B58C "`"
 *   insn=0x000000000049B594 string=0x000000000049B598 ""
 *   insn=0x000000000049B59C string=0x000000000049B5A0 ""
 *   insn=0x000000000049B5B0 string=0x000000000049B5B4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIResponder::HandleKeyboardEvent(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x0

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, a2);
  }
  return result;
}

