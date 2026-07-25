/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C186C
 * Mangled: _ZN5Caver13PlayerProfile20UpdateLastPlayedTimeEv
 * Demangled: Caver::PlayerProfile::UpdateLastPlayedTime(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203E80  Caver::DateTime::Now(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000003C187C string=0x00000000003C1880 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::UpdateLastPlayedTime(Caver::PlayerProfile *this)
{
  __int64 result; // x0
  __int64 v3; // d0

  result = Caver::DateTime::Now(this);
  *((_QWORD *)this + 5) = v3;
  return result;
}

