/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563D60
 * Mangled: sub_563D60
 * Demangled: sub_563D60
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000563BDC  sub_563BDC
 *
 * Referenced strings: 9
 *   insn=0x0000000000563D60 string=0x0000000000563D64 "B"
 *   insn=0x0000000000563D68 string=0x0000000000563D6C "!"
 *   insn=0x0000000000563D80 string=0x0000000000563D84 "`"
 *   insn=0x0000000000563D80 string=0x0000000000563DA0 "`"
 *   insn=0x0000000000563D8C string=0x0000000000563D90 "`"
 *   insn=0x0000000000563D98 string=0x0000000000563D9C "\t"
 *   insn=0x0000000000563DA4 string=0x0000000000563DA8 "s"
 *   insn=0x0000000000563DAC string=0x0000000000563DB0 "a"@"
 *   insn=0x0000000000563DB8 string=0x0000000000563DBC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563D60(_QWORD *a1, const char **a2, int a3)
{
  if ( sub_563BDC((__int64)(a1 + 1), *a2, a3 | 0x10u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

