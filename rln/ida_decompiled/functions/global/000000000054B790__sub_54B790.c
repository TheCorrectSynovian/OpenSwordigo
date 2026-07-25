/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B790
 * Mangled: sub_54B790
 * Demangled: sub_54B790
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000054B7A0 string=0x000000000054B7A4 "?"
 *   insn=0x000000000054B7A8 string=0x000000000054B7AC " D@"
 *   insn=0x000000000054B7AC string=0x000000000054B7B0 "A"
 *   insn=0x000000000054B7BC string=0x000000000054B7C0 "!(@"
 *   insn=0x000000000054B7C0 string=0x000000000054B7C4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B790(_QWORD *a1)
{
  unsigned int *v2; // x1
  __int64 result; // x0

  v2 = (unsigned int *)a1[2];
  if ( (unsigned __int64)v2 >= a1[3] )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
  result = *v2;
  a1[2] = v2 + 1;
  return result;
}

