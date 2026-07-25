/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B874
 * Mangled: sub_54B874
 * Demangled: sub_54B874
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000054B88C string=0x000000000054B890 "@"
 *   insn=0x000000000054B890 string=0x000000000054B894 "C"
 *   insn=0x000000000054B894 string=0x000000000054B898 "#"
 *   insn=0x000000000054B8A8 string=0x000000000054B8AC "B,@"
 *   insn=0x000000000054B8AC string=0x000000000054B8B0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B874(_QWORD *a1)
{
  unsigned __int64 v2; // x2
  __int64 result; // x0

  v2 = a1[2];
  if ( a1[1] >= v2 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 88LL))(a1, 0xFFFFFFFFLL);
  result = *(unsigned int *)(v2 - 4);
  a1[2] = v2 - 4;
  return result;
}

