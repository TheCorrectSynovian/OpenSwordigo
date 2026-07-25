/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005613DC
 * Mangled: sub_5613DC
 * Demangled: sub_5613DC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F8C0  sub_55F8C0
 *
 * Referenced strings: 9
 *   insn=0x00000000005613DC string=0x00000000005613E0 "B"
 *   insn=0x00000000005613E4 string=0x00000000005613E8 "!"
 *   insn=0x00000000005613F4 string=0x00000000005613F8 "2"
 *   insn=0x00000000005613FC string=0x0000000000561400 "`"
 *   insn=0x00000000005613FC string=0x000000000056141C "`"
 *   insn=0x0000000000561408 string=0x000000000056140C "`"
 *   insn=0x0000000000561420 string=0x0000000000561424 "s"
 *   insn=0x0000000000561428 string=0x000000000056142C "a"@"
 *   insn=0x0000000000561434 string=0x0000000000561438 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5613DC(_QWORD *a1, const char **a2, int a3)
{
  if ( sub_55F8C0((__int64)(a1 + 1), *a2, a3 | 0x10u) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

