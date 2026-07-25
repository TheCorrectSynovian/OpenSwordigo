/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563EE4
 * Mangled: sub_563EE4
 * Demangled: sub_563EE4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000563BDC  sub_563BDC
 *
 * Referenced strings: 7
 *   insn=0x0000000000563EF4 string=0x0000000000563EF8 "9"
 *   insn=0x0000000000563EFC string=0x0000000000563F00 "`"
 *   insn=0x0000000000563EFC string=0x0000000000563F1C "`"
 *   insn=0x0000000000563F08 string=0x0000000000563F0C "`"
 *   insn=0x0000000000563F20 string=0x0000000000563F24 "s"
 *   insn=0x0000000000563F28 string=0x0000000000563F2C "a"@"
 *   insn=0x0000000000563F34 string=0x0000000000563F38 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563EE4(_QWORD *a1, const char *a2, unsigned int a3)
{
  if ( sub_563BDC((__int64)(a1 + 3), a2, a3) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

