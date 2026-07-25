/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545C54
 * Mangled: sub_545C54
 * Demangled: sub_545C54
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000545B8C  sub_545B8C
 *   0x000000000056918C  sub_56918C
 *
 * Referenced strings: 7
 *   insn=0x0000000000545C58 string=0x0000000000545C5C "!"
 *   insn=0x0000000000545C68 string=0x0000000000545C6C """
 *   insn=0x0000000000545C6C string=0x0000000000545C70 "G"
 *   insn=0x0000000000545C70 string=0x0000000000545C74 "`B@"
 *   insn=0x0000000000545C78 string=0x0000000000545C7C "a&@"
 *   insn=0x0000000000545C80 string=0x0000000000545C84 "@"
 *   insn=0x0000000000545C84 string=0x0000000000545C88 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545C54(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x3
  __int64 v4; // x1

  sub_56918C(a1 + 72, *a2, *(_QWORD *)(*a2 - 24LL));
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( (*(_DWORD *)(a1 + 64) & 3) != 0 )
    v3 = *(_QWORD *)(v4 - 24);
  return sub_545B8C(a1, v4, 0, v3);
}

