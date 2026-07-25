/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B22C
 * Mangled: sub_54B22C
 * Demangled: sub_54B22C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000054B238 string=0x000000000054B23C "!"
 *   insn=0x000000000054B244 string=0x000000000054B248 "!"
 *   insn=0x000000000054B248 string=0x000000000054B24C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B22C(_QWORD *a1)
{
  __int64 v1; // x1

  v1 = a1[3] - a1[2];
  if ( !v1 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
  return v1;
}

