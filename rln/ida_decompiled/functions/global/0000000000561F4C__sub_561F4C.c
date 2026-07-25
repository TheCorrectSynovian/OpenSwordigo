/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561F4C
 * Mangled: sub_561F4C
 * Demangled: sub_561F4C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 5
 *   insn=0x0000000000561F64 string=0x0000000000561F74 "`"
 *   insn=0x0000000000561F78 string=0x0000000000561F7C "s"
 *   insn=0x0000000000561F80 string=0x0000000000561F84 "a"@"
 *   insn=0x0000000000561F8C string=0x0000000000561F90 "!"
 *   insn=0x0000000000561F90 string=0x0000000000561F94 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561F4C(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_55F390((__int64)(a1 + 3));
  if ( !result )
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
  return result;
}

