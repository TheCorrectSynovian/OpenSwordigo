/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B7D0
 * Mangled: sub_54B7D0
 * Demangled: sub_54B7D0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000054B7DC string=0x000000000054B7E0 "_"
 *   insn=0x000000000054B7E4 string=0x000000000054B7E8 "@"
 *   insn=0x000000000054B7F4 string=0x000000000054B7F8 "!$@"
 *   insn=0x000000000054B7F8 string=0x000000000054B7FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B7D0(_QWORD *a1)
{
  unsigned int *v1; // x2

  v1 = (unsigned int *)a1[2];
  if ( (unsigned __int64)v1 >= a1[3] )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  else
    return *v1;
}

