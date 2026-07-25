/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE48C
 * Mangled: sub_4EE48C
 * Demangled: sub_4EE48C
 *
 * Callers: 6
 *   0x00000000004ED3B8  sub_4ED3B8
 *   0x00000000004ED424  sub_4ED424
 *   0x00000000004ED4B4  sub_4ED4B4
 *   0x00000000004ED6C8  sub_4ED6C8
 *   0x00000000004F2F88  sub_4F2F88
 *   0x00000000004F3DB4  sub_4F3DB4
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004EE48C string=0x00000000004EE490 "\t"
 *   insn=0x00000000004EE490 string=0x00000000004EE494 ")"
 *   insn=0x00000000004EE494 string=0x00000000004EE498 "\t"
 *   insn=0x00000000004EE49C string=0x00000000004EE4A0 "" "
 *   insn=0x00000000004EE4A0 string=0x00000000004EE4A4 "("
 *   insn=0x00000000004EE4A4 string=0x00000000004EE4A8 "($"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE48C(__int64 result, __int64 a2, char a3)
{
  __int64 v3; // x8
  char v4; // w9

  v3 = *(_QWORD *)(result + 32);
  *(_QWORD *)a2 = *(_QWORD *)(v3 + 40);
  v4 = *(_BYTE *)(v3 + 32);
  *(_QWORD *)(v3 + 40) = a2;
  *(_BYTE *)(a2 + 8) = a3;
  *(_BYTE *)(a2 + 9) = v4 & 3;
  return result;
}

