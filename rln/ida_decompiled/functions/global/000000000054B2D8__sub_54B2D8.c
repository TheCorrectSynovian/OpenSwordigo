/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B2D8
 * Mangled: sub_54B2D8
 * Demangled: sub_54B2D8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000054B2E8 string=0x000000000054B2EC "?"
 *   insn=0x000000000054B2F0 string=0x000000000054B2F4 " "
 *   insn=0x000000000054B2F4 string=0x000000000054B2F8 "A"
 *   insn=0x000000000054B304 string=0x000000000054B308 "!(@"
 *   insn=0x000000000054B308 string=0x000000000054B30C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B2D8(_QWORD *a1)
{
  unsigned __int8 *v2; // x1
  __int64 result; // x0

  v2 = (unsigned __int8 *)a1[2];
  if ( (unsigned __int64)v2 >= a1[3] )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
  result = *v2;
  a1[2] = v2 + 1;
  return result;
}

