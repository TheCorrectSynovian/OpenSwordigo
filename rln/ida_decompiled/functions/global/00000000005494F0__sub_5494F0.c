/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005494F0
 * Mangled: sub_5494F0
 * Demangled: sub_5494F0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056CB34  sub_56CB34
 *
 * Referenced strings: 6
 *   insn=0x00000000005494F4 string=0x00000000005494F8 "!"
 *   insn=0x0000000000549504 string=0x0000000000549508 """
 *   insn=0x0000000000549518 string=0x000000000054951C "a*@"
 *   insn=0x0000000000549520 string=0x0000000000549524 "@"
 *   insn=0x0000000000549524 string=0x0000000000549528 "#"
 *   insn=0x0000000000549538 string=0x000000000054953C "Z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5494F0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x3
  __int64 v5; // x1

  v3 = a1 + 8;
  sub_56CB34(a1 + 80, *a2, *(_QWORD *)(*a2 - 24LL));
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 80);
  if ( (*(_DWORD *)(v3 + 64) & 3) != 0 )
    v4 = *(_QWORD *)(v5 - 24);
  return sub_547EA4(v3, v5, 0, v4);
}

