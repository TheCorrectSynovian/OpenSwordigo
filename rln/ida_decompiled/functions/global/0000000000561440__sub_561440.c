/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561440
 * Mangled: sub_561440
 * Demangled: sub_561440
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 4
 *   insn=0x0000000000561458 string=0x0000000000561468 "`"
 *   insn=0x000000000056146C string=0x0000000000561470 "s"
 *   insn=0x0000000000561474 string=0x0000000000561478 "a"@"
 *   insn=0x0000000000561480 string=0x0000000000561484 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561440(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_55F390((__int64)(a1 + 1));
  if ( !result )
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
  return result;
}

