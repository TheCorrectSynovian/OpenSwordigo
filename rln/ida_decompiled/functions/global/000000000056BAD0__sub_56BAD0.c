/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BAD0
 * Mangled: sub_56BAD0
 * Demangled: sub_56BAD0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056BA38  sub_56BA38
 *
 * Referenced strings: 1
 *   insn=0x000000000056BAD0 string=0x000000000056BAD4 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56BAD0(__int64 *a1, wchar_t **a2, unsigned __int64 a3)
{
  return sub_56BA38(a1, *a2, a3, *((_QWORD *)*a2 - 3));
}

