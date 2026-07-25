/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B318
 * Mangled: sub_54B318
 * Demangled: sub_54B318
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000054B324 string=0x000000000054B328 "_"
 *   insn=0x000000000054B32C string=0x000000000054B330 "@"
 *   insn=0x000000000054B33C string=0x000000000054B340 "!$@"
 *   insn=0x000000000054B340 string=0x000000000054B344 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B318(_QWORD *a1)
{
  unsigned __int8 *v1; // x2

  v1 = (unsigned __int8 *)a1[2];
  if ( (unsigned __int64)v1 >= a1[3] )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  else
    return *v1;
}

