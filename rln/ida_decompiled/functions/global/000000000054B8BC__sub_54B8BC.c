/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B8BC
 * Mangled: sub_54B8BC
 * Demangled: sub_54B8BC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000054B8D0 string=0x000000000054B8D4 "_"
 *   insn=0x000000000054B8E0 string=0x000000000054B8E4 "`"
 *   insn=0x000000000054B8F4 string=0x000000000054B8F8 "B4@"
 *   insn=0x000000000054B8F8 string=0x000000000054B8FC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B8BC(_QWORD *a1, unsigned int a2)
{
  unsigned int *v2; // x2

  v2 = (unsigned int *)a1[5];
  if ( (unsigned __int64)v2 >= a1[6] )
    return (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 104LL))(a1);
  *v2 = a2;
  a1[5] = v2 + 1;
  return a2;
}

