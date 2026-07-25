/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561EEC
 * Mangled: sub_561EEC
 * Demangled: sub_561EEC
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000520C14  sub_520C14
 *   0x000000000055F8C0  sub_55F8C0
 *
 * Referenced strings: 10
 *   insn=0x0000000000561EF0 string=0x0000000000561EF4 "!"
 *   insn=0x0000000000561F00 string=0x0000000000561F04 "o"
 *   insn=0x0000000000561F08 string=0x0000000000561F0C "`"
 *   insn=0x0000000000561F08 string=0x0000000000561F28 "`"
 *   insn=0x0000000000561F14 string=0x0000000000561F18 "`"
 *   insn=0x0000000000561F20 string=0x0000000000561F24 "<"
 *   insn=0x0000000000561F2C string=0x0000000000561F30 "s"
 *   insn=0x0000000000561F34 string=0x0000000000561F38 "a"@"
 *   insn=0x0000000000561F40 string=0x0000000000561F44 "!"
 *   insn=0x0000000000561F44 string=0x0000000000561F48 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561EEC(_QWORD *a1, const char **a2, unsigned int a3)
{
  if ( sub_55F8C0((__int64)(a1 + 3), *a2, a3) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24LL), 0);
  else
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 4u);
}

