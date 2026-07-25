/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547F70
 * Mangled: sub_547F70
 * Demangled: sub_547F70
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056CB34  sub_56CB34
 *
 * Referenced strings: 6
 *   insn=0x0000000000547F74 string=0x0000000000547F78 "!"
 *   insn=0x0000000000547F84 string=0x0000000000547F88 """
 *   insn=0x0000000000547F8C string=0x0000000000547F90 "`B@"
 *   insn=0x0000000000547F94 string=0x0000000000547F98 "a&@"
 *   insn=0x0000000000547F9C string=0x0000000000547FA0 "@"
 *   insn=0x0000000000547FA0 string=0x0000000000547FA4 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_547F70(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x3
  __int64 v4; // x1

  sub_56CB34(a1 + 72, *a2, *(_QWORD *)(*a2 - 24LL));
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( (*(_DWORD *)(a1 + 64) & 3) != 0 )
    v3 = *(_QWORD *)(v4 - 24);
  return sub_547EA4(a1, v4, 0, v3);
}

