/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547C2C
 * Mangled: sub_547C2C
 * Demangled: sub_547C2C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000545B8C  sub_545B8C
 *   0x000000000056918C  sub_56918C
 *
 * Referenced strings: 6
 *   insn=0x0000000000547C30 string=0x0000000000547C34 "!"
 *   insn=0x0000000000547C40 string=0x0000000000547C44 """
 *   insn=0x0000000000547C48 string=0x0000000000547C4C "P"
 *   insn=0x0000000000547C54 string=0x0000000000547C58 "a2@"
 *   insn=0x0000000000547C5C string=0x0000000000547C60 "@"
 *   insn=0x0000000000547C60 string=0x0000000000547C64 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_547C2C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x3
  __int64 v5; // x1

  v3 = a1 + 24;
  sub_56918C(a1 + 96, *a2, *(_QWORD *)(*a2 - 24LL));
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 96);
  if ( (*(_DWORD *)(v3 + 64) & 3) != 0 )
    v4 = *(_QWORD *)(v5 - 24);
  return sub_545B8C(v3, v5, 0, v4);
}

