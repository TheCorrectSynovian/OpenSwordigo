/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F40C4
 * Mangled: sub_4F40C4
 * Demangled: sub_4F40C4
 *
 * Callers: 2
 *   0x00000000004F4E8C  sub_4F4E8C
 *   0x00000000004F4ED4  sub_4F4ED4
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x00000000004F40C4 string=0x00000000004F40C8 "*"
 *   insn=0x00000000004F40C8 string=0x00000000004F40CC ""
 *   insn=0x00000000004F40D0 string=0x00000000004F40D4 "i!"
 *   insn=0x00000000004F40D4 string=0x00000000004F40D8 ")"
 *   insn=0x00000000004F40DC string=0x00000000004F40E0 ")"
 *   insn=0x00000000004F40E0 string=0x00000000004F40E4 " !,"
 *   insn=0x00000000004F40E4 string=0x00000000004F40E8 "("
 *   insn=0x00000000004F40E8 string=0x00000000004F40F0 "\t"
 *   insn=0x00000000004F40F0 string=0x00000000004F40F4 "?"
 *   insn=0x00000000004F40F8 string=0x00000000004F40FC "\t@"
 *   insn=0x00000000004F40FC string=0x00000000004F4100 "?"
 *   insn=0x00000000004F4108 string=0x00000000004F410C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4F40C4(__int64 a1, __int64 a2)
{
  __int64 *result; // x0

  result = (__int64 *)(*(_QWORD *)(a1 + 32) + 40LL * (((1 << *(_BYTE *)(a1 + 11)) - 1) & *(_DWORD *)(a2 + 12)));
  while ( *((_DWORD *)result + 6) != 4 || result[2] != a2 )
  {
    result = (__int64 *)result[4];
    if ( !result )
      return &qword_599BC8;
  }
  return result;
}

