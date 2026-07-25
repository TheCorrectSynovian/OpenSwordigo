/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560B7C
 * Mangled: sub_560B7C
 * Demangled: sub_560B7C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F390  sub_55F390
 *
 * Referenced strings: 4
 *   insn=0x0000000000560B94 string=0x0000000000560BA4 "`"
 *   insn=0x0000000000560BA8 string=0x0000000000560BAC "s"
 *   insn=0x0000000000560BB0 string=0x0000000000560BB4 "a"@"
 *   insn=0x0000000000560BBC string=0x0000000000560BC0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560B7C(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_55F390((__int64)(a1 + 2));
  if ( !result )
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
  return result;
}

