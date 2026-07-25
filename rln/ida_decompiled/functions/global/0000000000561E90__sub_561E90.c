/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561E90
 * Mangled: sub_561E90
 * Demangled: sub_561E90
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F8C0  sub_55F8C0
 *
 * Referenced strings: 8
 *   insn=0x0000000000561EA8 string=0x0000000000561EAC "`"
 *   insn=0x0000000000561EA8 string=0x0000000000561EC8 "`"
 *   insn=0x0000000000561EB4 string=0x0000000000561EB8 "`"
 *   insn=0x0000000000561EC0 string=0x0000000000561EC4 "T"
 *   insn=0x0000000000561ECC string=0x0000000000561ED0 "s"
 *   insn=0x0000000000561ED4 string=0x0000000000561ED8 "a"@"
 *   insn=0x0000000000561EE0 string=0x0000000000561EE4 "!"
 *   insn=0x0000000000561EE4 string=0x0000000000561EE8 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561E90(_QWORD *a1, const char *a2, unsigned int a3)
{
  if ( sub_55F8C0((__int64)(a1 + 3), a2, a3) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

