/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F30A8
 * Mangled: sub_4F30A8
 * Demangled: sub_4F30A8
 *
 * Callers: 1
 *   0x00000000004EDB10  sub_4EDB10
 *
 * Callees: 2
 *   0x00000000004ED5F4  sub_4ED5F4
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 8
 *   insn=0x00000000004F30B4 string=0x00000000004F30B8 "a"@"
 *   insn=0x00000000004F30C0 string=0x00000000004F30C4 "L"
 *   insn=0x00000000004F30C4 string=0x00000000004F30C8 "h^"
 *   insn=0x00000000004F30C8 string=0x00000000004F30CC "a*@"
 *   insn=0x00000000004F30D4 string=0x00000000004F30D8 "\t"
 *   insn=0x00000000004F30DC string=0x00000000004F30E0 "%"
 *   insn=0x00000000004F30E0 string=0x00000000004F30E4 "hZ"
 *   insn=0x00000000004F30E4 string=0x00000000004F30E8 "a"@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F30A8(__int64 a1, __int64 a2)
{
  sub_4ED5F4(a2, *(_QWORD *)(a2 + 64));
  sub_4EED74(a1, *(_QWORD *)(a2 + 80), 40LL * *(int *)(a2 + 92), 0);
  sub_4EED74(a1, *(_QWORD *)(a2 + 64), 16LL * *(int *)(a2 + 88), 0);
  return sub_4EED74(a1, a2, 184, 0);
}

