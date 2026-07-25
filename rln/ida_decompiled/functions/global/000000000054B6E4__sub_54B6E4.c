/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B6E4
 * Mangled: sub_54B6E4
 * Demangled: sub_54B6E4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000054B6F0 string=0x000000000054B6F4 "!"
 *   insn=0x000000000054B6F4 string=0x000000000054B6F8 "!"
 *   insn=0x000000000054B700 string=0x000000000054B704 "!"
 *   insn=0x000000000054B704 string=0x000000000054B708 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B6E4(_QWORD *a1)
{
  __int64 v1; // x1

  v1 = (__int64)(a1[3] - a1[2]) >> 2;
  if ( !v1 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
  return v1;
}

