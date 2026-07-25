/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B2C0
 * Mangled: sub_56B2C0
 * Demangled: sub_56B2C0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000056B2C0 string=0x000000000056B2C4 " "
 *   insn=0x000000000056B2C4 string=0x000000000056B2C8 "?"
 *   insn=0x000000000056B2CC string=0x000000000056B2D0 "@"
 *   insn=0x000000000056B2D0 string=0x000000000056B2D4 "B"
 *   insn=0x000000000056B2D4 string=0x000000000056B2D8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_56B2C0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2
  _BOOL8 result; // x0

  v2 = *a1;
  result = 1;
  if ( a2 >= v2 )
    return a2 > v2 + 4LL * *(_QWORD *)(v2 - 24);
  return result;
}

