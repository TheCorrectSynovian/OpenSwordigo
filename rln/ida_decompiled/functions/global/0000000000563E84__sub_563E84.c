/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563E84
 * Mangled: sub_563E84
 * Demangled: sub_563E84
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000563BDC  sub_563BDC
 *
 * Referenced strings: 8
 *   insn=0x0000000000563E84 string=0x0000000000563E88 "B"
 *   insn=0x0000000000563E98 string=0x0000000000563E9C "P"
 *   insn=0x0000000000563EA0 string=0x0000000000563EA4 "`"
 *   insn=0x0000000000563EA0 string=0x0000000000563EC0 "`"
 *   insn=0x0000000000563EAC string=0x0000000000563EB0 "`"
 *   insn=0x0000000000563EC4 string=0x0000000000563EC8 "s"
 *   insn=0x0000000000563ECC string=0x0000000000563ED0 "a"@"
 *   insn=0x0000000000563ED8 string=0x0000000000563EDC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563E84(_QWORD *a1, const char *a2, int a3)
{
  if ( sub_563BDC((__int64)(a1 + 1), a2, a3 | 0x10u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

