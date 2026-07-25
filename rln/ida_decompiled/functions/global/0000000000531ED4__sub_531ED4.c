/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000531ED4
 * Mangled: sub_531ED4
 * Demangled: sub_531ED4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000531C5C  sub_531C5C
 *
 * Referenced strings: 7
 *   insn=0x0000000000531ED4 string=0x0000000000531ED8 "F\t"
 *   insn=0x0000000000531ED8 string=0x0000000000531EDC "A"
 *   insn=0x0000000000531EE4 string=0x0000000000531EE8 "u"
 *   insn=0x0000000000531EF8 string=0x0000000000531EFC "f"
 *   insn=0x0000000000531F00 string=0x0000000000531F04 "V"
 *   insn=0x0000000000531F10 string=0x0000000000531F14 "u"
 *   insn=0x0000000000531F14 string=0x0000000000531F18 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_531ED4(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5, unsigned __int64 a6)
{
  int v6; // w21
  __int64 result; // x0

  v6 = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(a4 + 24) = v6 & 0xFFFFBDB5 | 0x208;
  result = sub_531C5C(a1, a2, a3, a4, a5, a6);
  *(_DWORD *)(a4 + 24) = v6;
  return result;
}

