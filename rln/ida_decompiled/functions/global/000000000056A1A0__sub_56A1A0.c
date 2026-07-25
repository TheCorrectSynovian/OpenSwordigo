/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A1A0
 * Mangled: sub_56A1A0
 * Demangled: sub_56A1A0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000569E1C  sub_569E1C
 *
 * Referenced strings: 2
 *   insn=0x000000000056A1A0 string=0x000000000056A1A4 "B"
 *   insn=0x000000000056A1A4 string=0x000000000056A1A8 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A1A0(__int64 *a1, __int64 a2, __int64 a3, _BYTE *a4, unsigned __int64 a5)
{
  return sub_569E1C(a1, a2 - *a1, a3 - a2, a4, a5);
}

