/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560B18
 * Mangled: sub_560B18
 * Demangled: sub_560B18
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F8C0  sub_55F8C0
 *
 * Referenced strings: 11
 *   insn=0x0000000000560B18 string=0x0000000000560B1C "B"
 *   insn=0x0000000000560B20 string=0x0000000000560B24 "!"
 *   insn=0x0000000000560B30 string=0x0000000000560B34 "c"
 *   insn=0x0000000000560B38 string=0x0000000000560B3C "`"
 *   insn=0x0000000000560B38 string=0x0000000000560B58 "`"
 *   insn=0x0000000000560B44 string=0x0000000000560B48 "`"
 *   insn=0x0000000000560B50 string=0x0000000000560B54 "0"
 *   insn=0x0000000000560B5C string=0x0000000000560B60 "s"
 *   insn=0x0000000000560B64 string=0x0000000000560B68 "a"@"
 *   insn=0x0000000000560B70 string=0x0000000000560B74 "!"
 *   insn=0x0000000000560B74 string=0x0000000000560B78 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560B18(_QWORD *a1, const char **a2, int a3)
{
  if ( sub_55F8C0((__int64)(a1 + 2), *a2, a3 | 8u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

