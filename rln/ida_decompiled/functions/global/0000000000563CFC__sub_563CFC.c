/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563CFC
 * Mangled: sub_563CFC
 * Demangled: sub_563CFC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000563BDC  sub_563BDC
 *
 * Referenced strings: 9
 *   insn=0x0000000000563CFC string=0x0000000000563D00 "B"
 *   insn=0x0000000000563D04 string=0x0000000000563D08 "!"
 *   insn=0x0000000000563D1C string=0x0000000000563D20 "`"
 *   insn=0x0000000000563D1C string=0x0000000000563D3C "`"
 *   insn=0x0000000000563D28 string=0x0000000000563D2C "`"
 *   insn=0x0000000000563D34 string=0x0000000000563D38 """
 *   insn=0x0000000000563D40 string=0x0000000000563D44 "s"
 *   insn=0x0000000000563D48 string=0x0000000000563D4C "a"@"
 *   insn=0x0000000000563D54 string=0x0000000000563D58 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563CFC(_QWORD *a1, const char **a2, int a3)
{
  if ( sub_563BDC((__int64)(a1 + 2), *a2, a3 | 8u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

