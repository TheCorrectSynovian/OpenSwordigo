/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B404
 * Mangled: sub_54B404
 * Demangled: sub_54B404
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000054B408 string=0x000000000054B40C "!"
 *   insn=0x000000000054B420 string=0x000000000054B424 "a"
 *   insn=0x000000000054B428 string=0x000000000054B42C "A"
 *   insn=0x000000000054B42C string=0x000000000054B430 "!"
 *   insn=0x000000000054B430 string=0x000000000054B434 "A"
 *   insn=0x000000000054B440 string=0x000000000054B444 "B4@"
 *   insn=0x000000000054B444 string=0x000000000054B448 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B404(_QWORD *a1, unsigned __int8 a2)
{
  unsigned __int8 *v3; // x3
  __int64 result; // x0

  v3 = (unsigned __int8 *)a1[5];
  if ( (unsigned __int64)v3 >= a1[6] )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 104LL))(a1);
  *v3 = a2;
  result = a2;
  ++a1[5];
  return result;
}

