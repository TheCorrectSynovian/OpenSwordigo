/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000548C18
 * Mangled: sub_548C18
 * Demangled: sub_548C18
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056CB34  sub_56CB34
 *
 * Referenced strings: 5
 *   insn=0x0000000000548C1C string=0x0000000000548C20 "!"
 *   insn=0x0000000000548C2C string=0x0000000000548C30 """
 *   insn=0x0000000000548C40 string=0x0000000000548C44 "a.@"
 *   insn=0x0000000000548C48 string=0x0000000000548C4C "@"
 *   insn=0x0000000000548C4C string=0x0000000000548C50 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_548C18(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x3
  __int64 v5; // x1

  v3 = a1 + 16;
  sub_56CB34(a1 + 88, *a2, *(_QWORD *)(*a2 - 24LL));
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(v3 + 64) & 3) != 0 )
    v4 = *(_QWORD *)(v5 - 24);
  return sub_547EA4(v3, v5, 0, v4);
}

