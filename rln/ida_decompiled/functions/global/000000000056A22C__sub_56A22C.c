/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A22C
 * Mangled: sub_56A22C
 * Demangled: sub_56A22C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000569E1C  sub_569E1C
 *
 * Referenced strings: 2
 *   insn=0x000000000056A22C string=0x000000000056A230 "B"
 *   insn=0x000000000056A234 string=0x000000000056A238 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A22C(__int64 *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  return sub_569E1C(a1, a2 - *a1, a3 - a2, a4, a5 - (_QWORD)a4);
}

