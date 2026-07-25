/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005541C0
 * Mangled: sub_5541C0
 * Demangled: sub_5541C0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000553F40  sub_553F40
 *
 * Referenced strings: 7
 *   insn=0x00000000005541C0 string=0x00000000005541C4 "F\t"
 *   insn=0x00000000005541C4 string=0x00000000005541C8 "A"
 *   insn=0x00000000005541D0 string=0x00000000005541D4 "u"
 *   insn=0x00000000005541E4 string=0x00000000005541E8 "f"
 *   insn=0x00000000005541EC string=0x00000000005541F0 "T"
 *   insn=0x00000000005541FC string=0x0000000000554200 "u"
 *   insn=0x0000000000554200 string=0x0000000000554204 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5541C0(__int64 a1, __int64 a2, char a3, __int64 a4, wchar_t a5, unsigned __int64 a6)
{
  int v6; // w21
  __int64 result; // x0

  v6 = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(a4 + 24) = v6 & 0xFFFFBDB5 | 0x208;
  result = sub_553F40(a1, a2, a3, a4, a5, a6);
  *(_DWORD *)(a4 + 24) = v6;
  return result;
}

