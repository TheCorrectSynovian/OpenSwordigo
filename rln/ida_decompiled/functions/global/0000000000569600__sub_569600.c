/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569600
 * Mangled: sub_569600
 * Demangled: sub_569600
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000569390  sub_569390
 *
 * Referenced strings: 2
 *   insn=0x0000000000569600 string=0x0000000000569604 "C"
 *   insn=0x0000000000569604 string=0x0000000000569608 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569600(__int64 *a1, size_t a2, _BYTE **a3)
{
  return sub_569390(a1, a2, *a3, *((_QWORD *)*a3 - 3));
}

