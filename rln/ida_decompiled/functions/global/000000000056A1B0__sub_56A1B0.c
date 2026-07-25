/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A1B0
 * Mangled: sub_56A1B0
 * Demangled: sub_56A1B0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000569E1C  sub_569E1C
 *
 * Referenced strings: 3
 *   insn=0x000000000056A1B0 string=0x000000000056A1B4 "B"
 *   insn=0x000000000056A1B8 string=0x000000000056A1BC "d"
 *   insn=0x000000000056A1BC string=0x000000000056A1C0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A1B0(__int64 *a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  return sub_569E1C(a1, a2 - *a1, a3 - a2, *a4, *((_QWORD *)*a4 - 3));
}

