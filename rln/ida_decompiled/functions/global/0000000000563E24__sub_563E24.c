/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000563E24
 * Mangled: sub_563E24
 * Demangled: sub_563E24
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005215C0  sub_5215C0
 *   0x0000000000563BDC  sub_563BDC
 *
 * Referenced strings: 8
 *   insn=0x0000000000563E24 string=0x0000000000563E28 "B"
 *   insn=0x0000000000563E38 string=0x0000000000563E3C "h"
 *   insn=0x0000000000563E40 string=0x0000000000563E44 "`"
 *   insn=0x0000000000563E40 string=0x0000000000563E60 "`"
 *   insn=0x0000000000563E4C string=0x0000000000563E50 "`"
 *   insn=0x0000000000563E64 string=0x0000000000563E68 "s"
 *   insn=0x0000000000563E6C string=0x0000000000563E70 "a"@"
 *   insn=0x0000000000563E78 string=0x0000000000563E7C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_563E24(_QWORD *a1, const char *a2, int a3)
{
  if ( sub_563BDC((__int64)(a1 + 2), a2, a3 | 8u) )
    return sub_5215C0((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_5215C0(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

