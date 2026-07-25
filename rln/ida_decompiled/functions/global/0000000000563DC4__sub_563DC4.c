/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563DC4
 * Mangled: sub_563DC4
 * Demangled: sub_563DC4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000563BDC  sub_563BDC
 *
 * Referenced strings: 7
 *   insn=0x0000000000563DC8 string=0x0000000000563DCC "!"
 *   insn=0x0000000000563DE0 string=0x0000000000563DE4 "`"
 *   insn=0x0000000000563DE0 string=0x0000000000563E00 "`"
 *   insn=0x0000000000563DEC string=0x0000000000563DF0 "`"
 *   insn=0x0000000000563E04 string=0x0000000000563E08 "s"
 *   insn=0x0000000000563E0C string=0x0000000000563E10 "a"@"
 *   insn=0x0000000000563E18 string=0x0000000000563E1C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563DC4(_QWORD *a1, const char **a2, unsigned int a3)
{
  if ( sub_563BDC((__int64)(a1 + 3), *a2, a3) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

