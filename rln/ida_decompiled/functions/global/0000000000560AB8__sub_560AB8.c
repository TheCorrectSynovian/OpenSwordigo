/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000560AB8
 * Mangled: sub_560AB8
 * Demangled: sub_560AB8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F8C0  sub_55F8C0
 *
 * Referenced strings: 10
 *   insn=0x0000000000560AB8 string=0x0000000000560ABC "B"
 *   insn=0x0000000000560ACC string=0x0000000000560AD0 "|"
 *   insn=0x0000000000560AD4 string=0x0000000000560AD8 "`"
 *   insn=0x0000000000560AD4 string=0x0000000000560AF4 "`"
 *   insn=0x0000000000560AE0 string=0x0000000000560AE4 "`"
 *   insn=0x0000000000560AEC string=0x0000000000560AF0 "I"
 *   insn=0x0000000000560AF8 string=0x0000000000560AFC "s"
 *   insn=0x0000000000560B00 string=0x0000000000560B04 "a"@"
 *   insn=0x0000000000560B0C string=0x0000000000560B10 "!"
 *   insn=0x0000000000560B10 string=0x0000000000560B14 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_560AB8(_QWORD *a1, const char *a2, int a3)
{
  if ( sub_55F8C0((__int64)(a1 + 2), a2, a3 | 8u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

