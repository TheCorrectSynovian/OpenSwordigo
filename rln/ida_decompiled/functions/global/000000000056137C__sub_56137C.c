/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056137C
 * Mangled: sub_56137C
 * Demangled: sub_56137C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F8C0  sub_55F8C0
 *
 * Referenced strings: 8
 *   insn=0x000000000056137C string=0x0000000000561380 "B"
 *   insn=0x0000000000561390 string=0x0000000000561394 "K"
 *   insn=0x0000000000561398 string=0x000000000056139C "`"
 *   insn=0x0000000000561398 string=0x00000000005613B8 "`"
 *   insn=0x00000000005613A4 string=0x00000000005613A8 "`"
 *   insn=0x00000000005613BC string=0x00000000005613C0 "s"
 *   insn=0x00000000005613C4 string=0x00000000005613C8 "a"@"
 *   insn=0x00000000005613D0 string=0x00000000005613D4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56137C(_QWORD *a1, const char *a2, int a3)
{
  if ( sub_55F8C0((__int64)(a1 + 1), a2, a3 | 0x10u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

